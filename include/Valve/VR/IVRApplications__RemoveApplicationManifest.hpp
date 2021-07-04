// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/_RemoveApplicationManifest
  // [UnmanagedFunctionPointerAttribute] Offset: DD36F4
  class IVRApplications::_RemoveApplicationManifest : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _RemoveApplicationManifest
    _RemoveApplicationManifest() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D8F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_RemoveApplicationManifest* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_RemoveApplicationManifest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_RemoveApplicationManifest*, creationType>(object, method)));
    }
    // public Valve.VR.EVRApplicationError Invoke(System.String pchApplicationManifestFullPath)
    // Offset: 0x16CA858
    Valve::VR::EVRApplicationError Invoke(::Il2CppString* pchApplicationManifestFullPath);
    // public System.IAsyncResult BeginInvoke(System.String pchApplicationManifestFullPath, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D8F24
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchApplicationManifestFullPath, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x16D8F48
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_RemoveApplicationManifest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_RemoveApplicationManifest*, "Valve.VR", "IVRApplications/_RemoveApplicationManifest");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_RemoveApplicationManifest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_RemoveApplicationManifest::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_RemoveApplicationManifest::*)(::Il2CppString*)>(&Valve::VR::IVRApplications::_RemoveApplicationManifest::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_RemoveApplicationManifest*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_RemoveApplicationManifest::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRApplications::_RemoveApplicationManifest::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_RemoveApplicationManifest::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_RemoveApplicationManifest*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_RemoveApplicationManifest::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRApplicationError (Valve::VR::IVRApplications::_RemoveApplicationManifest::*)(System::IAsyncResult*)>(&Valve::VR::IVRApplications::_RemoveApplicationManifest::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_RemoveApplicationManifest*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
