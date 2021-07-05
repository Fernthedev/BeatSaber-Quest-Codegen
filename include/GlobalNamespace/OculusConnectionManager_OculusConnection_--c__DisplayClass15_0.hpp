// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusConnectionManager/OculusConnection
#include "GlobalNamespace/OculusConnectionManager_OculusConnection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PingResult
  class PingResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusConnectionManager/OculusConnection/<>c__DisplayClass15_0
  // [CompilerGeneratedAttribute] Offset: E12C38
  class OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public System.Action`2<OculusConnectionManager/OculusConnection,System.Single> onPingResult
    // Size: 0x8
    // Offset: 0x10
    System::Action_2<GlobalNamespace::OculusConnectionManager::OculusConnection*, float>* onPingResult;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::OculusConnectionManager::OculusConnection*, float>*) == 0x8);
    // public OculusConnectionManager/OculusConnection <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusConnectionManager::OculusConnection* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusConnectionManager::OculusConnection*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass15_0
    $$c__DisplayClass15_0(System::Action_2<GlobalNamespace::OculusConnectionManager::OculusConnection*, float>* onPingResult_ = {}, GlobalNamespace::OculusConnectionManager::OculusConnection* $$4__this_ = {}) noexcept : onPingResult{onPingResult_}, $$4__this{$$4__this_} {}
    // System.Void <Ping>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.PingResult> result)
    // Offset: 0x11E5484
    void $Ping$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::PingResult*>* result);
    // public System.Void .ctor()
    // Offset: 0x11E5280
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0*, creationType>()));
    }
  }; // OculusConnectionManager/OculusConnection/<>c__DisplayClass15_0
  #pragma pack(pop)
  static check_size<sizeof(OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0), 24 + sizeof(GlobalNamespace::OculusConnectionManager::OculusConnection*)> __GlobalNamespace_OculusConnectionManager_OculusConnection_$$c__DisplayClass15_0SizeCheck;
  static_assert(sizeof(OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0*, "", "OculusConnectionManager/OculusConnection/<>c__DisplayClass15_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0::$Ping$b__0
// Il2CppName: <Ping>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::PingResult*>*)>(&GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0::$Ping$b__0)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PingResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0*), "<Ping>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
