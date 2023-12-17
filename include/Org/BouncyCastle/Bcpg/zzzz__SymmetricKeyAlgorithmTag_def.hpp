#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SymmetricKeyAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag);
// Type: Org.BouncyCastle.Bcpg::SymmetricKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(594))
// CS Name: ::Org.BouncyCastle.Bcpg::SymmetricKeyAlgorithmTag
struct CORDL_TYPE SymmetricKeyAlgorithmTag : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SymmetricKeyAlgorithmTag_Unwrapped
enum struct __SymmetricKeyAlgorithmTag_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_Idea = static_cast<int32_t>(0x1),
__E_TripleDes = static_cast<int32_t>(0x2),
__E_Cast5 = static_cast<int32_t>(0x3),
__E_Blowfish = static_cast<int32_t>(0x4),
__E_Safer = static_cast<int32_t>(0x5),
__E_Des = static_cast<int32_t>(0x6),
__E_Aes128 = static_cast<int32_t>(0x7),
__E_Aes192 = static_cast<int32_t>(0x8),
__E_Aes256 = static_cast<int32_t>(0x9),
__E_Twofish = static_cast<int32_t>(0xa),
__E_Camellia128 = static_cast<int32_t>(0xb),
__E_Camellia192 = static_cast<int32_t>(0xc),
__E_Camellia256 = static_cast<int32_t>(0xd),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Null value: static_cast<int32_t>(0x0)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Null;

/// @brief Field Idea value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Idea;

/// @brief Field TripleDes value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const TripleDes;

/// @brief Field Cast5 value: static_cast<int32_t>(0x3)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Cast5;

/// @brief Field Blowfish value: static_cast<int32_t>(0x4)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Blowfish;

/// @brief Field Safer value: static_cast<int32_t>(0x5)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Safer;

/// @brief Field Des value: static_cast<int32_t>(0x6)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Des;

/// @brief Field Aes128 value: static_cast<int32_t>(0x7)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes128;

/// @brief Field Aes192 value: static_cast<int32_t>(0x8)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes192;

/// @brief Field Aes256 value: static_cast<int32_t>(0x9)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Aes256;

/// @brief Field Twofish value: static_cast<int32_t>(0xa)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Twofish;

/// @brief Field Camellia128 value: static_cast<int32_t>(0xb)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia128;

/// @brief Field Camellia192 value: static_cast<int32_t>(0xc)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia192;

/// @brief Field Camellia256 value: static_cast<int32_t>(0xd)
static ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const Camellia256;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SymmetricKeyAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__SymmetricKeyAlgorithmTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SymmetricKeyAlgorithmTag(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SymmetricKeyAlgorithmTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SymmetricKeyAlgorithmTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, "Org.BouncyCastle.Bcpg", "SymmetricKeyAlgorithmTag");
