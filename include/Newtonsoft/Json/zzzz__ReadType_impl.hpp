#pragma once
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
constexpr void Newtonsoft::Json::ReadType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::ReadType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::ReadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::ReadType::ReadType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::Read{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsInt32{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsBytes{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsString{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDecimal{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDateTime{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDateTimeOffset{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDouble{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsBoolean{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
