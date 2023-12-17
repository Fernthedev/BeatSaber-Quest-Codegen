#pragma once
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatus_def.hpp"
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::Cmp::PkiStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::Cmp::PkiStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus::PkiStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::Granted{static_cast<int32_t>(0x0)};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::GrantedWithMods{static_cast<int32_t>(0x1)};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::Rejection{static_cast<int32_t>(0x2)};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::Waiting{static_cast<int32_t>(0x3)};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::RevocationWarning{static_cast<int32_t>(0x4)};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::RevocationNotification{static_cast<int32_t>(0x5)};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatus  Org::BouncyCastle::Asn1::Cmp::PkiStatus::KeyUpdateWarning{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
