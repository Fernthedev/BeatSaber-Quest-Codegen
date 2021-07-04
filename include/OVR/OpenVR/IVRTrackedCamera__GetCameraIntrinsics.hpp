// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetCameraIntrinsics
  // [UnmanagedFunctionPointerAttribute] Offset: DCD530
  class IVRTrackedCamera::_GetCameraIntrinsics : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraIntrinsics
    _GetCameraIntrinsics() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12765AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraIntrinsics* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraIntrinsics*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter)
    // Offset: 0x12765BC
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::HmdVector2_t& pFocalLength, OVR::OpenVR::HmdVector2_t& pCenter);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1276878
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, OVR::OpenVR::HmdVector2_t& pFocalLength, OVR::OpenVR::HmdVector2_t& pCenter, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter, System.IAsyncResult result)
    // Offset: 0x1276960
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(OVR::OpenVR::HmdVector2_t& pFocalLength, OVR::OpenVR::HmdVector2_t& pCenter, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetCameraIntrinsics
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraIntrinsics");
// Writing includes for template specializations
#include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
#include "OVR/OpenVR/HmdVector2_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::*)(uint, OVR::OpenVR::EVRTrackedCameraFrameType, OVR::OpenVR::HmdVector2_t&, OVR::OpenVR::HmdVector2_t&)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRTrackedCameraFrameType>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdVector2_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::*)(uint, OVR::OpenVR::EVRTrackedCameraFrameType, OVR::OpenVR::HmdVector2_t&, OVR::OpenVR::HmdVector2_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EVRTrackedCameraFrameType>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::*)(OVR::OpenVR::HmdVector2_t&, OVR::OpenVR::HmdVector2_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdVector2_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
