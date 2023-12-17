#pragma once
#include "OVR/OpenVR/zzzz__InputSkeletalActionData_t_def.hpp"
constexpr void OVR::OpenVR::InputSkeletalActionData_t::__set_bActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::InputSkeletalActionData_t::__get_bActive()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::InputSkeletalActionData_t::__get_bActive() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::InputSkeletalActionData_t::__set_activeOrigin(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::InputSkeletalActionData_t::__get_activeOrigin()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::InputSkeletalActionData_t::__get_activeOrigin() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::InputSkeletalActionData_t::__set_boneCount(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::InputSkeletalActionData_t::__get_boneCount()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::InputSkeletalActionData_t::__get_boneCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boneCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::InputSkeletalActionData_t::InputSkeletalActionData_t(bool  bActive, uint64_t  activeOrigin, uint32_t  boneCount) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->boneCount = boneCount;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
