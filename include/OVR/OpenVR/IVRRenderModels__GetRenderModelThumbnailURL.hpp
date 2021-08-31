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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetRenderModelThumbnailURL
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEEF34
  class IVRRenderModels::_GetRenderModelThumbnailURL : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRenderModelThumbnailURL
    _GetRenderModelThumbnailURL() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20EC39C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetRenderModelThumbnailURL* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetRenderModelThumbnailURL*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x20EC3AC
    uint Invoke(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref OVR.OpenVR.EVRRenderModelError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20EC7EC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVRRenderModelError peError, System.IAsyncResult result)
    // Offset: 0x20EC8B4
    uint EndInvoke(ByRef<OVR::OpenVR::EVRRenderModelError> peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetRenderModelThumbnailURL
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelThumbnailURL");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::*)(::Il2CppString*, System::Text::StringBuilder*, uint, ByRef<OVR::OpenVR::EVRRenderModelError>)>(&OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchThumbnailURL = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unThumbnailURLLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRRenderModelError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::*)(::Il2CppString*, System::Text::StringBuilder*, uint, ByRef<OVR::OpenVR::EVRRenderModelError>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchThumbnailURL = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unThumbnailURLLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRRenderModelError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::*)(ByRef<OVR::OpenVR::EVRRenderModelError>, System::IAsyncResult*)>(&OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRRenderModelError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRRenderModels::_GetRenderModelThumbnailURL*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};
