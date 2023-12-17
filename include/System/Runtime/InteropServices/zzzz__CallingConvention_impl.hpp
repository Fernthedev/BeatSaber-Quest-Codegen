#pragma once
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
constexpr void System::Runtime::InteropServices::CallingConvention::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::InteropServices::CallingConvention::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::InteropServices::CallingConvention::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::CallingConvention::CallingConvention(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::Winapi{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::Cdecl{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::StdCall{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::ThisCall{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::InteropServices::CallingConvention  System::Runtime::InteropServices::CallingConvention::FastCall{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
