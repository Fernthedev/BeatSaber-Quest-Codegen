#pragma once
#include "Internal/Cryptography/Pal/zzzz__GeneralNameType_def.hpp"
constexpr void Internal::Cryptography::Pal::GeneralNameType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Internal::Cryptography::Pal::GeneralNameType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Internal::Cryptography::Pal::GeneralNameType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Internal::Cryptography::Pal::GeneralNameType::GeneralNameType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::OtherName{static_cast<int32_t>(0x0)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::Rfc822Name{static_cast<int32_t>(0x1)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::Email{static_cast<int32_t>(0x1)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::DnsName{static_cast<int32_t>(0x2)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::X400Address{static_cast<int32_t>(0x3)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::DirectoryName{static_cast<int32_t>(0x4)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::EdiPartyName{static_cast<int32_t>(0x5)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::UniformResourceIdentifier{static_cast<int32_t>(0x6)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::IPAddress{static_cast<int32_t>(0x7)};
constexpr ::Internal::Cryptography::Pal::GeneralNameType  Internal::Cryptography::Pal::GeneralNameType::RegisteredId{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
