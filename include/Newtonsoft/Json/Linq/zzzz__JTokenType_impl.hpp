#pragma once
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
constexpr void Newtonsoft::Json::Linq::JTokenType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::Linq::JTokenType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::Linq::JTokenType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JTokenType::JTokenType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Object{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Array{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Constructor{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Property{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Comment{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Integer{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Float{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::String{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Boolean{static_cast<int32_t>(0x9)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Null{static_cast<int32_t>(0xa)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Undefined{static_cast<int32_t>(0xb)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Date{static_cast<int32_t>(0xc)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Raw{static_cast<int32_t>(0xd)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Bytes{static_cast<int32_t>(0xe)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Guid{static_cast<int32_t>(0xf)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::Uri{static_cast<int32_t>(0x10)};
constexpr ::Newtonsoft::Json::Linq::JTokenType  Newtonsoft::Json::Linq::JTokenType::TimeSpan{static_cast<int32_t>(0x11)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
