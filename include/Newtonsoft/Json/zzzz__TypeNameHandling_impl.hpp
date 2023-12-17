#pragma once
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
constexpr void Newtonsoft::Json::TypeNameHandling::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::TypeNameHandling::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::TypeNameHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::TypeNameHandling::TypeNameHandling(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::Objects{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::Arrays{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::All{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::TypeNameHandling::Auto{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
