#pragma once
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
constexpr void UnityEngine::UIElements::KeyboardNavigationOperation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::KeyboardNavigationOperation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::KeyboardNavigationOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation::KeyboardNavigationOperation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::SelectAll{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Cancel{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Submit{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Previous{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Next{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::PageUp{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::PageDown{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::Begin{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::KeyboardNavigationOperation  UnityEngine::UIElements::KeyboardNavigationOperation::End{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
