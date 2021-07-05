// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
  // [UnmanagedFunctionPointerAttribute] Offset: DD3A8C
  class IVRChaperoneSetup::_SetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetWorkingPlayAreaSize
    _SetWorkingPlayAreaSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FB9568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingPlayAreaSize*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x1FB9578
    void Invoke(float sizeX, float sizeZ);
    // public System.IAsyncResult BeginInvoke(System.Single sizeX, System.Single sizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FB97F0
    System::IAsyncResult* BeginInvoke(float sizeX, float sizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FB9890
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*, "Valve.VR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::*)(float, float)>(&Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::Invoke)> {
  const MethodInfo* get() {
    static auto* sizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeX, sizeZ});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::*)(float, float, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* sizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sizeX, sizeZ, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::*)(System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
