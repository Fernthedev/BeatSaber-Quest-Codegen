#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ColorTween_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UI/CoroutineTween/zzzz__ITweenValue_def.hpp"
constexpr void UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::__ColorTween__ColorTweenMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode  UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::All{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode  UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::RGB{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode  UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode::Alpha{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::*)()>(&::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d921f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>());
}
inline void UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_startColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d92018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_startColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Color)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d92024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_targetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d92030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_targetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Color)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d9203c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_tweenMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_tweenMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(float_t)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.get_ignoreTimeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.set_ignoreTimeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(bool)>(&::UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d92070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.TweenValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(float_t)>(&::UnityEngine::UI::CoroutineTween::ColorTween::TweenValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d9207c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "TweenValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.AddOnChangedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CoroutineTween::ColorTween::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*)>(&::UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d92168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "AddOnChangedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.GetIgnoreTimescale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "GetIgnoreTimescale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.GetDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::GetDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "GetDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CoroutineTween::ColorTween.ValidTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::CoroutineTween::ColorTween::*)()>(&::UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d92158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "ValidTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UI::CoroutineTween::ITweenValue"
constexpr  UnityEngine::UI::CoroutineTween::ColorTween::operator ::UnityEngine::UI::CoroutineTween::ITweenValue*()  {
return static_cast<::UnityEngine::UI::CoroutineTween::ITweenValue*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::UI::CoroutineTween::ColorTween::__set_m_Target(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*>(value));
}
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback* UnityEngine::UI::CoroutineTween::ColorTween::__get_m_Target()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*> UnityEngine::UI::CoroutineTween::ColorTween::__get_m_Target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::CoroutineTween::ColorTween::__set_m_StartColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_StartColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_StartColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::CoroutineTween::ColorTween::__set_m_TargetColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_TargetColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_TargetColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::CoroutineTween::ColorTween::__set_m_TweenMode(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode>(value));
}
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_TweenMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode const& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_TweenMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::CoroutineTween::ColorTween::__set_m_Duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_Duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_Duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::CoroutineTween::ColorTween::__set_m_IgnoreTimeScale(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_IgnoreTimeScale()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UI::CoroutineTween::ColorTween::__get_m_IgnoreTimeScale() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::Color UnityEngine::UI::CoroutineTween::ColorTween::get_startColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_startColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::CoroutineTween::ColorTween::get_targetColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_targetColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode UnityEngine::UI::CoroutineTween::ColorTween::get_tweenMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_tweenMode(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CoroutineTween::ColorTween::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_duration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::get_ignoreTimeScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "get_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::set_ignoreTimeScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "set_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::TweenValue(float_t  floatPercentage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "TweenValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, floatPercentage);
}
inline void UnityEngine::UI::CoroutineTween::ColorTween::AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "AddOnChangedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::GetIgnoreTimescale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "GetIgnoreTimescale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::CoroutineTween::ColorTween::GetDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "GetDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::CoroutineTween::ColorTween::ValidTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CoroutineTween::ColorTween>::get(),
                            "ValidTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Target", ty: "::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TweenMode", ty: "::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CoroutineTween::ColorTween::ColorTween(::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenCallback*  m_Target, ::UnityEngine::Color  m_StartColor, ::UnityEngine::Color  m_TargetColor, ::UnityEngine::UI::CoroutineTween::__ColorTween__ColorTweenMode  m_TweenMode, float_t  m_Duration, bool  m_IgnoreTimeScale) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->m_Target = m_Target;
this->m_StartColor = m_StartColor;
this->m_TargetColor = m_TargetColor;
this->m_TweenMode = m_TweenMode;
this->m_Duration = m_Duration;
this->m_IgnoreTimeScale = m_IgnoreTimeScale;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
