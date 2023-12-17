#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
constexpr void Mono::__RuntimeStructs__RemoteClass::__set_default_vtable(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Mono::__RuntimeStructs__RemoteClass::__get_default_vtable()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& Mono::__RuntimeStructs__RemoteClass::__get_default_vtable() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__RemoteClass::__set_xdomain_vtable(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Mono::__RuntimeStructs__RemoteClass::__get_xdomain_vtable()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& Mono::__RuntimeStructs__RemoteClass::__get_xdomain_vtable() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__RemoteClass::__set_proxy_class(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>& Mono::__RuntimeStructs__RemoteClass::__get_proxy_class()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> const& Mono::__RuntimeStructs__RemoteClass::__get_proxy_class() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__RemoteClass::__set_proxy_class_name(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Mono::__RuntimeStructs__RemoteClass::__get_proxy_class_name()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& Mono::__RuntimeStructs__RemoteClass::__get_proxy_class_name() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__RemoteClass::__set_interface_count(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& Mono::__RuntimeStructs__RemoteClass::__get_interface_count()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& Mono::__RuntimeStructs__RemoteClass::__get_interface_count() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "default_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xdomain_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "proxy_class", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "proxy_class_name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::__RuntimeStructs__RemoteClass::__RuntimeStructs__RemoteClass(::cordl_internals::intptr_t  default_vtable, ::cordl_internals::intptr_t  xdomain_vtable, ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  proxy_class, ::cordl_internals::intptr_t  proxy_class_name, uint32_t  interface_count) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->default_vtable = default_vtable;
this->xdomain_vtable = xdomain_vtable;
this->proxy_class = proxy_class;
this->proxy_class_name = proxy_class_name;
this->interface_count = interface_count;
}
constexpr void Mono::__RuntimeStructs__GenericParamInfo::__set_pklass(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>(value));
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>& Mono::__RuntimeStructs__GenericParamInfo::__get_pklass()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> const& Mono::__RuntimeStructs__GenericParamInfo::__get_pklass() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__GenericParamInfo::__set_name(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Mono::__RuntimeStructs__GenericParamInfo::__get_name()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& Mono::__RuntimeStructs__GenericParamInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__GenericParamInfo::__set_flags(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& Mono::__RuntimeStructs__GenericParamInfo::__get_flags()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& Mono::__RuntimeStructs__GenericParamInfo::__get_flags() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__GenericParamInfo::__set_token(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& Mono::__RuntimeStructs__GenericParamInfo::__get_token()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& Mono::__RuntimeStructs__GenericParamInfo::__get_token() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__GenericParamInfo::__set_constraints(::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>>(value));
}
constexpr ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>& Mono::__RuntimeStructs__GenericParamInfo::__get_constraints()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>> const& Mono::__RuntimeStructs__GenericParamInfo::__get_constraints() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "pklass", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "constraints", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::__RuntimeStructs__GenericParamInfo::__RuntimeStructs__GenericParamInfo(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  pklass, ::cordl_internals::intptr_t  name, uint16_t  flags, uint32_t  token, ::cordl_internals::Ptr<::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>>  constraints) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->pklass = pklass;
this->name = name;
this->flags = flags;
this->token = token;
this->constraints = constraints;
}
constexpr void Mono::__RuntimeStructs__GPtrArray::__set_data(::cordl_internals::Ptr<::cordl_internals::intptr_t>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::cordl_internals::intptr_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::cordl_internals::intptr_t>>(value));
}
constexpr ::cordl_internals::Ptr<::cordl_internals::intptr_t>& Mono::__RuntimeStructs__GPtrArray::__get_data()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::cordl_internals::intptr_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::cordl_internals::intptr_t> const& Mono::__RuntimeStructs__GPtrArray::__get_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::cordl_internals::intptr_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::__RuntimeStructs__GPtrArray::__set_len(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::__RuntimeStructs__GPtrArray::__get_len()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::__RuntimeStructs__GPtrArray::__get_len() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "data", ty: "::cordl_internals::Ptr<::cordl_internals::intptr_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::__RuntimeStructs__GPtrArray::__RuntimeStructs__GPtrArray(::cordl_internals::Ptr<::cordl_internals::intptr_t>  data, int32_t  len) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->data = data;
this->len = len;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
