// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PeerConnectionState
#include "Oculus/Platform/PeerConnectionState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetworkingPeer
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkingPeer : public ::Il2CppObject {
    public:
    // private System.UInt64 <ID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private Oculus.Platform.PeerConnectionState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    Oculus::Platform::PeerConnectionState State;
    // Field size check
    static_assert(sizeof(Oculus::Platform::PeerConnectionState) == 0x4);
    // Creating value type constructor for type: NetworkingPeer
    NetworkingPeer(uint64_t _ID_ = {}, Oculus::Platform::PeerConnectionState State_ = {}) noexcept : _ID{_ID_}, State{State_} {}
    // Get instance field reference: private System.UInt64 <ID>k__BackingField
    uint64_t& dyn_$ID$k__BackingField();
    // Get instance field reference: private Oculus.Platform.PeerConnectionState <State>k__BackingField
    Oculus::Platform::PeerConnectionState& dyn_$State$k__BackingField();
    // public System.UInt64 get_ID()
    // Offset: 0x1536C34
    uint64_t get_ID();
    // private System.Void set_ID(System.UInt64 value)
    // Offset: 0x1536C3C
    void set_ID(uint64_t value);
    // public Oculus.Platform.PeerConnectionState get_State()
    // Offset: 0x1536C44
    Oculus::Platform::PeerConnectionState get_State();
    // private System.Void set_State(Oculus.Platform.PeerConnectionState value)
    // Offset: 0x1536C4C
    void set_State(Oculus::Platform::PeerConnectionState value);
    // public System.Void .ctor(System.UInt64 id, Oculus.Platform.PeerConnectionState state)
    // Offset: 0x1532BBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkingPeer* New_ctor(uint64_t id, Oculus::Platform::PeerConnectionState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::NetworkingPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkingPeer*, creationType>(id, state)));
    }
  }; // Oculus.Platform.Models.NetworkingPeer
  #pragma pack(pop)
  static check_size<sizeof(NetworkingPeer), 24 + sizeof(Oculus::Platform::PeerConnectionState)> __Oculus_Platform_Models_NetworkingPeerSizeCheck;
  static_assert(sizeof(NetworkingPeer) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetworkingPeer*, "Oculus.Platform.Models", "NetworkingPeer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::NetworkingPeer::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Models::NetworkingPeer::*)()>(&Oculus::Platform::Models::NetworkingPeer::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::NetworkingPeer*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::NetworkingPeer::set_ID
// Il2CppName: set_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::NetworkingPeer::*)(uint64_t)>(&Oculus::Platform::Models::NetworkingPeer::set_ID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::NetworkingPeer*), "set_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::NetworkingPeer::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::PeerConnectionState (Oculus::Platform::Models::NetworkingPeer::*)()>(&Oculus::Platform::Models::NetworkingPeer::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::NetworkingPeer*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::NetworkingPeer::set_State
// Il2CppName: set_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::NetworkingPeer::*)(Oculus::Platform::PeerConnectionState)>(&Oculus::Platform::Models::NetworkingPeer::set_State)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "PeerConnectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Models::NetworkingPeer*), "set_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Models::NetworkingPeer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
