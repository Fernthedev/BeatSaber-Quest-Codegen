#pragma once
#include "System/Reflection/zzzz__EventAttributes_def.hpp"
constexpr void System::Reflection::EventAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::EventAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::EventAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::EventAttributes::EventAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::SpecialName{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::RTSpecialName{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::EventAttributes  System::Reflection::EventAttributes::ReservedMask{static_cast<int32_t>(0x400)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
