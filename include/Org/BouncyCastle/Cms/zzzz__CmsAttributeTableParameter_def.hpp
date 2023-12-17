#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAttributeTableParameter)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
struct CmsAttributeTableParameter;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Cms::CmsAttributeTableParameter);
// Type: Org.BouncyCastle.Cms::CmsAttributeTableParameter
namespace Org::BouncyCastle::Cms {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(614))
// CS Name: ::Org.BouncyCastle.Cms::CmsAttributeTableParameter
struct CORDL_TYPE CmsAttributeTableParameter : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CmsAttributeTableParameter_Unwrapped
enum struct __CmsAttributeTableParameter_Unwrapped : int32_t {
__E_ContentType = static_cast<int32_t>(0x0),
__E_Digest = static_cast<int32_t>(0x1),
__E_Signature = static_cast<int32_t>(0x2),
__E_DigestAlgorithmIdentifier = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ContentType value: static_cast<int32_t>(0x0)
static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const ContentType;

/// @brief Field Digest value: static_cast<int32_t>(0x1)
static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const Digest;

/// @brief Field Signature value: static_cast<int32_t>(0x2)
static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const Signature;

/// @brief Field DigestAlgorithmIdentifier value: static_cast<int32_t>(0x3)
static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const DigestAlgorithmIdentifier;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CmsAttributeTableParameter_Unwrapped () const noexcept {
return std::bit_cast<__CmsAttributeTableParameter_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CmsAttributeTableParameter(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CmsAttributeTableParameter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CmsAttributeTableParameter()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAttributeTableParameter, 0x4>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableParameter, "Org.BouncyCastle.Cms", "CmsAttributeTableParameter");
