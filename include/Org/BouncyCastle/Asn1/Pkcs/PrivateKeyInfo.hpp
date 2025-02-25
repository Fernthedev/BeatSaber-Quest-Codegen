// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PrivateKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString privateKey
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::Asn1OctetString* privateKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Set attributes
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::Asn1Set* attributes;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString publicKey
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::DerBitString* publicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: PrivateKeyInfo
    PrivateKeyInfo(Org::BouncyCastle::Asn1::DerInteger* version_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm_ = {}, Org::BouncyCastle::Asn1::Asn1OctetString* privateKey_ = {}, Org::BouncyCastle::Asn1::Asn1Set* attributes_ = {}, Org::BouncyCastle::Asn1::DerBitString* publicKey_ = {}) noexcept : version{version_}, privateKeyAlgorithm{privateKeyAlgorithm_}, privateKey{privateKey_}, attributes{attributes_}, publicKey{publicKey_} {}
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger version
    Org::BouncyCastle::Asn1::DerInteger*& dyn_version();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_privateKeyAlgorithm();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1OctetString privateKey
    Org::BouncyCastle::Asn1::Asn1OctetString*& dyn_privateKey();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Set attributes
    Org::BouncyCastle::Asn1::Asn1Set*& dyn_attributes();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerBitString publicKey
    Org::BouncyCastle::Asn1::DerBitString*& dyn_publicKey();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_PrivateKeyAlgorithm()
    // Offset: 0x17BAF34
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_PrivateKeyAlgorithm();
    // public Org.BouncyCastle.Asn1.Asn1OctetString get_PrivateKeyData()
    // Offset: 0x17BAF3C
    Org::BouncyCastle::Asn1::Asn1OctetString* get_PrivateKeyData();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm, Org.BouncyCastle.Asn1.Asn1Encodable privateKey)
    // Offset: 0x17BADE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivateKeyInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable* privateKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivateKeyInfo*, creationType>(privateKeyAlgorithm, privateKey)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm, Org.BouncyCastle.Asn1.Asn1Encodable privateKey, Org.BouncyCastle.Asn1.Asn1Set attributes, System.Byte[] publicKey)
    // Offset: 0x17BADEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivateKeyInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, Org::BouncyCastle::Asn1::Asn1Set* attributes, ::Array<uint8_t>* publicKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivateKeyInfo*, creationType>(privateKeyAlgorithm, privateKey, attributes, publicKey)));
    }
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x17BA9B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivateKeyInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivateKeyInfo*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo GetInstance(System.Object obj)
    // Offset: 0x17BA910
    static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* GetInstance(::Il2CppObject* obj);
    // static private System.Int32 GetVersionValue(Org.BouncyCastle.Asn1.DerInteger version)
    // Offset: 0x17BACBC
    static int GetVersionValue(Org::BouncyCastle::Asn1::DerInteger* version);
    // public Org.BouncyCastle.Asn1.Asn1Object ParsePrivateKey()
    // Offset: 0x17BAF44
    Org::BouncyCastle::Asn1::Asn1Object* ParsePrivateKey();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x17BAF70
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(PrivateKeyInfo), 48 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_Pkcs_PrivateKeyInfoSizeCheck;
  static_assert(sizeof(PrivateKeyInfo) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, "Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyAlgorithm
// Il2CppName: get_PrivateKeyAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*), "get_PrivateKeyAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyData
// Il2CppName: get_PrivateKeyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1OctetString* (Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::get_PrivateKeyData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*), "get_PrivateKeyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetVersionValue
// Il2CppName: GetVersionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Org::BouncyCastle::Asn1::DerInteger*)>(&Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::GetVersionValue)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*), "GetVersionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ParsePrivateKey
// Il2CppName: ParsePrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ParsePrivateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*), "ParsePrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
