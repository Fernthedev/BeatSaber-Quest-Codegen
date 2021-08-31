// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseDock : public ::Il2CppObject/*, public NetEase::Docker::IDock*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE21AC4
    // private System.Action`1<NetEase.Docker.InitializeData> OnInitFinished
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<NetEase::Docker::InitializeData>* OnInitFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::InitializeData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE21B00
    // private System.Action`1<NetEase.Docker.LoginData> OnLoginFinished
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<NetEase::Docker::LoginData>* OnLoginFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::LoginData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE21B3C
    // private System.Action`1<NetEase.Docker.LogoutData> OnLogoutFinished
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<NetEase::Docker::LogoutData>* OnLogoutFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::LogoutData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE21B78
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
    // Get instance field reference: private System.Action`1<NetEase.Docker.InitializeData> OnInitFinished
    System::Action_1<NetEase::Docker::InitializeData>*& dyn_OnInitFinished();
    // Get instance field reference: private System.Action`1<NetEase.Docker.LoginData> OnLoginFinished
    System::Action_1<NetEase::Docker::LoginData>*& dyn_OnLoginFinished();
    // Get instance field reference: private System.Action`1<NetEase.Docker.LogoutData> OnLogoutFinished
    System::Action_1<NetEase::Docker::LogoutData>*& dyn_OnLogoutFinished();
    // Get instance field reference: private System.Action`1<NetEase.Docker.ReceivedHighscoreData> OnHighscoreReceived
    System::Action_1<NetEase::Docker::ReceivedHighscoreData>*& dyn_OnHighscoreReceived();
    // public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x2418850
    void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // public System.Void Initialize()
    // Offset: 0x2418858
    void Initialize();
    // public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x24188BC
    void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // public System.Void Login()
    // Offset: 0x24188C4
    void Login();
    // public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x2418934
    void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // public System.Void Logout()
    // Offset: 0x241893C
    void Logout();
    // public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x24189A0
    void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // public System.Boolean WillProvideHighscore()
    // Offset: 0x24189A4
    bool WillProvideHighscore();
    // public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x24189AC
    void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x24189B4
    void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // public System.Void UpdateLoop()
    // Offset: 0x2418B84
    void UpdateLoop();
    // public System.Void .ctor()
    // Offset: 0x2418B88
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetInitializeCallback
// Il2CppName: SetInitializeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::InitializeData>*)>(&NetEase::Docker::BaseDock::SetInitializeCallback)> {
  static const MethodInfo* get() {
    static auto* callbackAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NetEase.Docker", "InitializeData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetInitializeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackAction});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetLoginCallback
// Il2CppName: SetLoginCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::LoginData>*)>(&NetEase::Docker::BaseDock::SetLoginCallback)> {
  static const MethodInfo* get() {
    static auto* callbackAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NetEase.Docker", "LoginData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetLoginCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackAction});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::Login
// Il2CppName: Login
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::Login)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "Login", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetLogoutCallback
// Il2CppName: SetLogoutCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::LogoutData>*)>(&NetEase::Docker::BaseDock::SetLogoutCallback)> {
  static const MethodInfo* get() {
    static auto* callbackAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NetEase.Docker", "LogoutData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetLogoutCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackAction});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::Logout
// Il2CppName: Logout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::Logout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "Logout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(NetEase::Docker::UploadScoreData)>(&NetEase::Docker::BaseDock::UploadScore)> {
  static const MethodInfo* get() {
    static auto* scoreData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "UploadScoreData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreData});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::WillProvideHighscore
// Il2CppName: WillProvideHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::WillProvideHighscore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "WillProvideHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::SetHighscoreReceivedCallback
// Il2CppName: SetHighscoreReceivedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*)>(&NetEase::Docker::BaseDock::SetHighscoreReceivedCallback)> {
  static const MethodInfo* get() {
    static auto* callbackAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NetEase.Docker", "ReceivedHighscoreData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "SetHighscoreReceivedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackAction});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::RequestHighscoreList
// Il2CppName: RequestHighscoreList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)(NetEase::Docker::RequestHighscoreData)>(&NetEase::Docker::BaseDock::RequestHighscoreList)> {
  static const MethodInfo* get() {
    static auto* highscoreRequest = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "RequestHighscoreData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "RequestHighscoreList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highscoreRequest});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::UpdateLoop
// Il2CppName: UpdateLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NetEase::Docker::BaseDock::*)()>(&NetEase::Docker::BaseDock::UpdateLoop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::BaseDock*), "UpdateLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::BaseDock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
