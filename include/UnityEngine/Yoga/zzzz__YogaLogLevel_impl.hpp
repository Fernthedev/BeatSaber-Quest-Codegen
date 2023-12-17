#pragma once
#include "UnityEngine/Yoga/zzzz__YogaLogLevel_def.hpp"
constexpr void UnityEngine::Yoga::YogaLogLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Yoga::YogaLogLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Yoga::YogaLogLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaLogLevel::YogaLogLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Error{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Warn{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Info{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Debug{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Verbose{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Fatal{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
