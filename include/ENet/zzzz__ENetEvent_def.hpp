#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENetEvent)
namespace ENet {
struct EventType;
}
// Forward declare root types
namespace ENet {
struct ENetEvent;
}
// Write type traits
MARK_VAL_T(::ENet::ENetEvent);
// Type: ENet::ENetEvent
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15219))
// CS Name: ::ENet::ENetEvent
struct CORDL_TYPE ENetEvent : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::ENet::EventType  type;

/// @brief Field peer offset 0x8
 __declspec(property(get=__get_peer, put=__set_peer)) ::cordl_internals::intptr_t  peer;

/// @brief Field channelID offset 0x10
 __declspec(property(get=__get_channelID, put=__set_channelID)) uint8_t  channelID;

/// @brief Field data offset 0x14
 __declspec(property(get=__get_data, put=__set_data)) uint32_t  data;

/// @brief Field packet offset 0x18
 __declspec(property(get=__get_packet, put=__set_packet)) ::cordl_internals::intptr_t  packet;

constexpr void __set_type(::ENet::EventType  value) ;

constexpr ::ENet::EventType& __get_type() ;

constexpr ::ENet::EventType const& __get_type() const;

constexpr void __set_peer(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_peer() ;

constexpr ::cordl_internals::intptr_t const& __get_peer() const;

constexpr void __set_channelID(uint8_t  value) ;

constexpr uint8_t& __get_channelID() ;

constexpr uint8_t const& __get_channelID() const;

constexpr void __set_data(uint32_t  value) ;

constexpr uint32_t& __get_data() ;

constexpr uint32_t const& __get_data() const;

constexpr void __set_packet(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_packet() ;

constexpr ::cordl_internals::intptr_t const& __get_packet() const;

// Ctor Parameters [CppParam { name: "type", ty: "::ENet::EventType", modifiers: "", def_value: None }, CppParam { name: "peer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "channelID", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packet", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ENetEvent(::ENet::EventType  type, ::cordl_internals::intptr_t  peer, uint8_t  channelID, uint32_t  data, ::cordl_internals::intptr_t  packet) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ENetEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ENetEvent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ENetEvent, 0x20>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetEvent, "ENet", "ENetEvent");
