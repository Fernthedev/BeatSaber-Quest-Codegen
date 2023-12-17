#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableParameter_def.hpp"
constexpr void Org::BouncyCastle::Cms::CmsAttributeTableParameter::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Cms::CmsAttributeTableParameter::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsAttributeTableParameter::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter::CmsAttributeTableParameter(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::ContentType{static_cast<int32_t>(0x0)};
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::Digest{static_cast<int32_t>(0x1)};
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::Signature{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::DigestAlgorithmIdentifier{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
