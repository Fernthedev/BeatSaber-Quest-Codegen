#pragma once
#include "Oculus/Platform/zzzz__InitConfigOptions_def.hpp"
constexpr void Oculus::Platform::InitConfigOptions::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& Oculus::Platform::InitConfigOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& Oculus::Platform::InitConfigOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::InitConfigOptions::InitConfigOptions(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::InitConfigOptions  Oculus::Platform::InitConfigOptions::DisableP2pNetworking{static_cast<uint32_t>(0xde5ddedcu)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
