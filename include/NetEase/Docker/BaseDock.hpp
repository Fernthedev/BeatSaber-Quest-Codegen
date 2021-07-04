// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.Docker.IDock
#include "NetEase/Docker/IDock.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: NetEase::Docker
namespace NetEase::Docker {
  // Forward declaring type: UploadScoreData
  struct UploadScoreData;
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
// Completed forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NetEase.Docker.BaseDock
  class BaseDock : public ::Il2CppObject/*, public NetEase::Docker::IDock*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE04648
    // [CompilerGeneratedAttribute] Offset: 0xE04648
    // private System.Action`1<NetEase.Docker.InitializeData> OnInitFinished
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<NetEase::Docker::InitializeData>* OnInitFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::InitializeData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE04684
    // [CompilerGeneratedAttribute] Offset: 0xE04684
    // private System.Action`1<NetEase.Docker.LoginData> OnLoginFinished
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<NetEase::Docker::LoginData>* OnLoginFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::LoginData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE046C0
    // [CompilerGeneratedAttribute] Offset: 0xE046C0
    // private System.Action`1<NetEase.Docker.LogoutData> OnLogoutFinished
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<NetEase::Docker::LogoutData>* OnLogoutFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::LogoutData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE046FC
    // [CompilerGeneratedAttribute] Offset: 0xE046FC
    // private System.Action`1<NetEase.Docker.ReceivedHighscoreData> OnHighscoreReceived
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<NetEase::Docker::ReceivedHighscoreData>* OnHighscoreReceived;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*) == 0x8);
    // Creating value type constructor for type: BaseDock
    BaseDock(System::Action_1<NetEase::Docker::InitializeData>* OnInitFinished_ = {}, System::Action_1<NetEase::Docker::LoginData>* OnLoginFinished_ = {}, System::Action_1<NetEase::Docker::LogoutData>* OnLogoutFinished_ = {}, System::Action_1<NetEase::Docker::ReceivedHighscoreData>* OnHighscoreReceived_ = {}) noexcept : OnInitFinished{OnInitFinished_}, OnLoginFinished{OnLoginFinished_}, OnLogoutFinished{OnLogoutFinished_}, OnHighscoreReceived{OnHighscoreReceived_} {}
    // Creating interface conversion operator: operator NetEase::Docker::IDock
    operator NetEase::Docker::IDock() noexcept {
      return *reinterpret_cast<NetEase::Docker::IDock*>(this);
    }
    // public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x23EC4C8
    void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // public System.Void Initialize()
    // Offset: 0x23EC4D0
    void Initialize();
    // public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x23EC534
    void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // public System.Void Login()
    // Offset: 0x23EC53C
    void Login();
    // public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x23EC5AC
    void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // public System.Void Logout()
    // Offset: 0x23EC5B4
    void Logout();
    // public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x23EC618
    void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // public System.Boolean WillProvideHighscore()
    // Offset: 0x23EC61C
    bool WillProvideHighscore();
    // public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x23EC624
    void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x23EC62C
    void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // public System.Void UpdateLoop()
    // Offset: 0x23EC7FC
    void UpdateLoop();
    // public System.Void .ctor()
    // Offset: 0x23EC800
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseDock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NetEase::Docker::BaseDock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseDock*, creationType>()));
    }
  }; // NetEase.Docker.BaseDock
  #pragma pack(pop)
  static check_size<sizeof(BaseDock), 40 + sizeof(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*)> __NetEase_Docker_BaseDockSizeCheck;
  static_assert(sizeof(BaseDock) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::BaseDock*, "NetEase.Docker", "BaseDock");
// Writing includes for template specializations
#include "System/Action_1.hpp"
#include "NetEase/Docker/UploadScoreData.hpp"
#include "NetEase/Docker/RequestHighscoreData.hpp"
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetInitializeCallback
// Il2CppName: SetInitializeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::InitializeData>*)>(&NetEase::Docker::BaseDock::SetInitializeCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetInitializeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::InitializeData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetLoginCallback
// Il2CppName: SetLoginCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::LoginData>*)>(&NetEase::Docker::BaseDock::SetLoginCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetLoginCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::LoginData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::Login
// Il2CppName: Login
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::Login)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "Login", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetLogoutCallback
// Il2CppName: SetLogoutCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::LogoutData>*)>(&NetEase::Docker::BaseDock::SetLogoutCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetLogoutCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::LogoutData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::Logout
// Il2CppName: Logout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::Logout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "Logout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(NetEase::Docker::UploadScoreData)>(&NetEase::Docker::BaseDock::UploadScore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NetEase::Docker::UploadScoreData>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::WillProvideHighscore
// Il2CppName: WillProvideHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::WillProvideHighscore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "WillProvideHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetHighscoreReceivedCallback
// Il2CppName: SetHighscoreReceivedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*)>(&NetEase::Docker::BaseDock::SetHighscoreReceivedCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetHighscoreReceivedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::ReceivedHighscoreData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::RequestHighscoreList
// Il2CppName: RequestHighscoreList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(NetEase::Docker::RequestHighscoreData)>(&NetEase::Docker::BaseDock::RequestHighscoreList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "RequestHighscoreList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NetEase::Docker::RequestHighscoreData>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::UpdateLoop
// Il2CppName: UpdateLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::UpdateLoop)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "UpdateLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
