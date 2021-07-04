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
  // Autogenerated type: Valve.VR.IVRSystem/_IsTrackedDeviceConnected
  // [UnmanagedFunctionPointerAttribute] Offset: DD33AC
  class IVRSystem::_IsTrackedDeviceConnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _IsTrackedDeviceConnected
    _IsTrackedDeviceConnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9BFE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_IsTrackedDeviceConnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_IsTrackedDeviceConnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_IsTrackedDeviceConnected*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x1C9BFF8
    bool Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C9C264
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C9C2F0
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_IsTrackedDeviceConnected
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_IsTrackedDeviceConnected*, "Valve.VR", "IVRSystem/_IsTrackedDeviceConnected");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_IsTrackedDeviceConnected::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_IsTrackedDeviceConnected::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_IsTrackedDeviceConnected::*)(uint)>(&Valve::VR::IVRSystem::_IsTrackedDeviceConnected::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_IsTrackedDeviceConnected*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_IsTrackedDeviceConnected::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_IsTrackedDeviceConnected::*)(uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_IsTrackedDeviceConnected::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_IsTrackedDeviceConnected*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_IsTrackedDeviceConnected::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_IsTrackedDeviceConnected::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_IsTrackedDeviceConnected::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_IsTrackedDeviceConnected*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
