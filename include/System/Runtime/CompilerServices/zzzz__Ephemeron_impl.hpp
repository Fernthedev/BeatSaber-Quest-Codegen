#pragma once
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void System::Runtime::CompilerServices::Ephemeron::__set_key(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::CompilerServices::Ephemeron::__get_key()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::CompilerServices::Ephemeron::__get_key() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Runtime::CompilerServices::Ephemeron::__set_value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::CompilerServices::Ephemeron::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::CompilerServices::Ephemeron::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Runtime::CompilerServices::Ephemeron::Ephemeron(::System::Object*  key, ::System::Object*  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->key = key;
this->value = value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
