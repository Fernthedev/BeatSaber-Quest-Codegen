#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
constexpr void Newtonsoft::Json::Bson::BsonType::__set_value__(int8_t  value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int8_t>(value));
}
constexpr int8_t& Newtonsoft::Json::Bson::BsonType::__get_value__()  {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int8_t const& Newtonsoft::Json::Bson::BsonType::__get_value__() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonType::BsonType(int8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Number{static_cast<int8_t>(0x1)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::String{static_cast<int8_t>(0x2)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Object{static_cast<int8_t>(0x3)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Array{static_cast<int8_t>(0x4)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Binary{static_cast<int8_t>(0x5)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Undefined{static_cast<int8_t>(0x6)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Oid{static_cast<int8_t>(0x7)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Boolean{static_cast<int8_t>(0x8)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Date{static_cast<int8_t>(0x9)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Null{static_cast<int8_t>(0xa)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Regex{static_cast<int8_t>(0xb)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Reference{static_cast<int8_t>(0xc)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Code{static_cast<int8_t>(0xd)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Symbol{static_cast<int8_t>(0xe)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::CodeWScope{static_cast<int8_t>(0xf)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Integer{static_cast<int8_t>(0x10)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::TimeStamp{static_cast<int8_t>(0x11)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::Long{static_cast<int8_t>(0x12)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::MinKey{static_cast<int8_t>(0xff)};
constexpr ::Newtonsoft::Json::Bson::BsonType  Newtonsoft::Json::Bson::BsonType::MaxKey{static_cast<int8_t>(0x7f)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
