#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
CORDL_MODULE_EXPORT(MirroredDisappearingArrowController)
namespace GlobalNamespace {
class MirroredGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredDisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredDisappearingArrowController);
// Type: ::MirroredDisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4742)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4742), inst: 348 }), TypeDefinitionIndex(TypeDefinitionIndex(4755))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4753))
// CS Name: ::MirroredDisappearingArrowController*
class CORDL_TYPE MirroredDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MirroredGameNoteController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MirroredGameNoteController*>)]{};

/// @brief Field _mirroredGameNoteController offset 0x50
 __declspec(property(get=__get__mirroredGameNoteController, put=__set__mirroredGameNoteController)) ::GlobalNamespace::MirroredGameNoteController*  _mirroredGameNoteController;

 __declspec(property(get=get_gameNoteController)) ::GlobalNamespace::MirroredGameNoteController*  gameNoteController;

constexpr void __set__mirroredGameNoteController(::GlobalNamespace::MirroredGameNoteController*  value) ;

constexpr ::GlobalNamespace::MirroredGameNoteController* __get__mirroredGameNoteController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> __get__mirroredGameNoteController() const;

/// @brief Method get_gameNoteController addr 0x23861c4 size 0x8 virtual true final false
inline ::GlobalNamespace::MirroredGameNoteController* get_gameNoteController() ;

static inline ::GlobalNamespace::MirroredDisappearingArrowController* New_ctor() ;

/// @brief Method .ctor addr 0x23861cc size 0x6c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirroredDisappearingArrowController(MirroredDisappearingArrowController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirroredDisappearingArrowController(MirroredDisappearingArrowController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MirroredDisappearingArrowController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredDisappearingArrowController, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredDisappearingArrowController*, "", "MirroredDisappearingArrowController");
