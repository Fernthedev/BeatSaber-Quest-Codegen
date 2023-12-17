#pragma once
#include "UnityEngine/EventSystems/zzzz__EventTriggerType_def.hpp"
constexpr void UnityEngine::EventSystems::EventTriggerType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::EventSystems::EventTriggerType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::EventSystems::EventTriggerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::EventTriggerType::EventTriggerType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::PointerEnter{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::PointerExit{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::PointerDown{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::PointerUp{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::PointerClick{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Drag{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Drop{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Scroll{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::UpdateSelected{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Select{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Deselect{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Move{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::InitializePotentialDrag{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::BeginDrag{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::EndDrag{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Submit{static_cast<int32_t>(0xf)};
constexpr ::UnityEngine::EventSystems::EventTriggerType  UnityEngine::EventSystems::EventTriggerType::Cancel{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
