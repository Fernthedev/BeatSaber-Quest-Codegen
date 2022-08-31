// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRSystem::_GetTrackedDeviceClass);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_GetTrackedDeviceClass*, "Valve.VR", "IVRSystem/_GetTrackedDeviceClass");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceClass
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 109F124
  class IVRSystem::_GetTrackedDeviceClass : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2257B88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetTrackedDeviceClass* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_GetTrackedDeviceClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetTrackedDeviceClass*, creationType>(object, method)));
    }
    // public Valve.VR.ETrackedDeviceClass Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x2257B98
    ::Valve::VR::ETrackedDeviceClass Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2257E00
    ::System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.ETrackedDeviceClass EndInvoke(System.IAsyncResult result)
    // Offset: 0x2257E8C
    ::Valve::VR::ETrackedDeviceClass EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetTrackedDeviceClass
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceClass::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::ETrackedDeviceClass (Valve::VR::IVRSystem::_GetTrackedDeviceClass::*)(uint)>(&Valve::VR::IVRSystem::_GetTrackedDeviceClass::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetTrackedDeviceClass*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceClass::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_GetTrackedDeviceClass::*)(uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetTrackedDeviceClass::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetTrackedDeviceClass*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetTrackedDeviceClass::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::ETrackedDeviceClass (Valve::VR::IVRSystem::_GetTrackedDeviceClass::*)(::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetTrackedDeviceClass::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetTrackedDeviceClass*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
