#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceClientStats)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceClientStats);
// Type: IgnoranceCore::IgnoranceClientStats
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15249))
// CS Name: ::IgnoranceCore::IgnoranceClientStats
struct CORDL_TYPE IgnoranceClientStats : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field RTT offset 0x0
 __declspec(property(get=__get_RTT, put=__set_RTT)) uint32_t  RTT;

/// @brief Field BytesReceived offset 0x8
 __declspec(property(get=__get_BytesReceived, put=__set_BytesReceived)) uint64_t  BytesReceived;

/// @brief Field BytesSent offset 0x10
 __declspec(property(get=__get_BytesSent, put=__set_BytesSent)) uint64_t  BytesSent;

/// @brief Field PacketsReceived offset 0x18
 __declspec(property(get=__get_PacketsReceived, put=__set_PacketsReceived)) uint64_t  PacketsReceived;

/// @brief Field PacketsSent offset 0x20
 __declspec(property(get=__get_PacketsSent, put=__set_PacketsSent)) uint64_t  PacketsSent;

/// @brief Field PacketsLost offset 0x28
 __declspec(property(get=__get_PacketsLost, put=__set_PacketsLost)) uint64_t  PacketsLost;

constexpr void __set_RTT(uint32_t  value) ;

constexpr uint32_t& __get_RTT() ;

constexpr uint32_t const& __get_RTT() const;

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

constexpr void __set_PacketsLost(uint64_t  value) ;

constexpr uint64_t& __get_PacketsLost() ;

constexpr uint64_t const& __get_PacketsLost() const;

// Ctor Parameters [CppParam { name: "RTT", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsLost", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr IgnoranceClientStats(uint32_t  RTT, uint64_t  BytesReceived, uint64_t  BytesSent, uint64_t  PacketsReceived, uint64_t  PacketsSent, uint64_t  PacketsLost) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IgnoranceClientStats(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IgnoranceClientStats()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceClientStats, 0x30>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceClientStats, "IgnoranceCore", "IgnoranceClientStats");
