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
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.AttributePkcs
  // [TokenAttribute] Offset: FFFFFFFF
  class AttributePkcs : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier attrType
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1Set attrValues
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Set* attrValues;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // Creating value type constructor for type: AttributePkcs
    AttributePkcs(Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType_ = {}, Org::BouncyCastle::Asn1::Asn1Set* attrValues_ = {}) noexcept : attrType{attrType_}, attrValues{attrValues_} {}
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier attrType
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_attrType();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1Set attrValues
    Org::BouncyCastle::Asn1::Asn1Set*& dyn_attrValues();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_AttrType()
    // Offset: 0x17B653C
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AttrType();
    // public Org.BouncyCastle.Asn1.Asn1Set get_AttrValues()
    // Offset: 0x17B6544
    Org::BouncyCastle::Asn1::Asn1Set* get_AttrValues();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x17B6410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributePkcs* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributePkcs*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.AttributePkcs GetInstance(System.Object obj)
    // Offset: 0x17B62C4
    static Org::BouncyCastle::Asn1::Pkcs::AttributePkcs* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x17B654C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.AttributePkcs
  #pragma pack(pop)
  static check_size<sizeof(AttributePkcs), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1Set*)> __Org_BouncyCastle_Asn1_Pkcs_AttributePkcsSizeCheck;
  static_assert(sizeof(AttributePkcs) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs*, "Org.BouncyCastle.Asn1.Pkcs", "AttributePkcs");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::get_AttrType
// Il2CppName: get_AttrType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::*)()>(&Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::get_AttrType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs*), "get_AttrType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::get_AttrValues
// Il2CppName: get_AttrValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set* (Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::*)()>(&Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::get_AttrValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs*), "get_AttrValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::AttributePkcs* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::*)()>(&Org::BouncyCastle::Asn1::Pkcs::AttributePkcs::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::AttributePkcs*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
