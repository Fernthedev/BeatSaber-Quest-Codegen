// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum
  // [UnmanagedFunctionPointerAttribute] Offset: DCD6E8
  class IVRApplications::_GetApplicationsErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationsErrorNameFromEnum
    _GetApplicationsErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B493C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationsErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationsErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVRApplicationError error)
    // Offset: 0x15A65F0
    System::IntPtr Invoke(OVR::OpenVR::EVRApplicationError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRApplicationError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B494C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRApplicationError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B49D8
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationsErrorNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*, "OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
// Writing includes for template specializations
#include "OVR/OpenVR/EVRApplicationError.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::*)(OVR::OpenVR::EVRApplicationError)>(&OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRApplicationError>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::*)(OVR::OpenVR::EVRApplicationError, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRApplicationError>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetApplicationsErrorNameFromEnum*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
