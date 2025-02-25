// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: VROverlayFlags
  struct VROverlayFlags;
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
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._SetOverlayFlag
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF88E8
  class IVROverlay::_SetOverlayFlag : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetOverlayFlag
    _SetOverlayFlag() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x206A5EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayFlag* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_SetOverlayFlag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayFlag*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayFlags eOverlayFlag, System.Boolean bEnabled)
    // Offset: 0x206A5FC
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayFlags eOverlayFlag, bool bEnabled);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayFlags eOverlayFlag, System.Boolean bEnabled, System.AsyncCallback callback, System.Object object)
    // Offset: 0x206A89C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VROverlayFlags eOverlayFlag, bool bEnabled, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x206A96C
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._SetOverlayFlag
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayFlag*, "Valve.VR", "IVROverlay/_SetOverlayFlag");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFlag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFlag::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayFlag::*)(uint64_t, Valve::VR::VROverlayFlags, bool)>(&Valve::VR::IVROverlay::_SetOverlayFlag::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOverlayFlag = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayFlags")->byval_arg;
    static auto* bEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayFlag*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eOverlayFlag, bEnabled});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFlag::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayFlag::*)(uint64_t, Valve::VR::VROverlayFlags, bool, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayFlag::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOverlayFlag = &::il2cpp_utils::GetClassFromName("Valve.VR", "VROverlayFlags")->byval_arg;
    static auto* bEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayFlag*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, eOverlayFlag, bEnabled, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayFlag::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayFlag::*)(System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayFlag::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayFlag*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
