#pragma once
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
constexpr void System::Net::WebHeaderCollectionType::__set_value__(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::Net::WebHeaderCollectionType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& System::Net::WebHeaderCollectionType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebHeaderCollectionType::WebHeaderCollectionType(uint16_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x2>() {this->value__ = value__;
}
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::Unknown{static_cast<uint16_t>(0x0u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::WebRequest{static_cast<uint16_t>(0x1u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::WebResponse{static_cast<uint16_t>(0x2u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpWebRequest{static_cast<uint16_t>(0x3u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpWebResponse{static_cast<uint16_t>(0x4u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpListenerRequest{static_cast<uint16_t>(0x5u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpListenerResponse{static_cast<uint16_t>(0x6u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FtpWebRequest{static_cast<uint16_t>(0x7u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FtpWebResponse{static_cast<uint16_t>(0x8u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FileWebRequest{static_cast<uint16_t>(0x9u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FileWebResponse{static_cast<uint16_t>(0xau)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
