// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AssetSync
#include "HoudiniEngineUnity/HEU_AssetSync.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback*, "HoudiniEngineUnity", "HEU_AssetSync/AssetSyncCallback");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetSync/HoudiniEngineUnity.AssetSyncCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetSync::AssetSyncCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16ED5FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetSync::AssetSyncCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetSync::AssetSyncCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(HoudiniEngineUnity.HEU_AssetSync assetSync)
    // Offset: 0x16ED0FC
    void Invoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync);
    // public System.IAsyncResult BeginInvoke(HoudiniEngineUnity.HEU_AssetSync assetSync, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16ED60C
    ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AssetSync* assetSync, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16ED630
    void EndInvoke(::System::IAsyncResult* result);
  }; // HoudiniEngineUnity.HEU_AssetSync/HoudiniEngineUnity.AssetSyncCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::*)(::HoudiniEngineUnity::HEU_AssetSync*)>(&HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* assetSync = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_AssetSync")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetSync});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::*)(::HoudiniEngineUnity::HEU_AssetSync*, ::System::AsyncCallback*, ::Il2CppObject*)>(&HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* assetSync = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_AssetSync")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetSync, callback, object});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::*)(::System::IAsyncResult*)>(&HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
