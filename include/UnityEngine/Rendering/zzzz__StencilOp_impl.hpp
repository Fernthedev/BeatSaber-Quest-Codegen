#pragma once
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
constexpr void UnityEngine::Rendering::StencilOp::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::StencilOp::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::StencilOp::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::StencilOp::StencilOp(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Keep{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Zero{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Replace{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::IncrementSaturate{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::DecrementSaturate{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::Invert{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::IncrementWrap{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::StencilOp  UnityEngine::Rendering::StencilOp::DecrementWrap{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
