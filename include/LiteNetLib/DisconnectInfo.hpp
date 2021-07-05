// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.DisconnectReason
#include "LiteNetLib/DisconnectReason.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LiteNetLib.DisconnectInfo
  struct DisconnectInfo/*, public System::ValueType*/ {
    public:
    // public LiteNetLib.DisconnectReason Reason
    // Size: 0x4
    // Offset: 0x0
    LiteNetLib::DisconnectReason Reason;
    // Field size check
    static_assert(sizeof(LiteNetLib::DisconnectReason) == 0x4);
    // public System.Net.Sockets.SocketError SocketErrorCode
    // Size: 0x4
    // Offset: 0x4
    System::Net::Sockets::SocketError SocketErrorCode;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::SocketError) == 0x4);
    // public LiteNetLib.NetPacketReader AdditionalData
    // Size: 0x8
    // Offset: 0x8
    LiteNetLib::NetPacketReader* AdditionalData;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPacketReader*) == 0x8);
    // Creating value type constructor for type: DisconnectInfo
    constexpr DisconnectInfo(LiteNetLib::DisconnectReason Reason_ = {}, System::Net::Sockets::SocketError SocketErrorCode_ = {}, LiteNetLib::NetPacketReader* AdditionalData_ = {}) noexcept : Reason{Reason_}, SocketErrorCode{SocketErrorCode_}, AdditionalData{AdditionalData_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // LiteNetLib.DisconnectInfo
  #pragma pack(pop)
  static check_size<sizeof(DisconnectInfo), 8 + sizeof(LiteNetLib::NetPacketReader*)> __LiteNetLib_DisconnectInfoSizeCheck;
  static_assert(sizeof(DisconnectInfo) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::DisconnectInfo, "LiteNetLib", "DisconnectInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
