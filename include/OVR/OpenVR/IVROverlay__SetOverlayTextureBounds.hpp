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
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._SetOverlayTextureBounds
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEE9BC
  class IVROverlay::_SetOverlayTextureBounds : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayTextureBounds
    _SetOverlayTextureBounds() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20E5F78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayTextureBounds* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayTextureBounds*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VRTextureBounds_t pOverlayTextureBounds)
    // Offset: 0x20E5F88
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VRTextureBounds_t pOverlayTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20E620C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.VRTextureBounds_t pOverlayTextureBounds, System.IAsyncResult result)
    // Offset: 0x20E62BC
    OVR::OpenVR::EVROverlayError EndInvoke(ByRef<OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._SetOverlayTextureBounds
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds*, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureBounds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::*)(uint64_t, ByRef<OVR::OpenVR::VRTextureBounds_t>)>(&OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pOverlayTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pOverlayTextureBounds});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::*)(uint64_t, ByRef<OVR::OpenVR::VRTextureBounds_t>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pOverlayTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pOverlayTextureBounds, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::*)(ByRef<OVR::OpenVR::VRTextureBounds_t>, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOverlayTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOverlayTextureBounds, result});
  }
};
