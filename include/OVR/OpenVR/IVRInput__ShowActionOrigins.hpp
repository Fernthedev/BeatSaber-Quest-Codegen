// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: OVR.OpenVR.IVRInput/_ShowActionOrigins
  // [UnmanagedFunctionPointerAttribute] Offset: DCE908
  class IVRInput::_ShowActionOrigins : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShowActionOrigins
    _ShowActionOrigins() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EEAE04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_ShowActionOrigins* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_ShowActionOrigins::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_ShowActionOrigins*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 actionSetHandle, System.UInt64 ulActionHandle)
    // Offset: 0x1EEAE14
    OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt64 actionSetHandle, System.UInt64 ulActionHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EEB098
    System::IAsyncResult* BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EEB138
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_ShowActionOrigins
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_ShowActionOrigins*, "OVR.OpenVR", "IVRInput/_ShowActionOrigins");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowActionOrigins::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowActionOrigins::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_ShowActionOrigins::*)(uint64_t, uint64_t)>(&OVR::OpenVR::IVRInput::_ShowActionOrigins::Invoke)> {
  const MethodInfo* get() {
    static auto* actionSetHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulActionHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_ShowActionOrigins*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actionSetHandle, ulActionHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowActionOrigins::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_ShowActionOrigins::*)(uint64_t, uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_ShowActionOrigins::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* actionSetHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulActionHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_ShowActionOrigins*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actionSetHandle, ulActionHandle, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_ShowActionOrigins::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_ShowActionOrigins::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_ShowActionOrigins::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_ShowActionOrigins*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
