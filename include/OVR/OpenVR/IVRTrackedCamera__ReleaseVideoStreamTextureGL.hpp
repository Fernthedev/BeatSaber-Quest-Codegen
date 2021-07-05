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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  // [UnmanagedFunctionPointerAttribute] Offset: DCD5D0
  class IVRTrackedCamera::_ReleaseVideoStreamTextureGL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseVideoStreamTextureGL
    _ReleaseVideoStreamTextureGL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1278268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_ReleaseVideoStreamTextureGL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0x1278278
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, uint glTextureId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.UInt32 glTextureId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12784FC
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, uint glTextureId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x12785A8
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamTextureGL
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::*)(uint64_t, uint)>(&OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::Invoke)> {
  const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, glTextureId});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::*)(uint64_t, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, glTextureId, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamTextureGL*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
