#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509NameType)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509NameType);
// Type: System.Security.Cryptography.X509Certificates::X509NameType
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8985))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509NameType
struct CORDL_TYPE X509NameType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X509NameType_Unwrapped
enum struct __X509NameType_Unwrapped : int32_t {
__E_SimpleName = static_cast<int32_t>(0x0),
__E_EmailName = static_cast<int32_t>(0x1),
__E_UpnName = static_cast<int32_t>(0x2),
__E_DnsName = static_cast<int32_t>(0x3),
__E_DnsFromAlternativeName = static_cast<int32_t>(0x4),
__E_UrlName = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field SimpleName value: static_cast<int32_t>(0x0)
static ::System::Security::Cryptography::X509Certificates::X509NameType const SimpleName;

/// @brief Field EmailName value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::X509Certificates::X509NameType const EmailName;

/// @brief Field UpnName value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::X509Certificates::X509NameType const UpnName;

/// @brief Field DnsName value: static_cast<int32_t>(0x3)
static ::System::Security::Cryptography::X509Certificates::X509NameType const DnsName;

/// @brief Field DnsFromAlternativeName value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::X509Certificates::X509NameType const DnsFromAlternativeName;

/// @brief Field UrlName value: static_cast<int32_t>(0x5)
static ::System::Security::Cryptography::X509Certificates::X509NameType const UrlName;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __X509NameType_Unwrapped () const noexcept {
return std::bit_cast<__X509NameType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509NameType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit X509NameType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 X509NameType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509NameType, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509NameType, "System.Security.Cryptography.X509Certificates", "X509NameType");
