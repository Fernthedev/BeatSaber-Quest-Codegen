// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: LocalNetworkDiscoveryManager/InviteRespondedDelegate
  class LocalNetworkDiscoveryManager::InviteRespondedDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: InviteRespondedDelegate
    InviteRespondedDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23FB730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::InviteRespondedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::InviteRespondedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.Boolean accepted, System.Boolean blocked)
    // Offset: 0x23FAFB4
    void Invoke(::Il2CppString* userId, bool accepted, bool blocked);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.Boolean accepted, System.Boolean blocked, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23FB740
    System::IAsyncResult* BeginInvoke(::Il2CppString* userId, bool accepted, bool blocked, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x23FB7FC
    void EndInvoke(System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/InviteRespondedDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate*, "", "LocalNetworkDiscoveryManager/InviteRespondedDelegate");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::*)(::Il2CppString*, bool, bool)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::*)(::Il2CppString*, bool, bool, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::*)(System::IAsyncResult*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
