#pragma once
#include "System/Globalization/zzzz__HebrewNumberParsingState_def.hpp"
constexpr void System::Globalization::HebrewNumberParsingState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::HebrewNumberParsingState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::HebrewNumberParsingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingState::HebrewNumberParsingState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::InvalidHebrewNumber{static_cast<int32_t>(0x0)};
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::NotHebrewDigit{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::FoundEndOfHebrewNumber{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::HebrewNumberParsingState  System::Globalization::HebrewNumberParsingState::ContinueParsing{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
