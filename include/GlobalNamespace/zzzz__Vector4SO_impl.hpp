#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__Vector4SO_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector4SO.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::Vector4SO::*)()>(&::GlobalNamespace::Vector4SO::get_value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe28b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector4SO*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4SO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Vector4SO::*)()>(&::GlobalNamespace::Vector4SO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe28b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector4SO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Vector4SO::__set__value(::UnityEngine::Vector4  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x18>(this, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::Vector4SO::__get__value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x18>(this);
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::Vector4SO::__get__value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x18>(this);
}
inline ::UnityEngine::Vector4 GlobalNamespace::Vector4SO::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector4SO*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::Vector4SO* GlobalNamespace::Vector4SO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Vector4SO*>());
}
inline void GlobalNamespace::Vector4SO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector4SO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
