#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::HashAlgorithmTag);
// Type: Org.BouncyCastle.Bcpg::HashAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(572))
// CS Name: ::Org.BouncyCastle.Bcpg::HashAlgorithmTag
struct CORDL_TYPE HashAlgorithmTag : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HashAlgorithmTag_Unwrapped
enum struct __HashAlgorithmTag_Unwrapped : int32_t {
__E_MD5 = static_cast<int32_t>(0x1),
__E_Sha1 = static_cast<int32_t>(0x2),
__E_RipeMD160 = static_cast<int32_t>(0x3),
__E_DoubleSha = static_cast<int32_t>(0x4),
__E_MD2 = static_cast<int32_t>(0x5),
__E_Tiger192 = static_cast<int32_t>(0x6),
__E_Haval5pass160 = static_cast<int32_t>(0x7),
__E_Sha256 = static_cast<int32_t>(0x8),
__E_Sha384 = static_cast<int32_t>(0x9),
__E_Sha512 = static_cast<int32_t>(0xa),
__E_Sha224 = static_cast<int32_t>(0xb),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field MD5 value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const MD5;

/// @brief Field Sha1 value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha1;

/// @brief Field RipeMD160 value: static_cast<int32_t>(0x3)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const RipeMD160;

/// @brief Field DoubleSha value: static_cast<int32_t>(0x4)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const DoubleSha;

/// @brief Field MD2 value: static_cast<int32_t>(0x5)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const MD2;

/// @brief Field Tiger192 value: static_cast<int32_t>(0x6)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Tiger192;

/// @brief Field Haval5pass160 value: static_cast<int32_t>(0x7)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Haval5pass160;

/// @brief Field Sha256 value: static_cast<int32_t>(0x8)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha256;

/// @brief Field Sha384 value: static_cast<int32_t>(0x9)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha384;

/// @brief Field Sha512 value: static_cast<int32_t>(0xa)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha512;

/// @brief Field Sha224 value: static_cast<int32_t>(0xb)
static ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha224;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HashAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__HashAlgorithmTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HashAlgorithmTag(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HashAlgorithmTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HashAlgorithmTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, "Org.BouncyCastle.Bcpg", "HashAlgorithmTag");
