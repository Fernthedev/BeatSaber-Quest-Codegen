#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceIncomingPacket)
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceIncomingPacket);
// Type: IgnoranceCore::IgnoranceIncomingPacket
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15245))
// CS Name: ::IgnoranceCore::IgnoranceIncomingPacket
struct CORDL_TYPE IgnoranceIncomingPacket : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Channel offset 0x0
 __declspec(property(get=__get_Channel, put=__set_Channel)) uint8_t  Channel;

/// @brief Field NativePeerId offset 0x4
 __declspec(property(get=__get_NativePeerId, put=__set_NativePeerId)) uint32_t  NativePeerId;

/// @brief Field Payload offset 0x8
 __declspec(property(get=__get_Payload, put=__set_Payload)) ::ENet::Packet  Payload;

constexpr void __set_Channel(uint8_t  value) ;

constexpr uint8_t& __get_Channel() ;

constexpr uint8_t const& __get_Channel() const;

constexpr void __set_NativePeerId(uint32_t  value) ;

constexpr uint32_t& __get_NativePeerId() ;

constexpr uint32_t const& __get_NativePeerId() const;

constexpr void __set_Payload(::ENet::Packet  value) ;

constexpr ::ENet::Packet& __get_Payload() ;

constexpr ::ENet::Packet const& __get_Payload() const;

// Ctor Parameters [CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Payload", ty: "::ENet::Packet", modifiers: "", def_value: None }]
constexpr IgnoranceIncomingPacket(uint8_t  Channel, uint32_t  NativePeerId, ::ENet::Packet  Payload) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IgnoranceIncomingPacket(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IgnoranceIncomingPacket()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceIncomingPacket, 0x10>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceIncomingPacket, "IgnoranceCore", "IgnoranceIncomingPacket");
