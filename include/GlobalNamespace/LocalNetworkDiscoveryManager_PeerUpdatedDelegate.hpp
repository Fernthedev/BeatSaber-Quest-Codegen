// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*, "", "LocalNetworkDiscoveryManager/PeerUpdatedDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/PeerUpdatedDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalNetworkDiscoveryManager::PeerUpdatedDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1564F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::PeerUpdatedDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::PeerUpdatedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Int32 currentPartySize, System.Boolean isPartyOwner, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x1562408
    void Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, int currentPartySize, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Int32 currentPartySize, System.Boolean isPartyOwner, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1564F28
    ::System::IAsyncResult* BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, int currentPartySize, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1565040
    void EndInvoke(::System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/PeerUpdatedDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::*)(::StringW, ::System::Net::IPAddress*, ::StringW, int, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, remoteEndPoint, userName, currentPartySize, isPartyOwner, selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::*)(::StringW, ::System::Net::IPAddress*, ::StringW, int, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, remoteEndPoint, userName, currentPartySize, isPartyOwner, selectionMask, configuration, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
