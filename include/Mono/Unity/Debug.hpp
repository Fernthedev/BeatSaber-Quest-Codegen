// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: AlertDescription
  struct AlertDescription;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Forward declaring type: Debug
  class Debug;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::Debug);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::Debug*, "Mono.Unity", "Debug");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.Debug
  // [TokenAttribute] Offset: FFFFFFFF
  class Debug : public ::Il2CppObject {
    public:
    // static public System.Void CheckAndThrow(Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate errorState, System.String context, Mono.Security.Interface.AlertDescription defaultAlert)
    // Offset: 0x1AE848C
    static void CheckAndThrow(::Mono::Unity::UnityTls::unitytls_errorstate errorState, ::StringW context, ::Mono::Security::Interface::AlertDescription defaultAlert);
    // static public System.Void CheckAndThrow(Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate errorState, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result verifyResult, System.String context, Mono.Security.Interface.AlertDescription defaultAlert)
    // Offset: 0x1AE8564
    static void CheckAndThrow(::Mono::Unity::UnityTls::unitytls_errorstate errorState, ::Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult, ::StringW context, ::Mono::Security::Interface::AlertDescription defaultAlert);
  }; // Mono.Unity.Debug
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::Debug::CheckAndThrow
// Il2CppName: CheckAndThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Unity::UnityTls::unitytls_errorstate, ::StringW, ::Mono::Security::Interface::AlertDescription)>(&Mono::Unity::Debug::CheckAndThrow)> {
  static const MethodInfo* get() {
    static auto* errorState = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultAlert = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "AlertDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::Debug*), "CheckAndThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorState, context, defaultAlert});
  }
};
// Writing MetadataGetter for method: Mono::Unity::Debug::CheckAndThrow
// Il2CppName: CheckAndThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Unity::UnityTls::unitytls_errorstate, ::Mono::Unity::UnityTls::unitytls_x509verify_result, ::StringW, ::Mono::Security::Interface::AlertDescription)>(&Mono::Unity::Debug::CheckAndThrow)> {
  static const MethodInfo* get() {
    static auto* errorState = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate")->byval_arg;
    static auto* verifyResult = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_result")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultAlert = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "AlertDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::Debug*), "CheckAndThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorState, verifyResult, context, defaultAlert});
  }
};
