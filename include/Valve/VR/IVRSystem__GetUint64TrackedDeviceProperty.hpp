// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
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
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetUint64TrackedDeviceProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7D1C
  class IVRSystem::_GetUint64TrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetUint64TrackedDeviceProperty
    _GetUint64TrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D53018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetUint64TrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetUint64TrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1D53028
    uint64_t Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, ByRef<Valve::VR::ETrackedPropertyError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D532C8
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, ByRef<Valve::VR::ETrackedPropertyError> pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(ref Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x1D5339C
    uint64_t EndInvoke(ByRef<Valve::VR::ETrackedPropertyError> pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetUint64TrackedDeviceProperty
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetUint64TrackedDeviceProperty");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::*)(uint, Valve::VR::ETrackedDeviceProperty, ByRef<Valve::VR::ETrackedPropertyError>)>(&Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedDeviceProperty")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::*)(uint, Valve::VR::ETrackedDeviceProperty, ByRef<Valve::VR::ETrackedPropertyError>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedDeviceProperty")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, pError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::*)(ByRef<Valve::VR::ETrackedPropertyError>, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetUint64TrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
