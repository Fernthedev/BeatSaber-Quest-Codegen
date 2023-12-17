#pragma once
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
constexpr void UnityEngineInternal::Input::NativeInputUpdateType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputUpdateType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputUpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType::NativeInputUpdateType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::Dynamic{static_cast<int32_t>(0x1)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::Fixed{static_cast<int32_t>(0x2)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::BeforeRender{static_cast<int32_t>(0x4)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::Editor{static_cast<int32_t>(0x8)};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  UnityEngineInternal::Input::NativeInputUpdateType::IgnoreFocus{static_cast<int32_t>(0x80000000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
