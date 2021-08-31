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
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetCameraProjection
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEDEF4
  class IVRTrackedCamera::_GetCameraProjection : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraProjection
    _GetCameraProjection() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x128F534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraProjection* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraProjection*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref OVR.OpenVR.HmdMatrix44_t pProjection)
    // Offset: 0x128F544
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref OVR.OpenVR.HmdMatrix44_t pProjection, System.AsyncCallback callback, System.Object object)
    // Offset: 0x128F81C
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref OVR.OpenVR.HmdMatrix44_t pProjection, System.IAsyncResult result)
    // Offset: 0x128F924
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetCameraProjection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraProjection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::*)(uint, OVR::OpenVR::EVRTrackedCameraFrameType, float, float, ByRef<OVR::OpenVR::HmdMatrix44_t>)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::Invoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* flZNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flZFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix44_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, flZNear, flZFar, pProjection});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::*)(uint, OVR::OpenVR::EVRTrackedCameraFrameType, float, float, ByRef<OVR::OpenVR::HmdMatrix44_t>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* flZNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flZFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix44_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, flZNear, flZFar, pProjection, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::*)(ByRef<OVR::OpenVR::HmdMatrix44_t>, System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix44_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pProjection, result});
  }
};
