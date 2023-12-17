#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCubemapCapture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27a7c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.TriggerCubemapCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, int32_t, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x27a7cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "TriggerCubemapCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.RenderIntoCubemap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Cubemap*)>(&::GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x27a7f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "RenderIntoCubemap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture.SaveCubemapCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Cubemap*, ::StringW)>(&::GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x27a84e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "SaveCubemapCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCubemapCapture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCubemapCapture::*)()>(&::GlobalNamespace::OVRCubemapCapture::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27a8c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRCubemapCapture::__set_autoTriggerAfterLaunch(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerAfterLaunch()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerAfterLaunch() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_autoTriggerDelay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerDelay()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_autoTriggerElapse(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerElapse()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::OVRCubemapCapture::__get_autoTriggerElapse() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_triggeredByKey(::UnityEngine::KeyCode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::KeyCode, 0x24>(this, std::forward<::UnityEngine::KeyCode>(value));
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::OVRCubemapCapture::__get_triggeredByKey()  {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x24>(this);
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::OVRCubemapCapture::__get_triggeredByKey() const {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x24>(this);
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_pathName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::OVRCubemapCapture::__get_pathName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::OVRCubemapCapture::__get_pathName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::OVRCubemapCapture::__set_cubemapSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRCubemapCapture::__get_cubemapSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::OVRCubemapCapture::__get_cubemapSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
inline void GlobalNamespace::OVRCubemapCapture::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param cubemapSize: int32_t (default: static_cast<int32_t>(0x800))
/// @param pathName: ::StringW (default: csnull)
inline void GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture(::UnityEngine::Vector3  capturePos, int32_t  cubemapSize, ::StringW  pathName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "TriggerCubemapCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, capturePos, cubemapSize, pathName);
}
inline void GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap(::UnityEngine::Camera*  ownerCamera, ::UnityEngine::Cubemap*  outCubemap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "RenderIntoCubemap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ownerCamera, outCubemap);
}
/// @param pathName: ::StringW (default: csnull)
inline bool GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture(::UnityEngine::Cubemap*  cubemap, ::StringW  pathName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            "SaveCubemapCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cubemap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cubemap, pathName);
}
inline ::GlobalNamespace::OVRCubemapCapture* GlobalNamespace::OVRCubemapCapture::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRCubemapCapture*>());
}
inline void GlobalNamespace::OVRCubemapCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCubemapCapture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
