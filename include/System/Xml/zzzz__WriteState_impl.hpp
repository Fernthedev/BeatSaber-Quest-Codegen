#pragma once
#include "System/Xml/zzzz__WriteState_def.hpp"
constexpr void System::Xml::WriteState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::WriteState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::WriteState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::WriteState::WriteState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Start{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Prolog{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Element{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Attribute{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Content{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Closed{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::WriteState  System::Xml::WriteState::Error{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
