// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/UploadScoreCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardScoreUploader::UploadScoreCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UploadScoreCallback
    UploadScoreCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x118C044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::UploadScoreCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::UploadScoreCallback*, creationType>(object, method)));
    }
    // public HMAsyncRequest Invoke(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x118BAA8
    GlobalNamespace::HMAsyncRequest* Invoke(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // public System.IAsyncResult BeginInvoke(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler, System.AsyncCallback callback, System.Object object)
    // Offset: 0x118C054
    System::IAsyncResult* BeginInvoke(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public HMAsyncRequest EndInvoke(System.IAsyncResult result)
    // Offset: 0x118C084
    GlobalNamespace::HMAsyncRequest* EndInvoke(System::IAsyncResult* result);
  }; // LeaderboardScoreUploader/UploadScoreCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback*, "", "LeaderboardScoreUploader/UploadScoreCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::*)(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*)>(&GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("", "LeaderboardScoreUploader/ScoreData")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData, completionHandler});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::*)(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler*, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("", "LeaderboardScoreUploader/ScoreData")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/UploadScoreCompletionHandler")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData, completionHandler, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest* (GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::*)(System::IAsyncResult*)>(&GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
