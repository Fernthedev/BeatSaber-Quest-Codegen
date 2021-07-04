// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NetEase::Docker
namespace NetEase::Docker {
  // Forward declaring type: IDock
  class IDock;
  // Forward declaring type: UploadScoreData
  struct UploadScoreData;
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetEase.Docker.VivaDocker
  class VivaDocker : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VivaDocker
    VivaDocker() noexcept {}
    // Get static field: static private NetEase.Docker.IDock _activeDock
    static NetEase::Docker::IDock* _get__activeDock();
    // Set static field: static private NetEase.Docker.IDock _activeDock
    static void _set__activeDock(NetEase::Docker::IDock* value);
    // static public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x23EC8E4
    static void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // static public System.Void Initialize()
    // Offset: 0x23EC9C0
    static void Initialize();
    // static public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x23ECA98
    static void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // static public System.Void Login()
    // Offset: 0x23ECB78
    static void Login();
    // static public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x23ECC50
    static void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // static public System.Void Logout()
    // Offset: 0x23ECD30
    static void Logout();
    // static public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x23ECE08
    static void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // static public System.Boolean WillProvideHighscore()
    // Offset: 0x23ECF28
    static bool WillProvideHighscore();
    // static public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x23ED000
    static void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // static public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x23ED0E0
    static void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // static public System.Void UpdateLoop()
    // Offset: 0x23ED1D0
    static void UpdateLoop();
    // static private System.Void .cctor()
    // Offset: 0x23ED2A8
    static void _cctor();
  }; // NetEase.Docker.VivaDocker
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::VivaDocker*, "NetEase.Docker", "VivaDocker");
// Writing includes for template specializations
#include "System/Action_1.hpp"
#include "NetEase/Docker/UploadScoreData.hpp"
#include "NetEase/Docker/RequestHighscoreData.hpp"
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::SetInitializeCallback
// Il2CppName: SetInitializeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<NetEase::Docker::InitializeData>*)>(&NetEase::Docker::VivaDocker::SetInitializeCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "SetInitializeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::InitializeData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NetEase::Docker::VivaDocker::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::SetLoginCallback
// Il2CppName: SetLoginCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<NetEase::Docker::LoginData>*)>(&NetEase::Docker::VivaDocker::SetLoginCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "SetLoginCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::LoginData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::Login
// Il2CppName: Login
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NetEase::Docker::VivaDocker::Login)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "Login", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::SetLogoutCallback
// Il2CppName: SetLogoutCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<NetEase::Docker::LogoutData>*)>(&NetEase::Docker::VivaDocker::SetLogoutCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "SetLogoutCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::LogoutData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::Logout
// Il2CppName: Logout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NetEase::Docker::VivaDocker::Logout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "Logout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::UploadScore
// Il2CppName: UploadScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(NetEase::Docker::UploadScoreData)>(&NetEase::Docker::VivaDocker::UploadScore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "UploadScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NetEase::Docker::UploadScoreData>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::WillProvideHighscore
// Il2CppName: WillProvideHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&NetEase::Docker::VivaDocker::WillProvideHighscore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "WillProvideHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::SetHighscoreReceivedCallback
// Il2CppName: SetHighscoreReceivedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*)>(&NetEase::Docker::VivaDocker::SetHighscoreReceivedCallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "SetHighscoreReceivedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<NetEase::Docker::ReceivedHighscoreData>*>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::RequestHighscoreList
// Il2CppName: RequestHighscoreList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(NetEase::Docker::RequestHighscoreData)>(&NetEase::Docker::VivaDocker::RequestHighscoreList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "RequestHighscoreList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NetEase::Docker::RequestHighscoreData>()});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::UpdateLoop
// Il2CppName: UpdateLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NetEase::Docker::VivaDocker::UpdateLoop)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), "UpdateLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NetEase::Docker::VivaDocker::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NetEase::Docker::VivaDocker::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NetEase::Docker::VivaDocker*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
