// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
  // [UnmanagedFunctionPointerAttribute] Offset: DCE228
  class IVROverlay::_MoveGamepadFocusToNeighbor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _MoveGamepadFocusToNeighbor
    _MoveGamepadFocusToNeighbor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EF65C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_MoveGamepadFocusToNeighbor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_MoveGamepadFocusToNeighbor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom)
    // Offset: 0x1EF65D8
    OVR::OpenVR::EVROverlayError Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EF6870
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EF691C
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor*, "OVR.OpenVR", "IVROverlay/_MoveGamepadFocusToNeighbor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::*)(OVR::OpenVR::EOverlayDirection, uint64_t)>(&OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::Invoke)> {
  const MethodInfo* get() {
    static auto* eDirection = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EOverlayDirection")->byval_arg;
    static auto* ulFrom = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eDirection, ulFrom});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::*)(OVR::OpenVR::EOverlayDirection, uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* eDirection = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EOverlayDirection")->byval_arg;
    static auto* ulFrom = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eDirection, ulFrom, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
