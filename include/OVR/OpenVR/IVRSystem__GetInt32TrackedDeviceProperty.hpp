// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty
  // [UnmanagedFunctionPointerAttribute] Offset: DCD2EC
  class IVRSystem::_GetInt32TrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetInt32TrackedDeviceProperty
    _GetInt32TrackedDeviceProperty() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B1310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetInt32TrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetInt32TrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0x20B1320
    int Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B15C0
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(ref OVR.OpenVR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x20B1694
    int EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetInt32TrackedDeviceProperty");
// Writing includes for template specializations
#include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
#include "OVR/OpenVR/ETrackedPropertyError.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::*)(uint, OVR::OpenVR::ETrackedDeviceProperty, OVR::OpenVR::ETrackedPropertyError&)>(&OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedDeviceProperty>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedPropertyError&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::*)(uint, OVR::OpenVR::ETrackedDeviceProperty, OVR::OpenVR::ETrackedPropertyError&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedDeviceProperty>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedPropertyError&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::*)(OVR::OpenVR::ETrackedPropertyError&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackedPropertyError&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
