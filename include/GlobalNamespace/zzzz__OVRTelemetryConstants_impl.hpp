#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryConstants_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryConstants_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
constexpr void GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::__OVRTelemetryConstants__OVRManager__ConsentOrigins(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins  GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::Popup{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins  GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::Settings{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins  GlobalNamespace::__OVRTelemetryConstants__OVRManager__ConsentOrigins::Legacy{static_cast<int32_t>(0x2)};
inline void GlobalNamespace::__OVRTelemetryConstants__OVRManager::setStaticF_InitializeInsightPassthrough(::GlobalNamespace::__OVRTelemetry__MarkerPoint  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRTelemetry__MarkerPoint, "InitializeInsightPassthrough", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetryConstants__OVRManager*>::get>(std::forward<::GlobalNamespace::__OVRTelemetry__MarkerPoint>(value));
}
inline ::GlobalNamespace::__OVRTelemetry__MarkerPoint GlobalNamespace::__OVRTelemetryConstants__OVRManager::getStaticF_InitializeInsightPassthrough()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTelemetry__MarkerPoint, "InitializeInsightPassthrough", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetryConstants__OVRManager*>::get>();
}
inline void GlobalNamespace::__OVRTelemetryConstants__OVRManager::setStaticF_InitPermissionRequest(::GlobalNamespace::__OVRTelemetry__MarkerPoint  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__OVRTelemetry__MarkerPoint, "InitPermissionRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetryConstants__OVRManager*>::get>(std::forward<::GlobalNamespace::__OVRTelemetry__MarkerPoint>(value));
}
inline ::GlobalNamespace::__OVRTelemetry__MarkerPoint GlobalNamespace::__OVRTelemetryConstants__OVRManager::getStaticF_InitPermissionRequest()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTelemetry__MarkerPoint, "InitPermissionRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetryConstants__OVRManager*>::get>();
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
