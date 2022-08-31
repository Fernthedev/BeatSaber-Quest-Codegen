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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: ContentInfo
  class ContentInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: SignedData
  class SignedData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SignedData*, "Org.BouncyCastle.Asn1.Pkcs", "SignedData");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.SignedData
  // [TokenAttribute] Offset: FFFFFFFF
  class SignedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Set digestAlgorithms
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Pkcs.ContentInfo contentInfo
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo* contentInfo;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Set certificates
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Asn1::Asn1Set* certificates;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Set crls
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Asn1::Asn1Set* crls;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Set signerInfos
    // Size: 0x8
    // Offset: 0x38
    ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger version
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerInteger*& dyn_version();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Set digestAlgorithms
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Set*& dyn_digestAlgorithms();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Pkcs.ContentInfo contentInfo
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Pkcs::ContentInfo*& dyn_contentInfo();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Set certificates
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Set*& dyn_certificates();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Set crls
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Set*& dyn_crls();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Set signerInfos
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::Asn1Set*& dyn_signerInfos();
    // public Org.BouncyCastle.Asn1.Asn1Set get_Certificates()
    // Offset: 0x1CC7814
    ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates();
    // public Org.BouncyCastle.Asn1.Asn1Set get_Crls()
    // Offset: 0x1CC781C
    ::Org::BouncyCastle::Asn1::Asn1Set* get_Crls();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1CC7288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::SignedData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignedData*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.SignedData GetInstance(System.Object obj)
    // Offset: 0x1CC71E4
    static ::Org::BouncyCastle::Asn1::Pkcs::SignedData* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1CC7824
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.SignedData
  #pragma pack(pop)
  static check_size<sizeof(SignedData), 56 + sizeof(::Org::BouncyCastle::Asn1::Asn1Set*)> __Org_BouncyCastle_Asn1_Pkcs_SignedDataSizeCheck;
  static_assert(sizeof(SignedData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::SignedData::get_Certificates
// Il2CppName: get_Certificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (Org::BouncyCastle::Asn1::Pkcs::SignedData::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignedData::get_Certificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::SignedData*), "get_Certificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::SignedData::get_Crls
// Il2CppName: get_Crls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (Org::BouncyCastle::Asn1::Pkcs::SignedData::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignedData::get_Crls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::SignedData*), "get_Crls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::SignedData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::SignedData::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::SignedData* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::SignedData::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::SignedData*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::SignedData::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::SignedData::*)()>(&Org::BouncyCastle::Asn1::Pkcs::SignedData::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::SignedData*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
