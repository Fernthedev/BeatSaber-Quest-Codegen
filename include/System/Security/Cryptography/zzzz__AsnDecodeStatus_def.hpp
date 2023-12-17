#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsnDecodeStatus)
// Forward declare root types
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::AsnDecodeStatus);
// Type: System.Security.Cryptography::AsnDecodeStatus
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8976))
// CS Name: ::System.Security.Cryptography::AsnDecodeStatus
struct CORDL_TYPE AsnDecodeStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AsnDecodeStatus_Unwrapped
enum struct __AsnDecodeStatus_Unwrapped : int32_t {
__E_NotDecoded = static_cast<int32_t>(0xffffffff),
__E_Ok = static_cast<int32_t>(0x0),
__E_BadAsn = static_cast<int32_t>(0x1),
__E_BadTag = static_cast<int32_t>(0x2),
__E_BadLength = static_cast<int32_t>(0x3),
__E_InformationNotAvailable = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NotDecoded value: static_cast<int32_t>(0xffffffff)
static ::System::Security::Cryptography::AsnDecodeStatus const NotDecoded;

/// @brief Field Ok value: static_cast<int32_t>(0x0)
static ::System::Security::Cryptography::AsnDecodeStatus const Ok;

/// @brief Field BadAsn value: static_cast<int32_t>(0x1)
static ::System::Security::Cryptography::AsnDecodeStatus const BadAsn;

/// @brief Field BadTag value: static_cast<int32_t>(0x2)
static ::System::Security::Cryptography::AsnDecodeStatus const BadTag;

/// @brief Field BadLength value: static_cast<int32_t>(0x3)
static ::System::Security::Cryptography::AsnDecodeStatus const BadLength;

/// @brief Field InformationNotAvailable value: static_cast<int32_t>(0x4)
static ::System::Security::Cryptography::AsnDecodeStatus const InformationNotAvailable;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AsnDecodeStatus_Unwrapped () const noexcept {
return std::bit_cast<__AsnDecodeStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsnDecodeStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsnDecodeStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsnDecodeStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsnDecodeStatus, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsnDecodeStatus, "System.Security.Cryptography", "AsnDecodeStatus");
