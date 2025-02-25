// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._GetStartingApplication
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF30E4
  class IVRApplications::_GetStartingApplication : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetStartingApplication
    _GetStartingApplication() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15CD258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetStartingApplication* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetStartingApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetStartingApplication*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen)
    // Offset: 0x15C169C
    OVR::OpenVR::EVRApplicationError Invoke(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pchAppKeyBuffer, System.UInt32 unAppKeyBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15CD268
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15CD304
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._GetStartingApplication
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetStartingApplication*, "OVR.OpenVR", "IVRApplications/_GetStartingApplication");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetStartingApplication::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetStartingApplication::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_GetStartingApplication::*)(System::Text::StringBuilder*, uint)>(&OVR::OpenVR::IVRApplications::_GetStartingApplication::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetStartingApplication*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKeyBuffer, unAppKeyBufferLen});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetStartingApplication::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRApplications::_GetStartingApplication::*)(System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_GetStartingApplication::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchAppKeyBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unAppKeyBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetStartingApplication*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchAppKeyBuffer, unAppKeyBufferLen, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_GetStartingApplication::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_GetStartingApplication::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_GetStartingApplication::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_GetStartingApplication*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
