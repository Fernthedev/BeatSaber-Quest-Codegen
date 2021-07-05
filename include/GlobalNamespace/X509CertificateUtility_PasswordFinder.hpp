// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: X509CertificateUtility
#include "GlobalNamespace/X509CertificateUtility.hpp"
// Including type: Org.BouncyCastle.OpenSsl.IPasswordFinder
#include "Org/BouncyCastle/OpenSsl/IPasswordFinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility/PasswordFinder
  class X509CertificateUtility::PasswordFinder : public ::Il2CppObject/*, public Org::BouncyCastle::OpenSsl::IPasswordFinder*/ {
    public:
    // private readonly System.Char[] _password
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppChar>* password;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // Creating value type constructor for type: PasswordFinder
    PasswordFinder(::Array<::Il2CppChar>* password_ = {}) noexcept : password{password_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::OpenSsl::IPasswordFinder
    operator Org::BouncyCastle::OpenSsl::IPasswordFinder() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::OpenSsl::IPasswordFinder*>(this);
    }
    // Creating conversion operator: operator ::Array<::Il2CppChar>*
    constexpr operator ::Array<::Il2CppChar>*() const noexcept {
      return password;
    }
    // public System.Void .ctor(System.Byte[] password)
    // Offset: 0x237F378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::PasswordFinder* New_ctor(::Array<uint8_t>* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::X509CertificateUtility::PasswordFinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::PasswordFinder*, creationType>(password)));
    }
    // public System.Void .ctor(System.String password)
    // Offset: 0x237DE8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::PasswordFinder* New_ctor(::Il2CppString* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::X509CertificateUtility::PasswordFinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::PasswordFinder*, creationType>(password)));
    }
    // public System.Char[] GetPassword()
    // Offset: 0x237F440
    ::Array<::Il2CppChar>* GetPassword();
  }; // X509CertificateUtility/PasswordFinder
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateUtility::PasswordFinder), 16 + sizeof(::Array<::Il2CppChar>*)> __GlobalNamespace_X509CertificateUtility_PasswordFinderSizeCheck;
  static_assert(sizeof(X509CertificateUtility::PasswordFinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::X509CertificateUtility::PasswordFinder*, "", "X509CertificateUtility/PasswordFinder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::PasswordFinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::PasswordFinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::PasswordFinder::GetPassword
// Il2CppName: GetPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppChar>* (GlobalNamespace::X509CertificateUtility::PasswordFinder::*)()>(&GlobalNamespace::X509CertificateUtility::PasswordFinder::GetPassword)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::PasswordFinder*), "GetPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
