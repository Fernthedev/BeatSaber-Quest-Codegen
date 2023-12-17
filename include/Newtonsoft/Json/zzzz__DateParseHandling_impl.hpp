#pragma once
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
constexpr void Newtonsoft::Json::DateParseHandling::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::DateParseHandling::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::DateParseHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::DateParseHandling::DateParseHandling(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::DateParseHandling::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::DateParseHandling::DateTime{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::DateParseHandling::DateTimeOffset{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
