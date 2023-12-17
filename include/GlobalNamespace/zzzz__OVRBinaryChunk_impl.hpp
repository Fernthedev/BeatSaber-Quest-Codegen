#pragma once
#include "GlobalNamespace/zzzz__OVRBinaryChunk_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
constexpr void GlobalNamespace::OVRBinaryChunk::__set_chunkStream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* GlobalNamespace::OVRBinaryChunk::__get_chunkStream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> GlobalNamespace::OVRBinaryChunk::__get_chunkStream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRBinaryChunk::__set_chunkLength(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::OVRBinaryChunk::__get_chunkLength()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::OVRBinaryChunk::__get_chunkLength() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRBinaryChunk::__set_chunkStart(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::OVRBinaryChunk::__get_chunkStart()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& GlobalNamespace::OVRBinaryChunk::__get_chunkStart() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "chunkStream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "chunkLength", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "chunkStart", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRBinaryChunk::OVRBinaryChunk(::System::IO::Stream*  chunkStream, uint32_t  chunkLength, int64_t  chunkStart) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->chunkStream = chunkStream;
this->chunkLength = chunkLength;
this->chunkStart = chunkStart;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
