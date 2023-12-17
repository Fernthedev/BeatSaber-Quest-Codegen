#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CameraDepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraDepthTextureMode.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CameraDepthTextureMode::*)()>(&::GlobalNamespace::CameraDepthTextureMode::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x20f1204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraDepthTextureMode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CameraDepthTextureMode::*)()>(&::GlobalNamespace::CameraDepthTextureMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f1260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CameraDepthTextureMode::__set__depthTextureMode(::UnityEngine::DepthTextureMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::DepthTextureMode, 0x18>(this, std::forward<::UnityEngine::DepthTextureMode>(value));
}
constexpr ::UnityEngine::DepthTextureMode& GlobalNamespace::CameraDepthTextureMode::__get__depthTextureMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::DepthTextureMode, 0x18>(this);
}
constexpr ::UnityEngine::DepthTextureMode const& GlobalNamespace::CameraDepthTextureMode::__get__depthTextureMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DepthTextureMode, 0x18>(this);
}
inline void GlobalNamespace::CameraDepthTextureMode::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CameraDepthTextureMode* GlobalNamespace::CameraDepthTextureMode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CameraDepthTextureMode*>());
}
inline void GlobalNamespace::CameraDepthTextureMode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
