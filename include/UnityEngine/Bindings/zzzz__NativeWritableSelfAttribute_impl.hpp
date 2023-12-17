#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeWritableSelfAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeWritableSelfAttribute.set_WritableSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeWritableSelfAttribute::*)(bool)>(&::UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d18488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(),
                            "set_WritableSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeWritableSelfAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeWritableSelfAttribute::*)()>(&::UnityEngine::Bindings::NativeWritableSelfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d18494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Bindings::NativeWritableSelfAttribute::__set__WritableSelf_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Bindings::NativeWritableSelfAttribute::__get__WritableSelf_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& UnityEngine::Bindings::NativeWritableSelfAttribute::__get__WritableSelf_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline void UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(),
                            "set_WritableSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Bindings::NativeWritableSelfAttribute* UnityEngine::Bindings::NativeWritableSelfAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::NativeWritableSelfAttribute*>());
}
inline void UnityEngine::Bindings::NativeWritableSelfAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeWritableSelfAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
