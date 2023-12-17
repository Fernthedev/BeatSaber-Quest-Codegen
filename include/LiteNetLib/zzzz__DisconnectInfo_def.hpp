#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DisconnectInfo)
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace System::Net::Sockets {
struct SocketError;
}
// Forward declare root types
namespace LiteNetLib {
struct DisconnectInfo;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::DisconnectInfo);
// Type: LiteNetLib::DisconnectInfo
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14132))
// CS Name: ::LiteNetLib::DisconnectInfo
struct CORDL_TYPE DisconnectInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Reason offset 0x0
 __declspec(property(get=__get_Reason, put=__set_Reason)) ::LiteNetLib::DisconnectReason  Reason;

/// @brief Field SocketErrorCode offset 0x4
 __declspec(property(get=__get_SocketErrorCode, put=__set_SocketErrorCode)) ::System::Net::Sockets::SocketError  SocketErrorCode;

/// @brief Field AdditionalData offset 0x8
 __declspec(property(get=__get_AdditionalData, put=__set_AdditionalData)) ::LiteNetLib::NetPacketReader*  AdditionalData;

constexpr void __set_Reason(::LiteNetLib::DisconnectReason  value) ;

constexpr ::LiteNetLib::DisconnectReason& __get_Reason() ;

constexpr ::LiteNetLib::DisconnectReason const& __get_Reason() const;

constexpr void __set_SocketErrorCode(::System::Net::Sockets::SocketError  value) ;

constexpr ::System::Net::Sockets::SocketError& __get_SocketErrorCode() ;

constexpr ::System::Net::Sockets::SocketError const& __get_SocketErrorCode() const;

constexpr void __set_AdditionalData(::LiteNetLib::NetPacketReader*  value) ;

constexpr ::LiteNetLib::NetPacketReader* __get_AdditionalData() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketReader*> __get_AdditionalData() const;

// Ctor Parameters [CppParam { name: "Reason", ty: "::LiteNetLib::DisconnectReason", modifiers: "", def_value: None }, CppParam { name: "SocketErrorCode", ty: "::System::Net::Sockets::SocketError", modifiers: "", def_value: None }, CppParam { name: "AdditionalData", ty: "::LiteNetLib::NetPacketReader*", modifiers: "", def_value: None }]
constexpr DisconnectInfo(::LiteNetLib::DisconnectReason  Reason, ::System::Net::Sockets::SocketError  SocketErrorCode, ::LiteNetLib::NetPacketReader*  AdditionalData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DisconnectInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DisconnectInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::DisconnectInfo, 0x10>, "Size mismatch!");

} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DisconnectInfo, "LiteNetLib", "DisconnectInfo");
