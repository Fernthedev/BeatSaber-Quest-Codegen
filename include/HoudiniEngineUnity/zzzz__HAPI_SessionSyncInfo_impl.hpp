#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_SessionSyncInfo::__set_cookUsingHoudiniTime(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HAPI_SessionSyncInfo::__get_cookUsingHoudiniTime()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HAPI_SessionSyncInfo::__get_cookUsingHoudiniTime() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_SessionSyncInfo::__set_syncViewport(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HAPI_SessionSyncInfo::__get_syncViewport()  {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HAPI_SessionSyncInfo::__get_syncViewport() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "cookUsingHoudiniTime", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncViewport", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo::HAPI_SessionSyncInfo(bool  cookUsingHoudiniTime, bool  syncViewport) noexcept : ::bs_hook::ValueTypeWrapper<0x2>() {this->cookUsingHoudiniTime = cookUsingHoudiniTime;
this->syncViewport = syncViewport;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
