#pragma once
#include "System/Threading/zzzz__NativeOverlapped_def.hpp"
constexpr void System::Threading::NativeOverlapped::__set_InternalLow(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::NativeOverlapped::__get_InternalLow()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::NativeOverlapped::__get_InternalLow() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::NativeOverlapped::__set_InternalHigh(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::NativeOverlapped::__get_InternalHigh()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::NativeOverlapped::__get_InternalHigh() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::NativeOverlapped::__set_OffsetLow(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::NativeOverlapped::__get_OffsetLow()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::NativeOverlapped::__get_OffsetLow() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::NativeOverlapped::__set_OffsetHigh(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::NativeOverlapped::__get_OffsetHigh()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::NativeOverlapped::__get_OffsetHigh() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::NativeOverlapped::__set_EventHandle(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Threading::NativeOverlapped::__get_EventHandle()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& System::Threading::NativeOverlapped::__get_EventHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "InternalLow", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InternalHigh", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetLow", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetHigh", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EventHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::NativeOverlapped::NativeOverlapped(::cordl_internals::intptr_t  InternalLow, ::cordl_internals::intptr_t  InternalHigh, int32_t  OffsetLow, int32_t  OffsetHigh, ::cordl_internals::intptr_t  EventHandle) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->InternalLow = InternalLow;
this->InternalHigh = InternalHigh;
this->OffsetLow = OffsetLow;
this->OffsetHigh = OffsetHigh;
this->EventHandle = EventHandle;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
