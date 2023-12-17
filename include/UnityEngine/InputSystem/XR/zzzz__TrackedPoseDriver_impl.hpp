#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
constexpr void UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::__TrackedPoseDriver__TrackingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType  UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::RotationAndPosition{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType  UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::RotationOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType  UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType::PositionOnly{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::__TrackedPoseDriver__UpdateType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType  UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::UpdateAndBeforeRender{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType  UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::Update{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType  UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType::BeforeRender{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_trackingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_updateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_updateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ac5d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac5d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ac6100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac6114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ac6478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "BindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ac5f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "BindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ac62d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "BindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ac6490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnbindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2ac5e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnbindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2ac6180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnbindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionPerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac64a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnPositionPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ac6508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnPositionCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationPerformed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac6560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnRotationPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ac65c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnRotationCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac6610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ac6734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ac67e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac689c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UpdateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ac6908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ac6970;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ac698c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.SetLocalTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ac69ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.HasStereoCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac667c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "HasStereoCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.PerformUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ac6a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac6a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac6aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac6ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac6af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac6b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac6b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac6b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ac6bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::InputSystem::XR::TrackedPoseDriver::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_TrackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, 0x18>(this, std::forward<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>(value));
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_TrackingType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, 0x18>(this);
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_TrackingType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_UpdateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, 0x1c>(this, std::forward<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>(value));
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_UpdateType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, 0x1c>(this);
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_UpdateType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, 0x1c>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x20>(this, std::forward<::UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionInput()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x20>(this);
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionInput() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x38>(this, std::forward<::UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationInput()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x38>(this);
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationInput() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionProperty, 0x38>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_CurrentPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_CurrentRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x5c>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x5c>(this);
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x5c>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationBound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationBound()  {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationBound() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionBound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6d>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionBound()  {
return ::cordl_internals::getInstanceField<bool, 0x6d>(this);
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionBound() const {
return ::cordl_internals::getInstanceField<bool, 0x6d>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0x70>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x70>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0x78>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x78>(this);
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_HasMigratedActions(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_HasMigratedActions()  {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_HasMigratedActions() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_positionInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_rotationInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "BindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "BindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "BindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnbindActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnbindPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnbindRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnPositionPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnPositionCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnRotationPerformed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnRotationCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UpdateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "OnBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3  newPosition, ::UnityEngine::Quaternion  newRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "SetLocalTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newPosition, newRotation);
}
inline bool UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "HasStereoCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "PerformUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction(::UnityEngine::InputSystem::InputAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_positionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "get_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction(::UnityEngine::InputSystem::InputAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "set_rotationAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* UnityEngine::InputSystem::XR::TrackedPoseDriver::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>());
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
