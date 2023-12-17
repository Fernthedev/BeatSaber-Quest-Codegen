#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteLineConnectionController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
class LineRenderer;
}
namespace GlobalNamespace {
class __NoteLineConnectionController__Pool;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteLineConnectionController;
}
namespace GlobalNamespace {
class __NoteLineConnectionController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteLineConnectionController);
MARK_REF_PTR_T(::GlobalNamespace::__NoteLineConnectionController__Pool);
// Type: ::NoteLineConnectionController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4781))
// CS Name: ::NoteLineConnectionController*
class CORDL_TYPE NoteLineConnectionController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::__NoteLineConnectionController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _lineRenderer offset 0x18
 __declspec(property(get=__get__lineRenderer, put=__set__lineRenderer)) ::UnityEngine::LineRenderer*  _lineRenderer;

/// @brief Field _playerTransforms offset 0x20
 __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms)) ::GlobalNamespace::PlayerTransforms*  _playerTransforms;

/// @brief Field _audioTimeSyncController offset 0x28
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _colorManager offset 0x30
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field didFinishEvent offset 0x38
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*  didFinishEvent;

/// @brief Field _noteController0 offset 0x40
 __declspec(property(get=__get__noteController0, put=__set__noteController0)) ::GlobalNamespace::NoteController*  _noteController0;

/// @brief Field _noteController1 offset 0x48
 __declspec(property(get=__get__noteController1, put=__set__noteController1)) ::GlobalNamespace::NoteController*  _noteController1;

/// @brief Field _color0 offset 0x50
 __declspec(property(get=__get__color0, put=__set__color0)) ::UnityEngine::Color  _color0;

/// @brief Field _color1 offset 0x60
 __declspec(property(get=__get__color1, put=__set__color1)) ::UnityEngine::Color  _color1;

/// @brief Field _fadeOutStartDistance offset 0x70
 __declspec(property(get=__get__fadeOutStartDistance, put=__set__fadeOutStartDistance)) float_t  _fadeOutStartDistance;

/// @brief Field _fadeOutEndDistance offset 0x74
 __declspec(property(get=__get__fadeOutEndDistance, put=__set__fadeOutEndDistance)) float_t  _fadeOutEndDistance;

/// @brief Field _noteTime offset 0x78
 __declspec(property(get=__get__noteTime, put=__set__noteTime)) float_t  _noteTime;

/// @brief Field _didFinish offset 0x7c
 __declspec(property(get=__get__didFinish, put=__set__didFinish)) bool  _didFinish;

constexpr void __set__lineRenderer(::UnityEngine::LineRenderer*  value) ;

constexpr ::UnityEngine::LineRenderer* __get__lineRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> __get__lineRenderer() const;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value) ;

constexpr ::GlobalNamespace::PlayerTransforms* __get__playerTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> __get__playerTransforms() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*> __get_didFinishEvent() const;

constexpr void __set__noteController0(::GlobalNamespace::NoteController*  value) ;

constexpr ::GlobalNamespace::NoteController* __get__noteController0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> __get__noteController0() const;

constexpr void __set__noteController1(::GlobalNamespace::NoteController*  value) ;

constexpr ::GlobalNamespace::NoteController* __get__noteController1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> __get__noteController1() const;

constexpr void __set__color0(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color0() ;

constexpr ::UnityEngine::Color const& __get__color0() const;

constexpr void __set__color1(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color1() ;

constexpr ::UnityEngine::Color const& __get__color1() const;

constexpr void __set__fadeOutStartDistance(float_t  value) ;

constexpr float_t& __get__fadeOutStartDistance() ;

constexpr float_t const& __get__fadeOutStartDistance() const;

constexpr void __set__fadeOutEndDistance(float_t  value) ;

constexpr float_t& __get__fadeOutEndDistance() ;

constexpr float_t const& __get__fadeOutEndDistance() const;

constexpr void __set__noteTime(float_t  value) ;

constexpr float_t& __get__noteTime() ;

constexpr float_t const& __get__noteTime() const;

constexpr void __set__didFinish(bool  value) ;

constexpr bool& __get__didFinish() ;

constexpr bool const& __get__didFinish() const;

/// @brief Method add_didFinishEvent addr 0x238a3dc size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x238a48c size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::NoteLineConnectionController*>*  value) ;

/// @brief Method Setup addr 0x238a53c size 0xa4 virtual false final false
inline void Setup(::GlobalNamespace::NoteController*  noteController0, ::GlobalNamespace::NoteController*  noteController1, float_t  fadeOutStartDistance, float_t  fadeOutEndDistance, float_t  noteTime) ;

/// @brief Method Update addr 0x238a79c size 0x64 virtual false final false
inline void Update() ;

/// @brief Method UpdatePositionsAndColors addr 0x238a5e0 size 0x1bc virtual false final false
inline void UpdatePositionsAndColors() ;

static inline ::GlobalNamespace::NoteLineConnectionController* New_ctor() ;

/// @brief Method .ctor addr 0x238a800 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteLineConnectionController(NoteLineConnectionController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteLineConnectionController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteLineConnectionController(NoteLineConnectionController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteLineConnectionController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteLineConnectionController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4781)), TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 366 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4780))
// CS Name: ::NoteLineConnectionController::Pool*
class CORDL_TYPE __NoteLineConnectionController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::NoteLineConnectionController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::NoteLineConnectionController*>)]{};

static inline ::GlobalNamespace::__NoteLineConnectionController__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x238a808 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__NoteLineConnectionController__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NoteLineConnectionController__Pool(__NoteLineConnectionController__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NoteLineConnectionController__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NoteLineConnectionController__Pool(__NoteLineConnectionController__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NoteLineConnectionController__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteLineConnectionController__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteLineConnectionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteLineConnectionController*, "", "NoteLineConnectionController");
NEED_NO_BOX(::GlobalNamespace::__NoteLineConnectionController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteLineConnectionController__Pool*, "", "NoteLineConnectionController/Pool");
