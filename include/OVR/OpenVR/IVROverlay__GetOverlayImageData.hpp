// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayImageData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF379C
  class IVROverlay::_GetOverlayImageData : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayImageData
    _GetOverlayImageData() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F64A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayImageData* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlayImageData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayImageData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unBufferSize, ref System.UInt32 punWidth, ref System.UInt32 punHeight)
    // Offset: 0x1F64A70
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, System::IntPtr pvBuffer, uint unBufferSize, ByRef<uint> punWidth, ByRef<uint> punHeight);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unBufferSize, ref System.UInt32 punWidth, ref System.UInt32 punHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F64D44
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::IntPtr pvBuffer, uint unBufferSize, ByRef<uint> punWidth, ByRef<uint> punHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt32 punWidth, ref System.UInt32 punHeight, System.IAsyncResult result)
    // Offset: 0x1F64E48
    OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint> punWidth, ByRef<uint> punHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayImageData
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayImageData*, "OVR.OpenVR", "IVROverlay/_GetOverlayImageData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayImageData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayImageData::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayImageData::*)(uint64_t, System::IntPtr, uint, ByRef<uint>, ByRef<uint>)>(&OVR::OpenVR::IVROverlay::_GetOverlayImageData::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pvBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* punHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayImageData*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayImageData::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayImageData::*)(uint64_t, System::IntPtr, uint, ByRef<uint>, ByRef<uint>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayImageData::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pvBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* punHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayImageData*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayImageData::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayImageData::*)(ByRef<uint>, ByRef<uint>, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayImageData::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* punHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayImageData*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punWidth, punHeight, result});
  }
};
