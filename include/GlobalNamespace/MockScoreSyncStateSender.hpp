// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MockScoreSyncStateSender
  // [TokenAttribute] Offset: FFFFFFFF
  class MockScoreSyncStateSender : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: MockScoreSyncStateSender
    MockScoreSyncStateSender(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IMultiplayerSessionManager*
    constexpr operator GlobalNamespace::IMultiplayerSessionManager*() const noexcept {
      return multiplayerSessionManager;
    }
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // public System.Void .ctor(IMultiplayerSessionManager msm)
    // Offset: 0x23E0E78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockScoreSyncStateSender* New_ctor(GlobalNamespace::IMultiplayerSessionManager* msm) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockScoreSyncStateSender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockScoreSyncStateSender*, creationType>(msm)));
    }
    // public System.Void Dispose()
    // Offset: 0x23E1018
    void Dispose();
    // public System.Void SendScore(System.Int32 modifiedScore, System.Int32 rawScore, System.Int32 immediateMaxPossibleRawScore, System.Int32 combo, System.Int32 multiplier)
    // Offset: 0x23E3498
    void SendScore(int modifiedScore, int rawScore, int immediateMaxPossibleRawScore, int combo, int multiplier);
    // private System.Void HandleScoreSyncStateUpdate(StandardScoreSyncStateNetSerializable nodePose, IConnectedPlayer connectedPlayer)
    // Offset: 0x23E5C98
    void HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // MockScoreSyncStateSender
  #pragma pack(pop)
  static check_size<sizeof(MockScoreSyncStateSender), 16 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_MockScoreSyncStateSenderSizeCheck;
  static_assert(sizeof(MockScoreSyncStateSender) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockScoreSyncStateSender*, "", "MockScoreSyncStateSender");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockScoreSyncStateSender::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockScoreSyncStateSender::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)()>(&GlobalNamespace::MockScoreSyncStateSender::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockScoreSyncStateSender*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockScoreSyncStateSender::SendScore
// Il2CppName: SendScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)(int, int, int, int, int)>(&GlobalNamespace::MockScoreSyncStateSender::SendScore)> {
  static const MethodInfo* get() {
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* immediateMaxPossibleRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* combo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockScoreSyncStateSender*), "SendScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modifiedScore, rawScore, immediateMaxPossibleRawScore, combo, multiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockScoreSyncStateSender::HandleScoreSyncStateUpdate
// Il2CppName: HandleScoreSyncStateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockScoreSyncStateSender::*)(GlobalNamespace::StandardScoreSyncStateNetSerializable*, GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MockScoreSyncStateSender::HandleScoreSyncStateUpdate)> {
  static const MethodInfo* get() {
    static auto* nodePose = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncStateNetSerializable")->byval_arg;
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockScoreSyncStateSender*), "HandleScoreSyncStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodePose, connectedPlayer});
  }
};
