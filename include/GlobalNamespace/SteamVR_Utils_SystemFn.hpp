// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
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
  // Forward declaring type: CVRSystem
  class CVRSystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Utils/SystemFn
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Utils::SystemFn : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SystemFn
    SystemFn() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1701D04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Utils::SystemFn* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Utils::SystemFn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Utils::SystemFn*, creationType>(object, method)));
    }
    // public System.Object Invoke(Valve.VR.CVRSystem system, params System.Object[] args)
    // Offset: 0x16FF028
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object Invoke(Valve.VR.CVRSystem system, params System.Object[] args)
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object Invoke(Valve.VR.CVRSystem system, params System.Object[] args)
    template<class ...TParams>
    ::Il2CppObject* Invoke(Valve::VR::CVRSystem* system, TParams&&... args) {
      return Invoke(system, {args...});
    }
    // public System.IAsyncResult BeginInvoke(Valve.VR.CVRSystem system, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1701D14
    System::IAsyncResult* BeginInvoke(Valve::VR::CVRSystem* system, ::Array<::Il2CppObject*>* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x1701D44
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // SteamVR_Utils/SystemFn
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Utils::SystemFn*, "", "SteamVR_Utils/SystemFn");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_Utils::SystemFn::*)(Valve::VR::CVRSystem*, ::Array<::Il2CppObject*>*)>(&GlobalNamespace::SteamVR_Utils::SystemFn::Invoke)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("Valve.VR", "CVRSystem")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::SystemFn*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::SteamVR_Utils::SystemFn::*)(Valve::VR::CVRSystem*, ::Array<::Il2CppObject*>*, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::SteamVR_Utils::SystemFn::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("Valve.VR", "CVRSystem")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::SystemFn*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, args, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Utils::SystemFn::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_Utils::SystemFn::*)(System::IAsyncResult*)>(&GlobalNamespace::SteamVR_Utils::SystemFn::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Utils::SystemFn*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
