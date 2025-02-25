// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsHandler
#include "GlobalNamespace/PlatformLeaderboardsHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Message
  class Message;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformLeaderboardsHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusPlatformLeaderboardsHandler : public GlobalNamespace::PlatformLeaderboardsHandler {
    public:
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c
    class $$c;
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // private System.Collections.Generic.HashSet`1<System.UInt64> _oculusRequestIds
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<uint64_t>* oculusRequestIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<uint64_t>*) == 0x8);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // Creating value type constructor for type: OculusPlatformLeaderboardsHandler
    OculusPlatformLeaderboardsHandler(System::Collections::Generic::HashSet_1<uint64_t>* oculusRequestIds_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}) noexcept : oculusRequestIds{oculusRequestIds_}, gameplayModifiersModel{gameplayModifiersModel_} {}
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.UInt64> _oculusRequestIds
    System::Collections::Generic::HashSet_1<uint64_t>*& dyn__oculusRequestIds();
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // private System.Void AddOculusRequest(Oculus.Platform.Request oculusRequest, HMAsyncRequest asyncRequest)
    // Offset: 0x1029A54
    void AddOculusRequest(Oculus::Platform::Request* oculusRequest, GlobalNamespace::HMAsyncRequest* asyncRequest);
    // private System.Boolean CheckMessageForValidRequest(Oculus.Platform.Message message)
    // Offset: 0x1029B28
    bool CheckMessageForValidRequest(Oculus::Platform::Message* message);
    // public System.Void .ctor()
    // Offset: 0x1029948
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: System.Void PlatformLeaderboardsHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformLeaderboardsHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler*, creationType>()));
    }
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x1029BC4
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::Il2CppString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x1029D50
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
  }; // OculusPlatformLeaderboardsHandler
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformLeaderboardsHandler), 24 + sizeof(GlobalNamespace::GameplayModifiersModelSO*)> __GlobalNamespace_OculusPlatformLeaderboardsHandlerSizeCheck;
  static_assert(sizeof(OculusPlatformLeaderboardsHandler) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler*, "", "OculusPlatformLeaderboardsHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest
// Il2CppName: AddOculusRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(Oculus::Platform::Request*, GlobalNamespace::HMAsyncRequest*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest)> {
  static const MethodInfo* get() {
    static auto* oculusRequest = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Request")->byval_arg;
    static auto* asyncRequest = &::il2cpp_utils::GetClassFromName("", "HMAsyncRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler*), "AddOculusRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oculusRequest, asyncRequest});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest
// Il2CppName: CheckMessageForValidRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(Oculus::Platform::Message*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler*), "CheckMessageForValidRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores
// Il2CppName: GetScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(GlobalNamespace::IDifficultyBeatmap*, int, int, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope, ::Il2CppString*, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores)> {
  static const MethodInfo* get() {
    static auto* beatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromRank = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scope = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/ScoresScope")->byval_arg;
    static auto* referencePlayerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler*), "GetScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmap, count, fromRank, scope, referencePlayerId, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("", "LeaderboardScoreUploader/ScoreData")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData, completionHandler});
  }
};
