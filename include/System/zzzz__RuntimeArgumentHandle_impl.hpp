#pragma once
#include "System/zzzz__RuntimeArgumentHandle_def.hpp"
constexpr void System::RuntimeArgumentHandle::__set_args(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::RuntimeArgumentHandle::__get_args()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::RuntimeArgumentHandle::__get_args() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeArgumentHandle::RuntimeArgumentHandle(::cordl_internals::intptr_t  args) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->args = args;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
