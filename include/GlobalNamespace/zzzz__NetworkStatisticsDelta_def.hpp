#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatisticsDelta)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkStatisticsDelta);
// Type: ::NetworkStatisticsDelta
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12901))
// CS Name: ::NetworkStatisticsDelta
struct CORDL_TYPE NetworkStatisticsDelta : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field packetsSentDelta offset 0x0
 __declspec(property(get=__get_packetsSentDelta, put=__set_packetsSentDelta)) int64_t  packetsSentDelta;

/// @brief Field packetsReceivedDelta offset 0x8
 __declspec(property(get=__get_packetsReceivedDelta, put=__set_packetsReceivedDelta)) int64_t  packetsReceivedDelta;

/// @brief Field bytesSentDelta offset 0x10
 __declspec(property(get=__get_bytesSentDelta, put=__set_bytesSentDelta)) int64_t  bytesSentDelta;

/// @brief Field bytesReceivedDelta offset 0x18
 __declspec(property(get=__get_bytesReceivedDelta, put=__set_bytesReceivedDelta)) int64_t  bytesReceivedDelta;

/// @brief Field packetsLostDelta offset 0x20
 __declspec(property(get=__get_packetsLostDelta, put=__set_packetsLostDelta)) int64_t  packetsLostDelta;

/// @brief Field packetsSentEncryptedDelta offset 0x28
 __declspec(property(get=__get_packetsSentEncryptedDelta, put=__set_packetsSentEncryptedDelta)) int64_t  packetsSentEncryptedDelta;

/// @brief Field packetsSentPlaintextDelta offset 0x30
 __declspec(property(get=__get_packetsSentPlaintextDelta, put=__set_packetsSentPlaintextDelta)) int64_t  packetsSentPlaintextDelta;

/// @brief Field packetsSentRejectedDelta offset 0x38
 __declspec(property(get=__get_packetsSentRejectedDelta, put=__set_packetsSentRejectedDelta)) int64_t  packetsSentRejectedDelta;

/// @brief Field packetsReceivedEncryptedDelta offset 0x40
 __declspec(property(get=__get_packetsReceivedEncryptedDelta, put=__set_packetsReceivedEncryptedDelta)) int64_t  packetsReceivedEncryptedDelta;

/// @brief Field packetsReceivedPlaintextDelta offset 0x48
 __declspec(property(get=__get_packetsReceivedPlaintextDelta, put=__set_packetsReceivedPlaintextDelta)) int64_t  packetsReceivedPlaintextDelta;

/// @brief Field packetsReceivedRejectedDelta offset 0x50
 __declspec(property(get=__get_packetsReceivedRejectedDelta, put=__set_packetsReceivedRejectedDelta)) int64_t  packetsReceivedRejectedDelta;

/// @brief Field encryptionProcessingTimeDelta offset 0x58
 __declspec(property(get=__get_encryptionProcessingTimeDelta, put=__set_encryptionProcessingTimeDelta)) int64_t  encryptionProcessingTimeDelta;

/// @brief Field decryptionProcessingTimeDelta offset 0x60
 __declspec(property(get=__get_decryptionProcessingTimeDelta, put=__set_decryptionProcessingTimeDelta)) int64_t  decryptionProcessingTimeDelta;

constexpr void __set_packetsSentDelta(int64_t  value) ;

constexpr int64_t& __get_packetsSentDelta() ;

constexpr int64_t const& __get_packetsSentDelta() const;

constexpr void __set_packetsReceivedDelta(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedDelta() ;

constexpr int64_t const& __get_packetsReceivedDelta() const;

constexpr void __set_bytesSentDelta(int64_t  value) ;

constexpr int64_t& __get_bytesSentDelta() ;

constexpr int64_t const& __get_bytesSentDelta() const;

constexpr void __set_bytesReceivedDelta(int64_t  value) ;

constexpr int64_t& __get_bytesReceivedDelta() ;

constexpr int64_t const& __get_bytesReceivedDelta() const;

constexpr void __set_packetsLostDelta(int64_t  value) ;

constexpr int64_t& __get_packetsLostDelta() ;

constexpr int64_t const& __get_packetsLostDelta() const;

constexpr void __set_packetsSentEncryptedDelta(int64_t  value) ;

constexpr int64_t& __get_packetsSentEncryptedDelta() ;

constexpr int64_t const& __get_packetsSentEncryptedDelta() const;

constexpr void __set_packetsSentPlaintextDelta(int64_t  value) ;

constexpr int64_t& __get_packetsSentPlaintextDelta() ;

constexpr int64_t const& __get_packetsSentPlaintextDelta() const;

constexpr void __set_packetsSentRejectedDelta(int64_t  value) ;

constexpr int64_t& __get_packetsSentRejectedDelta() ;

constexpr int64_t const& __get_packetsSentRejectedDelta() const;

constexpr void __set_packetsReceivedEncryptedDelta(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedEncryptedDelta() ;

constexpr int64_t const& __get_packetsReceivedEncryptedDelta() const;

constexpr void __set_packetsReceivedPlaintextDelta(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedPlaintextDelta() ;

constexpr int64_t const& __get_packetsReceivedPlaintextDelta() const;

constexpr void __set_packetsReceivedRejectedDelta(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedRejectedDelta() ;

constexpr int64_t const& __get_packetsReceivedRejectedDelta() const;

constexpr void __set_encryptionProcessingTimeDelta(int64_t  value) ;

constexpr int64_t& __get_encryptionProcessingTimeDelta() ;

constexpr int64_t const& __get_encryptionProcessingTimeDelta() const;

constexpr void __set_decryptionProcessingTimeDelta(int64_t  value) ;

constexpr int64_t& __get_decryptionProcessingTimeDelta() ;

constexpr int64_t const& __get_decryptionProcessingTimeDelta() const;

/// @brief Method .ctor addr 0xe4d09c size 0x28 virtual false final false
inline void _ctor(int64_t  packetsSentDelta, int64_t  packetsReceivedDelta, int64_t  bytesSentDelta, int64_t  bytesReceivedDelta, int64_t  packetsLostDelta, int64_t  packetsSentEncryptedDelta, int64_t  packetsSentPlaintextDelta, int64_t  packetsSentRejectedDelta, int64_t  packetsReceivedEncryptedDelta, int64_t  packetsReceivedPlaintextDelta, int64_t  packetsReceivedRejectedDelta, int64_t  encryptionProcessingTimeDelta, int64_t  decryptionProcessingTimeDelta) ;

// Ctor Parameters [CppParam { name: "packetsSentDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesSentDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceivedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsLostDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncryptedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentPlaintextDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentRejectedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedEncryptedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedPlaintextDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedRejectedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "encryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "decryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: None }]
constexpr NetworkStatisticsDelta(int64_t  packetsSentDelta, int64_t  packetsReceivedDelta, int64_t  bytesSentDelta, int64_t  bytesReceivedDelta, int64_t  packetsLostDelta, int64_t  packetsSentEncryptedDelta, int64_t  packetsSentPlaintextDelta, int64_t  packetsSentRejectedDelta, int64_t  packetsReceivedEncryptedDelta, int64_t  packetsReceivedPlaintextDelta, int64_t  packetsReceivedRejectedDelta, int64_t  encryptionProcessingTimeDelta, int64_t  decryptionProcessingTimeDelta) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NetworkStatisticsDelta(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NetworkStatisticsDelta()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkStatisticsDelta, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsDelta, "", "NetworkStatisticsDelta");
