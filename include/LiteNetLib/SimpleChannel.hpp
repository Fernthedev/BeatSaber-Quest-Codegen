// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.BaseChannel
#include "LiteNetLib/BaseChannel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.SimpleChannel
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleChannel : public LiteNetLib::BaseChannel {
    public:
    // Creating value type constructor for type: SimpleChannel
    SimpleChannel() noexcept {}
    // public System.Void .ctor(LiteNetLib.NetPeer peer)
    // Offset: 0x1BFEA78
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Void BaseChannel::.ctor(LiteNetLib.NetPeer peer)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleChannel* New_ctor(LiteNetLib::NetPeer* peer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::SimpleChannel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleChannel*, creationType>(peer)));
    }
    // public override System.Void SendNextPackets()
    // Offset: 0x1BFEA7C
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Void BaseChannel::SendNextPackets()
    void SendNextPackets();
    // public override System.Boolean ProcessPacket(LiteNetLib.NetPacket packet)
    // Offset: 0x1BFEBB8
    // Implemented from: LiteNetLib.BaseChannel
    // Base method: System.Boolean BaseChannel::ProcessPacket(LiteNetLib.NetPacket packet)
    bool ProcessPacket(LiteNetLib::NetPacket* packet);
  }; // LiteNetLib.SimpleChannel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::SimpleChannel*, "LiteNetLib", "SimpleChannel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::SimpleChannel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::SimpleChannel::SendNextPackets
// Il2CppName: SendNextPackets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::SimpleChannel::*)()>(&LiteNetLib::SimpleChannel::SendNextPackets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::SimpleChannel*), "SendNextPackets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::SimpleChannel::ProcessPacket
// Il2CppName: ProcessPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::SimpleChannel::*)(LiteNetLib::NetPacket*)>(&LiteNetLib::SimpleChannel::ProcessPacket)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::SimpleChannel*), "ProcessPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
