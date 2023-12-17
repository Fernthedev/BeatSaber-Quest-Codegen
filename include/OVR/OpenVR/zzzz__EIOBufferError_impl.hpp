#pragma once
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
constexpr void OVR::OpenVR::EIOBufferError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EIOBufferError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EIOBufferError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EIOBufferError::EIOBufferError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_Success{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_OperationFailed{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_InvalidHandle{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_InvalidArgument{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_PathExists{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_PathDoesNotExist{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EIOBufferError  OVR::OpenVR::EIOBufferError::IOBuffer_Permission{static_cast<int32_t>(0x69)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
