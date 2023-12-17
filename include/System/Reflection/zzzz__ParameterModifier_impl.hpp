#pragma once
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
constexpr void System::Reflection::ParameterModifier::__set__byRef(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<bool,::Array<bool>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
constexpr ::ArrayW<bool,::Array<bool>*>& System::Reflection::ParameterModifier::__get__byRef()  {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<bool,::Array<bool>*> const& System::Reflection::ParameterModifier::__get__byRef() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "_byRef", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Reflection::ParameterModifier::ParameterModifier(::ArrayW<bool,::Array<bool>*>  _byRef) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->_byRef = _byRef;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
