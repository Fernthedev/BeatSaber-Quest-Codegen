#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAgeCategory)
// Forward declare root types
namespace GlobalNamespace {
struct UserAgeCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UserAgeCategory);
// Type: ::UserAgeCategory
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4660))
// CS Name: ::UserAgeCategory
struct CORDL_TYPE UserAgeCategory : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserAgeCategory_Unwrapped
enum struct __UserAgeCategory_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Child = static_cast<int32_t>(0x1),
__E_Teen = static_cast<int32_t>(0x2),
__E_Adult = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::UserAgeCategory const Unknown;

/// @brief Field Child value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::UserAgeCategory const Child;

/// @brief Field Teen value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::UserAgeCategory const Teen;

/// @brief Field Adult value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::UserAgeCategory const Adult;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UserAgeCategory_Unwrapped () const noexcept {
return std::bit_cast<__UserAgeCategory_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserAgeCategory(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UserAgeCategory(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UserAgeCategory()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UserAgeCategory, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserAgeCategory, "", "UserAgeCategory");
