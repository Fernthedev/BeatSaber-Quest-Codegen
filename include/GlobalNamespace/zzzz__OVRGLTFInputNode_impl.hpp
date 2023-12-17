#pragma once
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
constexpr void GlobalNamespace::OVRGLTFInputNode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRGLTFInputNode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::OVRGLTFInputNode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFInputNode::OVRGLTFInputNode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::Button_A_X{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::Button_B_Y{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::Button_Oculus_Menu{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::Trigger_Grip{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::Trigger_Front{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVRGLTFInputNode  GlobalNamespace::OVRGLTFInputNode::ThumbStick{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
