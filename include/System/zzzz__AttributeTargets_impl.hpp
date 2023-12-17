#pragma once
#include "System/zzzz__AttributeTargets_def.hpp"
constexpr void System::AttributeTargets::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::AttributeTargets::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::AttributeTargets::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::AttributeTargets::AttributeTargets(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::AttributeTargets  System::AttributeTargets::Assembly{static_cast<int32_t>(0x1)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Module{static_cast<int32_t>(0x2)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Class{static_cast<int32_t>(0x4)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Struct{static_cast<int32_t>(0x8)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Enum{static_cast<int32_t>(0x10)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Constructor{static_cast<int32_t>(0x20)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Method{static_cast<int32_t>(0x40)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Property{static_cast<int32_t>(0x80)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Field{static_cast<int32_t>(0x100)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Event{static_cast<int32_t>(0x200)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Interface{static_cast<int32_t>(0x400)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Parameter{static_cast<int32_t>(0x800)};
constexpr ::System::AttributeTargets  System::AttributeTargets::Delegate{static_cast<int32_t>(0x1000)};
constexpr ::System::AttributeTargets  System::AttributeTargets::ReturnValue{static_cast<int32_t>(0x2000)};
constexpr ::System::AttributeTargets  System::AttributeTargets::GenericParameter{static_cast<int32_t>(0x4000)};
constexpr ::System::AttributeTargets  System::AttributeTargets::All{static_cast<int32_t>(0x7fff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
