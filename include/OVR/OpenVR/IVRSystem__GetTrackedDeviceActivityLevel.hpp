// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceActivityLevel
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF2B6C
  class IVRSystem::_GetTrackedDeviceActivityLevel : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetTrackedDeviceActivityLevel
    _GetTrackedDeviceActivityLevel() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20FA344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceActivityLevel* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceActivityLevel*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EDeviceActivityLevel Invoke(System.UInt32 unDeviceId)
    // Offset: 0x20FA354
    OVR::OpenVR::EDeviceActivityLevel Invoke(uint unDeviceId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20FA5BC
    System::IAsyncResult* BeginInvoke(uint unDeviceId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EDeviceActivityLevel EndInvoke(System.IAsyncResult result)
    // Offset: 0x20FA648
    OVR::OpenVR::EDeviceActivityLevel EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetTrackedDeviceActivityLevel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EDeviceActivityLevel (OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::*)(uint)>(&OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceId});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::*)(uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceId, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EDeviceActivityLevel (OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetTrackedDeviceActivityLevel*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
