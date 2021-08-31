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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SubjectPublicKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString keyData
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerBitString* keyData;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: SubjectPublicKeyInfo
    SubjectPublicKeyInfo(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID_ = {}, Org::BouncyCastle::Asn1::DerBitString* keyData_ = {}) noexcept : algID{algID_}, keyData{keyData_} {}
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_algID();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerBitString keyData
    Org::BouncyCastle::Asn1::DerBitString*& dyn_keyData();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_AlgorithmID()
    // Offset: 0x19FCED4
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmID();
    // public Org.BouncyCastle.Asn1.DerBitString get_PublicKeyData()
    // Offset: 0x19FCF08
    Org::BouncyCastle::Asn1::DerBitString* get_PublicKeyData();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID, System.Byte[] publicKey)
    // Offset: 0x19FCE54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubjectPublicKeyInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Array<uint8_t>* publicKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubjectPublicKeyInfo*, creationType>(algID, publicKey)));
    }
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19FCCE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubjectPublicKeyInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubjectPublicKeyInfo*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo GetInstance(System.Object obj)
    // Offset: 0x19FCC44
    static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetInstance(::Il2CppObject* obj);
    // public Org.BouncyCastle.Asn1.Asn1Object ParsePublicKey()
    // Offset: 0x19FCEDC
    Org::BouncyCastle::Asn1::Asn1Object* ParsePublicKey();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19FCF10
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(SubjectPublicKeyInfo), 24 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_SubjectPublicKeyInfoSizeCheck;
  static_assert(sizeof(SubjectPublicKeyInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, "Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::get_AlgorithmID
// Il2CppName: get_AlgorithmID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::*)()>(&Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::get_AlgorithmID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*), "get_AlgorithmID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::get_PublicKeyData
// Il2CppName: get_PublicKeyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerBitString* (Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::*)()>(&Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::get_PublicKeyData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*), "get_PublicKeyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::ParsePublicKey
// Il2CppName: ParsePublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::*)()>(&Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::ParsePublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*), "ParsePublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::*)()>(&Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
