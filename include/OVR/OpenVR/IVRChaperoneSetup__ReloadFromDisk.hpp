// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._ReloadFromDisk
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF3300
  class IVRChaperoneSetup::_ReloadFromDisk : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReloadFromDisk
    _ReloadFromDisk() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15CE99C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_ReloadFromDisk* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_ReloadFromDisk*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.EChaperoneConfigFile configFile)
    // Offset: 0x15C60D4
    void Invoke(OVR::OpenVR::EChaperoneConfigFile configFile);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EChaperoneConfigFile configFile, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15CE9AC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EChaperoneConfigFile configFile, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15CEA38
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/OVR.OpenVR._ReloadFromDisk
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk*, "OVR.OpenVR", "IVRChaperoneSetup/_ReloadFromDisk");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::*)(OVR::OpenVR::EChaperoneConfigFile)>(&OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::Invoke)> {
  static const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EChaperoneConfigFile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::*)(OVR::OpenVR::EChaperoneConfigFile, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* configFile = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EChaperoneConfigFile")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configFile, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_ReloadFromDisk*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
