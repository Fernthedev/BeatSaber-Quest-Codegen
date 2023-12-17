#pragma once
#include "Mono/zzzz__RuntimeRemoteClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeRemoteClassHandle.get_ProxyClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::RuntimeClassHandle (::Mono::RuntimeRemoteClassHandle::*)()>(&::Mono::RuntimeRemoteClassHandle::get_ProxyClass)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x241265c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeRemoteClassHandle>::get(),
                            "get_ProxyClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::RuntimeRemoteClassHandle::__set_value(::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>& Mono::RuntimeRemoteClassHandle::__get_value()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass> const& Mono::RuntimeRemoteClassHandle::__get_value() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::Mono::RuntimeClassHandle Mono::RuntimeRemoteClassHandle::get_ProxyClass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeRemoteClassHandle>::get(),
                            "get_ProxyClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::RuntimeClassHandle, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::RuntimeRemoteClassHandle::RuntimeRemoteClassHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>  value) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->value = value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
