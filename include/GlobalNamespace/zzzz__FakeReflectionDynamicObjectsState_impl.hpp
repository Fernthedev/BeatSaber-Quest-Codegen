#pragma once
#include "GlobalNamespace/zzzz__FakeReflectionDynamicObjectsState_def.hpp"
constexpr void GlobalNamespace::FakeReflectionDynamicObjectsState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::FakeReflectionDynamicObjectsState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::FakeReflectionDynamicObjectsState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState::FakeReflectionDynamicObjectsState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState  GlobalNamespace::FakeReflectionDynamicObjectsState::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FakeReflectionDynamicObjectsState  GlobalNamespace::FakeReflectionDynamicObjectsState::Enabled{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
