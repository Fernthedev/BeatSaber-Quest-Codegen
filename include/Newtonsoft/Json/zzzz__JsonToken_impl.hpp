#pragma once
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
constexpr void Newtonsoft::Json::JsonToken::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::JsonToken::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::JsonToken::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonToken::JsonToken(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartObject{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartArray{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::StartConstructor{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::PropertyName{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Comment{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Raw{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Integer{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Float{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::String{static_cast<int32_t>(0x9)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Boolean{static_cast<int32_t>(0xa)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Null{static_cast<int32_t>(0xb)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Undefined{static_cast<int32_t>(0xc)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndObject{static_cast<int32_t>(0xd)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndArray{static_cast<int32_t>(0xe)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::EndConstructor{static_cast<int32_t>(0xf)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Date{static_cast<int32_t>(0x10)};
constexpr ::Newtonsoft::Json::JsonToken  Newtonsoft::Json::JsonToken::Bytes{static_cast<int32_t>(0x11)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
