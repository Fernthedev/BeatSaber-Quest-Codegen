#pragma once
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
constexpr void System::Reflection::FieldAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::FieldAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::FieldAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::FieldAttributes::FieldAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::FieldAccessMask{static_cast<int32_t>(0x7)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::PrivateScope{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Private{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::FamANDAssem{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Assembly{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Family{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::FamORAssem{static_cast<int32_t>(0x5)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Public{static_cast<int32_t>(0x6)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Static{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::InitOnly{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::Literal{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::NotSerialized{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::SpecialName{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::PinvokeImpl{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::RTSpecialName{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::HasFieldMarshal{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::HasDefault{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::HasFieldRVA{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::FieldAttributes  System::Reflection::FieldAttributes::ReservedMask{static_cast<int32_t>(0x9500)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
