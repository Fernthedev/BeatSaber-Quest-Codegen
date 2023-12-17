#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOnPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableOnPlatform.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableOnPlatform::*)()>(&::GlobalNamespace::DisableOnPlatform::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x226c564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableOnPlatform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableOnPlatform::*)()>(&::GlobalNamespace::DisableOnPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableOnPlatform::__set__disabledPlatforms(::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>& GlobalNamespace::DisableOnPlatform::__get__disabledPlatforms()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*> const& GlobalNamespace::DisableOnPlatform::__get__disabledPlatforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RuntimePlatform,::Array<::UnityEngine::RuntimePlatform>*>, 0x18>(this);
}
inline void GlobalNamespace::DisableOnPlatform::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DisableOnPlatform* GlobalNamespace::DisableOnPlatform::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableOnPlatform*>());
}
inline void GlobalNamespace::DisableOnPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableOnPlatform*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
