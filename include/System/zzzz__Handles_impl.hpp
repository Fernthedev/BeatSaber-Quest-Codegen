#pragma once
#include "System/zzzz__Handles_def.hpp"
constexpr void System::Handles::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Handles::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Handles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Handles::Handles(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Handles  System::Handles::STD_INPUT{static_cast<int32_t>(0xfffffff6)};
constexpr ::System::Handles  System::Handles::STD_OUTPUT{static_cast<int32_t>(0xfffffff5)};
constexpr ::System::Handles  System::Handles::STD_ERROR{static_cast<int32_t>(0xfffffff4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
