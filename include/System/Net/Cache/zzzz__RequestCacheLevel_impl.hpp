#pragma once
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
constexpr void System::Net::Cache::RequestCacheLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Cache::RequestCacheLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Cache::RequestCacheLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Cache::RequestCacheLevel::RequestCacheLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::BypassCache{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::CacheOnly{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::CacheIfAvailable{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::Revalidate{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::Reload{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::NoCacheNoStore{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
