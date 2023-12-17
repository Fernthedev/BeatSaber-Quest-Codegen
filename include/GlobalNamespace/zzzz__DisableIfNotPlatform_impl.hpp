#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableIfNotPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x226c488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableIfNotPlatform::__set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>& GlobalNamespace::DisableIfNotPlatform::__get__whitelistPlatforms()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*> const& GlobalNamespace::DisableIfNotPlatform::__get__whitelistPlatforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>, 0x18>(this);
}
inline void GlobalNamespace::DisableIfNotPlatform::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DisableIfNotPlatform* GlobalNamespace::DisableIfNotPlatform::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableIfNotPlatform*>());
}
inline void GlobalNamespace::DisableIfNotPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
