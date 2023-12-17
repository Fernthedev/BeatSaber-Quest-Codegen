#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
constexpr void GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::__UnityXRHelper__VRControllerManufacturerName(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Undefined{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::HTC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Oculus{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Valve{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Microsoft{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Unknown{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fd71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_inputFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fd7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fd854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_inputFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fd8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fd98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_vrFocusWasCapturedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fda28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_vrFocusWasReleasedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_hmdUnmountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_hmdMountedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fddd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fde6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_controllersDidChangeReferenceEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_controllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::add_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fdfa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_controllersDidDisconnectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(&::GlobalNamespace::UnityXRHelper::remove_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20fe040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_hasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.set_hasVrFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::set_hasVrFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20fe0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_isAlwaysWireless
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_vrPlatformSDK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRPlatformSDK (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_loggerPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_loggerPrefix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x20fe108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_loggerPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.set_userPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::set_userPresence)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20fe148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "set_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::Start)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x20fe1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnTrackingOriginUpdated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRInputSubsystem*)>(&::GlobalNamespace::UnityXRHelper::OnTrackingOriginUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20fe69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnTrackingOriginUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnboundaryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRInputSubsystem*)>(&::GlobalNamespace::UnityXRHelper::OnboundaryChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20fe6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnboundaryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x20fe6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnUserPresenceCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::GlobalNamespace::UnityXRHelper::OnUserPresenceCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnUserPresenceCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnUserPresenceStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::GlobalNamespace::UnityXRHelper::OnUserPresenceStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnUserPresenceStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnApplicationPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::OnApplicationPause)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20fe92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnPauseGamePerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::GlobalNamespace::UnityXRHelper::OnPauseGamePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20fe960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnPauseGamePerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnPauseGameCancelled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::GlobalNamespace::UnityXRHelper::OnPauseGameCancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20fe96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnPauseGameCancelled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleNewXRNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNodeState)>(&::GlobalNamespace::UnityXRHelper::HandleNewXRNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20fe974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "HandleNewXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.UpdateManufacturerOnNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20fe604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "UpdateManufacturerOnNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleRemovedXRNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNodeState)>(&::GlobalNamespace::UnityXRHelper::HandleRemovedXRNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20fe998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "HandleRemovedXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.ControllerFromNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UnityXRController* (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::ControllerFromNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20fe9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "ControllerFromNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TriggerHapticPulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, float_t, float_t, float_t)>(&::GlobalNamespace::UnityXRHelper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x20fea24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::StopHaptics)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x20febb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TryGetPoseOffsetForNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, ByRef<::UnityEngine::Pose>)>(&::GlobalNamespace::UnityXRHelper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x20fed24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "TryGetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetPoseOffsetForManufacturer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::UnityXRHelper::*)(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName)>(&::GlobalNamespace::UnityXRHelper::GetPoseOffsetForManufacturer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x20fee0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetPoseOffsetForManufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetNodePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&::GlobalNamespace::UnityXRHelper::GetNodePose)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x20fef5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetAnyJoystickMaxAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20ff1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetTriggerValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::GetTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetThumbstickValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::UnityXRHelper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20ff1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetMenuButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetMenuButtonDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.RefreshControllersReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20fe6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.ReadHeadPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&::GlobalNamespace::UnityXRHelper::ReadHeadPose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20ff150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "ReadHeadPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr  GlobalNamespace::UnityXRHelper::operator ::GlobalNamespace::IVRPlatformHelper*() noexcept {
return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr  GlobalNamespace::UnityXRHelper::operator ::GlobalNamespace::IVerboseLogger*() noexcept {
return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::UnityXRHelper::__set_inputFocusWasCapturedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_inputFocusWasCapturedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_inputFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_inputFocusWasReleasedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_inputFocusWasReleasedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_inputFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_vrFocusWasCapturedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x28>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_vrFocusWasCapturedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_vrFocusWasCapturedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x28>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_vrFocusWasReleasedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x30>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_vrFocusWasReleasedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_vrFocusWasReleasedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x30>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_hmdUnmountedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x38>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_hmdUnmountedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_hmdUnmountedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_hmdMountedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x40>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_hmdMountedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_hmdMountedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x40>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_controllersDidChangeReferenceEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x48>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_controllersDidChangeReferenceEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_controllersDidChangeReferenceEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set_controllersDidDisconnectEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x50>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::UnityXRHelper::__get_controllersDidDisconnectEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::UnityXRHelper::__get_controllersDidDisconnectEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x50>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__hasVrFocus_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__get__hasVrFocus_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__get__hasVrFocus_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__oculusOffsetPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x5c>(this, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::UnityXRHelper::__get__oculusOffsetPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x5c>(this);
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::UnityXRHelper::__get__oculusOffsetPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x5c>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__valveIndexOffsetPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x78>(this, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::UnityXRHelper::__get__valveIndexOffsetPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x78>(this);
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::UnityXRHelper::__get__valveIndexOffsetPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x78>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__htcViveOffsetPose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x94>(this, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::UnityXRHelper::__get__htcViveOffsetPose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x94>(this);
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::UnityXRHelper::__get__htcViveOffsetPose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x94>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__leftControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0xb0>(this, std::forward<::GlobalNamespace::__UnityXRController__Configuration*>(value));
}
constexpr ::GlobalNamespace::__UnityXRController__Configuration* GlobalNamespace::UnityXRHelper::__get__leftControllerConfiguration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> GlobalNamespace::UnityXRHelper::__get__leftControllerConfiguration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0xb0>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__rightControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0xb8>(this, std::forward<::GlobalNamespace::__UnityXRController__Configuration*>(value));
}
constexpr ::GlobalNamespace::__UnityXRController__Configuration* GlobalNamespace::UnityXRHelper::__get__rightControllerConfiguration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> GlobalNamespace::UnityXRHelper::__get__rightControllerConfiguration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UnityXRController__Configuration*, 0xb8>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__userPresenceActionReference(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xc0>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* GlobalNamespace::UnityXRHelper::__get__userPresenceActionReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> GlobalNamespace::UnityXRHelper::__get__userPresenceActionReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xc0>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headPositionActionReference(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xc8>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* GlobalNamespace::UnityXRHelper::__get__headPositionActionReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> GlobalNamespace::UnityXRHelper::__get__headPositionActionReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xc8>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headOrientationActionReference(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xd0>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* GlobalNamespace::UnityXRHelper::__get__headOrientationActionReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> GlobalNamespace::UnityXRHelper::__get__headOrientationActionReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xd0>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__pauseGameActionReference(::UnityEngine::InputSystem::InputActionReference*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xd8>(this, std::forward<::UnityEngine::InputSystem::InputActionReference*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionReference* GlobalNamespace::UnityXRHelper::__get__pauseGameActionReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> GlobalNamespace::UnityXRHelper::__get__pauseGameActionReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionReference*, 0xd8>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__leftController(::GlobalNamespace::UnityXRController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::UnityXRController*, 0xe0>(this, std::forward<::GlobalNamespace::UnityXRController*>(value));
}
constexpr ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::__get__leftController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnityXRController*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> GlobalNamespace::UnityXRHelper::__get__leftController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnityXRController*, 0xe0>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__rightController(::GlobalNamespace::UnityXRController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::UnityXRController*, 0xe8>(this, std::forward<::GlobalNamespace::UnityXRController*>(value));
}
constexpr ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::__get__rightController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnityXRController*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> GlobalNamespace::UnityXRHelper::__get__rightController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UnityXRController*, 0xe8>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headPositionAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0xf0>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* GlobalNamespace::UnityXRHelper::__get__headPositionAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> GlobalNamespace::UnityXRHelper::__get__headPositionAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0xf0>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__headOrientationAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0xf8>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* GlobalNamespace::UnityXRHelper::__get__headOrientationAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> GlobalNamespace::UnityXRHelper::__get__headOrientationAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0xf8>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__userPresenceAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0x100>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* GlobalNamespace::UnityXRHelper::__get__userPresenceAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> GlobalNamespace::UnityXRHelper::__get__userPresenceAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x100>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__pauseGameAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0x108>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* GlobalNamespace::UnityXRHelper::__get__pauseGameAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> GlobalNamespace::UnityXRHelper::__get__pauseGameAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x108>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__scrollingLastFrame(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x110>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__get__scrollingLastFrame()  {
return ::cordl_internals::getInstanceField<bool, 0x110>(this);
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__get__scrollingLastFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x110>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__userPresence(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x111>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__get__userPresence()  {
return ::cordl_internals::getInstanceField<bool, 0x111>(this);
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__get__userPresence() const {
return ::cordl_internals::getInstanceField<bool, 0x111>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__isPausePressed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x112>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__get__isPausePressed()  {
return ::cordl_internals::getInstanceField<bool, 0x112>(this);
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__get__isPausePressed() const {
return ::cordl_internals::getInstanceField<bool, 0x112>(this);
}
constexpr void GlobalNamespace::UnityXRHelper::__set__wasPausePressedThisFrame(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x113>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__get__wasPausePressedThisFrame()  {
return ::cordl_internals::getInstanceField<bool, 0x113>(this);
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__get__wasPausePressedThisFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x113>(this);
}
inline void GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_inputFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_inputFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_vrFocusWasCapturedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_vrFocusWasReleasedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_hmdUnmountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_hmdMountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_hmdMountedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_controllersDidChangeReferenceEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_controllersDidDisconnectEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "add_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_controllersDidDisconnectEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "remove_controllersDidDisconnectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRHelper::get_hasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_hasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::get_hasVrFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::set_hasVrFocus(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "set_hasVrFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRHelper::get_isAlwaysWireless()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_isAlwaysWireless",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::VRPlatformSDK GlobalNamespace::UnityXRHelper::get_vrPlatformSDK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_vrPlatformSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRPlatformSDK, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnityXRHelper::get_loggerPrefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "get_loggerPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::set_userPresence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "set_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::OnTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem*  inputSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnTrackingOriginUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputSystem);
}
inline void GlobalNamespace::UnityXRHelper::OnboundaryChanged(::UnityEngine::XR::XRInputSubsystem*  inputSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnboundaryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inputSystem);
}
inline void GlobalNamespace::UnityXRHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::OnUserPresenceCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnUserPresenceCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::OnUserPresenceStarted(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnUserPresenceStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::OnApplicationPause(bool  pauseStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnApplicationPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::UnityXRHelper::OnPauseGamePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnPauseGamePerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::OnPauseGameCancelled(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "OnPauseGameCancelled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::HandleNewXRNode(::UnityEngine::XR::XRNodeState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "HandleNewXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline void GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "UpdateManufacturerOnNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
inline void GlobalNamespace::UnityXRHelper::HandleRemovedXRNode(::UnityEngine::XR::XRNodeState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "HandleRemovedXRNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::ControllerFromNode(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "ControllerFromNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityXRController*, false>(*this, ___internal_method, node);
}
inline void GlobalNamespace::UnityXRHelper::TriggerHapticPulse(::UnityEngine::XR::XRNode  node, float_t  duration, float_t  strength, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, duration, strength, frequency);
}
inline void GlobalNamespace::UnityXRHelper::StopHaptics(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode  node, ByRef<::UnityEngine::Pose>  poseOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "TryGetPoseOffsetForNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node, poseOffset);
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::GetPoseOffsetForManufacturer(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName  manufacturerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetPoseOffsetForManufacturer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(*this, ___internal_method, manufacturerName);
}
inline bool GlobalNamespace::UnityXRHelper::GetNodePose(::UnityEngine::XR::XRNode  nodeType, int32_t  idx, ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetNodePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, nodeType, idx, pos, rot);
}
inline ::UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetAnyJoystickMaxAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::UnityXRHelper::GetTriggerValue(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetTriggerValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetThumbstickValue(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetThumbstickValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::GetMenuButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::GetMenuButtonDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "GetMenuButtonDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::RefreshControllersReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "RefreshControllersReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::ReadHeadPose(ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "ReadHeadPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos, rot);
}
inline void GlobalNamespace::UnityXRHelper::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::UnityXRHelper* GlobalNamespace::UnityXRHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UnityXRHelper*>());
}
inline void GlobalNamespace::UnityXRHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
