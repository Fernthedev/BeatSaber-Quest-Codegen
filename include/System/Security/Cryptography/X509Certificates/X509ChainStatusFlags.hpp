// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct X509ChainStatusFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: X509ChainStatusFlags
    constexpr X509ChainStatusFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NoError
    static constexpr const int NoError = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NoError
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_NoError();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NoError
    static void _set_NoError(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotTimeValid
    static constexpr const int NotTimeValid = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotTimeValid
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_NotTimeValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotTimeValid
    static void _set_NotTimeValid(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotTimeNested
    static constexpr const int NotTimeNested = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotTimeNested
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_NotTimeNested();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotTimeNested
    static void _set_NotTimeNested(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Revoked
    static constexpr const int Revoked = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Revoked
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_Revoked();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Revoked
    static void _set_Revoked(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotSignatureValid
    static constexpr const int NotSignatureValid = 8;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotSignatureValid
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_NotSignatureValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotSignatureValid
    static void _set_NotSignatureValid(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotValidForUsage
    static constexpr const int NotValidForUsage = 16;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotValidForUsage
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_NotValidForUsage();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NotValidForUsage
    static void _set_NotValidForUsage(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags UntrustedRoot
    static constexpr const int UntrustedRoot = 32;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags UntrustedRoot
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_UntrustedRoot();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags UntrustedRoot
    static void _set_UntrustedRoot(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags RevocationStatusUnknown
    static constexpr const int RevocationStatusUnknown = 64;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags RevocationStatusUnknown
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_RevocationStatusUnknown();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags RevocationStatusUnknown
    static void _set_RevocationStatusUnknown(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Cyclic
    static constexpr const int Cyclic = 128;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Cyclic
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_Cyclic();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags Cyclic
    static void _set_Cyclic(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidExtension
    static constexpr const int InvalidExtension = 256;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidExtension
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_InvalidExtension();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidExtension
    static void _set_InvalidExtension(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidPolicyConstraints
    static constexpr const int InvalidPolicyConstraints = 512;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidPolicyConstraints
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_InvalidPolicyConstraints();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidPolicyConstraints
    static void _set_InvalidPolicyConstraints(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidBasicConstraints
    static constexpr const int InvalidBasicConstraints = 1024;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidBasicConstraints
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_InvalidBasicConstraints();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidBasicConstraints
    static void _set_InvalidBasicConstraints(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidNameConstraints
    static constexpr const int InvalidNameConstraints = 2048;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidNameConstraints
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_InvalidNameConstraints();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags InvalidNameConstraints
    static void _set_InvalidNameConstraints(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotSupportedNameConstraint
    static constexpr const int HasNotSupportedNameConstraint = 4096;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotSupportedNameConstraint
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_HasNotSupportedNameConstraint();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotSupportedNameConstraint
    static void _set_HasNotSupportedNameConstraint(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotDefinedNameConstraint
    static constexpr const int HasNotDefinedNameConstraint = 8192;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotDefinedNameConstraint
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_HasNotDefinedNameConstraint();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotDefinedNameConstraint
    static void _set_HasNotDefinedNameConstraint(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotPermittedNameConstraint
    static constexpr const int HasNotPermittedNameConstraint = 16384;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotPermittedNameConstraint
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_HasNotPermittedNameConstraint();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotPermittedNameConstraint
    static void _set_HasNotPermittedNameConstraint(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasExcludedNameConstraint
    static constexpr const int HasExcludedNameConstraint = 32768;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasExcludedNameConstraint
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_HasExcludedNameConstraint();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasExcludedNameConstraint
    static void _set_HasExcludedNameConstraint(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags PartialChain
    static constexpr const int PartialChain = 65536;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags PartialChain
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_PartialChain();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags PartialChain
    static void _set_PartialChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotTimeValid
    static constexpr const int CtlNotTimeValid = 131072;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotTimeValid
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_CtlNotTimeValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotTimeValid
    static void _set_CtlNotTimeValid(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotSignatureValid
    static constexpr const int CtlNotSignatureValid = 262144;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotSignatureValid
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_CtlNotSignatureValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotSignatureValid
    static void _set_CtlNotSignatureValid(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotValidForUsage
    static constexpr const int CtlNotValidForUsage = 524288;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotValidForUsage
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_CtlNotValidForUsage();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CtlNotValidForUsage
    static void _set_CtlNotValidForUsage(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags OfflineRevocation
    static constexpr const int OfflineRevocation = 16777216;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags OfflineRevocation
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_OfflineRevocation();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags OfflineRevocation
    static void _set_OfflineRevocation(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NoIssuanceChainPolicy
    static constexpr const int NoIssuanceChainPolicy = 33554432;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NoIssuanceChainPolicy
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_NoIssuanceChainPolicy();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags NoIssuanceChainPolicy
    static void _set_NoIssuanceChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags ExplicitDistrust
    static constexpr const int ExplicitDistrust = 67108864;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags ExplicitDistrust
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_ExplicitDistrust();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags ExplicitDistrust
    static void _set_ExplicitDistrust(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotSupportedCriticalExtension
    static constexpr const int HasNotSupportedCriticalExtension = 134217728;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotSupportedCriticalExtension
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_HasNotSupportedCriticalExtension();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasNotSupportedCriticalExtension
    static void _set_HasNotSupportedCriticalExtension(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasWeakSignature
    static constexpr const int HasWeakSignature = 1048576;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasWeakSignature
    static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_HasWeakSignature();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags HasWeakSignature
    static void _set_HasWeakSignature(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
  #pragma pack(pop)
  static check_size<sizeof(X509ChainStatusFlags), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509ChainStatusFlagsSizeCheck;
  static_assert(sizeof(X509ChainStatusFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, "System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
