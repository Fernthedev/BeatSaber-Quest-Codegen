#pragma once
#include "Mono/zzzz__ValueTuple_1_def.hpp"
template<typename T1>
constexpr void Mono::ValueTuple_1<T1>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<typename T1>
constexpr T1& Mono::ValueTuple_1<T1>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T1>
constexpr T1 const& Mono::ValueTuple_1<T1>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }]
template<typename T1>
constexpr ::Mono::ValueTuple_1<T1>::ValueTuple_1(T1  Item1) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->Item1 = Item1;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
