// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: X509CertificateUtility
#include "GlobalNamespace/X509CertificateUtility.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class X509CertificateUtility::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly X509CertificateUtility/<>c <>9
    static GlobalNamespace::X509CertificateUtility::$$c* _get_$$9();
    // Set static field: static public readonly X509CertificateUtility/<>c <>9
    static void _set_$$9(GlobalNamespace::X509CertificateUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__6_0
    static System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Il2CppString*>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Il2CppString*>* value);
    // Get static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__7_0
    static System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Il2CppString*>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x17025E4
    static void _cctor();
    // System.String <ValidateCertificateChainUnity>b__6_0(System.Security.Cryptography.X509Certificates.X509ChainStatus s)
    // Offset: 0x1702650
    ::Il2CppString* $ValidateCertificateChainUnity$b__6_0(System::Security::Cryptography::X509Certificates::X509ChainStatus s);
    // System.String <ValidateCertificateChainDotNet>b__7_0(System.Security.Cryptography.X509Certificates.X509ChainStatus s)
    // Offset: 0x17026D8
    ::Il2CppString* $ValidateCertificateChainDotNet$b__7_0(System::Security::Cryptography::X509Certificates::X509ChainStatus s);
    // public System.Void .ctor()
    // Offset: 0x1702648
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::X509CertificateUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::$$c*, creationType>()));
    }
  }; // X509CertificateUtility/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::X509CertificateUtility::$$c*, "", "X509CertificateUtility/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::X509CertificateUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainUnity$b__6_0
// Il2CppName: <ValidateCertificateChainUnity>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::X509CertificateUtility::$$c::*)(System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainUnity$b__6_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$$c*), "<ValidateCertificateChainUnity>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainDotNet$b__7_0
// Il2CppName: <ValidateCertificateChainDotNet>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::X509CertificateUtility::$$c::*)(System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainDotNet$b__7_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$$c*), "<ValidateCertificateChainDotNet>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
