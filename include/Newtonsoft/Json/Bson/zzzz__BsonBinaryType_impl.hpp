#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
constexpr void Newtonsoft::Json::Bson::BsonBinaryType::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& Newtonsoft::Json::Bson::BsonBinaryType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& Newtonsoft::Json::Bson::BsonBinaryType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType::BsonBinaryType(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::Binary{static_cast<uint8_t>(0x0u)};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::Function{static_cast<uint8_t>(0x1u)};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::BinaryOld{static_cast<uint8_t>(0x2u)};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::UuidOld{static_cast<uint8_t>(0x3u)};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::Uuid{static_cast<uint8_t>(0x4u)};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::Md5{static_cast<uint8_t>(0x5u)};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  Newtonsoft::Json::Bson::BsonBinaryType::UserDefined{static_cast<uint8_t>(0x80u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
