// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: EncryptedPrivateKeyInfo
  class EncryptedPrivateKeyInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptedPrivateKeyInfo");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class EncryptedPrivateKeyInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString data
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::Asn1OctetString* data;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_algId();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1OctetString data
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1OctetString*& dyn_data();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_EncryptionAlgorithm()
    // Offset: 0x1CC2810
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithm();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1CC2590
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptedPrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptedPrivateKeyInfo*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo GetInstance(System.Object obj)
    // Offset: 0x1CC2690
    static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* GetInstance(::Il2CppObject* obj);
    // public System.Byte[] GetEncryptedData()
    // Offset: 0x1CC2818
    ::ArrayW<uint8_t> GetEncryptedData();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1CC2838
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(EncryptedPrivateKeyInfo), 24 + sizeof(::Org::BouncyCastle::Asn1::Asn1OctetString*)> __Org_BouncyCastle_Asn1_Pkcs_EncryptedPrivateKeyInfoSizeCheck;
  static_assert(sizeof(EncryptedPrivateKeyInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::get_EncryptionAlgorithm
// Il2CppName: get_EncryptionAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::get_EncryptionAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*), "get_EncryptionAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetEncryptedData
// Il2CppName: GetEncryptedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::GetEncryptedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*), "GetEncryptedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
