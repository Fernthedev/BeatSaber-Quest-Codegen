// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
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
  // Autogenerated type: Valve.VR.IVRSystem/_PollNextEventWithPose
  // [UnmanagedFunctionPointerAttribute] Offset: DD3474
  class IVRSystem::_PollNextEventWithPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextEventWithPose
    _PollNextEventWithPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9C9C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PollNextEventWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_PollNextEventWithPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PollNextEventWithPose*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1C9C9D8
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9CCB4
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t pEvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1C9CDA4
    bool EndInvoke(Valve::VR::VREvent_t& pEvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_PollNextEventWithPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_PollNextEventWithPose*, "Valve.VR", "IVRSystem/_PollNextEventWithPose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PollNextEventWithPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PollNextEventWithPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_PollNextEventWithPose::*)(Valve::VR::ETrackingUniverseOrigin, Valve::VR::VREvent_t&, uint, Valve::VR::TrackedDevicePose_t&)>(&Valve::VR::IVRSystem::_PollNextEventWithPose::Invoke)> {
  const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_PollNextEventWithPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, pEvent, uncbVREvent, pTrackedDevicePose});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PollNextEventWithPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_PollNextEventWithPose::*)(Valve::VR::ETrackingUniverseOrigin, Valve::VR::VREvent_t&, uint, Valve::VR::TrackedDevicePose_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_PollNextEventWithPose::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_PollNextEventWithPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, pEvent, uncbVREvent, pTrackedDevicePose, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_PollNextEventWithPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_PollNextEventWithPose::*)(Valve::VR::VREvent_t&, Valve::VR::TrackedDevicePose_t&, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_PollNextEventWithPose::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_PollNextEventWithPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, pTrackedDevicePose, result});
  }
};
