// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IStateTable`3
#include "GlobalNamespace/IStateTable_3.hpp"
// Including type: NodePoseSyncState/NodePose
#include "GlobalNamespace/NodePoseSyncState_NodePose.hpp"
// Including type: PoseSerializable
#include "GlobalNamespace/PoseSerializable.hpp"
// Including type: IEquatableByReference`1
#include "GlobalNamespace/IEquatableByReference_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NodePoseSyncState
  // [TokenAttribute] Offset: FFFFFFFF
  struct NodePoseSyncState/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>, public GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>*/ {
    public:
    // private PoseSerializable _head
    // Size: 0x18
    // Offset: 0x0
    GlobalNamespace::PoseSerializable head;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PoseSerializable) == 0x18);
    // private PoseSerializable _leftController
    // Size: 0x18
    // Offset: 0x18
    GlobalNamespace::PoseSerializable leftController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PoseSerializable) == 0x18);
    // private PoseSerializable _rightController
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::PoseSerializable rightController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PoseSerializable) == 0x18);
    // Creating value type constructor for type: NodePoseSyncState
    constexpr NodePoseSyncState(GlobalNamespace::PoseSerializable head_ = {}, GlobalNamespace::PoseSerializable leftController_ = {}, GlobalNamespace::PoseSerializable rightController_ = {}) noexcept : head{head_}, leftController{leftController_}, rightController{rightController_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>
    operator GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>
    operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>*>(this);
    }
    // Get instance field reference: private PoseSerializable _head
    GlobalNamespace::PoseSerializable& dyn__head();
    // Get instance field reference: private PoseSerializable _leftController
    GlobalNamespace::PoseSerializable& dyn__leftController();
    // Get instance field reference: private PoseSerializable _rightController
    GlobalNamespace::PoseSerializable& dyn__rightController();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16F4F1C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16F4F60
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void SetState(NodePoseSyncState/NodePose nodePose, PoseSerializable pose)
    // Offset: 0x16F4FA4
    void SetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose, GlobalNamespace::PoseSerializable pose);
    // public PoseSerializable GetState(NodePoseSyncState/NodePose nodePose)
    // Offset: 0x16F4FF4
    GlobalNamespace::PoseSerializable GetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose);
    // public System.Boolean Equals(in NodePoseSyncState other)
    // Offset: 0x16F5040
    bool Equals(ByRef<GlobalNamespace::NodePoseSyncState> other);
    // public NodePoseSyncState GetDelta(in NodePoseSyncState latest)
    // Offset: 0x16F50D8
    GlobalNamespace::NodePoseSyncState GetDelta(ByRef<GlobalNamespace::NodePoseSyncState> latest);
    // public NodePoseSyncState ApplyDelta(in NodePoseSyncState delta)
    // Offset: 0x16F5204
    GlobalNamespace::NodePoseSyncState ApplyDelta(ByRef<GlobalNamespace::NodePoseSyncState> delta);
    // public System.Int32 GetSize()
    // Offset: 0x16F5330
    int GetSize();
    // private NodePoseSyncState IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta(in NodePoseSyncState stateTable)
    // Offset: 0x16F5384
    GlobalNamespace::NodePoseSyncState IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_GetDelta(ByRef<GlobalNamespace::NodePoseSyncState> stateTable);
    // private NodePoseSyncState IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta(in NodePoseSyncState delta)
    // Offset: 0x16F5388
    GlobalNamespace::NodePoseSyncState IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_ApplyDelta(ByRef<GlobalNamespace::NodePoseSyncState> delta);
    // private System.Boolean IEquatableByReference<NodePoseSyncState>.Equals(in NodePoseSyncState other)
    // Offset: 0x16F538C
    bool IEquatableByReference$NodePoseSyncState$_Equals(ByRef<GlobalNamespace::NodePoseSyncState> other);
  }; // NodePoseSyncState
  #pragma pack(pop)
  static check_size<sizeof(NodePoseSyncState), 48 + sizeof(GlobalNamespace::PoseSerializable)> __GlobalNamespace_NodePoseSyncStateSizeCheck;
  static_assert(sizeof(NodePoseSyncState) == 0x48);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncState, "", "NodePoseSyncState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncState::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::NodePoseSyncState::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncState::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::NodePoseSyncState::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NodePoseSyncState::*)(GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable)>(&GlobalNamespace::NodePoseSyncState::SetState)> {
  static const MethodInfo* get() {
    static auto* nodePose = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState/NodePose")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "PoseSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodePose, pose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PoseSerializable (GlobalNamespace::NodePoseSyncState::*)(GlobalNamespace::NodePoseSyncState_NodePose)>(&GlobalNamespace::NodePoseSyncState::GetState)> {
  static const MethodInfo* get() {
    static auto* nodePose = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState/NodePose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodePose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NodePoseSyncState::*)(ByRef<GlobalNamespace::NodePoseSyncState>)>(&GlobalNamespace::NodePoseSyncState::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::GetDelta
// Il2CppName: GetDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NodePoseSyncState (GlobalNamespace::NodePoseSyncState::*)(ByRef<GlobalNamespace::NodePoseSyncState>)>(&GlobalNamespace::NodePoseSyncState::GetDelta)> {
  static const MethodInfo* get() {
    static auto* latest = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "GetDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{latest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::ApplyDelta
// Il2CppName: ApplyDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NodePoseSyncState (GlobalNamespace::NodePoseSyncState::*)(ByRef<GlobalNamespace::NodePoseSyncState>)>(&GlobalNamespace::NodePoseSyncState::ApplyDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "ApplyDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NodePoseSyncState::*)()>(&GlobalNamespace::NodePoseSyncState::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_GetDelta
// Il2CppName: IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NodePoseSyncState (GlobalNamespace::NodePoseSyncState::*)(ByRef<GlobalNamespace::NodePoseSyncState>)>(&GlobalNamespace::NodePoseSyncState::IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_GetDelta)> {
  static const MethodInfo* get() {
    static auto* stateTable = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateTable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_ApplyDelta
// Il2CppName: IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NodePoseSyncState (GlobalNamespace::NodePoseSyncState::*)(ByRef<GlobalNamespace::NodePoseSyncState>)>(&GlobalNamespace::NodePoseSyncState::IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_ApplyDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NodePoseSyncState::IEquatableByReference$NodePoseSyncState$_Equals
// Il2CppName: IEquatableByReference<NodePoseSyncState>.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NodePoseSyncState::*)(ByRef<GlobalNamespace::NodePoseSyncState>)>(&GlobalNamespace::NodePoseSyncState::IEquatableByReference$NodePoseSyncState$_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "NodePoseSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NodePoseSyncState), "IEquatableByReference<NodePoseSyncState>.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
