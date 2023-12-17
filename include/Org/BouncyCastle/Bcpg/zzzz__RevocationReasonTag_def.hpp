#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RevocationReasonTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct RevocationReasonTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::RevocationReasonTag);
// Type: Org.BouncyCastle.Bcpg::RevocationReasonTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(545))
// CS Name: ::Org.BouncyCastle.Bcpg::RevocationReasonTag
struct CORDL_TYPE RevocationReasonTag : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __RevocationReasonTag_Unwrapped
enum struct __RevocationReasonTag_Unwrapped : uint8_t {
__E_NoReason = static_cast<uint8_t>(0x0u),
__E_KeySuperseded = static_cast<uint8_t>(0x1u),
__E_KeyCompromised = static_cast<uint8_t>(0x2u),
__E_KeyRetired = static_cast<uint8_t>(0x3u),
__E_UserNoLongerValid = static_cast<uint8_t>(0x20u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field NoReason value: static_cast<uint8_t>(0x0u)
static ::Org::BouncyCastle::Bcpg::RevocationReasonTag const NoReason;

/// @brief Field KeySuperseded value: static_cast<uint8_t>(0x1u)
static ::Org::BouncyCastle::Bcpg::RevocationReasonTag const KeySuperseded;

/// @brief Field KeyCompromised value: static_cast<uint8_t>(0x2u)
static ::Org::BouncyCastle::Bcpg::RevocationReasonTag const KeyCompromised;

/// @brief Field KeyRetired value: static_cast<uint8_t>(0x3u)
static ::Org::BouncyCastle::Bcpg::RevocationReasonTag const KeyRetired;

/// @brief Field UserNoLongerValid value: static_cast<uint8_t>(0x20u)
static ::Org::BouncyCastle::Bcpg::RevocationReasonTag const UserNoLongerValid;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RevocationReasonTag_Unwrapped () const noexcept {
return std::bit_cast<__RevocationReasonTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr RevocationReasonTag(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RevocationReasonTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RevocationReasonTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RevocationReasonTag, 0x1>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationReasonTag, "Org.BouncyCastle.Bcpg", "RevocationReasonTag");
