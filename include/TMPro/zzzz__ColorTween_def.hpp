#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorTween)
namespace TMPro {
struct __ColorTween__ColorTweenMode;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class __ColorTween__ColorTweenCallback;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace TMPro {
class ITweenValue;
}
// Forward declare root types
namespace TMPro {
struct __ColorTween__ColorTweenMode;
}
namespace TMPro {
class __ColorTween__ColorTweenCallback;
}
namespace TMPro {
struct ColorTween;
}
// Write type traits
MARK_VAL_T(::TMPro::__ColorTween__ColorTweenMode);
MARK_REF_PTR_T(::TMPro::__ColorTween__ColorTweenCallback);
MARK_VAL_T(::TMPro::ColorTween);
// Type: ::ColorTweenMode
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12338))
// CS Name: ::ColorTween::ColorTweenMode
struct CORDL_TYPE __ColorTween__ColorTweenMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ColorTween__ColorTweenMode_Unwrapped
enum struct ____ColorTween__ColorTweenMode_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_RGB = static_cast<int32_t>(0x1),
__E_Alpha = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field All value: static_cast<int32_t>(0x0)
static ::TMPro::__ColorTween__ColorTweenMode const All;

/// @brief Field RGB value: static_cast<int32_t>(0x1)
static ::TMPro::__ColorTween__ColorTweenMode const RGB;

/// @brief Field Alpha value: static_cast<int32_t>(0x2)
static ::TMPro::__ColorTween__ColorTweenMode const Alpha;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ColorTween__ColorTweenMode_Unwrapped () const noexcept {
return std::bit_cast<____ColorTween__ColorTweenMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ColorTween__ColorTweenMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ColorTween__ColorTweenMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ColorTween__ColorTweenMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__ColorTween__ColorTweenMode, 0x4>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::ColorTweenCallback
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 293 }), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12339))
// CS Name: ::ColorTween::ColorTweenCallback*
class CORDL_TYPE __ColorTween__ColorTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>)]{};

static inline ::TMPro::__ColorTween__ColorTweenCallback* New_ctor() ;

/// @brief Method .ctor addr 0x2c022ac size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ColorTween__ColorTweenCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ColorTween__ColorTweenCallback(__ColorTween__ColorTweenCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ColorTween__ColorTweenCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ColorTween__ColorTweenCallback(__ColorTween__ColorTweenCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ColorTween__ColorTweenCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__ColorTween__ColorTweenCallback, 0x30>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::ColorTween
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12340))
// CS Name: ::TMPro::ColorTween
struct CORDL_TYPE ColorTween : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
using ColorTweenCallback = ::TMPro::__ColorTween__ColorTweenCallback;

using ColorTweenMode = ::TMPro::__ColorTween__ColorTweenMode;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Target offset 0x0
 __declspec(property(get=__get_m_Target, put=__set_m_Target)) ::TMPro::__ColorTween__ColorTweenCallback*  m_Target;

/// @brief Field m_StartColor offset 0x8
 __declspec(property(get=__get_m_StartColor, put=__set_m_StartColor)) ::UnityEngine::Color  m_StartColor;

/// @brief Field m_TargetColor offset 0x18
 __declspec(property(get=__get_m_TargetColor, put=__set_m_TargetColor)) ::UnityEngine::Color  m_TargetColor;

/// @brief Field m_TweenMode offset 0x28
 __declspec(property(get=__get_m_TweenMode, put=__set_m_TweenMode)) ::TMPro::__ColorTween__ColorTweenMode  m_TweenMode;

/// @brief Field m_Duration offset 0x2c
 __declspec(property(get=__get_m_Duration, put=__set_m_Duration)) float_t  m_Duration;

/// @brief Field m_IgnoreTimeScale offset 0x30
 __declspec(property(get=__get_m_IgnoreTimeScale, put=__set_m_IgnoreTimeScale)) bool  m_IgnoreTimeScale;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_targetColor, put=set_targetColor)) ::UnityEngine::Color  targetColor;

 __declspec(property(get=get_tweenMode, put=set_tweenMode)) ::TMPro::__ColorTween__ColorTweenMode  tweenMode;

 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

 __declspec(property(get=get_ignoreTimeScale, put=set_ignoreTimeScale)) bool  ignoreTimeScale;

/// @brief Convert operator to "::TMPro::ITweenValue"
constexpr operator  ::TMPro::ITweenValue*() ;

constexpr void __set_m_Target(::TMPro::__ColorTween__ColorTweenCallback*  value) ;

constexpr ::TMPro::__ColorTween__ColorTweenCallback* __get_m_Target() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::__ColorTween__ColorTweenCallback*> __get_m_Target() const;

constexpr void __set_m_StartColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_StartColor() ;

constexpr ::UnityEngine::Color const& __get_m_StartColor() const;

constexpr void __set_m_TargetColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_TargetColor() ;

constexpr ::UnityEngine::Color const& __get_m_TargetColor() const;

constexpr void __set_m_TweenMode(::TMPro::__ColorTween__ColorTweenMode  value) ;

constexpr ::TMPro::__ColorTween__ColorTweenMode& __get_m_TweenMode() ;

constexpr ::TMPro::__ColorTween__ColorTweenMode const& __get_m_TweenMode() const;

constexpr void __set_m_Duration(float_t  value) ;

constexpr float_t& __get_m_Duration() ;

constexpr float_t const& __get_m_Duration() const;

constexpr void __set_m_IgnoreTimeScale(bool  value) ;

constexpr bool& __get_m_IgnoreTimeScale() ;

constexpr bool const& __get_m_IgnoreTimeScale() const;

/// @brief Method get_startColor addr 0x2c020d4 size 0xc virtual false final false
inline ::UnityEngine::Color get_startColor() ;

/// @brief Method set_startColor addr 0x2c020e0 size 0xc virtual false final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method get_targetColor addr 0x2c020ec size 0xc virtual false final false
inline ::UnityEngine::Color get_targetColor() ;

/// @brief Method set_targetColor addr 0x2c020f8 size 0xc virtual false final false
inline void set_targetColor(::UnityEngine::Color  value) ;

/// @brief Method get_tweenMode addr 0x2c02104 size 0x8 virtual false final false
inline ::TMPro::__ColorTween__ColorTweenMode get_tweenMode() ;

/// @brief Method set_tweenMode addr 0x2c0210c size 0x8 virtual false final false
inline void set_tweenMode(::TMPro::__ColorTween__ColorTweenMode  value) ;

/// @brief Method get_duration addr 0x2c02114 size 0x8 virtual true final true
inline float_t get_duration() ;

/// @brief Method set_duration addr 0x2c0211c size 0x8 virtual false final false
inline void set_duration(float_t  value) ;

/// @brief Method get_ignoreTimeScale addr 0x2c02124 size 0x8 virtual true final true
inline bool get_ignoreTimeScale() ;

/// @brief Method set_ignoreTimeScale addr 0x2c0212c size 0xc virtual false final false
inline void set_ignoreTimeScale(bool  value) ;

/// @brief Method TweenValue addr 0x2c02138 size 0xdc virtual true final true
inline void TweenValue(float_t  floatPercentage) ;

/// @brief Method AddOnChangedCallback addr 0x2c02224 size 0x88 virtual false final false
inline void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  callback) ;

/// @brief Method GetIgnoreTimescale addr 0x2c022f4 size 0x8 virtual false final false
inline bool GetIgnoreTimescale() ;

/// @brief Method GetDuration addr 0x2c022fc size 0x8 virtual false final false
inline float_t GetDuration() ;

/// @brief Method ValidTarget addr 0x2c02214 size 0x10 virtual true final true
inline bool ValidTarget() ;

// Ctor Parameters [CppParam { name: "m_Target", ty: "::TMPro::__ColorTween__ColorTweenCallback*", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_TweenMode", ty: "::TMPro::__ColorTween__ColorTweenMode", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
constexpr ColorTween(::TMPro::__ColorTween__ColorTweenCallback*  m_Target, ::UnityEngine::Color  m_StartColor, ::UnityEngine::Color  m_TargetColor, ::TMPro::__ColorTween__ColorTweenMode  m_TweenMode, float_t  m_Duration, bool  m_IgnoreTimeScale) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorTween(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorTween()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::ColorTween, 0x38>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__ColorTween__ColorTweenMode, "TMPro", "ColorTween/ColorTweenMode");
NEED_NO_BOX(::TMPro::__ColorTween__ColorTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__ColorTween__ColorTweenCallback*, "TMPro", "ColorTween/ColorTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ColorTween, "TMPro", "ColorTween");
