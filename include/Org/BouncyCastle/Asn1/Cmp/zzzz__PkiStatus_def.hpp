#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PkiStatus)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Asn1::Cmp::PkiStatus);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiStatus
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(41))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiStatus
struct CORDL_TYPE PkiStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PkiStatus_Unwrapped
enum struct __PkiStatus_Unwrapped : int32_t {
__E_Granted = static_cast<int32_t>(0x0),
__E_GrantedWithMods = static_cast<int32_t>(0x1),
__E_Rejection = static_cast<int32_t>(0x2),
__E_Waiting = static_cast<int32_t>(0x3),
__E_RevocationWarning = static_cast<int32_t>(0x4),
__E_RevocationNotification = static_cast<int32_t>(0x5),
__E_KeyUpdateWarning = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Granted value: static_cast<int32_t>(0x0)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Granted;

/// @brief Field GrantedWithMods value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const GrantedWithMods;

/// @brief Field Rejection value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Rejection;

/// @brief Field Waiting value: static_cast<int32_t>(0x3)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Waiting;

/// @brief Field RevocationWarning value: static_cast<int32_t>(0x4)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const RevocationWarning;

/// @brief Field RevocationNotification value: static_cast<int32_t>(0x5)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const RevocationNotification;

/// @brief Field KeyUpdateWarning value: static_cast<int32_t>(0x6)
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const KeyUpdateWarning;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PkiStatus_Unwrapped () const noexcept {
return std::bit_cast<__PkiStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PkiStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PkiStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PkiStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiStatus, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiStatus, "Org.BouncyCastle.Asn1.Cmp", "PkiStatus");
