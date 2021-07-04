// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
  // [UnmanagedFunctionPointerAttribute] Offset: DD36A4
  class IVRTrackedCamera::_GetVideoStreamTextureD3D11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVideoStreamTextureD3D11
    _GetVideoStreamTextureD3D11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9F354
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureD3D11*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1C9F364
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9F65C
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref System.IntPtr ppD3D11ShaderResourceView, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0x1C9F788
    Valve::VR::EVRTrackedCameraError EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11*, "Valve.VR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
// Writing includes for template specializations
#include "Valve/VR/EVRTrackedCameraFrameType.hpp"
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::*)(uint64_t, Valve::VR::EVRTrackedCameraFrameType, System::IntPtr, System::IntPtr&, Valve::VR::CameraVideoStreamFrameHeader_t&, uint)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRTrackedCameraFrameType>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::CameraVideoStreamFrameHeader_t&>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::*)(uint64_t, Valve::VR::EVRTrackedCameraFrameType, System::IntPtr, System::IntPtr&, Valve::VR::CameraVideoStreamFrameHeader_t&, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRTrackedCameraFrameType>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::CameraVideoStreamFrameHeader_t&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::*)(System::IntPtr&, Valve::VR::CameraVideoStreamFrameHeader_t&, System::IAsyncResult*)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureD3D11*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IntPtr&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::CameraVideoStreamFrameHeader_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
