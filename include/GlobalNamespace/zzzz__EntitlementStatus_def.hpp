#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntitlementStatus)
// Forward declare root types
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EntitlementStatus);
// Type: ::EntitlementStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16270))
// CS Name: ::EntitlementStatus
struct CORDL_TYPE EntitlementStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EntitlementStatus_Unwrapped
enum struct __EntitlementStatus_Unwrapped : int32_t {
__E_Failed = static_cast<int32_t>(0x0),
__E_Owned = static_cast<int32_t>(0x1),
__E_NotOwned = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Failed value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::EntitlementStatus const Failed;

/// @brief Field Owned value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::EntitlementStatus const Owned;

/// @brief Field NotOwned value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::EntitlementStatus const NotOwned;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EntitlementStatus_Unwrapped () const noexcept {
return std::bit_cast<__EntitlementStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EntitlementStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EntitlementStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EntitlementStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EntitlementStatus, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EntitlementStatus, "", "EntitlementStatus");
