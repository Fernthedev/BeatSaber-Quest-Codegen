#pragma once
#include "System/zzzz__UriComponents_def.hpp"
constexpr void System::UriComponents::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::UriComponents::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::UriComponents::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriComponents::UriComponents(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::UriComponents  System::UriComponents::Scheme{static_cast<int32_t>(0x1)};
constexpr ::System::UriComponents  System::UriComponents::UserInfo{static_cast<int32_t>(0x2)};
constexpr ::System::UriComponents  System::UriComponents::Host{static_cast<int32_t>(0x4)};
constexpr ::System::UriComponents  System::UriComponents::Port{static_cast<int32_t>(0x8)};
constexpr ::System::UriComponents  System::UriComponents::Path{static_cast<int32_t>(0x10)};
constexpr ::System::UriComponents  System::UriComponents::Query{static_cast<int32_t>(0x20)};
constexpr ::System::UriComponents  System::UriComponents::Fragment{static_cast<int32_t>(0x40)};
constexpr ::System::UriComponents  System::UriComponents::StrongPort{static_cast<int32_t>(0x80)};
constexpr ::System::UriComponents  System::UriComponents::NormalizedHost{static_cast<int32_t>(0x100)};
constexpr ::System::UriComponents  System::UriComponents::KeepDelimiter{static_cast<int32_t>(0x40000000)};
constexpr ::System::UriComponents  System::UriComponents::SerializationInfoString{static_cast<int32_t>(0x80000000)};
constexpr ::System::UriComponents  System::UriComponents::AbsoluteUri{static_cast<int32_t>(0x7f)};
constexpr ::System::UriComponents  System::UriComponents::HostAndPort{static_cast<int32_t>(0x84)};
constexpr ::System::UriComponents  System::UriComponents::StrongAuthority{static_cast<int32_t>(0x86)};
constexpr ::System::UriComponents  System::UriComponents::SchemeAndServer{static_cast<int32_t>(0xd)};
constexpr ::System::UriComponents  System::UriComponents::HttpRequestUrl{static_cast<int32_t>(0x3d)};
constexpr ::System::UriComponents  System::UriComponents::PathAndQuery{static_cast<int32_t>(0x30)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
