#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAttributeSubpacketTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag);
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacketTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(599))
// CS Name: ::Org.BouncyCastle.Bcpg::UserAttributeSubpacketTag
struct CORDL_TYPE UserAttributeSubpacketTag : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserAttributeSubpacketTag_Unwrapped
enum struct __UserAttributeSubpacketTag_Unwrapped : int32_t {
__E_ImageAttribute = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ImageAttribute value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag const ImageAttribute;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UserAttributeSubpacketTag_Unwrapped () const noexcept {
return std::bit_cast<__UserAttributeSubpacketTag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserAttributeSubpacketTag(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UserAttributeSubpacketTag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UserAttributeSubpacketTag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacketTag");
