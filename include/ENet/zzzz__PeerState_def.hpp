#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerState)
// Forward declare root types
namespace ENet {
struct PeerState;
}
// Write type traits
MARK_VAL_T(::ENet::PeerState);
// Type: ENet::PeerState
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15215))
// CS Name: ::ENet::PeerState
struct CORDL_TYPE PeerState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeerState_Unwrapped
enum struct __PeerState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0xffffffff),
__E_Disconnected = static_cast<int32_t>(0x0),
__E_Connecting = static_cast<int32_t>(0x1),
__E_AcknowledgingConnect = static_cast<int32_t>(0x2),
__E_ConnectionPending = static_cast<int32_t>(0x3),
__E_ConnectionSucceeded = static_cast<int32_t>(0x4),
__E_Connected = static_cast<int32_t>(0x5),
__E_DisconnectLater = static_cast<int32_t>(0x6),
__E_Disconnecting = static_cast<int32_t>(0x7),
__E_AcknowledgingDisconnect = static_cast<int32_t>(0x8),
__E_Zombie = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Uninitialized value: static_cast<int32_t>(0xffffffff)
static ::ENet::PeerState const Uninitialized;

/// @brief Field Disconnected value: static_cast<int32_t>(0x0)
static ::ENet::PeerState const Disconnected;

/// @brief Field Connecting value: static_cast<int32_t>(0x1)
static ::ENet::PeerState const Connecting;

/// @brief Field AcknowledgingConnect value: static_cast<int32_t>(0x2)
static ::ENet::PeerState const AcknowledgingConnect;

/// @brief Field ConnectionPending value: static_cast<int32_t>(0x3)
static ::ENet::PeerState const ConnectionPending;

/// @brief Field ConnectionSucceeded value: static_cast<int32_t>(0x4)
static ::ENet::PeerState const ConnectionSucceeded;

/// @brief Field Connected value: static_cast<int32_t>(0x5)
static ::ENet::PeerState const Connected;

/// @brief Field DisconnectLater value: static_cast<int32_t>(0x6)
static ::ENet::PeerState const DisconnectLater;

/// @brief Field Disconnecting value: static_cast<int32_t>(0x7)
static ::ENet::PeerState const Disconnecting;

/// @brief Field AcknowledgingDisconnect value: static_cast<int32_t>(0x8)
static ::ENet::PeerState const AcknowledgingDisconnect;

/// @brief Field Zombie value: static_cast<int32_t>(0x9)
static ::ENet::PeerState const Zombie;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PeerState_Unwrapped () const noexcept {
return std::bit_cast<__PeerState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeerState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PeerState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PeerState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::PeerState, 0x4>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::PeerState, "ENet", "PeerState");
