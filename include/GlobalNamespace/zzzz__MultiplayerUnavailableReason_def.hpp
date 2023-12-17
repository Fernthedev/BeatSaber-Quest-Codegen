#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerUnavailableReason)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerUnavailableReason);
// Type: ::MultiplayerUnavailableReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4515))
// CS Name: ::MultiplayerUnavailableReason
struct CORDL_TYPE MultiplayerUnavailableReason : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MultiplayerUnavailableReason_Unwrapped
enum struct __MultiplayerUnavailableReason_Unwrapped : int32_t {
__E_NetworkUnreachable = static_cast<int32_t>(0x1),
__E_UpdateRequired = static_cast<int32_t>(0x2),
__E_ServerOffline = static_cast<int32_t>(0x3),
__E_MaintenanceMode = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NetworkUnreachable value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::MultiplayerUnavailableReason const NetworkUnreachable;

/// @brief Field UpdateRequired value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::MultiplayerUnavailableReason const UpdateRequired;

/// @brief Field ServerOffline value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::MultiplayerUnavailableReason const ServerOffline;

/// @brief Field MaintenanceMode value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::MultiplayerUnavailableReason const MaintenanceMode;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MultiplayerUnavailableReason_Unwrapped () const noexcept {
return std::bit_cast<__MultiplayerUnavailableReason_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MultiplayerUnavailableReason(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MultiplayerUnavailableReason(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MultiplayerUnavailableReason()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerUnavailableReason, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerUnavailableReason, "", "MultiplayerUnavailableReason");
