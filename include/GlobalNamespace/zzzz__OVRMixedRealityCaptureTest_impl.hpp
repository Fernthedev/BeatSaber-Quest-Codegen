#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureTest_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureTest_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
constexpr void GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::__OVRMixedRealityCaptureTest__CameraMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode  GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode  GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::OverrideFov{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode  GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode::ThirdPerson{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27b3664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::Initialize)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x27b3714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.UpdateDefaultExternalCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::UpdateDefaultExternalCamera)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x27b3938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "UpdateDefaultExternalCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::Update)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x27b3d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMixedRealityCaptureTest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMixedRealityCaptureTest::*)()>(&::GlobalNamespace::OVRMixedRealityCaptureTest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b4498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__set_inited(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRMixedRealityCaptureTest::__get_inited()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::OVRMixedRealityCaptureTest::__get_inited() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__set_currentMode(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, 0x1c>(this, std::forward<::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode>(value));
}
constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode& GlobalNamespace::OVRMixedRealityCaptureTest::__get_currentMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, 0x1c>(this);
}
constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const& GlobalNamespace::OVRMixedRealityCaptureTest::__get_currentMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__set_defaultExternalCamera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x20>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::OVRMixedRealityCaptureTest::__get_defaultExternalCamera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::OVRMixedRealityCaptureTest::__get_defaultExternalCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x20>(this);
}
constexpr void GlobalNamespace::OVRMixedRealityCaptureTest::__set_defaultFov(::GlobalNamespace::__OVRPlugin__Fovf  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRPlugin__Fovf, 0x28>(this, std::forward<::GlobalNamespace::__OVRPlugin__Fovf>(value));
}
constexpr ::GlobalNamespace::__OVRPlugin__Fovf& GlobalNamespace::OVRMixedRealityCaptureTest::__get_defaultFov()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__Fovf, 0x28>(this);
}
constexpr ::GlobalNamespace::__OVRPlugin__Fovf const& GlobalNamespace::OVRMixedRealityCaptureTest::__get_defaultFov() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRPlugin__Fovf, 0x28>(this);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::UpdateDefaultExternalCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "UpdateDefaultExternalCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRMixedRealityCaptureTest* GlobalNamespace::OVRMixedRealityCaptureTest::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRMixedRealityCaptureTest*>());
}
inline void GlobalNamespace::OVRMixedRealityCaptureTest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMixedRealityCaptureTest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
