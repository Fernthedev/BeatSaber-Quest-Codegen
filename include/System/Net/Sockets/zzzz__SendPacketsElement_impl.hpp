#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_FilePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::Sockets::SendPacketsElement::__get_m_FilePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Net::Sockets::SendPacketsElement::__get_m_FilePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Net::Sockets::SendPacketsElement::__get_m_Buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Net::Sockets::SendPacketsElement::__get_m_Buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_Offset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SendPacketsElement::__get_m_Offset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Net::Sockets::SendPacketsElement::__get_m_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_Count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::SendPacketsElement::__get_m_Count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Net::Sockets::SendPacketsElement::__get_m_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_endOfPacket(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::SendPacketsElement::__get_m_endOfPacket()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::Net::Sockets::SendPacketsElement::__get_m_endOfPacket() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
