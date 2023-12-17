#pragma once
#include "UnityEngineInternal/Input/zzzz__NativeInputEventBuffer_def.hpp"
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__set_eventBuffer(::cordl_internals::Ptr<void>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<void>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<void>>(value));
}
constexpr ::cordl_internals::Ptr<void>& UnityEngineInternal::Input::NativeInputEventBuffer::__get_eventBuffer()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<void> const& UnityEngineInternal::Input::NativeInputEventBuffer::__get_eventBuffer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__set_eventCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEventBuffer::__get_eventCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEventBuffer::__get_eventCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__set_sizeInBytes(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEventBuffer::__get_sizeInBytes()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEventBuffer::__get_sizeInBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__set_capacityInBytes(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEventBuffer::__get_capacityInBytes()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEventBuffer::__get_capacityInBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "eventBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "eventCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "capacityInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEventBuffer::NativeInputEventBuffer(::cordl_internals::Ptr<void>  eventBuffer, int32_t  eventCount, int32_t  sizeInBytes, int32_t  capacityInBytes) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->eventBuffer = eventBuffer;
this->eventCount = eventCount;
this->sizeInBytes = sizeInBytes;
this->capacityInBytes = capacityInBytes;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
