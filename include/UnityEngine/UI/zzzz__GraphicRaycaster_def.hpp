#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicRaycaster)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
struct __GraphicRaycaster__BlockingObjects;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class __GraphicRaycaster____c;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __GraphicRaycaster__BlockingObjects;
}
namespace UnityEngine::UI {
class GraphicRaycaster;
}
namespace UnityEngine::UI {
class __GraphicRaycaster____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects);
MARK_REF_PTR_T(::UnityEngine::UI::GraphicRaycaster);
MARK_REF_PTR_T(::UnityEngine::UI::__GraphicRaycaster____c);
// Type: ::BlockingObjects
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13043))
// CS Name: ::GraphicRaycaster::BlockingObjects
struct CORDL_TYPE __GraphicRaycaster__BlockingObjects : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GraphicRaycaster__BlockingObjects_Unwrapped
enum struct ____GraphicRaycaster__BlockingObjects_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TwoD = static_cast<int32_t>(0x1),
__E_ThreeD = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const None;

/// @brief Field TwoD value: static_cast<int32_t>(0x1)
static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const TwoD;

/// @brief Field ThreeD value: static_cast<int32_t>(0x2)
static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const ThreeD;

/// @brief Field All value: static_cast<int32_t>(0x3)
static ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GraphicRaycaster__BlockingObjects_Unwrapped () const noexcept {
return std::bit_cast<____GraphicRaycaster__BlockingObjects_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GraphicRaycaster__BlockingObjects(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GraphicRaycaster__BlockingObjects(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GraphicRaycaster__BlockingObjects()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GraphicRaycaster__BlockingObjects, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: ::<>c
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13044))
// CS Name: ::GraphicRaycaster::<>c*
class CORDL_TYPE __GraphicRaycaster____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UI::__GraphicRaycaster____c*  value) ;

static inline ::UnityEngine::UI::__GraphicRaycaster____c* getStaticF___9() ;

static inline void setStaticF___9__27_0(::System::Comparison_1<::UnityEngine::UI::Graphic*>*  value) ;

static inline ::System::Comparison_1<::UnityEngine::UI::Graphic*>* getStaticF___9__27_0() ;

static inline ::UnityEngine::UI::__GraphicRaycaster____c* New_ctor() ;

/// @brief Method .ctor addr 0x2d60938 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Raycast>b__27_0 addr 0x2d60940 size 0x4c virtual false final false
inline int32_t _Raycast_b__27_0(::UnityEngine::UI::Graphic*  g1, ::UnityEngine::UI::Graphic*  g2) ;

// Ctor Parameters [CppParam { name: "", ty: "__GraphicRaycaster____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GraphicRaycaster____c(__GraphicRaycaster____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GraphicRaycaster____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GraphicRaycaster____c(__GraphicRaycaster____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GraphicRaycaster____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__27_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__GraphicRaycaster____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::GraphicRaycaster
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13209))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13045))
// CS Name: ::UnityEngine.UI::GraphicRaycaster*
class CORDL_TYPE GraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
// Declarations
using __c = ::UnityEngine::UI::__GraphicRaycaster____c;

using BlockingObjects = ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::EventSystems::BaseRaycaster)]{};

/// @brief Field kNoEventMaskSet offset 0x0
static constexpr int32_t  kNoEventMaskSet{static_cast<int32_t>(0xffffffff)};

/// @brief Field m_IgnoreReversedGraphics offset 0x20
 __declspec(property(get=__get_m_IgnoreReversedGraphics, put=__set_m_IgnoreReversedGraphics)) bool  m_IgnoreReversedGraphics;

/// @brief Field m_BlockingObjects offset 0x24
 __declspec(property(get=__get_m_BlockingObjects, put=__set_m_BlockingObjects)) ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects  m_BlockingObjects;

/// @brief Field m_BlockingMask offset 0x28
 __declspec(property(get=__get_m_BlockingMask, put=__set_m_BlockingMask)) ::UnityEngine::LayerMask  m_BlockingMask;

/// @brief Field m_Canvas offset 0x30
 __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas)) ::UnityEngine::Canvas*  m_Canvas;

/// @brief Field m_RaycastResults offset 0x38
 __declspec(property(get=__get_m_RaycastResults, put=__set_m_RaycastResults)) ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*  m_RaycastResults;

 __declspec(property(get=get_sortOrderPriority)) int32_t  sortOrderPriority;

 __declspec(property(get=get_renderOrderPriority)) int32_t  renderOrderPriority;

 __declspec(property(get=get_ignoreReversedGraphics, put=set_ignoreReversedGraphics)) bool  ignoreReversedGraphics;

 __declspec(property(get=get_blockingObjects, put=set_blockingObjects)) ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects  blockingObjects;

 __declspec(property(get=get_blockingMask, put=set_blockingMask)) ::UnityEngine::LayerMask  blockingMask;

 __declspec(property(get=get_canvas)) ::UnityEngine::Canvas*  canvas;

 __declspec(property(get=get_eventCamera)) ::UnityEngine::Camera*  eventCamera;

constexpr void __set_m_IgnoreReversedGraphics(bool  value) ;

constexpr bool& __get_m_IgnoreReversedGraphics() ;

constexpr bool const& __get_m_IgnoreReversedGraphics() const;

constexpr void __set_m_BlockingObjects(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects  value) ;

constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects& __get_m_BlockingObjects() ;

constexpr ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects const& __get_m_BlockingObjects() const;

constexpr void __set_m_BlockingMask(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get_m_BlockingMask() ;

constexpr ::UnityEngine::LayerMask const& __get_m_BlockingMask() const;

constexpr void __set_m_Canvas(::UnityEngine::Canvas*  value) ;

constexpr ::UnityEngine::Canvas* __get_m_Canvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> __get_m_Canvas() const;

constexpr void __set_m_RaycastResults(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* __get_m_RaycastResults() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*> __get_m_RaycastResults() const;

static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* getStaticF_s_SortedGraphics() ;

/// @brief Method get_sortOrderPriority addr 0x2d5f2e0 size 0x48 virtual true final false
inline int32_t get_sortOrderPriority() ;

/// @brief Method get_renderOrderPriority addr 0x2d5f3bc size 0x54 virtual true final false
inline int32_t get_renderOrderPriority() ;

/// @brief Method get_ignoreReversedGraphics addr 0x2d5f410 size 0x8 virtual false final false
inline bool get_ignoreReversedGraphics() ;

/// @brief Method set_ignoreReversedGraphics addr 0x2d5f418 size 0xc virtual false final false
inline void set_ignoreReversedGraphics(bool  value) ;

/// @brief Method get_blockingObjects addr 0x2d5f424 size 0x8 virtual false final false
inline ::UnityEngine::UI::__GraphicRaycaster__BlockingObjects get_blockingObjects() ;

/// @brief Method set_blockingObjects addr 0x2d5f42c size 0x8 virtual false final false
inline void set_blockingObjects(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects  value) ;

/// @brief Method get_blockingMask addr 0x2d5f434 size 0x8 virtual false final false
inline ::UnityEngine::LayerMask get_blockingMask() ;

/// @brief Method set_blockingMask addr 0x2d5f43c size 0x8 virtual false final false
inline void set_blockingMask(::UnityEngine::LayerMask  value) ;

static inline ::UnityEngine::UI::GraphicRaycaster* New_ctor() ;

/// @brief Method .ctor addr 0x2d5f444 size 0x94 virtual false final false
inline void _ctor() ;

/// @brief Method get_canvas addr 0x2d5f328 size 0x94 virtual false final false
inline ::UnityEngine::Canvas* get_canvas() ;

/// @brief Method Raycast addr 0x2d5f4d8 size 0xc7c virtual true final false
inline void Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList) ;

/// @brief Method get_eventCamera addr 0x2d60780 size 0xc8 virtual true final false
inline ::UnityEngine::Camera* get_eventCamera() ;

/// @brief Method Raycast addr 0x2d60210 size 0x570 virtual false final false
static inline void Raycast(::UnityEngine::Canvas*  canvas, ::UnityEngine::Camera*  eventCamera, ::UnityEngine::Vector2  pointerPosition, ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*  foundGraphics, ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>*  results) ;

// Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicRaycaster(GraphicRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicRaycaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicRaycaster(GraphicRaycaster const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GraphicRaycaster()  = default;
public:


// Fields

// Static field s_SortedGraphics


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRaycaster, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GraphicRaycaster__BlockingObjects, "UnityEngine.UI", "GraphicRaycaster/BlockingObjects");
NEED_NO_BOX(::UnityEngine::UI::GraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster*, "UnityEngine.UI", "GraphicRaycaster");
NEED_NO_BOX(::UnityEngine::UI::__GraphicRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__GraphicRaycaster____c*, "UnityEngine.UI", "GraphicRaycaster/<>c");
