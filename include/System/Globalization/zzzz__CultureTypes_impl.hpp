#pragma once
#include "System/Globalization/zzzz__CultureTypes_def.hpp"
constexpr void System::Globalization::CultureTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::CultureTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::CultureTypes::CultureTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::NeutralCultures{static_cast<int32_t>(0x1)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::SpecificCultures{static_cast<int32_t>(0x2)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::InstalledWin32Cultures{static_cast<int32_t>(0x4)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::AllCultures{static_cast<int32_t>(0x7)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::UserCustomCulture{static_cast<int32_t>(0x8)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::ReplacementCultures{static_cast<int32_t>(0x10)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::WindowsOnlyCultures{static_cast<int32_t>(0x20)};
constexpr ::System::Globalization::CultureTypes  System::Globalization::CultureTypes::FrameworkCultures{static_cast<int32_t>(0x40)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
