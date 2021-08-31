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
  // Forward declaring type: MonoLocalCertificateSelectionCallback
  class MonoLocalCertificateSelectionCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
// Type namespace: Mono.Net.Security.Private
namespace Mono::Net::Security::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.Private.CallbackHelpers/Mono.Net.Security.Private.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CallbackHelpers::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public Mono.Security.Interface.MonoLocalCertificateSelectionCallback callback
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback_ = {}) noexcept : callback{callback_} {}
    // Creating conversion operator: operator Mono::Security::Interface::MonoLocalCertificateSelectionCallback*
    constexpr operator Mono::Security::Interface::MonoLocalCertificateSelectionCallback*() const noexcept {
      return callback;
    }
    // Get instance field reference: public Mono.Security.Interface.MonoLocalCertificateSelectionCallback callback
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& dyn_callback();
    // System.Security.Cryptography.X509Certificates.X509Certificate <MonoToInternal>b__0(System.String t, System.Security.Cryptography.X509Certificates.X509CertificateCollection lc, System.Security.Cryptography.X509Certificates.X509Certificate rc, System.String[] ai)
    // Offset: 0x15ECAE4
    System::Security::Cryptography::X509Certificates::X509Certificate* $MonoToInternal$b__0(::Il2CppString* t, System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::Array<::Il2CppString*>* ai);
    // public System.Void .ctor()
    // Offset: 0x15ECAA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHelpers::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHelpers::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // Mono.Net.Security.Private.CallbackHelpers/Mono.Net.Security.Private.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(CallbackHelpers::$$c__DisplayClass8_0), 16 + sizeof(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)> __Mono_Net_Security_Private_CallbackHelpers_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(CallbackHelpers::$$c__DisplayClass8_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass8_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0::$MonoToInternal$b__0
// Il2CppName: <MonoToInternal>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0::*)(::Il2CppString*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Security::Cryptography::X509Certificates::X509Certificate*, ::Array<::Il2CppString*>*)>(&Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0::$MonoToInternal$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lc = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* rc = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* ai = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0*), "<MonoToInternal>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, lc, rc, ai});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
