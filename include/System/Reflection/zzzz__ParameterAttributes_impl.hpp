#pragma once
#include "System/Reflection/zzzz__ParameterAttributes_def.hpp"
constexpr void System::Reflection::ParameterAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::ParameterAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::ParameterAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::ParameterAttributes::ParameterAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::In{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Out{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Lcid{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Retval{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Optional{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::HasDefault{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::HasFieldMarshal{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Reserved3{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::Reserved4{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::ParameterAttributes  System::Reflection::ParameterAttributes::ReservedMask{static_cast<int32_t>(0xf000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
