#pragma once
#include "System/zzzz__ConsoleColor_def.hpp"
constexpr void System::ConsoleColor::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ConsoleColor::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ConsoleColor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ConsoleColor::ConsoleColor(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::ConsoleColor  System::ConsoleColor::Black{static_cast<int32_t>(0x0)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkBlue{static_cast<int32_t>(0x1)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkGreen{static_cast<int32_t>(0x2)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkCyan{static_cast<int32_t>(0x3)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkRed{static_cast<int32_t>(0x4)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkMagenta{static_cast<int32_t>(0x5)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkYellow{static_cast<int32_t>(0x6)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Gray{static_cast<int32_t>(0x7)};
constexpr ::System::ConsoleColor  System::ConsoleColor::DarkGray{static_cast<int32_t>(0x8)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Blue{static_cast<int32_t>(0x9)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Green{static_cast<int32_t>(0xa)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Cyan{static_cast<int32_t>(0xb)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Red{static_cast<int32_t>(0xc)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Magenta{static_cast<int32_t>(0xd)};
constexpr ::System::ConsoleColor  System::ConsoleColor::Yellow{static_cast<int32_t>(0xe)};
constexpr ::System::ConsoleColor  System::ConsoleColor::White{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
