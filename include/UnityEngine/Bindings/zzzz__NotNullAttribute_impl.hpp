#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NotNullAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NotNullAttribute.set_Exception
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NotNullAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NotNullAttribute::set_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d18878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(),
                            "set_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NotNullAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NotNullAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NotNullAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d18880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Bindings::NotNullAttribute::__set__Exception_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Bindings::NotNullAttribute::__get__Exception_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::Bindings::NotNullAttribute::__get__Exception_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline void UnityEngine::Bindings::NotNullAttribute::set_Exception(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(),
                            "set_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param exception: ::StringW (default: u"ArgumentNullException")
inline ::UnityEngine::Bindings::NotNullAttribute* UnityEngine::Bindings::NotNullAttribute::New_ctor(::StringW  exception)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::NotNullAttribute*>(exception));
}
/// @param exception: ::StringW (default: u"ArgumentNullException")
inline void UnityEngine::Bindings::NotNullAttribute::_ctor(::StringW  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NotNullAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exception);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
