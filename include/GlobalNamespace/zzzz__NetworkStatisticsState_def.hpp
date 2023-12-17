#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStatisticsState)
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
// Forward declare root types
namespace GlobalNamespace {
class __NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
struct NetworkStatisticsState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate);
MARK_VAL_T(::GlobalNamespace::NetworkStatisticsState);
// Type: ::NetworkStatisticsUpdateDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12899))
// CS Name: ::NetworkStatisticsState::NetworkStatisticsUpdateDelegate*
class CORDL_TYPE __NetworkStatisticsState__NetworkStatisticsUpdateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0xe4d0c4 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0xe4d198 size 0x14 virtual true final false
inline void Invoke(ByRef<::GlobalNamespace::NetworkStatisticsState>  statisticsState) ;

/// @brief Method BeginInvoke addr 0xe4d1ac size 0x8c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState>  statisticsState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0xe4d238 size 0xc virtual true final false
inline void EndInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState>  statisticsState, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkStatisticsState__NetworkStatisticsUpdateDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NetworkStatisticsState__NetworkStatisticsUpdateDelegate(__NetworkStatisticsState__NetworkStatisticsUpdateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NetworkStatisticsState__NetworkStatisticsUpdateDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NetworkStatisticsState__NetworkStatisticsUpdateDelegate(__NetworkStatisticsState__NetworkStatisticsUpdateDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NetworkStatisticsState__NetworkStatisticsUpdateDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NetworkStatisticsState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12900))
// CS Name: ::NetworkStatisticsState
struct CORDL_TYPE NetworkStatisticsState : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
using NetworkStatisticsUpdateDelegate = ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field packetsSent offset 0x0
 __declspec(property(get=__get_packetsSent, put=__set_packetsSent)) int64_t  packetsSent;

/// @brief Field packetsReceived offset 0x8
 __declspec(property(get=__get_packetsReceived, put=__set_packetsReceived)) int64_t  packetsReceived;

/// @brief Field bytesSent offset 0x10
 __declspec(property(get=__get_bytesSent, put=__set_bytesSent)) int64_t  bytesSent;

/// @brief Field bytesReceived offset 0x18
 __declspec(property(get=__get_bytesReceived, put=__set_bytesReceived)) int64_t  bytesReceived;

/// @brief Field packetsLost offset 0x20
 __declspec(property(get=__get_packetsLost, put=__set_packetsLost)) int64_t  packetsLost;

/// @brief Field packetsSentEncrypted offset 0x28
 __declspec(property(get=__get_packetsSentEncrypted, put=__set_packetsSentEncrypted)) int64_t  packetsSentEncrypted;

/// @brief Field packetsSentPlaintext offset 0x30
 __declspec(property(get=__get_packetsSentPlaintext, put=__set_packetsSentPlaintext)) int64_t  packetsSentPlaintext;

/// @brief Field packetsSentRejected offset 0x38
 __declspec(property(get=__get_packetsSentRejected, put=__set_packetsSentRejected)) int64_t  packetsSentRejected;

/// @brief Field packetsReceivedEncrypted offset 0x40
 __declspec(property(get=__get_packetsReceivedEncrypted, put=__set_packetsReceivedEncrypted)) int64_t  packetsReceivedEncrypted;

/// @brief Field packetsReceivedPlaintext offset 0x48
 __declspec(property(get=__get_packetsReceivedPlaintext, put=__set_packetsReceivedPlaintext)) int64_t  packetsReceivedPlaintext;

/// @brief Field packetsReceivedRejected offset 0x50
 __declspec(property(get=__get_packetsReceivedRejected, put=__set_packetsReceivedRejected)) int64_t  packetsReceivedRejected;

/// @brief Field encryptionProcessingTime offset 0x58
 __declspec(property(get=__get_encryptionProcessingTime, put=__set_encryptionProcessingTime)) int64_t  encryptionProcessingTime;

/// @brief Field decryptionProcessingTime offset 0x60
 __declspec(property(get=__get_decryptionProcessingTime, put=__set_decryptionProcessingTime)) int64_t  decryptionProcessingTime;

constexpr void __set_packetsSent(int64_t  value) ;

constexpr int64_t& __get_packetsSent() ;

constexpr int64_t const& __get_packetsSent() const;

constexpr void __set_packetsReceived(int64_t  value) ;

constexpr int64_t& __get_packetsReceived() ;

constexpr int64_t const& __get_packetsReceived() const;

constexpr void __set_bytesSent(int64_t  value) ;

constexpr int64_t& __get_bytesSent() ;

constexpr int64_t const& __get_bytesSent() const;

constexpr void __set_bytesReceived(int64_t  value) ;

constexpr int64_t& __get_bytesReceived() ;

constexpr int64_t const& __get_bytesReceived() const;

constexpr void __set_packetsLost(int64_t  value) ;

constexpr int64_t& __get_packetsLost() ;

constexpr int64_t const& __get_packetsLost() const;

constexpr void __set_packetsSentEncrypted(int64_t  value) ;

constexpr int64_t& __get_packetsSentEncrypted() ;

constexpr int64_t const& __get_packetsSentEncrypted() const;

constexpr void __set_packetsSentPlaintext(int64_t  value) ;

constexpr int64_t& __get_packetsSentPlaintext() ;

constexpr int64_t const& __get_packetsSentPlaintext() const;

constexpr void __set_packetsSentRejected(int64_t  value) ;

constexpr int64_t& __get_packetsSentRejected() ;

constexpr int64_t const& __get_packetsSentRejected() const;

constexpr void __set_packetsReceivedEncrypted(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedEncrypted() ;

constexpr int64_t const& __get_packetsReceivedEncrypted() const;

constexpr void __set_packetsReceivedPlaintext(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedPlaintext() ;

constexpr int64_t const& __get_packetsReceivedPlaintext() const;

constexpr void __set_packetsReceivedRejected(int64_t  value) ;

constexpr int64_t& __get_packetsReceivedRejected() ;

constexpr int64_t const& __get_packetsReceivedRejected() const;

constexpr void __set_encryptionProcessingTime(int64_t  value) ;

constexpr int64_t& __get_encryptionProcessingTime() ;

constexpr int64_t const& __get_encryptionProcessingTime() const;

constexpr void __set_decryptionProcessingTime(int64_t  value) ;

constexpr int64_t& __get_decryptionProcessingTime() ;

constexpr int64_t const& __get_decryptionProcessingTime() const;

/// @brief Method .ctor addr 0xe4d024 size 0x28 virtual false final false
inline void _ctor(int64_t  packetsSent, int64_t  packetsReceived, int64_t  bytesSent, int64_t  bytesReceived, int64_t  packetsLost, int64_t  packetsSentEncrypted, int64_t  packetsSentPlaintext, int64_t  packetsSentRejected, int64_t  packetsReceivedEncrypted, int64_t  packetsReceivedPlaintext, int64_t  packetsReceivedRejected, int64_t  encryptionProcessingTime, int64_t  decryptionProcessingTime) ;

/// @brief Method op_Subtraction addr 0xe4d04c size 0x50 virtual false final false
static inline ::GlobalNamespace::NetworkStatisticsDelta op_Subtraction(ByRef<::GlobalNamespace::NetworkStatisticsState>  a, ByRef<::GlobalNamespace::NetworkStatisticsState>  b) ;

// Ctor Parameters [CppParam { name: "packetsSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsLost", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncrypted", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentPlaintext", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentRejected", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedEncrypted", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedPlaintext", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedRejected", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "encryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "decryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr NetworkStatisticsState(int64_t  packetsSent, int64_t  packetsReceived, int64_t  bytesSent, int64_t  bytesReceived, int64_t  packetsLost, int64_t  packetsSentEncrypted, int64_t  packetsSentPlaintext, int64_t  packetsSentRejected, int64_t  packetsReceivedEncrypted, int64_t  packetsReceivedPlaintext, int64_t  packetsReceivedRejected, int64_t  encryptionProcessingTime, int64_t  decryptionProcessingTime) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NetworkStatisticsState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NetworkStatisticsState()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkStatisticsState, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*, "", "NetworkStatisticsState/NetworkStatisticsUpdateDelegate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsState, "", "NetworkStatisticsState");
