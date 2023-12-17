#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabProviderResource_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabProviderResource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabProviderResource::*)(::StringW)>(&::Zenject::PrefabProviderResource::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f09c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabProviderResource.GetPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::Zenject::PrefabProviderResource::*)()>(&::Zenject::PrefabProviderResource::GetPrefab)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2f09c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IPrefabProvider"
constexpr  Zenject::PrefabProviderResource::operator ::Zenject::IPrefabProvider*() noexcept {
return static_cast<::Zenject::IPrefabProvider*>(static_cast<void*>(this));
}
constexpr void Zenject::PrefabProviderResource::__set__resourcePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Zenject::PrefabProviderResource::__get__resourcePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Zenject::PrefabProviderResource::__get__resourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::Zenject::PrefabProviderResource* Zenject::PrefabProviderResource::New_ctor(::StringW  resourcePath)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PrefabProviderResource*>(resourcePath));
}
inline void Zenject::PrefabProviderResource::_ctor(::StringW  resourcePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, resourcePath);
}
inline ::UnityEngine::Object* Zenject::PrefabProviderResource::GetPrefab()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProviderResource*>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
