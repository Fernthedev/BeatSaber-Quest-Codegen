#pragma once
#include "System/Reflection/zzzz__MonoPropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyAttributes_def.hpp"
constexpr void System::Reflection::MonoPropertyInfo::__set_parent(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Reflection::MonoPropertyInfo::__get_parent()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Reflection::MonoPropertyInfo::__get_parent() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Reflection::MonoPropertyInfo::__set_declaring_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Reflection::MonoPropertyInfo::__get_declaring_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Reflection::MonoPropertyInfo::__get_declaring_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Reflection::MonoPropertyInfo::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Reflection::MonoPropertyInfo::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Reflection::MonoPropertyInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Reflection::MonoPropertyInfo::__set_get_method(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodInfo*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Reflection::MethodInfo*>(value));
}
constexpr ::System::Reflection::MethodInfo* System::Reflection::MonoPropertyInfo::__get_get_method()  {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> System::Reflection::MonoPropertyInfo::__get_get_method() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Reflection::MonoPropertyInfo::__set_set_method(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodInfo*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Reflection::MethodInfo*>(value));
}
constexpr ::System::Reflection::MethodInfo* System::Reflection::MonoPropertyInfo::__get_set_method()  {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> System::Reflection::MonoPropertyInfo::__get_set_method() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Reflection::MonoPropertyInfo::__set_attrs(::System::Reflection::PropertyAttributes  value)  {
::cordl_internals::setInstanceField<::System::Reflection::PropertyAttributes, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Reflection::PropertyAttributes>(value));
}
constexpr ::System::Reflection::PropertyAttributes& System::Reflection::MonoPropertyInfo::__get_attrs()  {
return ::cordl_internals::getInstanceField<::System::Reflection::PropertyAttributes, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Reflection::PropertyAttributes const& System::Reflection::MonoPropertyInfo::__get_attrs() const {
return ::cordl_internals::getInstanceField<::System::Reflection::PropertyAttributes, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "get_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "set_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "attrs", ty: "::System::Reflection::PropertyAttributes", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MonoPropertyInfo::MonoPropertyInfo(::System::Type*  parent, ::System::Type*  declaring_type, ::StringW  name, ::System::Reflection::MethodInfo*  get_method, ::System::Reflection::MethodInfo*  set_method, ::System::Reflection::PropertyAttributes  attrs) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->parent = parent;
this->declaring_type = declaring_type;
this->name = name;
this->get_method = get_method;
this->set_method = set_method;
this->attrs = attrs;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
