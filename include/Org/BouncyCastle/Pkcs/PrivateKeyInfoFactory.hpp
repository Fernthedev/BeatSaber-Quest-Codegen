// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: PrivateKeyInfo
  class PrivateKeyInfo;
  // Forward declaring type: EncryptedPrivateKeyInfo
  class EncryptedPrivateKeyInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Pkcs
namespace Org::BouncyCastle::Pkcs {
  // Forward declaring type: PrivateKeyInfoFactory
  class PrivateKeyInfoFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*, "Org.BouncyCastle.Pkcs", "PrivateKeyInfoFactory");
// Type namespace: Org.BouncyCastle.Pkcs
namespace Org::BouncyCastle::Pkcs {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Pkcs.PrivateKeyInfoFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class PrivateKeyInfoFactory : public ::Il2CppObject {
    public:
    // static public Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo CreatePrivateKeyInfo(System.Char[] passPhrase, Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo encInfo)
    // Offset: 0x17C6C34
    static ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::ArrayW<::Il2CppChar> passPhrase, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);
    // static public Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo CreatePrivateKeyInfo(System.Char[] passPhrase, System.Boolean wrongPkcs12Zero, Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo encInfo)
    // Offset: 0x17C6C40
    static ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::ArrayW<::Il2CppChar> passPhrase, bool wrongPkcs12Zero, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);
  }; // Org.BouncyCastle.Pkcs.PrivateKeyInfoFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo
// Il2CppName: CreatePrivateKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::ArrayW<::Il2CppChar>, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)>(&Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo)> {
  static const MethodInfo* get() {
    static auto* passPhrase = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* encInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.Pkcs", "EncryptedPrivateKeyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{passPhrase, encInfo});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo
// Il2CppName: CreatePrivateKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::ArrayW<::Il2CppChar>, bool, ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)>(&Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory::CreatePrivateKeyInfo)> {
  static const MethodInfo* get() {
    static auto* passPhrase = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* wrongPkcs12Zero = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* encInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.Pkcs", "EncryptedPrivateKeyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*), "CreatePrivateKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{passPhrase, wrongPkcs12Zero, encInfo});
  }
};
