#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509KeyUsageFlags)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags);
// Type: System.Security.Cryptography.X509Certificates::X509KeyUsageFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8984))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509KeyUsageFlags
struct CORDL_TYPE X509KeyUsageFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __X509KeyUsageFlags_Unwrapped
enum struct __X509KeyUsageFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EncipherOnly = static_cast<int32_t>(0x1),
__E_CrlSign = static_cast<int32_t>(0x2),
__E_KeyCertSign = static_cast<int32_t>(0x4),
__E_KeyAgreement = static_cast<int32_t>(0x8),
__E_DataEncipherment = static_cast<int32_t>(0x10),
__E_KeyEncipherment = static_cast<int32_t>(0x20),
__E_NonRepudiation = static_cast<int32_t>(0x40),
__E_DigitalSignature = static_cast<int32_t>(0x80),
__E_DecipherOnly = static_cast<int32_t>(0x8000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const None;

/// @brief Field EncipherOnly value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const EncipherOnly;

/// @brief Field CrlSign value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const CrlSign;

/// @brief Field KeyCertSign value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyCertSign;

/// @brief Field KeyAgreement value: static_cast<int32_t>(0x8)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyAgreement;

/// @brief Field DataEncipherment value: static_cast<int32_t>(0x10)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DataEncipherment;

/// @brief Field KeyEncipherment value: static_cast<int32_t>(0x20)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyEncipherment;

/// @brief Field NonRepudiation value: static_cast<int32_t>(0x40)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const NonRepudiation;

/// @brief Field DigitalSignature value: static_cast<int32_t>(0x80)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DigitalSignature;

/// @brief Field DecipherOnly value: static_cast<int32_t>(0x8000)
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DecipherOnly;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __X509KeyUsageFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509KeyUsageFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509KeyUsageFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit X509KeyUsageFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 X509KeyUsageFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyUsageFlags");
