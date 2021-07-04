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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_SetDisplayVisibility
  // [UnmanagedFunctionPointerAttribute] Offset: DCD1D4
  class IVRSystem::_SetDisplayVisibility : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetDisplayVisibility
    _SetDisplayVisibility() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B634C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_SetDisplayVisibility* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_SetDisplayVisibility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_SetDisplayVisibility*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Boolean bIsVisibleOnDesktop)
    // Offset: 0x20B635C
    bool Invoke(bool bIsVisibleOnDesktop);
    // public System.IAsyncResult BeginInvoke(System.Boolean bIsVisibleOnDesktop, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B65D8
    System::IAsyncResult* BeginInvoke(bool bIsVisibleOnDesktop, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x20B6668
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_SetDisplayVisibility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*, "OVR.OpenVR", "IVRSystem/_SetDisplayVisibility");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_SetDisplayVisibility::*)(bool)>(&OVR::OpenVR::IVRSystem::_SetDisplayVisibility::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_SetDisplayVisibility::*)(bool, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_SetDisplayVisibility::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_SetDisplayVisibility::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_SetDisplayVisibility::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
