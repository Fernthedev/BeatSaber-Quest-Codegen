#pragma once
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
constexpr void GlobalNamespace::__OVREyeGaze__EyeId::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVREyeGaze__EyeId::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVREyeGaze__EyeId::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVREyeGaze__EyeId::__OVREyeGaze__EyeId(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVREyeGaze__EyeId  GlobalNamespace::__OVREyeGaze__EyeId::Left{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVREyeGaze__EyeId  GlobalNamespace::__OVREyeGaze__EyeId::Right{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__OVREyeGaze__EyeTrackingMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVREyeGaze__EyeTrackingMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVREyeGaze__EyeTrackingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode::__OVREyeGaze__EyeTrackingMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode  GlobalNamespace::__OVREyeGaze__EyeTrackingMode::HeadSpace{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode  GlobalNamespace::__OVREyeGaze__EyeTrackingMode::WorldSpace{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode  GlobalNamespace::__OVREyeGaze__EyeTrackingMode::TrackingSpace{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.get_EyeTrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x271c408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "get_EyeTrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.get_Confidence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::get_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271c458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "get_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.set_Confidence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)(float_t)>(&::GlobalNamespace::OVREyeGaze::set_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271c460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "set_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x271c468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x271c4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x271c76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnPermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)(::StringW)>(&::GlobalNamespace::OVREyeGaze::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x271c8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.StartEyeTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::StartEyeTracking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x271c7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "StartEyeTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x271c91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x271c9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x271c9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.CalculateEyeRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVREyeGaze::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::OVREyeGaze::CalculateEyeRotation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x271cbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "CalculateEyeRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze.PrepareHeadDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::PrepareHeadDirection)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x271c4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "PrepareHeadDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVREyeGaze._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVREyeGaze::*)()>(&::GlobalNamespace::OVREyeGaze::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x271cd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVREyeGaze::__set_Eye(::GlobalNamespace::__OVREyeGaze__EyeId  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVREyeGaze__EyeId, 0x18>(this, std::forward<::GlobalNamespace::__OVREyeGaze__EyeId>(value));
}
constexpr ::GlobalNamespace::__OVREyeGaze__EyeId& GlobalNamespace::OVREyeGaze::__get_Eye()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREyeGaze__EyeId, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVREyeGaze__EyeId const& GlobalNamespace::OVREyeGaze::__get_Eye() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREyeGaze__EyeId, 0x18>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__Confidence_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVREyeGaze::__get__Confidence_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::OVREyeGaze::__get__Confidence_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ConfidenceThreshold(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVREyeGaze::__get_ConfidenceThreshold()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::OVREyeGaze::__get_ConfidenceThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ApplyPosition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVREyeGaze::__get_ApplyPosition()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::OVREyeGaze::__get_ApplyPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ApplyRotation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVREyeGaze::__get_ApplyRotation()  {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr bool const& GlobalNamespace::OVREyeGaze::__get_ApplyRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__currentEyeGazesState(::GlobalNamespace::__OVRPlugin__EyeGazesState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__EyeGazesState, 0x28>(this, std::forward<::GlobalNamespace::__OVRPlugin__EyeGazesState>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__EyeGazesState& GlobalNamespace::OVREyeGaze::__get__currentEyeGazesState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__EyeGazesState, 0x28>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__EyeGazesState const& GlobalNamespace::OVREyeGaze::__get__currentEyeGazesState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__EyeGazesState, 0x28>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ReferenceFrame(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x38>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVREyeGaze::__get_ReferenceFrame()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVREyeGaze::__get_ReferenceFrame() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_TrackingMode(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, 0x40>(this, std::forward<::GlobalNamespace::__OVREyeGaze__EyeTrackingMode>(value));
}
constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode& GlobalNamespace::OVREyeGaze::__get_TrackingMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, 0x40>(this);
}
constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const& GlobalNamespace::OVREyeGaze::__get_TrackingMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, 0x40>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__initialRotationOffset(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x44>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVREyeGaze::__get__initialRotationOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x44>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVREyeGaze::__get__initialRotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x44>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__viewTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x58>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVREyeGaze::__get__viewTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVREyeGaze::__get__viewTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__onPermissionGranted(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::StringW>*, 0x60>(this, std::forward<::System::Action_1<::StringW>*>(value));
}
constexpr ::System::Action_1<::StringW>* GlobalNamespace::OVREyeGaze::__get__onPermissionGranted()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::StringW>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> GlobalNamespace::OVREyeGaze::__get__onPermissionGranted() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::StringW>*, 0x60>(this);
}
inline void GlobalNamespace::OVREyeGaze::setStaticF__trackingInstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVREyeGaze::getStaticF__trackingInstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get>();
}
inline bool GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "get_EyeTrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::OVREyeGaze::get_Confidence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "get_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::set_Confidence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "set_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVREyeGaze::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnPermissionGranted(::StringW  permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, permissionId);
}
inline bool GlobalNamespace::OVREyeGaze::StartEyeTracking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "StartEyeTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVREyeGaze::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVREyeGaze::CalculateEyeRotation(::UnityEngine::Quaternion  eyeRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "CalculateEyeRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method, eyeRotation);
}
inline void GlobalNamespace::OVREyeGaze::PrepareHeadDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            "PrepareHeadDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVREyeGaze* GlobalNamespace::OVREyeGaze::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVREyeGaze*>());
}
inline void GlobalNamespace::OVREyeGaze::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREyeGaze*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr ::GlobalNamespace::__OVRPermissionsRequester__Permission  GlobalNamespace::OVREyeGaze::EyeTrackingPermission{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
