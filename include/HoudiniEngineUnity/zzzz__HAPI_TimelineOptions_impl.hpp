#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_TimelineOptions_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_TimelineOptions::__set_fps(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HAPI_TimelineOptions::__get_fps()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& HoudiniEngineUnity::HAPI_TimelineOptions::__get_fps() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_TimelineOptions::__set_startTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HAPI_TimelineOptions::__get_startTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& HoudiniEngineUnity::HAPI_TimelineOptions::__get_startTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_TimelineOptions::__set_endTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HAPI_TimelineOptions::__get_endTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& HoudiniEngineUnity::HAPI_TimelineOptions::__get_endTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_TimelineOptions::HAPI_TimelineOptions(float_t  fps, float_t  startTime, float_t  endTime) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->fps = fps;
this->startTime = startTime;
this->endTime = endTime;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
