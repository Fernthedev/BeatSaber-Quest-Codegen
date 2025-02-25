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
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlaySortOrder
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF38A0
  class IVROverlay::_GetOverlaySortOrder : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlaySortOrder
    _GetOverlaySortOrder() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F66470
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlaySortOrder* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlaySortOrder*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder)
    // Offset: 0x1F66480
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint> punSortOrder);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F66704
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint> punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt32 punSortOrder, System.IAsyncResult result)
    // Offset: 0x1F667B4
    OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint> punSortOrder, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlaySortOrder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlaySortOrder*, "OVR.OpenVR", "IVROverlay/_GetOverlaySortOrder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::*)(uint64_t, ByRef<uint>)>(&OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punSortOrder = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlaySortOrder*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punSortOrder});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::*)(uint64_t, ByRef<uint>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* punSortOrder = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlaySortOrder*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, punSortOrder, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::*)(ByRef<uint>, System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punSortOrder = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlaySortOrder*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punSortOrder, result});
  }
};
