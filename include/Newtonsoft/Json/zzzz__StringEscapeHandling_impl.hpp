#pragma once
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
constexpr void Newtonsoft::Json::StringEscapeHandling::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::StringEscapeHandling::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::StringEscapeHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::StringEscapeHandling::StringEscapeHandling(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::StringEscapeHandling::Default{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::StringEscapeHandling::EscapeNonAscii{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::StringEscapeHandling::EscapeHtml{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
