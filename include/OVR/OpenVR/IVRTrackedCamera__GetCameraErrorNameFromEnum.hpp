// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetCameraErrorNameFromEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF2E14
  class IVRTrackedCamera::_GetCameraErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraErrorNameFromEnum
    _GetCameraErrorNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12A689C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraErrorNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVRTrackedCameraError eCameraError)
    // Offset: 0x12A68AC
    System::IntPtr Invoke(OVR::OpenVR::EVRTrackedCameraError eCameraError);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRTrackedCameraError eCameraError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12A6B24
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRTrackedCameraError eCameraError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x12A6BB0
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetCameraErrorNameFromEnum
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraErrorNameFromEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::*)(OVR::OpenVR::EVRTrackedCameraError)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::Invoke)> {
  static const MethodInfo* get() {
    static auto* eCameraError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eCameraError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::*)(OVR::OpenVR::EVRTrackedCameraError, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eCameraError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraError")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eCameraError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraErrorNameFromEnum*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
