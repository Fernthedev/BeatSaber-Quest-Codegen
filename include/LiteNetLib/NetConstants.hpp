// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.UInt16
#include "System/UInt16.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetConstants
  class NetConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NetConstants);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConstants*, "LiteNetLib", "NetConstants");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class NetConstants : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 DefaultWindowSize
    static constexpr const int DefaultWindowSize = 64;
    // Get static field: static public System.Int32 DefaultWindowSize
    static int _get_DefaultWindowSize();
    // Set static field: static public System.Int32 DefaultWindowSize
    static void _set_DefaultWindowSize(int value);
    // static field const value: static public System.Int32 SocketBufferSize
    static constexpr const int SocketBufferSize = 1048576;
    // Get static field: static public System.Int32 SocketBufferSize
    static int _get_SocketBufferSize();
    // Set static field: static public System.Int32 SocketBufferSize
    static void _set_SocketBufferSize(int value);
    // static field const value: static public System.Int32 SocketTTL
    static constexpr const int SocketTTL = 255;
    // Get static field: static public System.Int32 SocketTTL
    static int _get_SocketTTL();
    // Set static field: static public System.Int32 SocketTTL
    static void _set_SocketTTL(int value);
    // static field const value: static public System.Int32 HeaderSize
    static constexpr const int HeaderSize = 1;
    // Get static field: static public System.Int32 HeaderSize
    static int _get_HeaderSize();
    // Set static field: static public System.Int32 HeaderSize
    static void _set_HeaderSize(int value);
    // static field const value: static public System.Int32 ChanneledHeaderSize
    static constexpr const int ChanneledHeaderSize = 4;
    // Get static field: static public System.Int32 ChanneledHeaderSize
    static int _get_ChanneledHeaderSize();
    // Set static field: static public System.Int32 ChanneledHeaderSize
    static void _set_ChanneledHeaderSize(int value);
    // static field const value: static public System.Int32 FragmentHeaderSize
    static constexpr const int FragmentHeaderSize = 6;
    // Get static field: static public System.Int32 FragmentHeaderSize
    static int _get_FragmentHeaderSize();
    // Set static field: static public System.Int32 FragmentHeaderSize
    static void _set_FragmentHeaderSize(int value);
    // static field const value: static public System.Int32 FragmentedHeaderTotalSize
    static constexpr const int FragmentedHeaderTotalSize = 10;
    // Get static field: static public System.Int32 FragmentedHeaderTotalSize
    static int _get_FragmentedHeaderTotalSize();
    // Set static field: static public System.Int32 FragmentedHeaderTotalSize
    static void _set_FragmentedHeaderTotalSize(int value);
    // static field const value: static public System.UInt16 MaxSequence
    static constexpr const uint16_t MaxSequence = 32768u;
    // Get static field: static public System.UInt16 MaxSequence
    static uint16_t _get_MaxSequence();
    // Set static field: static public System.UInt16 MaxSequence
    static void _set_MaxSequence(uint16_t value);
    // static field const value: static public System.UInt16 HalfMaxSequence
    static constexpr const uint16_t HalfMaxSequence = 16384u;
    // Get static field: static public System.UInt16 HalfMaxSequence
    static uint16_t _get_HalfMaxSequence();
    // Set static field: static public System.UInt16 HalfMaxSequence
    static void _set_HalfMaxSequence(uint16_t value);
    // static field const value: static System.Int32 ProtocolId
    static constexpr const int ProtocolId = 11;
    // Get static field: static System.Int32 ProtocolId
    static int _get_ProtocolId();
    // Set static field: static System.Int32 ProtocolId
    static void _set_ProtocolId(int value);
    // static field const value: static System.Int32 MaxUdpHeaderSize
    static constexpr const int MaxUdpHeaderSize = 68;
    // Get static field: static System.Int32 MaxUdpHeaderSize
    static int _get_MaxUdpHeaderSize();
    // Set static field: static System.Int32 MaxUdpHeaderSize
    static void _set_MaxUdpHeaderSize(int value);
    // Get static field: static readonly System.Int32[] PossibleMtu
    static ::ArrayW<int> _get_PossibleMtu();
    // Set static field: static readonly System.Int32[] PossibleMtu
    static void _set_PossibleMtu(::ArrayW<int> value);
    // Get static field: static readonly System.Int32 MaxPacketSize
    static int _get_MaxPacketSize();
    // Set static field: static readonly System.Int32 MaxPacketSize
    static void _set_MaxPacketSize(int value);
    // static field const value: static public System.Byte MaxConnectionNumber
    static constexpr const uint8_t MaxConnectionNumber = 4u;
    // Get static field: static public System.Byte MaxConnectionNumber
    static uint8_t _get_MaxConnectionNumber();
    // Set static field: static public System.Byte MaxConnectionNumber
    static void _set_MaxConnectionNumber(uint8_t value);
    // static field const value: static public System.Int32 PacketPoolSize
    static constexpr const int PacketPoolSize = 1000;
    // Get static field: static public System.Int32 PacketPoolSize
    static int _get_PacketPoolSize();
    // Set static field: static public System.Int32 PacketPoolSize
    static void _set_PacketPoolSize(int value);
    // static private System.Void .cctor()
    // Offset: 0x21AEA6C
    static void _cctor();
  }; // LiteNetLib.NetConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetConstants::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetConstants::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetConstants*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
