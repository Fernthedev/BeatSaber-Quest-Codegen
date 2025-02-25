// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._AddApplicationManifest
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF2F04
  class IVRApplications::_AddApplicationManifest : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _AddApplicationManifest
    _AddApplicationManifest() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15CC56C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_AddApplicationManifest* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_AddApplicationManifest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_AddApplicationManifest*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0x15BBDB8
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public System.IAsyncResult BeginInvoke(System.String pchApplicationManifestFullPath, System.Boolean bTemporary, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15CC57C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15CC61C
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._AddApplicationManifest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_AddApplicationManifest*, "OVR.OpenVR", "IVRApplications/_AddApplicationManifest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_AddApplicationManifest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_AddApplicationManifest::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_AddApplicationManifest::*)(::Il2CppString*, bool)>(&OVR::OpenVR::IVRApplications::_AddApplicationManifest::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchApplicationManifestFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bTemporary = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_AddApplicationManifest*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchApplicationManifestFullPath, bTemporary});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_AddApplicationManifest::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_AddApplicationManifest::*)(::Il2CppString*, bool, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_AddApplicationManifest::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchApplicationManifestFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bTemporary = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_AddApplicationManifest*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchApplicationManifestFullPath, bTemporary, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_AddApplicationManifest::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_AddApplicationManifest::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_AddApplicationManifest::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_AddApplicationManifest*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
