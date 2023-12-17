#pragma once
#include "Newtonsoft/Json/zzzz__WriteState_def.hpp"
constexpr void Newtonsoft::Json::WriteState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Newtonsoft::Json::WriteState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Newtonsoft::Json::WriteState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::WriteState::WriteState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Error{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Closed{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Object{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Array{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Constructor{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Property{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::WriteState  Newtonsoft::Json::WriteState::Start{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
