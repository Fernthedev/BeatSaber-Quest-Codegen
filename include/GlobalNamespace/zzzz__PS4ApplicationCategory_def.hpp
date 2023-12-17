#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS4ApplicationCategory)
// Forward declare root types
namespace GlobalNamespace {
struct PS4ApplicationCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PS4ApplicationCategory);
// Type: ::PS4ApplicationCategory
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4554))
// CS Name: ::PS4ApplicationCategory
struct CORDL_TYPE PS4ApplicationCategory : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PS4ApplicationCategory_Unwrapped
enum struct __PS4ApplicationCategory_Unwrapped : int32_t {
__E_Application = static_cast<int32_t>(0x0),
__E_Patch = static_cast<int32_t>(0x1),
__E_Remaster = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Application value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::PS4ApplicationCategory const Application;

/// @brief Field Patch value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::PS4ApplicationCategory const Patch;

/// @brief Field Remaster value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::PS4ApplicationCategory const Remaster;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PS4ApplicationCategory_Unwrapped () const noexcept {
return std::bit_cast<__PS4ApplicationCategory_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PS4ApplicationCategory(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PS4ApplicationCategory(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PS4ApplicationCategory()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4ApplicationCategory, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4ApplicationCategory, "", "PS4ApplicationCategory");
