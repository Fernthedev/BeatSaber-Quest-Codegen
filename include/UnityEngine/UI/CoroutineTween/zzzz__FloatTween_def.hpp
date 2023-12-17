#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FloatTween)
namespace UnityEngine::UI::CoroutineTween {
class ITweenValue;
}
namespace UnityEngine::UI::CoroutineTween {
class __FloatTween__FloatTweenCallback;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
class __FloatTween__FloatTweenCallback;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback);
MARK_VAL_T(::UnityEngine::UI::CoroutineTween::FloatTween);
// Type: ::FloatTweenCallback
namespace UnityEngine::UI::CoroutineTween {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(10465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13154))
// CS Name: ::FloatTween::FloatTweenCallback*
class CORDL_TYPE __FloatTween__FloatTweenCallback : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<float_t>)]{};

static inline ::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback* New_ctor() ;

/// @brief Method .ctor addr 0x2d923b0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__FloatTween__FloatTweenCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FloatTween__FloatTweenCallback(__FloatTween__FloatTweenCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FloatTween__FloatTweenCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FloatTween__FloatTweenCallback(__FloatTween__FloatTweenCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FloatTween__FloatTweenCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::FloatTween
namespace UnityEngine::UI::CoroutineTween {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13155))
// CS Name: ::UnityEngine.UI.CoroutineTween::FloatTween
struct CORDL_TYPE FloatTween : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using FloatTweenCallback = ::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Target offset 0x0
 __declspec(property(get=__get_m_Target, put=__set_m_Target)) ::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback*  m_Target;

/// @brief Field m_StartValue offset 0x8
 __declspec(property(get=__get_m_StartValue, put=__set_m_StartValue)) float_t  m_StartValue;

/// @brief Field m_TargetValue offset 0xc
 __declspec(property(get=__get_m_TargetValue, put=__set_m_TargetValue)) float_t  m_TargetValue;

/// @brief Field m_Duration offset 0x10
 __declspec(property(get=__get_m_Duration, put=__set_m_Duration)) float_t  m_Duration;

/// @brief Field m_IgnoreTimeScale offset 0x14
 __declspec(property(get=__get_m_IgnoreTimeScale, put=__set_m_IgnoreTimeScale)) bool  m_IgnoreTimeScale;

 __declspec(property(get=get_startValue, put=set_startValue)) float_t  startValue;

 __declspec(property(get=get_targetValue, put=set_targetValue)) float_t  targetValue;

 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

 __declspec(property(get=get_ignoreTimeScale, put=set_ignoreTimeScale)) bool  ignoreTimeScale;

/// @brief Convert operator to "::UnityEngine::UI::CoroutineTween::ITweenValue"
constexpr operator  ::UnityEngine::UI::CoroutineTween::ITweenValue*() ;

constexpr void __set_m_Target(::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback*  value) ;

constexpr ::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback* __get_m_Target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback*> __get_m_Target() const;

constexpr void __set_m_StartValue(float_t  value) ;

constexpr float_t& __get_m_StartValue() ;

constexpr float_t const& __get_m_StartValue() const;

constexpr void __set_m_TargetValue(float_t  value) ;

constexpr float_t& __get_m_TargetValue() ;

constexpr float_t const& __get_m_TargetValue() const;

constexpr void __set_m_Duration(float_t  value) ;

constexpr float_t& __get_m_Duration() ;

constexpr float_t const& __get_m_Duration() const;

constexpr void __set_m_IgnoreTimeScale(bool  value) ;

constexpr bool& __get_m_IgnoreTimeScale() ;

constexpr bool const& __get_m_IgnoreTimeScale() const;

/// @brief Method get_startValue addr 0x2d92248 size 0x8 virtual false final false
inline float_t get_startValue() ;

/// @brief Method set_startValue addr 0x2d92250 size 0x8 virtual false final false
inline void set_startValue(float_t  value) ;

/// @brief Method get_targetValue addr 0x2d92258 size 0x8 virtual false final false
inline float_t get_targetValue() ;

/// @brief Method set_targetValue addr 0x2d92260 size 0x8 virtual false final false
inline void set_targetValue(float_t  value) ;

/// @brief Method get_duration addr 0x2d92268 size 0x8 virtual true final true
inline float_t get_duration() ;

/// @brief Method set_duration addr 0x2d92270 size 0x8 virtual false final false
inline void set_duration(float_t  value) ;

/// @brief Method get_ignoreTimeScale addr 0x2d92278 size 0x8 virtual true final true
inline bool get_ignoreTimeScale() ;

/// @brief Method set_ignoreTimeScale addr 0x2d92280 size 0xc virtual false final false
inline void set_ignoreTimeScale(bool  value) ;

/// @brief Method TweenValue addr 0x2d9228c size 0x8c virtual true final true
inline void TweenValue(float_t  floatPercentage) ;

/// @brief Method AddOnChangedCallback addr 0x2d92328 size 0x88 virtual false final false
inline void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<float_t>*  callback) ;

/// @brief Method GetIgnoreTimescale addr 0x2d923f8 size 0x8 virtual false final false
inline bool GetIgnoreTimescale() ;

/// @brief Method GetDuration addr 0x2d92400 size 0x8 virtual false final false
inline float_t GetDuration() ;

/// @brief Method ValidTarget addr 0x2d92318 size 0x10 virtual true final true
inline bool ValidTarget() ;

// Ctor Parameters [CppParam { name: "m_Target", ty: "::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback*", modifiers: "", def_value: None }, CppParam { name: "m_StartValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None }]
constexpr FloatTween(::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback*  m_Target, float_t  m_StartValue, float_t  m_TargetValue, float_t  m_Duration, bool  m_IgnoreTimeScale) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FloatTween(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FloatTween()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CoroutineTween::FloatTween, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UI::CoroutineTween
NEED_NO_BOX(::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::__FloatTween__FloatTweenCallback*, "UnityEngine.UI.CoroutineTween", "FloatTween/FloatTweenCallback");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::FloatTween, "UnityEngine.UI.CoroutineTween", "FloatTween");
