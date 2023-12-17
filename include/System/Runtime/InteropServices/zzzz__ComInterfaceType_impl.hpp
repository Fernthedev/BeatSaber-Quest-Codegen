#pragma once
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
constexpr void System::Runtime::InteropServices::ComInterfaceType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::InteropServices::ComInterfaceType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::InteropServices::ComInterfaceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::ComInterfaceType::ComInterfaceType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsDual{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIUnknown{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIDispatch{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIInspectable{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
