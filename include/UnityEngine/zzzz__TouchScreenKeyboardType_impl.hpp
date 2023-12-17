#pragma once
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
constexpr void UnityEngine::TouchScreenKeyboardType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TouchScreenKeyboardType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TouchScreenKeyboardType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TouchScreenKeyboardType::TouchScreenKeyboardType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::ASCIICapable{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NumbersAndPunctuation{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::URL{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NumberPad{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::PhonePad{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NamePhonePad{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::EmailAddress{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::NintendoNetworkAccount{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::Social{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::Search{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::DecimalPad{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::TouchScreenKeyboardType  UnityEngine::TouchScreenKeyboardType::OneTimeCode{static_cast<int32_t>(0xc)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
