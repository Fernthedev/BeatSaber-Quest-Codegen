#pragma once
#include "System/zzzz__TermInfoNumbers_def.hpp"
constexpr void System::TermInfoNumbers::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::TermInfoNumbers::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::TermInfoNumbers::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TermInfoNumbers::TermInfoNumbers(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::Columns{static_cast<int32_t>(0x0)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::InitTabs{static_cast<int32_t>(0x1)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::Lines{static_cast<int32_t>(0x2)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::LinesOfMemory{static_cast<int32_t>(0x3)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MagicCookieGlitch{static_cast<int32_t>(0x4)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::PaddingBaudRate{static_cast<int32_t>(0x5)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::VirtualTerminal{static_cast<int32_t>(0x6)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::WidthStatusLine{static_cast<int32_t>(0x7)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::NumLabels{static_cast<int32_t>(0x8)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::LabelHeight{static_cast<int32_t>(0x9)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::LabelWidth{static_cast<int32_t>(0xa)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MaxAttributes{static_cast<int32_t>(0xb)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MaximumWindows{static_cast<int32_t>(0xc)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MaxColors{static_cast<int32_t>(0xd)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MaxPairs{static_cast<int32_t>(0xe)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::NoColorVideo{static_cast<int32_t>(0xf)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::BufferCapacity{static_cast<int32_t>(0x10)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::DotVertSpacing{static_cast<int32_t>(0x11)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::DotHorzSpacing{static_cast<int32_t>(0x12)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MaxMicroAddress{static_cast<int32_t>(0x13)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MaxMicroJump{static_cast<int32_t>(0x14)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MicroColSize{static_cast<int32_t>(0x15)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::MicroLineSize{static_cast<int32_t>(0x16)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::NumberOfPins{static_cast<int32_t>(0x17)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::OutputResChar{static_cast<int32_t>(0x18)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::OutputResLine{static_cast<int32_t>(0x19)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::OutputResHorzInch{static_cast<int32_t>(0x1a)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::OutputResVertInch{static_cast<int32_t>(0x1b)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::PrintRate{static_cast<int32_t>(0x1c)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::WideCharSize{static_cast<int32_t>(0x1d)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::Buttons{static_cast<int32_t>(0x1e)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::BitImageEntwining{static_cast<int32_t>(0x1f)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::BitImageType{static_cast<int32_t>(0x20)};
constexpr ::System::TermInfoNumbers  System::TermInfoNumbers::Last{static_cast<int32_t>(0x21)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
