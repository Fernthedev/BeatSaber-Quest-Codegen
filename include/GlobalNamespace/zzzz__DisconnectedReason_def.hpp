#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectedReason)
// Forward declare root types
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DisconnectedReason);
// Type: ::DisconnectedReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12720))
// CS Name: ::DisconnectedReason
struct CORDL_TYPE DisconnectedReason : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DisconnectedReason_Unwrapped
enum struct __DisconnectedReason_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x1),
__E_UserInitiated = static_cast<int32_t>(0x2),
__E_Timeout = static_cast<int32_t>(0x3),
__E_Kicked = static_cast<int32_t>(0x4),
__E_ServerAtCapacity = static_cast<int32_t>(0x5),
__E_ServerConnectionClosed = static_cast<int32_t>(0x6),
__E_MasterServerUnreachable = static_cast<int32_t>(0x7),
__E_ClientConnectionClosed = static_cast<int32_t>(0x8),
__E_NetworkDisconnected = static_cast<int32_t>(0x9),
__E_ServerTerminated = static_cast<int32_t>(0xa),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::DisconnectedReason const Unknown;

/// @brief Field UserInitiated value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::DisconnectedReason const UserInitiated;

/// @brief Field Timeout value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::DisconnectedReason const Timeout;

/// @brief Field Kicked value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::DisconnectedReason const Kicked;

/// @brief Field ServerAtCapacity value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::DisconnectedReason const ServerAtCapacity;

/// @brief Field ServerConnectionClosed value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::DisconnectedReason const ServerConnectionClosed;

/// @brief Field MasterServerUnreachable value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::DisconnectedReason const MasterServerUnreachable;

/// @brief Field ClientConnectionClosed value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::DisconnectedReason const ClientConnectionClosed;

/// @brief Field NetworkDisconnected value: static_cast<int32_t>(0x9)
static ::GlobalNamespace::DisconnectedReason const NetworkDisconnected;

/// @brief Field ServerTerminated value: static_cast<int32_t>(0xa)
static ::GlobalNamespace::DisconnectedReason const ServerTerminated;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DisconnectedReason_Unwrapped () const noexcept {
return std::bit_cast<__DisconnectedReason_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisconnectedReason(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DisconnectedReason(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DisconnectedReason()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectedReason, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedReason, "", "DisconnectedReason");
