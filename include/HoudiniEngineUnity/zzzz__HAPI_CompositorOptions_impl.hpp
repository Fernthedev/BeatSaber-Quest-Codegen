#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_CompositorOptions_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_CompositorOptions::__set_maximumResolutionX(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_CompositorOptions::__get_maximumResolutionX()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_CompositorOptions::__get_maximumResolutionX() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_CompositorOptions::__set_maximumResolutionY(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_CompositorOptions::__get_maximumResolutionY()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_CompositorOptions::__get_maximumResolutionY() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "maximumResolutionX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximumResolutionY", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CompositorOptions::HAPI_CompositorOptions(int32_t  maximumResolutionX, int32_t  maximumResolutionY) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->maximumResolutionX = maximumResolutionX;
this->maximumResolutionY = maximumResolutionY;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
