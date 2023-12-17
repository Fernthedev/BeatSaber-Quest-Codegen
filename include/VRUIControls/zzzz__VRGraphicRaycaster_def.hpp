#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRGraphicRaycaster)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Canvas;
}
namespace VRUIControls {
class __VRGraphicRaycaster____c;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace VRUIControls {
struct __VRGraphicRaycaster__VRGraphicRaycastResult;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct LayerMask;
}
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VRUIControls {
class VRGraphicRaycaster;
}
namespace VRUIControls {
class __VRGraphicRaycaster____c;
}
namespace VRUIControls {
struct __VRGraphicRaycaster__VRGraphicRaycastResult;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRGraphicRaycaster);
MARK_REF_PTR_T(::VRUIControls::__VRGraphicRaycaster____c);
MARK_VAL_T(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult);
// Type: ::VRGraphicRaycastResult
namespace VRUIControls {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15673))
// CS Name: ::VRGraphicRaycaster::VRGraphicRaycastResult
struct CORDL_TYPE __VRGraphicRaycaster__VRGraphicRaycastResult : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field graphic offset 0x0
 __declspec(property(get=__get_graphic, put=__set_graphic)) ::UnityEngine::UI::Graphic*  graphic;

/// @brief Field distance offset 0x8
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field position offset 0xc
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field insideRootCanvasPosition offset 0x18
 __declspec(property(get=__get_insideRootCanvasPosition, put=__set_insideRootCanvasPosition)) ::UnityEngine::Vector2  insideRootCanvasPosition;

constexpr void __set_graphic(::UnityEngine::UI::Graphic*  value) ;

constexpr ::UnityEngine::UI::Graphic* __get_graphic() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> __get_graphic() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_insideRootCanvasPosition(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_insideRootCanvasPosition() ;

constexpr ::UnityEngine::Vector2 const& __get_insideRootCanvasPosition() const;

/// @brief Method .ctor addr 0x2eb5df0 size 0x14 virtual false final false
inline void _ctor(::UnityEngine::UI::Graphic*  graphic, float_t  distance, ::UnityEngine::Vector3  position, ::UnityEngine::Vector2  insideRootCanvasPosition) ;

// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "insideRootCanvasPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr __VRGraphicRaycaster__VRGraphicRaycastResult(::UnityEngine::UI::Graphic*  graphic, float_t  distance, ::UnityEngine::Vector3  position, ::UnityEngine::Vector2  insideRootCanvasPosition) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __VRGraphicRaycaster__VRGraphicRaycastResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __VRGraphicRaycaster__VRGraphicRaycastResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, 0x20>, "Size mismatch!");

} // namespace end def VRUIControls
// Type: ::<>c
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15674))
// CS Name: ::VRGraphicRaycaster::<>c*
class CORDL_TYPE __VRGraphicRaycaster____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::VRUIControls::__VRGraphicRaycaster____c*  value) ;

static inline ::VRUIControls::__VRGraphicRaycaster____c* getStaticF___9() ;

static inline void setStaticF___9__12_0(::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*  value) ;

static inline ::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* getStaticF___9__12_0() ;

static inline ::VRUIControls::__VRGraphicRaycaster____c* New_ctor() ;

/// @brief Method .ctor addr 0x2eb5f8c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <RaycastCanvas>b__12_0 addr 0x2eb5f94 size 0x54 virtual false final false
inline int32_t _RaycastCanvas_b__12_0(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult  g1, ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult  g2) ;

// Ctor Parameters [CppParam { name: "", ty: "__VRGraphicRaycaster____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VRGraphicRaycaster____c(__VRGraphicRaycaster____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VRGraphicRaycaster____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VRGraphicRaycaster____c(__VRGraphicRaycaster____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VRGraphicRaycaster____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__12_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::__VRGraphicRaycaster____c, 0x10>, "Size mismatch!");

} // namespace end def VRUIControls
// Type: VRUIControls::VRGraphicRaycaster
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13209))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15675))
// CS Name: ::VRUIControls::VRGraphicRaycaster*
class CORDL_TYPE VRGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using __c = ::VRUIControls::__VRGraphicRaycaster____c;

using VRGraphicRaycastResult = ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::EventSystems::BaseRaycaster)]{};

/// @brief Field kPhysics3DRaycastDistance offset 0x0
static constexpr float_t  kPhysics3DRaycastDistance{6.0};

/// @brief Field _blockingMask offset 0x20
 __declspec(property(get=__get__blockingMask, put=__set__blockingMask)) ::UnityEngine::LayerMask  _blockingMask;

/// @brief Field _physicsRaycaster offset 0x28
 __declspec(property(get=__get__physicsRaycaster, put=__set__physicsRaycaster)) ::VRUIControls::PhysicsRaycasterWithCache*  _physicsRaycaster;

/// @brief Field _canvas offset 0x30
 __declspec(property(get=__get__canvas, put=__set__canvas)) ::UnityEngine::Canvas*  _canvas;

/// @brief Field _raycastResults offset 0x38
 __declspec(property(get=__get__raycastResults, put=__set__raycastResults)) ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*  _raycastResults;

/// @brief Field _curvedCanvasSettingsHelper offset 0x40
 __declspec(property(get=__get__curvedCanvasSettingsHelper, put=__set__curvedCanvasSettingsHelper)) ::HMUI::CurvedCanvasSettingsHelper*  _curvedCanvasSettingsHelper;

 __declspec(property(get=get_eventCamera)) ::UnityEngine::Camera*  eventCamera;

constexpr void __set__blockingMask(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get__blockingMask() ;

constexpr ::UnityEngine::LayerMask const& __get__blockingMask() const;

constexpr void __set__physicsRaycaster(::VRUIControls::PhysicsRaycasterWithCache*  value) ;

constexpr ::VRUIControls::PhysicsRaycasterWithCache* __get__physicsRaycaster() ;

constexpr ::cordl_internals::to_const_pointer<::VRUIControls::PhysicsRaycasterWithCache*> __get__physicsRaycaster() const;

constexpr void __set__canvas(::UnityEngine::Canvas*  value) ;

constexpr ::UnityEngine::Canvas* __get__canvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> __get__canvas() const;

constexpr void __set__raycastResults(::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*  value) ;

constexpr ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* __get__raycastResults() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*> __get__raycastResults() const;

constexpr void __set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper*  value) ;

constexpr ::HMUI::CurvedCanvasSettingsHelper* __get__curvedCanvasSettingsHelper() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> __get__curvedCanvasSettingsHelper() const;

static inline void setStaticF__ray2DCircleIntersectionDistances(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF__ray2DCircleIntersectionDistances() ;

/// @brief Method get_eventCamera addr 0x2eb4ba0 size 0x8 virtual true final false
inline ::UnityEngine::Camera* get_eventCamera() ;

/// @brief Method OnEnable addr 0x2eb4ba8 size 0x70 virtual true final false
inline void OnEnable() ;

/// @brief Method Raycast addr 0x2eb4c18 size 0x690 virtual true final false
inline void Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method RaycastCanvas addr 0x2eb52a8 size 0xb48 virtual false final false
static inline void RaycastCanvas(::UnityEngine::Canvas*  canvas, ::UnityEngine::Ray  ray, float_t  hitDistance, float_t  curvedUIRadius, ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*  results) ;

static inline ::VRUIControls::VRGraphicRaycaster* New_ctor() ;

/// @brief Method .ctor addr 0x2eb5e04 size 0xbc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRGraphicRaycaster(VRGraphicRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRGraphicRaycaster(VRGraphicRaycaster const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VRGraphicRaycaster()  = default;
public:


// Fields

// Static field _ray2DCircleIntersectionDistances


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRGraphicRaycaster, 0x48>, "Size mismatch!");

} // namespace end def VRUIControls
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster*, "VRUIControls", "VRGraphicRaycaster");
NEED_NO_BOX(::VRUIControls::__VRGraphicRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::__VRGraphicRaycaster____c*, "VRUIControls", "VRGraphicRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, "VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult");
