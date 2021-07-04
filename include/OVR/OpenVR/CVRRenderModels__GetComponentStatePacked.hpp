// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVRRenderModels
#include "OVR/OpenVR/CVRRenderModels.hpp"
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
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
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
  // Autogenerated type: OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
  // [UnmanagedFunctionPointerAttribute] Offset: DCEA34
  class CVRRenderModels::_GetComponentStatePacked : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetComponentStatePacked
    _GetComponentStatePacked() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B1C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels::_GetComponentStatePacked* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels::_GetComponentStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x15B16D8
    bool Invoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B1C48
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t_Packed pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0x15B1D38
    bool EndInvoke(OVR::OpenVR::VRControllerState_t_Packed& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
// Writing includes for template specializations
#include "OVR/OpenVR/VRControllerState_t_Packed.hpp"
#include "OVR/OpenVR/RenderModel_ControllerMode_State_t.hpp"
#include "OVR/OpenVR/RenderModel_ComponentState_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::*)(::Il2CppString*, ::Il2CppString*, OVR::OpenVR::VRControllerState_t_Packed&, OVR::OpenVR::RenderModel_ControllerMode_State_t&, OVR::OpenVR::RenderModel_ComponentState_t&)>(&OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::VRControllerState_t_Packed&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::RenderModel_ControllerMode_State_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::RenderModel_ComponentState_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::*)(::Il2CppString*, ::Il2CppString*, OVR::OpenVR::VRControllerState_t_Packed&, OVR::OpenVR::RenderModel_ControllerMode_State_t&, OVR::OpenVR::RenderModel_ComponentState_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::VRControllerState_t_Packed&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::RenderModel_ControllerMode_State_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::RenderModel_ComponentState_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::*)(OVR::OpenVR::VRControllerState_t_Packed&, OVR::OpenVR::RenderModel_ControllerMode_State_t&, OVR::OpenVR::RenderModel_ComponentState_t&, System::IAsyncResult*)>(&OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::VRControllerState_t_Packed&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::RenderModel_ControllerMode_State_t&>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::RenderModel_ComponentState_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
