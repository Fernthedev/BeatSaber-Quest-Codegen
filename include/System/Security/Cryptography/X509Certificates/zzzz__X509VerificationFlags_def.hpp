#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509VerificationFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509VerificationFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509VerificationFlags);
// Type: System.Security.Cryptography.X509Certificates::X509VerificationFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8989))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509VerificationFlags
struct CORDL_TYPE X509VerificationFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X509VerificationFlags_Unwrapped
enum struct __X509VerificationFlags_Unwrapped : int32_t {
__E_NoFlag = static_cast<int32_t>(0x0),
__E_IgnoreNotTimeValid = static_cast<int32_t>(0x1),
__E_IgnoreCtlNotTimeValid = static_cast<int32_t>(0x2),
__E_IgnoreNotTimeNested = static_cast<int32_t>(0x4),
__E_IgnoreInvalidBasicConstraints = static_cast<int32_t>(0x8),
__E_AllowUnknownCertificateAuthority = static_cast<int32_t>(0x10),
__E_IgnoreWrongUsage = static_cast<int32_t>(0x20),
__E_IgnoreInvalidName = static_cast<int32_t>(0x40),
__E_IgnoreInvalidPolicy = static_cast<int32_t>(0x80),
__E_IgnoreEndRevocationUnknown = static_cast<int32_t>(0x100),
__E_IgnoreCtlSignerRevocationUnknown = static_cast<int32_t>(0x200),
__E_IgnoreCertificateAuthorityRevocationUnknown = static_cast<int32_t>(0x400),
__E_IgnoreRootRevocationUnknown = static_cast<int32_t>(0x800),
__E_AllFlags = static_cast<int32_t>(0xfff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoFlag value: static_cast<int32_t>(0x0)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const NoFlag;

/// @brief Field IgnoreNotTimeValid value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreNotTimeValid;

/// @brief Field IgnoreCtlNotTimeValid value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCtlNotTimeValid;

/// @brief Field IgnoreNotTimeNested value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreNotTimeNested;

/// @brief Field IgnoreInvalidBasicConstraints value: static_cast<int32_t>(0x8)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidBasicConstraints;

/// @brief Field AllowUnknownCertificateAuthority value: static_cast<int32_t>(0x10)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const AllowUnknownCertificateAuthority;

/// @brief Field IgnoreWrongUsage value: static_cast<int32_t>(0x20)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreWrongUsage;

/// @brief Field IgnoreInvalidName value: static_cast<int32_t>(0x40)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidName;

/// @brief Field IgnoreInvalidPolicy value: static_cast<int32_t>(0x80)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidPolicy;

/// @brief Field IgnoreEndRevocationUnknown value: static_cast<int32_t>(0x100)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreEndRevocationUnknown;

/// @brief Field IgnoreCtlSignerRevocationUnknown value: static_cast<int32_t>(0x200)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCtlSignerRevocationUnknown;

/// @brief Field IgnoreCertificateAuthorityRevocationUnknown value: static_cast<int32_t>(0x400)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCertificateAuthorityRevocationUnknown;

/// @brief Field IgnoreRootRevocationUnknown value: static_cast<int32_t>(0x800)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreRootRevocationUnknown;

/// @brief Field AllFlags value: static_cast<int32_t>(0xfff)
static ::System::Security::Cryptography::X509Certificates::X509VerificationFlags const AllFlags;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __X509VerificationFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509VerificationFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509VerificationFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit X509VerificationFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 X509VerificationFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509VerificationFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509VerificationFlags, "System.Security.Cryptography.X509Certificates", "X509VerificationFlags");
