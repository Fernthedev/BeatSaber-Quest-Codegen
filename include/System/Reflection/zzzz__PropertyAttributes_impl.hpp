#pragma once
#include "System/Reflection/zzzz__PropertyAttributes_def.hpp"
constexpr void System::Reflection::PropertyAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::PropertyAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::PropertyAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PropertyAttributes::PropertyAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::SpecialName{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::RTSpecialName{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::HasDefault{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::Reserved2{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::Reserved3{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::Reserved4{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::PropertyAttributes  System::Reflection::PropertyAttributes::ReservedMask{static_cast<int32_t>(0xf400)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
