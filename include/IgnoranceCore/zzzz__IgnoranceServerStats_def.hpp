#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceServerStats)
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceServerStats);
// Type: IgnoranceCore::IgnoranceServerStats
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15251))
// CS Name: ::IgnoranceCore::IgnoranceServerStats
struct CORDL_TYPE IgnoranceServerStats : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field BytesReceived offset 0x0
 __declspec(property(get=__get_BytesReceived, put=__set_BytesReceived)) uint64_t  BytesReceived;

/// @brief Field BytesSent offset 0x8
 __declspec(property(get=__get_BytesSent, put=__set_BytesSent)) uint64_t  BytesSent;

/// @brief Field PacketsReceived offset 0x10
 __declspec(property(get=__get_PacketsReceived, put=__set_PacketsReceived)) uint64_t  PacketsReceived;

/// @brief Field PacketsSent offset 0x18
 __declspec(property(get=__get_PacketsSent, put=__set_PacketsSent)) uint64_t  PacketsSent;

/// @brief Field PeersCount offset 0x20
 __declspec(property(get=__get_PeersCount, put=__set_PeersCount)) uint64_t  PeersCount;

/// @brief Field PeerStats offset 0x28
 __declspec(property(get=__get_PeerStats, put=__set_PeerStats)) ::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*  PeerStats;

constexpr void __set_BytesReceived(uint64_t  value) ;

constexpr uint64_t& __get_BytesReceived() ;

constexpr uint64_t const& __get_BytesReceived() const;

constexpr void __set_BytesSent(uint64_t  value) ;

constexpr uint64_t& __get_BytesSent() ;

constexpr uint64_t const& __get_BytesSent() const;

constexpr void __set_PacketsReceived(uint64_t  value) ;

constexpr uint64_t& __get_PacketsReceived() ;

constexpr uint64_t const& __get_PacketsReceived() const;

constexpr void __set_PacketsSent(uint64_t  value) ;

constexpr uint64_t& __get_PacketsSent() ;

constexpr uint64_t const& __get_PacketsSent() const;

constexpr void __set_PeersCount(uint64_t  value) ;

constexpr uint64_t& __get_PeersCount() ;

constexpr uint64_t const& __get_PeersCount() const;

constexpr void __set_PeerStats(::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>* __get_PeerStats() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*> __get_PeerStats() const;

// Ctor Parameters [CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PeersCount", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PeerStats", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*", modifiers: "", def_value: None }]
constexpr IgnoranceServerStats(uint64_t  BytesReceived, uint64_t  BytesSent, uint64_t  PacketsReceived, uint64_t  PacketsSent, uint64_t  PeersCount, ::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*  PeerStats) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IgnoranceServerStats(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IgnoranceServerStats()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceServerStats, 0x30>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceServerStats, "IgnoranceCore", "IgnoranceServerStats");
