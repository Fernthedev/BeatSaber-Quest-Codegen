#pragma once
#include "System/zzzz__Coord_def.hpp"
constexpr void System::Coord::__set_X(int16_t  value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int16_t>(value));
}
constexpr int16_t& System::Coord::__get_X()  {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int16_t const& System::Coord::__get_X() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Coord::__set_Y(int16_t  value)  {
::cordl_internals::setInstanceField<int16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int16_t>(value));
}
constexpr int16_t& System::Coord::__get_Y()  {
return ::cordl_internals::getInstanceField<int16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int16_t const& System::Coord::__get_Y() const {
return ::cordl_internals::getInstanceField<int16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "X", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Y", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Coord::Coord(int16_t  X, int16_t  Y) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->X = X;
this->Y = Y;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
