#pragma once
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
constexpr void System::Text::RegularExpressions::RegexOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::RegexOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Text::RegularExpressions::RegexOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::RegexOptions::RegexOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Multiline{static_cast<int32_t>(0x2)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::ExplicitCapture{static_cast<int32_t>(0x4)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Compiled{static_cast<int32_t>(0x8)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Singleline{static_cast<int32_t>(0x10)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::IgnorePatternWhitespace{static_cast<int32_t>(0x20)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::RightToLeft{static_cast<int32_t>(0x40)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::ECMAScript{static_cast<int32_t>(0x100)};
constexpr ::System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::CultureInvariant{static_cast<int32_t>(0x200)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
