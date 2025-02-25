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
// Including type: StandardScoreSyncState/Score
#include "GlobalNamespace/StandardScoreSyncState_Score.hpp"
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
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: StandardScoreSyncState
  // [TokenAttribute] Offset: FFFFFFFF
  struct StandardScoreSyncState/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>, public GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    // private System.Int32 _modifiedScore
    // Size: 0x4
    // Offset: 0x0
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _rawScore
    // Size: 0x4
    // Offset: 0x4
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _immediateMaxPossibleRawScore
    // Size: 0x4
    // Offset: 0x8
    int immediateMaxPossibleRawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _combo
    // Size: 0x4
    // Offset: 0xC
    int combo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplier
    // Size: 0x4
    // Offset: 0x10
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StandardScoreSyncState
    constexpr StandardScoreSyncState(int modifiedScore_ = {}, int rawScore_ = {}, int immediateMaxPossibleRawScore_ = {}, int combo_ = {}, int multiplier_ = {}) noexcept : modifiedScore{modifiedScore_}, rawScore{rawScore_}, immediateMaxPossibleRawScore{immediateMaxPossibleRawScore_}, combo{combo_}, multiplier{multiplier_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>
    operator GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>
    operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Get instance field reference: private System.Int32 _modifiedScore
    int& dyn__modifiedScore();
    // Get instance field reference: private System.Int32 _rawScore
    int& dyn__rawScore();
    // Get instance field reference: private System.Int32 _immediateMaxPossibleRawScore
    int& dyn__immediateMaxPossibleRawScore();
    // Get instance field reference: private System.Int32 _combo
    int& dyn__combo();
    // Get instance field reference: private System.Int32 _multiplier
    int& dyn__multiplier();
    // public System.Void SetState(StandardScoreSyncState/Score s, System.Int32 value)
    // Offset: 0x1700518
    void SetState(GlobalNamespace::StandardScoreSyncState_Score s, int value);
    // public StandardScoreSyncState GetDelta(in StandardScoreSyncState stateTable)
    // Offset: 0x170055C
    GlobalNamespace::StandardScoreSyncState GetDelta(ByRef<GlobalNamespace::StandardScoreSyncState> stateTable);
    // public StandardScoreSyncState ApplyDelta(in StandardScoreSyncState delta)
    // Offset: 0x1700580
    GlobalNamespace::StandardScoreSyncState ApplyDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta);
    // public System.Int32 GetState(StandardScoreSyncState/Score s)
    // Offset: 0x17005A4
    int GetState(GlobalNamespace::StandardScoreSyncState_Score s);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x17005F0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1700660
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(in StandardScoreSyncState other)
    // Offset: 0x17006D0
    bool Equals(ByRef<GlobalNamespace::StandardScoreSyncState> other);
    // public System.Int32 GetSize()
    // Offset: 0x170072C
    int GetSize();
    // private StandardScoreSyncState IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta(in StandardScoreSyncState stateTable)
    // Offset: 0x17007BC
    GlobalNamespace::StandardScoreSyncState IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_GetDelta(ByRef<GlobalNamespace::StandardScoreSyncState> stateTable);
    // private StandardScoreSyncState IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta(in StandardScoreSyncState delta)
    // Offset: 0x17007E0
    GlobalNamespace::StandardScoreSyncState IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_ApplyDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta);
    // private System.Boolean IEquatableByReference<StandardScoreSyncState>.Equals(in StandardScoreSyncState other)
    // Offset: 0x1700804
    bool IEquatableByReference$StandardScoreSyncState$_Equals(ByRef<GlobalNamespace::StandardScoreSyncState> other);
  }; // StandardScoreSyncState
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncState), 16 + sizeof(int)> __GlobalNamespace_StandardScoreSyncStateSizeCheck;
  static_assert(sizeof(StandardScoreSyncState) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncState::*)(GlobalNamespace::StandardScoreSyncState_Score, int)>(&GlobalNamespace::StandardScoreSyncState::SetState)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState/Score")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::GetDelta
// Il2CppName: GetDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::GetDelta)> {
  static const MethodInfo* get() {
    static auto* stateTable = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "GetDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateTable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::ApplyDelta
// Il2CppName: ApplyDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::ApplyDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "ApplyDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StandardScoreSyncState::*)(GlobalNamespace::StandardScoreSyncState_Score)>(&GlobalNamespace::StandardScoreSyncState::GetState)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState/Score")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncState::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::StandardScoreSyncState::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncState::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::StandardScoreSyncState::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StandardScoreSyncState::*)()>(&GlobalNamespace::StandardScoreSyncState::GetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_GetDelta
// Il2CppName: IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_GetDelta)> {
  static const MethodInfo* get() {
    static auto* stateTable = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateTable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_ApplyDelta
// Il2CppName: IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::IStateTable$StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32$_ApplyDelta)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncState::IEquatableByReference$StandardScoreSyncState$_Equals
// Il2CppName: IEquatableByReference<StandardScoreSyncState>.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::IEquatableByReference$StandardScoreSyncState$_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncState), "IEquatableByReference<StandardScoreSyncState>.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
