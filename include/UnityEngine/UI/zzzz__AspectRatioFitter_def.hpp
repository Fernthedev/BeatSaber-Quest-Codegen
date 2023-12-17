#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AspectRatioFitter)
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
struct __AspectRatioFitter__AspectMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __AspectRatioFitter__AspectMode;
}
namespace UnityEngine::UI {
class AspectRatioFitter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__AspectRatioFitter__AspectMode);
MARK_REF_PTR_T(::UnityEngine::UI::AspectRatioFitter);
// Type: ::AspectMode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13070))
// CS Name: ::AspectRatioFitter::AspectMode
struct CORDL_TYPE __AspectRatioFitter__AspectMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AspectRatioFitter__AspectMode_Unwrapped
enum struct ____AspectRatioFitter__AspectMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WidthControlsHeight = static_cast<int32_t>(0x1),
__E_HeightControlsWidth = static_cast<int32_t>(0x2),
__E_FitInParent = static_cast<int32_t>(0x3),
__E_EnvelopeParent = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const None;

/// @brief Field WidthControlsHeight value: static_cast<int32_t>(0x1)
static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const WidthControlsHeight;

/// @brief Field HeightControlsWidth value: static_cast<int32_t>(0x2)
static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const HeightControlsWidth;

/// @brief Field FitInParent value: static_cast<int32_t>(0x3)
static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const FitInParent;

/// @brief Field EnvelopeParent value: static_cast<int32_t>(0x4)
static ::UnityEngine::UI::__AspectRatioFitter__AspectMode const EnvelopeParent;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AspectRatioFitter__AspectMode_Unwrapped () const noexcept {
return std::bit_cast<____AspectRatioFitter__AspectMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AspectRatioFitter__AspectMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AspectRatioFitter__AspectMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AspectRatioFitter__AspectMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__AspectRatioFitter__AspectMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::AspectRatioFitter
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13071))
// CS Name: ::UnityEngine.UI::AspectRatioFitter*
class CORDL_TYPE AspectRatioFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using AspectMode = ::UnityEngine::UI::__AspectRatioFitter__AspectMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::EventSystems::UIBehaviour)]{};

/// @brief Field m_AspectMode offset 0x18
 __declspec(property(get=__get_m_AspectMode, put=__set_m_AspectMode)) ::UnityEngine::UI::__AspectRatioFitter__AspectMode  m_AspectMode;

/// @brief Field m_AspectRatio offset 0x1c
 __declspec(property(get=__get_m_AspectRatio, put=__set_m_AspectRatio)) float_t  m_AspectRatio;

/// @brief Field m_Rect offset 0x20
 __declspec(property(get=__get_m_Rect, put=__set_m_Rect)) ::UnityEngine::RectTransform*  m_Rect;

/// @brief Field m_DelayedSetDirty offset 0x28
 __declspec(property(get=__get_m_DelayedSetDirty, put=__set_m_DelayedSetDirty)) bool  m_DelayedSetDirty;

/// @brief Field m_DoesParentExist offset 0x29
 __declspec(property(get=__get_m_DoesParentExist, put=__set_m_DoesParentExist)) bool  m_DoesParentExist;

/// @brief Field m_Tracker offset 0x2a
 __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker  m_Tracker;

 __declspec(property(get=get_aspectMode, put=set_aspectMode)) ::UnityEngine::UI::__AspectRatioFitter__AspectMode  aspectMode;

 __declspec(property(get=get_aspectRatio, put=set_aspectRatio)) float_t  aspectRatio;

 __declspec(property(get=get_rectTransform)) ::UnityEngine::RectTransform*  rectTransform;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr operator  ::UnityEngine::UI::ILayoutSelfController*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr operator  ::UnityEngine::UI::ILayoutController*() noexcept;

constexpr void __set_m_AspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode  value) ;

constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode& __get_m_AspectMode() ;

constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode const& __get_m_AspectMode() const;

constexpr void __set_m_AspectRatio(float_t  value) ;

constexpr float_t& __get_m_AspectRatio() ;

constexpr float_t const& __get_m_AspectRatio() const;

constexpr void __set_m_Rect(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get_m_Rect() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get_m_Rect() const;

constexpr void __set_m_DelayedSetDirty(bool  value) ;

constexpr bool& __get_m_DelayedSetDirty() ;

constexpr bool const& __get_m_DelayedSetDirty() const;

constexpr void __set_m_DoesParentExist(bool  value) ;

constexpr bool& __get_m_DoesParentExist() ;

constexpr bool const& __get_m_DoesParentExist() const;

constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value) ;

constexpr ::UnityEngine::DrivenRectTransformTracker& __get_m_Tracker() ;

constexpr ::UnityEngine::DrivenRectTransformTracker const& __get_m_Tracker() const;

/// @brief Method get_aspectMode addr 0x2d73238 size 0x8 virtual false final false
inline ::UnityEngine::UI::__AspectRatioFitter__AspectMode get_aspectMode() ;

/// @brief Method set_aspectMode addr 0x2d73240 size 0x74 virtual false final false
inline void set_aspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode  value) ;

/// @brief Method get_aspectRatio addr 0x2d732b8 size 0x8 virtual false final false
inline float_t get_aspectRatio() ;

/// @brief Method set_aspectRatio addr 0x2d732c0 size 0x74 virtual false final false
inline void set_aspectRatio(float_t  value) ;

/// @brief Method get_rectTransform addr 0x2d73334 size 0x94 virtual false final false
inline ::UnityEngine::RectTransform* get_rectTransform() ;

static inline ::UnityEngine::UI::AspectRatioFitter* New_ctor() ;

/// @brief Method .ctor addr 0x2d733c8 size 0x10 virtual false final false
inline void _ctor() ;

/// @brief Method OnEnable addr 0x2d733d8 size 0x98 virtual true final false
inline void OnEnable() ;

/// @brief Method Start addr 0x2d73470 size 0x50 virtual true final false
inline void Start() ;

/// @brief Method OnDisable addr 0x2d735b4 size 0x7c virtual true final false
inline void OnDisable() ;

/// @brief Method OnTransformParentChanged addr 0x2d73a1c size 0x98 virtual true final false
inline void OnTransformParentChanged() ;

/// @brief Method Update addr 0x2d73ab4 size 0x14 virtual true final false
inline void Update() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2d73ac8 size 0x4 virtual true final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method UpdateRect addr 0x2d73acc size 0x304 virtual false final false
inline void UpdateRect() ;

/// @brief Method GetSizeDeltaToProduceSize addr 0x2d73ee0 size 0xf8 virtual false final false
inline float_t GetSizeDeltaToProduceSize(float_t  size, int32_t  axis) ;

/// @brief Method GetParentSize addr 0x2d73dd0 size 0x110 virtual false final false
inline ::UnityEngine::Vector2 GetParentSize() ;

/// @brief Method SetLayoutHorizontal addr 0x2d73fd8 size 0x4 virtual true final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2d73fdc size 0x4 virtual true final false
inline void SetLayoutVertical() ;

/// @brief Method SetDirty addr 0x2d732b4 size 0x4 virtual false final false
inline void SetDirty() ;

/// @brief Method IsComponentValidOnObject addr 0x2d734c0 size 0xcc virtual false final false
inline bool IsComponentValidOnObject() ;

/// @brief Method IsAspectModeValid addr 0x2d7358c size 0x28 virtual false final false
inline bool IsAspectModeValid() ;

/// @brief Method DoesParentExists addr 0x2d73fe0 size 0x8 virtual false final false
inline bool DoesParentExists() ;

// Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspectRatioFitter(AspectRatioFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspectRatioFitter(AspectRatioFitter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspectRatioFitter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::AspectRatioFitter, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__AspectRatioFitter__AspectMode, "UnityEngine.UI", "AspectRatioFitter/AspectMode");
NEED_NO_BOX(::UnityEngine::UI::AspectRatioFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AspectRatioFitter*, "UnityEngine.UI", "AspectRatioFitter");
