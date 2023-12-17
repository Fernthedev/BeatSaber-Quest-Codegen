#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
constexpr void UnityEngine::InputSystem::__InputSettings__UpdateMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputSettings__UpdateMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputSettings__UpdateMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode::__InputSettings__UpdateMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode  UnityEngine::InputSystem::__InputSettings__UpdateMode::ProcessEventsInDynamicUpdate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode  UnityEngine::InputSystem::__InputSettings__UpdateMode::ProcessEventsInFixedUpdate{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode  UnityEngine::InputSystem::__InputSettings__UpdateMode::ProcessEventsManually{static_cast<int32_t>(0x3)};
constexpr void UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::__InputSettings__BackgroundBehavior(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior  UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::ResetAndDisableNonBackgroundDevices{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior  UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::ResetAndDisableAllDevices{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior  UnityEngine::InputSystem::__InputSettings__BackgroundBehavior::IgnoreFocus{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::__InputSettings__EditorInputBehaviorInPlayMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode  UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::PointersAndKeyboardsRespectGameViewFocus{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode  UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::AllDevicesRespectGameViewFocus{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode  UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode::AllDeviceInputAlwaysGoesToGameView{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_updateMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputSettings__UpdateMode (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_updateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_updateMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_updateMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::__InputSettings__UpdateMode)>(&::UnityEngine::InputSystem::InputSettings::set_updateMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_updateMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__UpdateMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_compensateForScreenOrientation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_compensateForScreenOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_compensateForScreenOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_compensateForScreenOrientation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_compensateForScreenOrientation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ab7e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_compensateForScreenOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_filterNoiseOnCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_filterNoiseOnCurrent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_filterNoiseOnCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_filterNoiseOnCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_filterNoiseOnCurrent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ab7e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_filterNoiseOnCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultDeadzoneMin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultDeadzoneMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultDeadzoneMin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultDeadzoneMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultDeadzoneMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultDeadzoneMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultDeadzoneMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMax)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultDeadzoneMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultButtonPressPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultButtonPressPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultButtonPressPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultButtonPressPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultButtonPressPoint)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ab7ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultButtonPressPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_buttonReleaseThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_buttonReleaseThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_buttonReleaseThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_buttonReleaseThreshold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_buttonReleaseThreshold)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_buttonReleaseThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultTapTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultTapTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultTapTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultTapTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultSlowTapTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultSlowTapTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultSlowTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultSlowTapTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultSlowTapTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultSlowTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_defaultHoldTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_defaultHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultHoldTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_defaultHoldTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_defaultHoldTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultHoldTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_tapRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_tapRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_tapRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_tapRadius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_tapRadius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_tapRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_multiTapDelayTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_multiTapDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_multiTapDelayTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_multiTapDelayTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(float_t)>(&::UnityEngine::InputSystem::InputSettings::set_multiTapDelayTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_multiTapDelayTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_backgroundBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_backgroundBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_backgroundBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_backgroundBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior)>(&::UnityEngine::InputSystem::InputSettings::set_backgroundBehavior)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_backgroundBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_editorInputBehaviorInPlayMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_editorInputBehaviorInPlayMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_editorInputBehaviorInPlayMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_editorInputBehaviorInPlayMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode)>(&::UnityEngine::InputSystem::InputSettings::set_editorInputBehaviorInPlayMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_editorInputBehaviorInPlayMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_maxEventBytesPerUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_maxEventBytesPerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_maxEventBytesPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_maxEventBytesPerUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(int32_t)>(&::UnityEngine::InputSystem::InputSettings::set_maxEventBytesPerUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab7ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_maxEventBytesPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_maxQueuedEventsPerUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_maxQueuedEventsPerUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab8010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_maxQueuedEventsPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_maxQueuedEventsPerUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(int32_t)>(&::UnityEngine::InputSystem::InputSettings::set_maxQueuedEventsPerUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ab8018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_maxQueuedEventsPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_supportedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_supportedDevices)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab8030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_supportedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_supportedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>)>(&::UnityEngine::InputSystem::InputSettings::set_supportedDevices)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2ab8090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_supportedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.get_disableRedundantEventsMerging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::get_disableRedundantEventsMerging)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab81b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_disableRedundantEventsMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.set_disableRedundantEventsMerging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(bool)>(&::UnityEngine::InputSystem::InputSettings::set_disableRedundantEventsMerging)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ab81bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_disableRedundantEventsMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.SetInternalFeatureFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputSettings::SetInternalFeatureFlag)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2ab81d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "SetInternalFeatureFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.IsFeatureEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputSettings::*)(::StringW)>(&::UnityEngine::InputSystem::InputSettings::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2ab8378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "IsFeatureEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings.OnChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::OnChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ab7d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "OnChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputSettings::*)()>(&::UnityEngine::InputSystem::InputSettings::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ab8438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_SupportedDevices(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& UnityEngine::InputSystem::InputSettings::__get_m_SupportedDevices()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& UnityEngine::InputSystem::InputSettings::__get_m_SupportedDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_UpdateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputSettings__UpdateMode, 0x20>(this, std::forward<::UnityEngine::InputSystem::__InputSettings__UpdateMode>(value));
}
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode& UnityEngine::InputSystem::InputSettings::__get_m_UpdateMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputSettings__UpdateMode, 0x20>(this);
}
constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode const& UnityEngine::InputSystem::InputSettings::__get_m_UpdateMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputSettings__UpdateMode, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_MaxEventBytesPerUpdate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputSettings::__get_m_MaxEventBytesPerUpdate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputSettings::__get_m_MaxEventBytesPerUpdate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_MaxQueuedEventsPerUpdate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputSettings::__get_m_MaxQueuedEventsPerUpdate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputSettings::__get_m_MaxQueuedEventsPerUpdate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_CompensateForScreenOrientation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::InputSettings::__get_m_CompensateForScreenOrientation()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& UnityEngine::InputSystem::InputSettings::__get_m_CompensateForScreenOrientation() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_BackgroundBehavior(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, 0x30>(this, std::forward<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior>(value));
}
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior& UnityEngine::InputSystem::InputSettings::__get_m_BackgroundBehavior()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, 0x30>(this);
}
constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior const& UnityEngine::InputSystem::InputSettings::__get_m_BackgroundBehavior() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_EditorInputBehaviorInPlayMode(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, 0x34>(this, std::forward<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode>(value));
}
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode& UnityEngine::InputSystem::InputSettings::__get_m_EditorInputBehaviorInPlayMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, 0x34>(this);
}
constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode const& UnityEngine::InputSystem::InputSettings::__get_m_EditorInputBehaviorInPlayMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, 0x34>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DefaultDeadzoneMin(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_DefaultDeadzoneMin()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_DefaultDeadzoneMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DefaultDeadzoneMax(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_DefaultDeadzoneMax()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_DefaultDeadzoneMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DefaultButtonPressPoint(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_DefaultButtonPressPoint()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_DefaultButtonPressPoint() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_ButtonReleaseThreshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_ButtonReleaseThreshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_ButtonReleaseThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DefaultTapTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_DefaultTapTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_DefaultTapTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DefaultSlowTapTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_DefaultSlowTapTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_DefaultSlowTapTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DefaultHoldTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_DefaultHoldTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_DefaultHoldTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_TapRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_TapRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_TapRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_MultiTapDelayTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::InputSettings::__get_m_MultiTapDelayTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& UnityEngine::InputSystem::InputSettings::__get_m_MultiTapDelayTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_DisableRedundantEventsMerging(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::InputSettings::__get_m_DisableRedundantEventsMerging()  {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr bool const& UnityEngine::InputSystem::InputSettings::__get_m_DisableRedundantEventsMerging() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_ShortcutKeysConsumeInputs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5d>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::InputSettings::__get_m_ShortcutKeysConsumeInputs()  {
return ::cordl_internals::getInstanceField<bool, 0x5d>(this);
}
constexpr bool const& UnityEngine::InputSystem::InputSettings::__get_m_ShortcutKeysConsumeInputs() const {
return ::cordl_internals::getInstanceField<bool, 0x5d>(this);
}
constexpr void UnityEngine::InputSystem::InputSettings::__set_m_FeatureFlags(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x60>(this, std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* UnityEngine::InputSystem::InputSettings::__get_m_FeatureFlags()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> UnityEngine::InputSystem::InputSettings::__get_m_FeatureFlags() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x60>(this);
}
inline ::UnityEngine::InputSystem::__InputSettings__UpdateMode UnityEngine::InputSystem::InputSettings::get_updateMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_updateMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputSettings__UpdateMode, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_updateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_updateMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__UpdateMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_compensateForScreenOrientation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_compensateForScreenOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_compensateForScreenOrientation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_compensateForScreenOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_filterNoiseOnCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_filterNoiseOnCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_filterNoiseOnCurrent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_filterNoiseOnCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultDeadzoneMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMin(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultDeadzoneMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultDeadzoneMax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultDeadzoneMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultDeadzoneMax(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultDeadzoneMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultButtonPressPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultButtonPressPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultButtonPressPoint(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultButtonPressPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_buttonReleaseThreshold()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_buttonReleaseThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_buttonReleaseThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_buttonReleaseThreshold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultTapTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultTapTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultSlowTapTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultSlowTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultSlowTapTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultSlowTapTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_defaultHoldTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_defaultHoldTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_defaultHoldTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_defaultHoldTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_tapRadius()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_tapRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_tapRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_tapRadius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSettings::get_multiTapDelayTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_multiTapDelayTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_multiTapDelayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_multiTapDelayTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior UnityEngine::InputSystem::InputSettings::get_backgroundBehavior()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_backgroundBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_backgroundBehavior(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_backgroundBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode UnityEngine::InputSystem::InputSettings::get_editorInputBehaviorInPlayMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_editorInputBehaviorInPlayMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_editorInputBehaviorInPlayMode(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_editorInputBehaviorInPlayMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputSettings::get_maxEventBytesPerUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_maxEventBytesPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_maxEventBytesPerUpdate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_maxEventBytesPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::InputSettings::get_maxQueuedEventsPerUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_maxQueuedEventsPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_maxQueuedEventsPerUpdate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_maxQueuedEventsPerUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> UnityEngine::InputSystem::InputSettings::get_supportedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_supportedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_supportedDevices(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_supportedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputSettings::get_disableRedundantEventsMerging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "get_disableRedundantEventsMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSettings::set_disableRedundantEventsMerging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "set_disableRedundantEventsMerging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSettings::SetInternalFeatureFlag(::StringW  featureName, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "SetInternalFeatureFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, featureName, enabled);
}
inline bool UnityEngine::InputSystem::InputSettings::IsFeatureEnabled(::StringW  featureName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "IsFeatureEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, featureName);
}
inline void UnityEngine::InputSystem::InputSettings::OnChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            "OnChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputSettings* UnityEngine::InputSystem::InputSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputSettings*>());
}
inline void UnityEngine::InputSystem::InputSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
