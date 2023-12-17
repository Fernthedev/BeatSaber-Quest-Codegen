#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__UsageHint_def.hpp"
constexpr void UnityEngine::InputSystem::XR::UsageHint::__set_content(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::XR::UsageHint::__get_content()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::UsageHint::__get_content() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::XR::UsageHint::UsageHint(::StringW  content) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->content = content;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
