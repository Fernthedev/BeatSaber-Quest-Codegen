#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionAlgorithmTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag);
// Type: Org.BouncyCastle.Bcpg::CompressionAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(559))
// CS Name: ::Org.BouncyCastle.Bcpg::CompressionAlgorithmTag
struct CORDL_TYPE CompressionAlgorithmTag : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionAlgorithmTag_Unwrapped
enum struct __CompressionAlgorithmTag_Unwrapped : int32_t {
__E_Uncompressed = static_cast<int32_t>(0x0),
__E_Zip = static_cast<int32_t>(0x1),
__E_ZLib = static_cast<int32_t>(0x2),
__E_BZip2 = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Uncompressed value: static_cast<int32_t>(0x0)
static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const Uncompressed;

/// @brief Field Zip value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const Zip;

/// @brief Field ZLib value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const ZLib;

/// @brief Field BZip2 value: static_cast<int32_t>(0x3)
static ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const BZip2;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__CompressionAlgorithmTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompressionAlgorithmTag(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CompressionAlgorithmTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CompressionAlgorithmTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, "Org.BouncyCastle.Bcpg", "CompressionAlgorithmTag");
