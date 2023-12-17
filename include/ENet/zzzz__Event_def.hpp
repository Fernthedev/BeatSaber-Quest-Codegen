#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace ENet {
struct Peer;
}
namespace ENet {
struct EventType;
}
namespace ENet {
struct ENetEvent;
}
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace ENet {
struct Event;
}
// Write type traits
MARK_VAL_T(::ENet::Event);
// Type: ENet::Event
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15230))
// CS Name: ::ENet::Event
struct CORDL_TYPE Event : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field nativeEvent offset 0x0
 __declspec(property(get=__get_nativeEvent, put=__set_nativeEvent)) ::ENet::ENetEvent  nativeEvent;

 __declspec(property(get=get_NativeData, put=set_NativeData)) ::ENet::ENetEvent  NativeData;

 __declspec(property(get=get_Type)) ::ENet::EventType  Type;

 __declspec(property(get=get_Peer)) ::ENet::Peer  Peer;

 __declspec(property(get=get_ChannelID)) uint8_t  ChannelID;

 __declspec(property(get=get_Data)) uint32_t  Data;

 __declspec(property(get=get_Packet)) ::ENet::Packet  Packet;

constexpr void __set_nativeEvent(::ENet::ENetEvent  value) ;

constexpr ::ENet::ENetEvent& __get_nativeEvent() ;

constexpr ::ENet::ENetEvent const& __get_nativeEvent() const;

/// @brief Method get_NativeData addr 0x21efd60 size 0xc virtual false final false
inline ::ENet::ENetEvent get_NativeData() ;

/// @brief Method set_NativeData addr 0x21efd6c size 0xc virtual false final false
inline void set_NativeData(::ENet::ENetEvent  value) ;

/// @brief Method .ctor addr 0x21efd78 size 0xc virtual false final false
inline void _ctor(::ENet::ENetEvent  event) ;

/// @brief Method get_Type addr 0x21efd84 size 0x8 virtual false final false
inline ::ENet::EventType get_Type() ;

/// @brief Method get_Peer addr 0x21efd8c size 0x28 virtual false final false
inline ::ENet::Peer get_Peer() ;

/// @brief Method get_ChannelID addr 0x21efe34 size 0x8 virtual false final false
inline uint8_t get_ChannelID() ;

/// @brief Method get_Data addr 0x21efe3c size 0x8 virtual false final false
inline uint32_t get_Data() ;

/// @brief Method get_Packet addr 0x21efe44 size 0x8 virtual false final false
inline ::ENet::Packet get_Packet() ;

// Ctor Parameters [CppParam { name: "nativeEvent", ty: "::ENet::ENetEvent", modifiers: "", def_value: None }]
constexpr Event(::ENet::ENetEvent  nativeEvent) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Event(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Event()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Event, 0x20>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Event, "ENet", "Event");
