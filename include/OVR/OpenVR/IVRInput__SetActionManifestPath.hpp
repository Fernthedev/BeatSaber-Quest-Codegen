// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
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
  // Autogenerated type: OVR.OpenVR.IVRInput/OVR.OpenVR._SetActionManifestPath
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DEF178
  class IVRInput::_SetActionManifestPath : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetActionManifestPath
    _SetActionManifestPath() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F5E090
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_SetActionManifestPath* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_SetActionManifestPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_SetActionManifestPath*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchActionManifestPath)
    // Offset: 0x1F5E0A0
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchActionManifestPath);
    // public System.IAsyncResult BeginInvoke(System.String pchActionManifestPath, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F5E43C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchActionManifestPath, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F5E460
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/OVR.OpenVR._SetActionManifestPath
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_SetActionManifestPath*, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_SetActionManifestPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_SetActionManifestPath::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_SetActionManifestPath::*)(::Il2CppString*)>(&OVR::OpenVR::IVRInput::_SetActionManifestPath::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchActionManifestPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_SetActionManifestPath*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionManifestPath});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_SetActionManifestPath::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_SetActionManifestPath::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_SetActionManifestPath::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchActionManifestPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_SetActionManifestPath*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionManifestPath, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_SetActionManifestPath::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_SetActionManifestPath::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_SetActionManifestPath::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_SetActionManifestPath*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
