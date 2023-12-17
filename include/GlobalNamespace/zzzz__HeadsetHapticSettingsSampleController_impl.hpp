#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadsetHapticSettingsSampleController_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22ab390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22ab428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22ab4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.HandleHapticSettingValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22ab560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "HandleHapticSettingValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22ab5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__formattedFloatListSettingsController(::GlobalNamespace::FormattedFloatListSettingsController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x18>(this, std::forward<::GlobalNamespace::FormattedFloatListSettingsController*>(value));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::HeadsetHapticSettingsSampleController::__get__formattedFloatListSettingsController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> GlobalNamespace::HeadsetHapticSettingsSampleController::__get__formattedFloatListSettingsController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x18>(this);
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__hapticSamplePlayDelay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSamplePlayDelay()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSamplePlayDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__hapticSampleDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSampleDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticSampleDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__headHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x28>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::HeadsetHapticSettingsSampleController::__get__headHapticPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::HeadsetHapticSettingsSampleController::__get__headHapticPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x28>(this);
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x30>(this, std::forward<::GlobalNamespace::HapticFeedbackManager*>(value));
}
constexpr ::GlobalNamespace::HapticFeedbackManager* GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticFeedbackManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> GlobalNamespace::HeadsetHapticSettingsSampleController::__get__hapticFeedbackManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x30>(this);
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__nextHapticSamplePlayTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__set__nextHapticSamplePlayTimeEnd(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTimeEnd()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__get__nextHapticSamplePlayTimeEnd() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController*  controller, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            "HandleHapticSettingValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, controller, newValue);
}
inline ::GlobalNamespace::HeadsetHapticSettingsSampleController* GlobalNamespace::HeadsetHapticSettingsSampleController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HeadsetHapticSettingsSampleController*>());
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadsetHapticSettingsSampleController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
