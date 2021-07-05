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
  // Autogenerated type: Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty
  // [UnmanagedFunctionPointerAttribute] Offset: DD33D4
  class IVRSystem::_GetFloatTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetFloatTrackedDeviceProperty
    _GetFloatTrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C978B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetFloatTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetFloatTrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.Single Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1C978C4
    float Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C97B64
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Single EndInvoke(ref Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x1C97C38
    float EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetFloatTrackedDeviceProperty");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::*)(uint, Valve::VR::ETrackedDeviceProperty, Valve::VR::ETrackedPropertyError&)>(&Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::Invoke)> {
  const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedDeviceProperty")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::*)(uint, Valve::VR::ETrackedDeviceProperty, Valve::VR::ETrackedPropertyError&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedDeviceProperty")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, pError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::*)(Valve::VR::ETrackedPropertyError&, System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETrackedPropertyError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetFloatTrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
