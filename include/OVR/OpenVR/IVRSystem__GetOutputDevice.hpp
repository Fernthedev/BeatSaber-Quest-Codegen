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
  // Forward declaring type: ETextureType
  struct ETextureType;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetOutputDevice
  // [UnmanagedFunctionPointerAttribute] Offset: DCD1AC
  class IVRSystem::_GetOutputDevice : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOutputDevice
    _GetOutputDevice() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B1AD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetOutputDevice* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetOutputDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetOutputDevice*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0x20B1AE8
    void Invoke(uint64_t& pnDevice, OVR::OpenVR::ETextureType textureType, System::IntPtr pInstance);
    // public System.IAsyncResult BeginInvoke(ref System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B1D70
    System::IAsyncResult* BeginInvoke(uint64_t& pnDevice, OVR::OpenVR::ETextureType textureType, System::IntPtr pInstance, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt64 pnDevice, System.IAsyncResult result)
    // Offset: 0x20B1E40
    void EndInvoke(uint64_t& pnDevice, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetOutputDevice
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetOutputDevice*, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
// Writing includes for template specializations
#include "OVR/OpenVR/ETextureType.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetOutputDevice::*)(uint64_t&, OVR::OpenVR::ETextureType, System::IntPtr)>(&OVR::OpenVR::IVRSystem::_GetOutputDevice::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetOutputDevice*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETextureType>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetOutputDevice::*)(uint64_t&, OVR::OpenVR::ETextureType, System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetOutputDevice::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetOutputDevice*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETextureType>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetOutputDevice::*)(uint64_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetOutputDevice::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetOutputDevice*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
