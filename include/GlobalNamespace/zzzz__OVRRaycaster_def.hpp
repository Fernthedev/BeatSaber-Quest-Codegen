#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRaycaster)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __OVRRaycaster____c;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct __OVRRaycaster__RaycastHit;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace GlobalNamespace {
class __OVRRaycaster____c;
}
namespace GlobalNamespace {
struct __OVRRaycaster__RaycastHit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRaycaster);
MARK_REF_PTR_T(::GlobalNamespace::__OVRRaycaster____c);
MARK_VAL_T(::GlobalNamespace::__OVRRaycaster__RaycastHit);
// Type: ::RaycastHit
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8156))
// CS Name: ::OVRRaycaster::RaycastHit
struct CORDL_TYPE __OVRRaycaster__RaycastHit : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field graphic offset 0x0
 __declspec(property(get=__get_graphic, put=__set_graphic)) ::UnityEngine::UI::Graphic*  graphic;

/// @brief Field worldPos offset 0x8
 __declspec(property(get=__get_worldPos, put=__set_worldPos)) ::UnityEngine::Vector3  worldPos;

/// @brief Field fromMouse offset 0x14
 __declspec(property(get=__get_fromMouse, put=__set_fromMouse)) bool  fromMouse;

constexpr void __set_graphic(::UnityEngine::UI::Graphic*  value) ;

constexpr ::UnityEngine::UI::Graphic* __get_graphic() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> __get_graphic() const;

constexpr void __set_worldPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_worldPos() ;

constexpr ::UnityEngine::Vector3 const& __get_worldPos() const;

constexpr void __set_fromMouse(bool  value) ;

constexpr bool& __get_fromMouse() ;

constexpr bool const& __get_fromMouse() const;

// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: None }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: None }]
constexpr __OVRRaycaster__RaycastHit(::UnityEngine::UI::Graphic*  graphic, ::UnityEngine::Vector3  worldPos, bool  fromMouse) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRRaycaster__RaycastHit(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRRaycaster__RaycastHit()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRRaycaster__RaycastHit, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8157))
// CS Name: ::OVRRaycaster::<>c*
class CORDL_TYPE __OVRRaycaster____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__OVRRaycaster____c*  value) ;

static inline ::GlobalNamespace::__OVRRaycaster____c* getStaticF___9() ;

static inline void setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*  value) ;

static inline ::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* getStaticF___9__16_0() ;

static inline ::GlobalNamespace::__OVRRaycaster____c* New_ctor() ;

/// @brief Method .ctor addr 0x27ba9e0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GraphicRaycast>b__16_0 addr 0x27ba9e8 size 0x54 virtual false final false
inline int32_t _GraphicRaycast_b__16_0(::GlobalNamespace::__OVRRaycaster__RaycastHit  g1, ::GlobalNamespace::__OVRRaycaster__RaycastHit  g2) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRRaycaster____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRRaycaster____c(__OVRRaycaster____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRRaycaster____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRRaycaster____c(__OVRRaycaster____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRRaycaster____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__16_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRRaycaster____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRRaycaster
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13045))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8158))
// CS Name: ::OVRRaycaster*
class CORDL_TYPE OVRRaycaster : public ::UnityEngine::UI::GraphicRaycaster {
public:
// Declarations
using __c = ::GlobalNamespace::__OVRRaycaster____c;

using RaycastHit = ::GlobalNamespace::__OVRRaycaster__RaycastHit;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::UI::GraphicRaycaster)]{};

/// @brief Field pointer offset 0x40
 __declspec(property(get=__get_pointer, put=__set_pointer)) ::UnityEngine::GameObject*  pointer;

/// @brief Field sortOrder offset 0x48
 __declspec(property(get=__get_sortOrder, put=__set_sortOrder)) int32_t  sortOrder;

/// @brief Field m_Canvas offset 0x50
 __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas)) ::UnityEngine::Canvas*  m_Canvas;

/// @brief Field m_RaycastResults offset 0x58
 __declspec(property(get=__get_m_RaycastResults, put=__set_m_RaycastResults)) ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*  m_RaycastResults;

 __declspec(property(get=get_canvas)) ::UnityEngine::Canvas*  canvas;

 __declspec(property(get=get_eventCamera)) ::UnityEngine::Camera*  eventCamera;

 __declspec(property(get=get_sortOrderPriority)) int32_t  sortOrderPriority;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

constexpr void __set_pointer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_pointer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_pointer() const;

constexpr void __set_sortOrder(int32_t  value) ;

constexpr int32_t& __get_sortOrder() ;

constexpr int32_t const& __get_sortOrder() const;

constexpr void __set_m_Canvas(::UnityEngine::Canvas*  value) ;

constexpr ::UnityEngine::Canvas* __get_m_Canvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> __get_m_Canvas() const;

constexpr void __set_m_RaycastResults(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* __get_m_RaycastResults() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*> __get_m_RaycastResults() const;

static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*  value) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* getStaticF_s_SortedGraphics() ;

static inline ::GlobalNamespace::OVRRaycaster* New_ctor() ;

/// @brief Method .ctor addr 0x27b9194 size 0xa0 virtual false final false
inline void _ctor() ;

/// @brief Method get_canvas addr 0x27b9234 size 0x94 virtual false final false
inline ::UnityEngine::Canvas* get_canvas() ;

/// @brief Method get_eventCamera addr 0x27b92c8 size 0x1c virtual true final false
inline ::UnityEngine::Camera* get_eventCamera() ;

/// @brief Method get_sortOrderPriority addr 0x27b92e4 size 0x8 virtual true final false
inline int32_t get_sortOrderPriority() ;

/// @brief Method Start addr 0x27b92ec size 0x150 virtual true final false
inline void Start() ;

/// @brief Method Raycast addr 0x27b943c size 0x6cc virtual false final false
inline void Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList, ::UnityEngine::Ray  ray, bool  checkForBlocking) ;

/// @brief Method Raycast addr 0x27ba1a4 size 0x6c virtual true final false
inline void Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method RaycastPointer addr 0x27ba210 size 0x250 virtual false final false
inline void RaycastPointer(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method GraphicRaycast addr 0x27b9b08 size 0x69c virtual false final false
inline void GraphicRaycast(::UnityEngine::Canvas*  canvas, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*  results) ;

/// @brief Method GetScreenPosition addr 0x27ba69c size 0x38 virtual false final false
inline ::UnityEngine::Vector2 GetScreenPosition(::UnityEngine::EventSystems::RaycastResult  raycastResult) ;

/// @brief Method RayIntersectsRectTransform addr 0x27ba460 size 0x23c virtual false final false
static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform*  rectTransform, ::UnityEngine::Ray  ray, ByRef<::UnityEngine::Vector3>  worldPos) ;

/// @brief Method IsFocussed addr 0x27ba6d4 size 0x118 virtual false final false
inline bool IsFocussed() ;

/// @brief Method OnPointerEnter addr 0x27ba7ec size 0x104 virtual true final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRRaycaster(OVRRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRRaycaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRRaycaster(OVRRaycaster const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRRaycaster()  = default;
public:


// Fields

// Static field s_SortedGraphics


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRaycaster, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRaycaster*, "", "OVRRaycaster");
NEED_NO_BOX(::GlobalNamespace::__OVRRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRRaycaster____c*, "", "OVRRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRRaycaster__RaycastHit, "", "OVRRaycaster/RaycastHit");
