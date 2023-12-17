#pragma once
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
constexpr void Newtonsoft::Json::Linq::JsonPath::QueryOperator::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::Linq::JsonPath::QueryOperator::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::Linq::JsonPath::QueryOperator::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator::QueryOperator(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::Equals{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::NotEquals{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::Exists{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::LessThan{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::LessThanOrEquals{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::GreaterThan{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::GreaterThanOrEquals{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::And{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator  Newtonsoft::Json::Linq::JsonPath::QueryOperator::Or{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
