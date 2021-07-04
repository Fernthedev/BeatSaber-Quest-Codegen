// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
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
  // Autogenerated type: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked
  // [UnmanagedFunctionPointerAttribute] Offset: DD48C4
  class CVRSystem::_GetControllerStateWithPosePacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetControllerStateWithPosePacked
    _GetControllerStateWithPosePacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D7804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem::_GetControllerStateWithPosePacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem::_GetControllerStateWithPosePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x16D71D0
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D7814
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x16D791C
    bool EndInvoke(Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.CVRSystem/_GetControllerStateWithPosePacked
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*, "Valve.VR", "CVRSystem/_GetControllerStateWithPosePacked");
// Writing includes for template specializations
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
#include "Valve/VR/VRControllerState_t_Packed.hpp"
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::*)(Valve::VR::ETrackingUniverseOrigin, uint, Valve::VR::VRControllerState_t_Packed&, uint, Valve::VR::TrackedDevicePose_t&)>(&Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::ETrackingUniverseOrigin>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::VRControllerState_t_Packed&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::TrackedDevicePose_t&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::*)(Valve::VR::ETrackingUniverseOrigin, uint, Valve::VR::VRControllerState_t_Packed&, uint, Valve::VR::TrackedDevicePose_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::ETrackingUniverseOrigin>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::VRControllerState_t_Packed&>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::TrackedDevicePose_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::*)(Valve::VR::VRControllerState_t_Packed&, Valve::VR::TrackedDevicePose_t&, System::IAsyncResult*)>(&Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::VRControllerState_t_Packed&>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::TrackedDevicePose_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
