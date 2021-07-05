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
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
  // [UnmanagedFunctionPointerAttribute] Offset: DD32E4
  class IVRSystem::_GetDeviceToAbsoluteTrackingPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDeviceToAbsoluteTrackingPose
    _GetDeviceToAbsoluteTrackingPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C96E04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetDeviceToAbsoluteTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetDeviceToAbsoluteTrackingPose*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, in Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray, System.UInt32 unTrackedDevicePoseArrayCount)
    // Offset: 0x1C96E14
    void Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>*& pTrackedDevicePoseArray, uint unTrackedDevicePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, in Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray, System.UInt32 unTrackedDevicePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C970E8
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>*& pTrackedDevicePoseArray, uint unTrackedDevicePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C971C0
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*, "Valve.VR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::*)(Valve::VR::ETrackingUniverseOrigin, float, ::Array<Valve::VR::TrackedDevicePose_t>*&, uint)>(&Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::Invoke)> {
  const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* fPredictedSecondsToPhotonsFromNow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pTrackedDevicePoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unTrackedDevicePoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::*)(Valve::VR::ETrackingUniverseOrigin, float, ::Array<Valve::VR::TrackedDevicePose_t>*&, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* fPredictedSecondsToPhotonsFromNow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pTrackedDevicePoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unTrackedDevicePoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetDeviceToAbsoluteTrackingPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
