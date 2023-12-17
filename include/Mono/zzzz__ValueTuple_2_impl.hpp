#pragma once
#include "Mono/zzzz__ValueTuple_2_def.hpp"
template<typename T1,typename T2>
constexpr void Mono::ValueTuple_2<T1,T2>::__set_Item1(T1  value)  {
::cordl_internals::setInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T1>(value));
}
template<typename T1,typename T2>
constexpr T1& Mono::ValueTuple_2<T1,T2>::__get_Item1()  {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T1,typename T2>
constexpr T1 const& Mono::ValueTuple_2<T1,T2>::__get_Item1() const {
return ::cordl_internals::getInstanceField<T1, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T1,typename T2>
constexpr void Mono::ValueTuple_2<T1,T2>::__set_Item2(T2  value)  {
::cordl_internals::setInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T2>(value));
}
template<typename T1,typename T2>
constexpr T2& Mono::ValueTuple_2<T1,T2>::__get_Item2()  {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T1,typename T2>
constexpr T2 const& Mono::ValueTuple_2<T1,T2>::__get_Item2() const {
return ::cordl_internals::getInstanceField<T2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("csnull") }]
template<typename T1,typename T2>
constexpr ::Mono::ValueTuple_2<T1,T2>::ValueTuple_2(T1  Item1, T2  Item2) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item1 = Item1;
this->Item2 = Item2;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
