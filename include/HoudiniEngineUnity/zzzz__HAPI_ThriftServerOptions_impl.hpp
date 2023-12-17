#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ThriftServerOptions_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_ThriftServerOptions::__set_autoClose(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HAPI_ThriftServerOptions::__get_autoClose()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HAPI_ThriftServerOptions::__get_autoClose() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_ThriftServerOptions::__set_timeoutMs(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HAPI_ThriftServerOptions::__get_timeoutMs()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& HoudiniEngineUnity::HAPI_ThriftServerOptions::__get_timeoutMs() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "autoClose", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeoutMs", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ThriftServerOptions::HAPI_ThriftServerOptions(bool  autoClose, float_t  timeoutMs) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->autoClose = autoClose;
this->timeoutMs = timeoutMs;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
