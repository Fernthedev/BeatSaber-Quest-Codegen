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
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._ShouldApplicationReduceRenderingWork
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEDE04
  class IVRSystem::_ShouldApplicationReduceRenderingWork : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShouldApplicationReduceRenderingWork
    _ShouldApplicationReduceRenderingWork() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20FE16C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ShouldApplicationReduceRenderingWork* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ShouldApplicationReduceRenderingWork*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x20FE17C
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x20FE394
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x20FE3C0
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._ShouldApplicationReduceRenderingWork
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::*)()>(&OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::*)(System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
