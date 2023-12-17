#pragma once
#include "System/Net/zzzz__FtpOperation_def.hpp"
constexpr void System::Net::FtpOperation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::FtpOperation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::FtpOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FtpOperation::FtpOperation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::DownloadFile{static_cast<int32_t>(0x0)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::ListDirectory{static_cast<int32_t>(0x1)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::ListDirectoryDetails{static_cast<int32_t>(0x2)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::UploadFile{static_cast<int32_t>(0x3)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::UploadFileUnique{static_cast<int32_t>(0x4)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::AppendFile{static_cast<int32_t>(0x5)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::DeleteFile{static_cast<int32_t>(0x6)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::GetDateTimestamp{static_cast<int32_t>(0x7)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::GetFileSize{static_cast<int32_t>(0x8)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::Rename{static_cast<int32_t>(0x9)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::MakeDirectory{static_cast<int32_t>(0xa)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::RemoveDirectory{static_cast<int32_t>(0xb)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::PrintWorkingDirectory{static_cast<int32_t>(0xc)};
constexpr ::System::Net::FtpOperation  System::Net::FtpOperation::Other{static_cast<int32_t>(0xd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
