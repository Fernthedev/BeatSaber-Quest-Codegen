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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_FreeTexture
  // [UnmanagedFunctionPointerAttribute] Offset: DCE480
  class IVRRenderModels::_FreeTexture : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FreeTexture
    _FreeTexture() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20A1870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_FreeTexture* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_FreeTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_FreeTexture*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pTexture)
    // Offset: 0x20A1880
    void Invoke(System::IntPtr pTexture);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20A1ADC
    System::IAsyncResult* BeginInvoke(System::IntPtr pTexture, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x20A1B68
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_FreeTexture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_FreeTexture*, "OVR.OpenVR", "IVRRenderModels/_FreeTexture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRRenderModels::_FreeTexture::*)(System::IntPtr)>(&OVR::OpenVR::IVRRenderModels::_FreeTexture::Invoke)> {
  const MethodInfo* get() {
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_FreeTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTexture});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_FreeTexture::*)(System::IntPtr, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_FreeTexture::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_FreeTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTexture, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_FreeTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRRenderModels::_FreeTexture::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_FreeTexture::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_FreeTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
