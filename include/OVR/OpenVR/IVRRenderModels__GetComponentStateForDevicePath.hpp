// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentStateForDevicePath
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF3E68
  class IVRRenderModels::_GetComponentStateForDevicePath : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentStateForDevicePath
    _GetComponentStateForDevicePath() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20E9C20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentStateForDevicePath* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentStateForDevicePath*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, System.UInt64 devicePath, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x20E9C30
    bool Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, uint64_t devicePath, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.UInt64 devicePath, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20EA0A8
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, uint64_t devicePath, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x20EA190
    bool EndInvoke(ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentStateForDevicePath
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath*, "OVR.OpenVR", "IVRRenderModels/_GetComponentStateForDevicePath");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::*)(::Il2CppString*, ::Il2CppString*, uint64_t, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<OVR::OpenVR::RenderModel_ComponentState_t>)>(&OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* devicePath = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, devicePath, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::*)(::Il2CppString*, ::Il2CppString*, uint64_t, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<OVR::OpenVR::RenderModel_ComponentState_t>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* devicePath = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, devicePath, pState, pComponentState, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::*)(ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<OVR::OpenVR::RenderModel_ComponentState_t>, System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pState, pComponentState, result});
  }
};
