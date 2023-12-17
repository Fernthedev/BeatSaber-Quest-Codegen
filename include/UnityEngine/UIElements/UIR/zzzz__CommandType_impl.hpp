#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_def.hpp"
constexpr void UnityEngine::UIElements::UIR::CommandType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::UIR::CommandType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::UIR::CommandType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::CommandType::CommandType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::Draw{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::ImmediateCull{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::Immediate{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushView{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopView{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushScissor{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopScissor{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushRenderTexture{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopRenderTexture{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::BlitToPreviousRT{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PushDefaultMaterial{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::UIElements::UIR::CommandType  UnityEngine::UIElements::UIR::CommandType::PopDefaultMaterial{static_cast<int32_t>(0xb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
