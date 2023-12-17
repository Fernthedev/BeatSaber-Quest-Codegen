#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RevocationKeyTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct RevocationKeyTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::RevocationKeyTag);
// Type: Org.BouncyCastle.Bcpg::RevocationKeyTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(543))
// CS Name: ::Org.BouncyCastle.Bcpg::RevocationKeyTag
struct CORDL_TYPE RevocationKeyTag : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __RevocationKeyTag_Unwrapped
enum struct __RevocationKeyTag_Unwrapped : uint8_t {
__E_ClassDefault = static_cast<uint8_t>(0x80u),
__E_ClassSensitive = static_cast<uint8_t>(0x40u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field ClassDefault value: static_cast<uint8_t>(0x80u)
static ::Org::BouncyCastle::Bcpg::RevocationKeyTag const ClassDefault;

/// @brief Field ClassSensitive value: static_cast<uint8_t>(0x40u)
static ::Org::BouncyCastle::Bcpg::RevocationKeyTag const ClassSensitive;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RevocationKeyTag_Unwrapped () const noexcept {
return std::bit_cast<__RevocationKeyTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr RevocationKeyTag(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RevocationKeyTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RevocationKeyTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RevocationKeyTag, 0x1>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationKeyTag, "Org.BouncyCastle.Bcpg", "RevocationKeyTag");
