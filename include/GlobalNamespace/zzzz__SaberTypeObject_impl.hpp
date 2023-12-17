#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberTypeObject.get_saberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SaberType (::GlobalNamespace::SaberTypeObject::*)()>(&::GlobalNamespace::SaberTypeObject::get_saberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(),
                            "get_saberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberTypeObject::*)()>(&::GlobalNamespace::SaberTypeObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22647a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberTypeObject::__set__saberType(::GlobalNamespace::SaberType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberType, 0x18>(this, std::forward<::GlobalNamespace::SaberType>(value));
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SaberTypeObject::__get__saberType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x18>(this);
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SaberTypeObject::__get__saberType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x18>(this);
}
inline ::GlobalNamespace::SaberType GlobalNamespace::SaberTypeObject::get_saberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(),
                            "get_saberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SaberTypeObject* GlobalNamespace::SaberTypeObject::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberTypeObject*>());
}
inline void GlobalNamespace::SaberTypeObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
