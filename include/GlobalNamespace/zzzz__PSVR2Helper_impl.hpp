#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::*)(float_t, int32_t)>(&::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20fbb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__set_maxTimePlayed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__get_maxTimePlayed()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__get_maxTimePlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__set_maximumFrequency(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__get_maximumFrequency()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__get_maximumFrequency() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::_ctor(float_t  maxTimePlayed, int32_t  maximumFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxTimePlayed, maximumFrequency);
}
// Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit::__PSVR2Helper__HeadsetHapticFrequencyLimit(float_t  maxTimePlayed, int32_t  maximumFrequency) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->maxTimePlayed = maxTimePlayed;
this->maximumFrequency = maximumFrequency;
}
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_hasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fa240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fa248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_isAlwaysWireless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fa250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_vrPlatformSDK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRPlatformSDK (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fa258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_controllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fa9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_controllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::remove_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20faa4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::Awake)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x20faae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.TryGetPoseOffsetForNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, ByRef<::UnityEngine::Pose>)>(&::GlobalNamespace::PSVR2Helper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20fae00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "TryGetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetNodePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&::GlobalNamespace::PSVR2Helper::GetNodePose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x20fae20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetTriggerValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::PSVR2Helper::GetTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20faf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetAnyJoystickMaxAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20faf94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetThumbstickValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::PSVR2Helper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x20faf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::GetMenuButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20fb06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetMenuButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20fb070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.RefreshControllersReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20fb074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::PSVR2Helper::StopHaptics)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20fb090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.TriggerHapticPulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, float_t, float_t, float_t)>(&::GlobalNamespace::PSVR2Helper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x20fb094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetTRCCompliantHeadsetHapticFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PSVR2Helper::*)(float_t)>(&::GlobalNamespace::PSVR2Helper::GetTRCCompliantHeadsetHapticFrequency)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x20fb134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetTRCCompliantHeadsetHapticFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HandleApplicationFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HandleApplicationFocusLost)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20fb334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "HandleApplicationFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HandleApplicationFocusResumed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HandleApplicationFocusResumed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20fb358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "HandleApplicationFocusResumed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.InputDeviceChangeTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::GlobalNamespace::PSVR2Helper::InputDeviceChangeTriggered)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x20fb380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "InputDeviceChangeTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.AddControllerToMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::InputDevice*)>(&::GlobalNamespace::PSVR2Helper::AddControllerToMap)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x20fb6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "AddControllerToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x20fb944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x20fb9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr  GlobalNamespace::PSVR2Helper::operator ::GlobalNamespace::IVRPlatformHelper*() noexcept {
return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::PSVR2Helper::__set__leftController(::GlobalNamespace::__UnityXRController__Configuration*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0x18>(this, std::forward<::GlobalNamespace::__UnityXRController__Configuration*>(value));
}
constexpr ::GlobalNamespace::__UnityXRController__Configuration* GlobalNamespace::PSVR2Helper::__get__leftController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> GlobalNamespace::PSVR2Helper::__get__leftController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0x18>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__rightController(::GlobalNamespace::__UnityXRController__Configuration*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0x20>(this, std::forward<::GlobalNamespace::__UnityXRController__Configuration*>(value));
}
constexpr ::GlobalNamespace::__UnityXRController__Configuration* GlobalNamespace::PSVR2Helper::__get__rightController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> GlobalNamespace::PSVR2Helper::__get__rightController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0x20>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__defaultPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x28>(this, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::PSVR2Helper::__get__defaultPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x28>(this);
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::PSVR2Helper::__get__defaultPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x28>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>*, 0x48>(this, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>* GlobalNamespace::PSVR2Helper::__get__controllers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>*> GlobalNamespace::PSVR2Helper::__get__controllers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::GlobalNamespace::UnityXRController*>*, 0x48>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__controllersWithRumble(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*, 0x50>(this, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* GlobalNamespace::PSVR2Helper::__get__controllersWithRumble()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*> GlobalNamespace::PSVR2Helper::__get__controllersWithRumble() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*, 0x50>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__timeWhenStartedPlayingHaptic(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PSVR2Helper::__get__timeWhenStartedPlayingHaptic()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::PSVR2Helper::__get__timeWhenStartedPlayingHaptic() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__lastTimeWhenTriggeredHaptic(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PSVR2Helper::__get__lastTimeWhenTriggeredHaptic()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& GlobalNamespace::PSVR2Helper::__get__lastTimeWhenTriggeredHaptic() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__hasInputFocus(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PSVR2Helper::__get__hasInputFocus()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& GlobalNamespace::PSVR2Helper::__get__hasInputFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__maximumHapticFrequencyLimits(::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*, 0x68>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>* GlobalNamespace::PSVR2Helper::__get__maximumHapticFrequencyLimits()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*> GlobalNamespace::PSVR2Helper::__get__maximumHapticFrequencyLimits() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*, 0x68>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_controllersDidChangeReferenceEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x70>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_controllersDidChangeReferenceEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_controllersDidChangeReferenceEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set__hasVrFocus(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PSVR2Helper::__get__hasVrFocus()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& GlobalNamespace::PSVR2Helper::__get__hasVrFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_inputFocusWasCapturedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x80>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_inputFocusWasCapturedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_inputFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x80>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_inputFocusWasReleasedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x88>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_inputFocusWasReleasedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_inputFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x88>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_vrFocusWasCapturedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x90>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_vrFocusWasCapturedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_vrFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x90>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_vrFocusWasReleasedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x98>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_vrFocusWasReleasedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_vrFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x98>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_hmdUnmountedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xa0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_hmdUnmountedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_hmdUnmountedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa0>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_hmdMountedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xa8>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_hmdMountedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_hmdMountedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa8>(this);
}
constexpr void GlobalNamespace::PSVR2Helper::__set_controllersDidDisconnectEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xb0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PSVR2Helper::__get_controllersDidDisconnectEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PSVR2Helper::__get_controllersDidDisconnectEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb0>(this);
}
inline void GlobalNamespace::PSVR2Helper::add_controllersDidChangeReferenceEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_controllersDidChangeReferenceEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::PSVR2Helper::get_hasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::get_hasVrFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::get_isAlwaysWireless()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::VRPlatformSDK GlobalNamespace::PSVR2Helper::get_vrPlatformSDK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRPlatformSDK, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::add_inputFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_inputFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_inputFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_inputFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_vrFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_vrFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_vrFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_vrFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_hmdUnmountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_hmdUnmountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_hmdMountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_hmdMountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_controllersDidDisconnectEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "add_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_controllersDidDisconnectEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "remove_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode  node, ByRef<::UnityEngine::Pose>  poseOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "TryGetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node, poseOffset);
}
inline bool GlobalNamespace::PSVR2Helper::GetNodePose(::UnityEngine::XR::XRNode  nodeType, int32_t  idx, ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, nodeType, idx, pos, rot);
}
inline float_t GlobalNamespace::PSVR2Helper::GetTriggerValue(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PSVR2Helper::GetAnyJoystickMaxAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PSVR2Helper::GetThumbstickValue(::UnityEngine::XR::XRNode  nodeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, nodeType);
}
inline bool GlobalNamespace::PSVR2Helper::GetMenuButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::GetMenuButtonDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::RefreshControllersReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::StopHaptics(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
inline void GlobalNamespace::PSVR2Helper::TriggerHapticPulse(::UnityEngine::XR::XRNode  node, float_t  duration, float_t  strength, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, duration, strength, frequency);
}
inline int32_t GlobalNamespace::PSVR2Helper::GetTRCCompliantHeadsetHapticFrequency(float_t  initialFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "GetTRCCompliantHeadsetHapticFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, initialFrequency);
}
inline void GlobalNamespace::PSVR2Helper::HandleApplicationFocusLost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "HandleApplicationFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::HandleApplicationFocusResumed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "HandleApplicationFocusResumed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice*  inputDevice, ::UnityEngine::InputSystem::InputDeviceChange  inputDeviceChange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "InputDeviceChangeTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputDevice, inputDeviceChange);
}
inline void GlobalNamespace::PSVR2Helper::AddControllerToMap(::UnityEngine::XR::XRNode  forNode, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "AddControllerToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, forNode, device);
}
inline void GlobalNamespace::PSVR2Helper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PSVR2Helper* GlobalNamespace::PSVR2Helper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PSVR2Helper*>());
}
inline void GlobalNamespace::PSVR2Helper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
