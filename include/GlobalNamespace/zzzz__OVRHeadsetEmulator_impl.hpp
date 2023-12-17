#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void GlobalNamespace::__OVRHeadsetEmulator__OpMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRHeadsetEmulator__OpMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRHeadsetEmulator__OpMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode::__OVRHeadsetEmulator__OpMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode  GlobalNamespace::__OVRHeadsetEmulator__OpMode::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode  GlobalNamespace::__OVRHeadsetEmulator__OpMode::EditorOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode  GlobalNamespace::__OVRHeadsetEmulator__OpMode::AlwaysOn{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2729f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Update)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2729f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsEmulationActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x272a3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "IsEmulationActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsTweakingPitch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x272a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "IsTweakingPitch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x272a4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_opMode(::GlobalNamespace::__OVRHeadsetEmulator__OpMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRHeadsetEmulator__OpMode, 0x18>(this, std::forward<::GlobalNamespace::__OVRHeadsetEmulator__OpMode>(value));
}
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode& GlobalNamespace::OVRHeadsetEmulator::__get_opMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRHeadsetEmulator__OpMode, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const& GlobalNamespace::OVRHeadsetEmulator::__get_opMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRHeadsetEmulator__OpMode, 0x18>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_resetHmdPoseOnRelease(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseOnRelease()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseOnRelease() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_resetHmdPoseByMiddleMouseButton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseByMiddleMouseButton()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseByMiddleMouseButton() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_activateKeys(::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>& GlobalNamespace::OVRHeadsetEmulator::__get_activateKeys()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*> const& GlobalNamespace::OVRHeadsetEmulator::__get_activateKeys() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>, 0x20>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_pitchKeys(::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>& GlobalNamespace::OVRHeadsetEmulator::__get_pitchKeys()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*> const& GlobalNamespace::OVRHeadsetEmulator::__get_pitchKeys() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>, 0x28>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_manager(::GlobalNamespace::OVRManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRManager*, 0x30>(this, std::forward<::GlobalNamespace::OVRManager*>(value));
}
constexpr ::GlobalNamespace::OVRManager* GlobalNamespace::OVRHeadsetEmulator::__get_manager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRManager*> GlobalNamespace::OVRHeadsetEmulator::__get_manager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRManager*, 0x30>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_lastFrameEmulationActivated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_lastFrameEmulationActivated()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_lastFrameEmulationActivated() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetTranslation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetTranslation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_hasSentEvent(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_hasSentEvent()  {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_hasSentEvent() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_emulatorHasInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRHeadsetEmulator::__get_emulatorHasInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0x55>(this);
}
constexpr bool const& GlobalNamespace::OVRHeadsetEmulator::__get_emulatorHasInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this);
}
constexpr void GlobalNamespace::OVRHeadsetEmulator::__set_previousCursorLockMode(::UnityEngine::CursorLockMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CursorLockMode, 0x58>(this, std::forward<::UnityEngine::CursorLockMode>(value));
}
constexpr ::UnityEngine::CursorLockMode& GlobalNamespace::OVRHeadsetEmulator::__get_previousCursorLockMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CursorLockMode, 0x58>(this);
}
constexpr ::UnityEngine::CursorLockMode const& GlobalNamespace::OVRHeadsetEmulator::__get_previousCursorLockMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CursorLockMode, 0x58>(this);
}
inline void GlobalNamespace::OVRHeadsetEmulator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRHeadsetEmulator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "IsEmulationActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            "IsTweakingPitch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRHeadsetEmulator* GlobalNamespace::OVRHeadsetEmulator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRHeadsetEmulator*>());
}
inline void GlobalNamespace::OVRHeadsetEmulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
