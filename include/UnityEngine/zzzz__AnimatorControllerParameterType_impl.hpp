#pragma once
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
constexpr void UnityEngine::AnimatorControllerParameterType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AnimatorControllerParameterType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AnimatorControllerParameterType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorControllerParameterType::AnimatorControllerParameterType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AnimatorControllerParameterType  UnityEngine::AnimatorControllerParameterType::Float{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AnimatorControllerParameterType  UnityEngine::AnimatorControllerParameterType::Int{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AnimatorControllerParameterType  UnityEngine::AnimatorControllerParameterType::Bool{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AnimatorControllerParameterType  UnityEngine::AnimatorControllerParameterType::Trigger{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
