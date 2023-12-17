#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirroredGameNoteController)
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
template<typename T>
class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class __MirroredGameNoteController__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class __MirroredGameNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredGameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__MirroredGameNoteController__Pool);
// Type: ::MirroredGameNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4756), inst: 4619 }), TypeDefinitionIndex(TypeDefinitionIndex(4756)), TypeDefinitionIndex(TypeDefinitionIndex(4746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4755))
// CS Name: ::MirroredGameNoteController*
class CORDL_TYPE MirroredGameNoteController : public ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::IGameNoteMirrorable*> {
public:
// Declarations
using Pool = ::GlobalNamespace::__MirroredGameNoteController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::IGameNoteMirrorable*>)]{};

/// @brief Field _materialPropertyBlockController offset 0x48
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

/// @brief Field _colorManager offset 0x50
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field cubeNoteControllerDidInitEvent offset 0x58
 __declspec(property(get=__get_cubeNoteControllerDidInitEvent, put=__set_cubeNoteControllerDidInitEvent)) ::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*  cubeNoteControllerDidInitEvent;

 __declspec(property(get=get_noteMovement)) ::GlobalNamespace::NoteMovement*  noteMovement;

 __declspec(property(get=get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType  noteVisualModifierType;

/// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>"
constexpr operator  ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr operator  ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
constexpr operator  ::GlobalNamespace::INoteMovementProvider*() noexcept;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>* __get_cubeNoteControllerDidInitEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*> __get_cubeNoteControllerDidInitEvent() const;

static inline void setStaticF__colorId(int32_t  value) ;

static inline int32_t getStaticF__colorId() ;

/// @brief Method add_cubeNoteControllerDidInitEvent addr 0x2386238 size 0xb0 virtual true final true
inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*  value) ;

/// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x23862e8 size 0xb0 virtual true final true
inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*  value) ;

/// @brief Method get_noteMovement addr 0x2386398 size 0xac virtual true final true
inline ::GlobalNamespace::NoteMovement* get_noteMovement() ;

/// @brief Method get_noteVisualModifierType addr 0x2386444 size 0xa4 virtual true final true
inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType() ;

/// @brief Method Mirror addr 0x23864e8 size 0x150 virtual true final false
inline void Mirror(::GlobalNamespace::IGameNoteMirrorable*  noteController) ;

static inline ::GlobalNamespace::MirroredGameNoteController* New_ctor() ;

/// @brief Method .ctor addr 0x2386638 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirroredGameNoteController(MirroredGameNoteController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirroredGameNoteController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirroredGameNoteController(MirroredGameNoteController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MirroredGameNoteController()  = default;
public:


// Fields

// Static field _colorId


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredGameNoteController, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 348 }), TypeDefinitionIndex(TypeDefinitionIndex(4755)), TypeDefinitionIndex(TypeDefinitionIndex(11050))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4754))
// CS Name: ::MirroredGameNoteController::Pool*
class CORDL_TYPE __MirroredGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredGameNoteController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredGameNoteController*>)]{};

static inline ::GlobalNamespace::__MirroredGameNoteController__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x23866e8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MirroredGameNoteController__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MirroredGameNoteController__Pool(__MirroredGameNoteController__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MirroredGameNoteController__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MirroredGameNoteController__Pool(__MirroredGameNoteController__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MirroredGameNoteController__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirroredGameNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredGameNoteController*, "", "MirroredGameNoteController");
NEED_NO_BOX(::GlobalNamespace::__MirroredGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirroredGameNoteController__Pool*, "", "MirroredGameNoteController/Pool");
