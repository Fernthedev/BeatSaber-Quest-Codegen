// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.Private.CallbackHelpers
#include "Mono/Net/Security/Private/CallbackHelpers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoRemoteCertificateValidationCallback
  class MonoRemoteCertificateValidationCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Completed forward declares
// Type namespace: Mono.Net.Security.Private
namespace Mono::Net::Security::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.Private.CallbackHelpers/Mono.Net.Security.Private.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CallbackHelpers::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public Mono.Security.Interface.MonoRemoteCertificateValidationCallback callback
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback_ = {}) noexcept : callback{callback_} {}
    // Creating conversion operator: operator Mono::Security::Interface::MonoRemoteCertificateValidationCallback*
    constexpr operator Mono::Security::Interface::MonoRemoteCertificateValidationCallback*() const noexcept {
      return callback;
    }
    // Get instance field reference: public Mono.Security.Interface.MonoRemoteCertificateValidationCallback callback
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback*& dyn_callback();
    // System.Boolean <MonoToPublic>b__0(System.Object t, System.Security.Cryptography.X509Certificates.X509Certificate c, System.Security.Cryptography.X509Certificates.X509Chain ch, System.Net.Security.SslPolicyErrors e)
    // Offset: 0x15F62F8
    bool $MonoToPublic$b__0(::Il2CppObject* t, System::Security::Cryptography::X509Certificates::X509Certificate* c, System::Security::Cryptography::X509Certificates::X509Chain* ch, System::Net::Security::SslPolicyErrors e);
    // public System.Void .ctor()
    // Offset: 0x15F62CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHelpers::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHelpers::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // Mono.Net.Security.Private.CallbackHelpers/Mono.Net.Security.Private.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(CallbackHelpers::$$c__DisplayClass5_0), 16 + sizeof(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)> __Mono_Net_Security_Private_CallbackHelpers_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(CallbackHelpers::$$c__DisplayClass5_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass5_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0::$MonoToPublic$b__0
// Il2CppName: <MonoToPublic>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0::*)(::Il2CppObject*, System::Security::Cryptography::X509Certificates::X509Certificate*, System::Security::Cryptography::X509Certificates::X509Chain*, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0::$MonoToPublic$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0*), "<MonoToPublic>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, c, ch, e});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
