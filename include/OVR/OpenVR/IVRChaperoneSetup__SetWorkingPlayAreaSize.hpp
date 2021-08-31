// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._SetWorkingPlayAreaSize
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEE340
  class IVRChaperoneSetup::_SetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetWorkingPlayAreaSize
    _SetWorkingPlayAreaSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15C44A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingPlayAreaSize*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x15BAEA4
    void Invoke(float sizeX, float sizeZ);
    // public System.IAsyncResult BeginInvoke(System.Single sizeX, System.Single sizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15C44B0
    System::IAsyncResult* BeginInvoke(float sizeX, float sizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15C4550
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._SetWorkingPlayAreaSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::*)(float, float)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::Invoke)> {
  static const MethodInfo* get() {
    static auto* sizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeX, sizeZ});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::*)(float, float, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeX, sizeZ, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
