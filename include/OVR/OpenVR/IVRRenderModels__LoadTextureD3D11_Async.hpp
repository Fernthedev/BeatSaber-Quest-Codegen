// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
  // [UnmanagedFunctionPointerAttribute] Offset: DCE494
  class IVRRenderModels::_LoadTextureD3D11_Async : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadTextureD3D11_Async
    _LoadTextureD3D11_Async() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A58D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadTextureD3D11_Async* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadTextureD3D11_Async*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x20A58E4
    OVR::OpenVR::EVRRenderModelError Invoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20A5B84
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRRenderModelError EndInvoke(ref System.IntPtr ppD3D11Texture2D, System.IAsyncResult result)
    // Offset: 0x20A5C4C
    OVR::OpenVR::EVRRenderModelError EndInvoke(System::IntPtr& ppD3D11Texture2D, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTextureD3D11_Async");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::*)(int, System::IntPtr, System::IntPtr&)>(&OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::Invoke)> {
  const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pD3D11Device = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11Texture2D = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, pD3D11Device, ppD3D11Texture2D});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::*)(int, System::IntPtr, System::IntPtr&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pD3D11Device = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11Texture2D = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, pD3D11Device, ppD3D11Texture2D, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::*)(System::IntPtr&, System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::EndInvoke)> {
  const MethodInfo* get() {
    static auto* ppD3D11Texture2D = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ppD3D11Texture2D, result});
  }
};
