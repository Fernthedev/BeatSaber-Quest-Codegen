#pragma once
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
constexpr void OVRSimpleJSON::JSONNodeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVRSimpleJSON::JSONNodeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVRSimpleJSON::JSONNodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNodeType::JSONNodeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Array{static_cast<int32_t>(0x1)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Object{static_cast<int32_t>(0x2)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::String{static_cast<int32_t>(0x3)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Number{static_cast<int32_t>(0x4)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::NullValue{static_cast<int32_t>(0x5)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Boolean{static_cast<int32_t>(0x6)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::None{static_cast<int32_t>(0x7)};
constexpr ::OVRSimpleJSON::JSONNodeType  OVRSimpleJSON::JSONNodeType::Custom{static_cast<int32_t>(0xff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
