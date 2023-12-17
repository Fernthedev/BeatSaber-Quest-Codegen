#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_NodeType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_NodeType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_NodeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_NodeType::HAPI_NodeType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_ANY{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_NONE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_OBJ{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_SOP{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_CHOP{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_ROP{static_cast<int32_t>(0x8)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_SHOP{static_cast<int32_t>(0x10)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_COP{static_cast<int32_t>(0x20)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_VOP{static_cast<int32_t>(0x40)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_DOP{static_cast<int32_t>(0x80)};
constexpr ::HoudiniEngineUnity::HAPI_NodeType  HoudiniEngineUnity::HAPI_NodeType::HAPI_NODETYPE_TOP{static_cast<int32_t>(0x100)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
