#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDebugHeadController_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRDebugHeadController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDebugHeadController::*)()>(&::GlobalNamespace::OVRDebugHeadController::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x271af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDebugHeadController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDebugHeadController::*)()>(&::GlobalNamespace::OVRDebugHeadController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x271b068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDebugHeadController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDebugHeadController::*)()>(&::GlobalNamespace::OVRDebugHeadController::Update)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x271b06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRDebugHeadController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRDebugHeadController::*)()>(&::GlobalNamespace::OVRDebugHeadController::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x271b590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRDebugHeadController::__set_AllowPitchLook(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRDebugHeadController::__get_AllowPitchLook()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::OVRDebugHeadController::__get_AllowPitchLook() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_AllowYawLook(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRDebugHeadController::__get_AllowYawLook()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& GlobalNamespace::OVRDebugHeadController::__get_AllowYawLook() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_InvertPitch(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRDebugHeadController::__get_InvertPitch()  {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr bool const& GlobalNamespace::OVRDebugHeadController::__get_InvertPitch() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_GamePad_PitchDegreesPerSec(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRDebugHeadController::__get_GamePad_PitchDegreesPerSec()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::OVRDebugHeadController::__get_GamePad_PitchDegreesPerSec() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_GamePad_YawDegreesPerSec(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRDebugHeadController::__get_GamePad_YawDegreesPerSec()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::OVRDebugHeadController::__get_GamePad_YawDegreesPerSec() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_AllowMovement(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRDebugHeadController::__get_AllowMovement()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::OVRDebugHeadController::__get_AllowMovement() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_ForwardSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRDebugHeadController::__get_ForwardSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::OVRDebugHeadController::__get_ForwardSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_StrafeSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRDebugHeadController::__get_StrafeSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::OVRDebugHeadController::__get_StrafeSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::OVRDebugHeadController::__set_CameraRig(::GlobalNamespace::OVRCameraRig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRCameraRig*, 0x30>(this, std::forward<::GlobalNamespace::OVRCameraRig*>(value));
}
constexpr ::GlobalNamespace::OVRCameraRig* GlobalNamespace::OVRDebugHeadController::__get_CameraRig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> GlobalNamespace::OVRDebugHeadController::__get_CameraRig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRCameraRig*, 0x30>(this);
}
inline void GlobalNamespace::OVRDebugHeadController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRDebugHeadController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRDebugHeadController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRDebugHeadController* GlobalNamespace::OVRDebugHeadController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRDebugHeadController*>());
}
inline void GlobalNamespace::OVRDebugHeadController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDebugHeadController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
