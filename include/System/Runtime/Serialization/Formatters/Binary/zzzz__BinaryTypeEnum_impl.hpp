#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::BinaryTypeEnum(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::Primitive{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::String{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::Object{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectUrt{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectUser{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectArray{static_cast<int32_t>(0x5)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::StringArray{static_cast<int32_t>(0x6)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::PrimitiveArray{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
