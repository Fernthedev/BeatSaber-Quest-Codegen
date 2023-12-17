#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketAsyncOperation)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketAsyncOperation;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketAsyncOperation);
// Type: System.Net.Sockets::SocketAsyncOperation
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9345))
// CS Name: ::System.Net.Sockets::SocketAsyncOperation
struct CORDL_TYPE SocketAsyncOperation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SocketAsyncOperation_Unwrapped
enum struct __SocketAsyncOperation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Accept = static_cast<int32_t>(0x1),
__E_Connect = static_cast<int32_t>(0x2),
__E_Disconnect = static_cast<int32_t>(0x3),
__E_Receive = static_cast<int32_t>(0x4),
__E_ReceiveFrom = static_cast<int32_t>(0x5),
__E_ReceiveMessageFrom = static_cast<int32_t>(0x6),
__E_Send = static_cast<int32_t>(0x7),
__E_SendPackets = static_cast<int32_t>(0x8),
__E_SendTo = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::SocketAsyncOperation const None;

/// @brief Field Accept value: static_cast<int32_t>(0x1)
static ::System::Net::Sockets::SocketAsyncOperation const Accept;

/// @brief Field Connect value: static_cast<int32_t>(0x2)
static ::System::Net::Sockets::SocketAsyncOperation const Connect;

/// @brief Field Disconnect value: static_cast<int32_t>(0x3)
static ::System::Net::Sockets::SocketAsyncOperation const Disconnect;

/// @brief Field Receive value: static_cast<int32_t>(0x4)
static ::System::Net::Sockets::SocketAsyncOperation const Receive;

/// @brief Field ReceiveFrom value: static_cast<int32_t>(0x5)
static ::System::Net::Sockets::SocketAsyncOperation const ReceiveFrom;

/// @brief Field ReceiveMessageFrom value: static_cast<int32_t>(0x6)
static ::System::Net::Sockets::SocketAsyncOperation const ReceiveMessageFrom;

/// @brief Field Send value: static_cast<int32_t>(0x7)
static ::System::Net::Sockets::SocketAsyncOperation const Send;

/// @brief Field SendPackets value: static_cast<int32_t>(0x8)
static ::System::Net::Sockets::SocketAsyncOperation const SendPackets;

/// @brief Field SendTo value: static_cast<int32_t>(0x9)
static ::System::Net::Sockets::SocketAsyncOperation const SendTo;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketAsyncOperation_Unwrapped () const noexcept {
return std::bit_cast<__SocketAsyncOperation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketAsyncOperation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SocketAsyncOperation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SocketAsyncOperation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketAsyncOperation, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncOperation, "System.Net.Sockets", "SocketAsyncOperation");
