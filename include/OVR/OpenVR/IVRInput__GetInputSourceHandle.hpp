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
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetInputSourceHandle
  // [UnmanagedFunctionPointerAttribute] Offset: DCE804
  class IVRInput::_GetInputSourceHandle : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetInputSourceHandle
    _GetInputSourceHandle() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE8CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetInputSourceHandle* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRInput::_GetInputSourceHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetInputSourceHandle*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.String pchInputSourcePath, ref System.UInt64 pHandle)
    // Offset: 0x1EE8CC0
    OVR::OpenVR::EVRInputError Invoke(::Il2CppString* pchInputSourcePath, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchInputSourcePath, ref System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE90B0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchInputSourcePath, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x1EE914C
    OVR::OpenVR::EVRInputError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetInputSourceHandle
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetInputSourceHandle*, "OVR.OpenVR", "IVRInput/_GetInputSourceHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetInputSourceHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetInputSourceHandle::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetInputSourceHandle::*)(::Il2CppString*, uint64_t&)>(&OVR::OpenVR::IVRInput::_GetInputSourceHandle::Invoke)> {
  const MethodInfo* get() {
    static auto* pchInputSourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetInputSourceHandle*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInputSourcePath, pHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetInputSourceHandle::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetInputSourceHandle::*)(::Il2CppString*, uint64_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetInputSourceHandle::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pchInputSourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetInputSourceHandle*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInputSourcePath, pHandle, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetInputSourceHandle::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetInputSourceHandle::*)(uint64_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetInputSourceHandle::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetInputSourceHandle*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pHandle, result});
  }
};
