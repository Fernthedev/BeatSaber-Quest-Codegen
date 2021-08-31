// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
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
  // Autogenerated type: Valve.VR.IVRSettings/Valve.VR._Sync
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF4094
  class IVRSettings::_Sync : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _Sync
    _Sync() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D4A9A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSettings::_Sync* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSettings::_Sync::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSettings::_Sync*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Boolean bForce, ref Valve.VR.EVRSettingsError peError)
    // Offset: 0x1D4A9B8
    bool Invoke(bool bForce, ByRef<Valve::VR::EVRSettingsError> peError);
    // public System.IAsyncResult BeginInvoke(System.Boolean bForce, ref Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D4AC50
    System::IAsyncResult* BeginInvoke(bool bForce, ByRef<Valve::VR::EVRSettingsError> peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x1D4AD08
    bool EndInvoke(ByRef<Valve::VR::EVRSettingsError> peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/Valve.VR._Sync
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_Sync*, "Valve.VR", "IVRSettings/_Sync");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_Sync::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_Sync::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSettings::_Sync::*)(bool, ByRef<Valve::VR::EVRSettingsError>)>(&Valve::VR::IVRSettings::_Sync::Invoke)> {
  static const MethodInfo* get() {
    static auto* bForce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_Sync*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bForce, peError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_Sync::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSettings::_Sync::*)(bool, ByRef<Valve::VR::EVRSettingsError>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSettings::_Sync::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bForce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_Sync*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bForce, peError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSettings::_Sync::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSettings::_Sync::*)(ByRef<Valve::VR::EVRSettingsError>, System::IAsyncResult*)>(&Valve::VR::IVRSettings::_Sync::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRSettingsError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSettings::_Sync*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peError, result});
  }
};
