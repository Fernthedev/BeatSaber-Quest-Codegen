#pragma once
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
constexpr void System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer::__set_FixedElementField(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer::__get_FixedElementField()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer::__ifreq_flags___ifr_name_e__FixedBuffer(uint8_t  FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->FixedElementField = FixedElementField;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq_flags::__set_ifr_name(::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer  value)  {
::cordl_internals::setInstanceField<::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer>(value));
}
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer& System::Net::NetworkInformation::AixStructs::ifreq_flags::__get_ifr_name()  {
return ::cordl_internals::getInstanceField<::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer const& System::Net::NetworkInformation::AixStructs::ifreq_flags::__get_ifr_name() const {
return ::cordl_internals::getInstanceField<::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq_flags::__set_ifru_flags(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Net::NetworkInformation::AixStructs::ifreq_flags::__get_ifru_flags()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Net::NetworkInformation::AixStructs::ifreq_flags::__get_ifru_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifru_flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags::ifreq_flags(::System::Net::NetworkInformation::AixStructs::__ifreq_flags___ifr_name_e__FixedBuffer  ifr_name, uint32_t  ifru_flags) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->ifr_name = ifr_name;
this->ifru_flags = ifru_flags;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
