#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StaticEnvironmentLights_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23b76fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b7790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StaticEnvironmentLights::__set__lightColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& GlobalNamespace::StaticEnvironmentLights::__get__lightColors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& GlobalNamespace::StaticEnvironmentLights::__get__lightColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x18>(this);
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__set__materials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>& GlobalNamespace::StaticEnvironmentLights::__get__materials()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*> const& GlobalNamespace::StaticEnvironmentLights::__get__materials() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>, 0x20>(this);
}
inline void GlobalNamespace::StaticEnvironmentLights::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StaticEnvironmentLights* GlobalNamespace::StaticEnvironmentLights::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StaticEnvironmentLights*>());
}
inline void GlobalNamespace::StaticEnvironmentLights::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
