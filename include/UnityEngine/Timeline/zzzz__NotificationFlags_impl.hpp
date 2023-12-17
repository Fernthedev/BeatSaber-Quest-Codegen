#pragma once
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
constexpr void UnityEngine::Timeline::NotificationFlags::__set_value__(int16_t  value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int16_t>(value));
}
constexpr int16_t& UnityEngine::Timeline::NotificationFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int16_t const& UnityEngine::Timeline::NotificationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::NotificationFlags::NotificationFlags(int16_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x2>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::TriggerInEditMode{static_cast<int16_t>(0x1)};
constexpr ::UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::Retroactive{static_cast<int16_t>(0x2)};
constexpr ::UnityEngine::Timeline::NotificationFlags  UnityEngine::Timeline::NotificationFlags::TriggerOnce{static_cast<int16_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
