#pragma once
#include "OVR/OpenVR/zzzz__EVRInputError_def.hpp"
constexpr void OVR::OpenVR::EVRInputError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EVRInputError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EVRInputError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRInputError::EVRInputError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::NameNotFound{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::WrongType{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::InvalidHandle{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::InvalidParam{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::NoSteam{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::MaxCapacityReached{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::IPCError{static_cast<int32_t>(0x7)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::NoActiveActionSet{static_cast<int32_t>(0x8)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::InvalidDevice{static_cast<int32_t>(0x9)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::InvalidSkeleton{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::InvalidBoneCount{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::InvalidCompressedData{static_cast<int32_t>(0xc)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::NoData{static_cast<int32_t>(0xd)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::BufferTooSmall{static_cast<int32_t>(0xe)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::MismatchedActionManifest{static_cast<int32_t>(0xf)};
constexpr ::OVR::OpenVR::EVRInputError  OVR::OpenVR::EVRInputError::MissingSkeletonData{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
