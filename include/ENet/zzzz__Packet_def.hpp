#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Packet)
namespace System {
class IDisposable;
}
namespace ENet {
struct PacketFlags;
}
namespace ENet {
class PacketFreeCallback;
}
// Forward declare root types
namespace ENet {
struct Packet;
}
// Write type traits
MARK_VAL_T(::ENet::Packet);
// Type: ENet::Packet
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15232))
// CS Name: ::ENet::Packet
struct CORDL_TYPE Packet : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field nativePacket offset 0x0
 __declspec(property(get=__get_nativePacket, put=__set_nativePacket)) ::cordl_internals::intptr_t  nativePacket;

 __declspec(property(get=get_NativeData, put=set_NativeData)) ::cordl_internals::intptr_t  NativeData;

 __declspec(property(get=get_IsSet)) bool  IsSet;

 __declspec(property(get=get_Data)) ::cordl_internals::intptr_t  Data;

 __declspec(property(get=get_UserData, put=set_UserData)) ::cordl_internals::intptr_t  UserData;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_HasReferences)) bool  HasReferences;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_nativePacket(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_nativePacket() ;

constexpr ::cordl_internals::intptr_t const& __get_nativePacket() const;

/// @brief Method get_NativeData addr 0x21efeb0 size 0x8 virtual false final false
inline ::cordl_internals::intptr_t get_NativeData() ;

/// @brief Method set_NativeData addr 0x21efeb8 size 0x8 virtual false final false
inline void set_NativeData(::cordl_internals::intptr_t  value) ;

/// @brief Method .ctor addr 0x21efec0 size 0x8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  packet) ;

/// @brief Method Dispose addr 0x21efec8 size 0x74 virtual true final true
inline void Dispose() ;

/// @brief Method get_IsSet addr 0x21effb8 size 0x54 virtual false final false
inline bool get_IsSet() ;

/// @brief Method get_Data addr 0x21f000c size 0x18 virtual false final false
inline ::cordl_internals::intptr_t get_Data() ;

/// @brief Method get_UserData addr 0x21f0148 size 0x18 virtual false final false
inline ::cordl_internals::intptr_t get_UserData() ;

/// @brief Method set_UserData addr 0x21f01dc size 0x28 virtual false final false
inline void set_UserData(::cordl_internals::intptr_t  value) ;

/// @brief Method get_Length addr 0x21f0288 size 0x18 virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_HasReferences addr 0x21f031c size 0x24 virtual false final false
inline bool get_HasReferences() ;

/// @brief Method ThrowIfNotCreated addr 0x21f0024 size 0xa8 virtual false final false
inline void ThrowIfNotCreated() ;

/// @brief Method SetFreeCallback addr 0x21f03bc size 0x28 virtual false final false
inline void SetFreeCallback(::cordl_internals::intptr_t  callback) ;

/// @brief Method SetFreeCallback addr 0x21f0468 size 0x90 virtual false final false
inline void SetFreeCallback(::ENet::PacketFreeCallback*  callback) ;

/// @brief Method Create addr 0x21f04f8 size 0x64 virtual false final false
inline void Create(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Create addr 0x21f055c size 0x8 virtual false final false
inline void Create(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  length) ;

/// @brief Method Create addr 0x21f063c size 0x1c virtual false final false
inline void Create(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ENet::PacketFlags  flags) ;

/// @brief Method Create addr 0x21f0564 size 0xd8 virtual false final false
inline void Create(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  length, ::ENet::PacketFlags  flags) ;

/// @brief Method Create addr 0x21f06f4 size 0x120 virtual false final false
inline void Create(::cordl_internals::intptr_t  data, int32_t  length, ::ENet::PacketFlags  flags) ;

/// @brief Method Create addr 0x21f08a8 size 0x120 virtual false final false
inline void Create(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset, int32_t  length, ::ENet::PacketFlags  flags) ;

/// @brief Method Create addr 0x21f0a6c size 0x160 virtual false final false
inline void Create(::cordl_internals::intptr_t  data, int32_t  offset, int32_t  length, ::ENet::PacketFlags  flags) ;

/// @brief Method CopyTo addr 0x21f0c68 size 0x100 virtual false final false
inline void CopyTo(::ArrayW<uint8_t,::Array<uint8_t>*>  destination, int32_t  startPos) ;

// Ctor Parameters [CppParam { name: "nativePacket", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr Packet(::cordl_internals::intptr_t  nativePacket) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Packet(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Packet()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Packet, 0x8>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Packet, "ENet", "Packet");
