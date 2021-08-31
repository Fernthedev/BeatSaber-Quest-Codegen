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
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsErrorNameFromEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEE098
  class IVRApplications::_GetApplicationsErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationsErrorNameFromEnum
    _GetApplicationsErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15C2674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationsErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationsErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVRApplicationError error)
    // Offset: 0x15B4328
    System::IntPtr Invoke(OVR::OpenVR::EVRApplicationError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRApplicationError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15C2684
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRApplicationError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x15C2710
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetApplicationsErrorNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::*)(OVR::OpenVR::EVRApplicationError)>(&OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::Invoke)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::*)(OVR::OpenVR::EVRApplicationError, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRApplicationError")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
