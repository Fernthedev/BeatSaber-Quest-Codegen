// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure
  class RsaPrivateKeyStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger modulus
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* modulus;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger publicExponent
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* publicExponent;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger privateExponent
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* privateExponent;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger prime1
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* prime1;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger prime2
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* prime2;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger exponent1
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Math::BigInteger* exponent1;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger exponent2
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Math::BigInteger* exponent2;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger coefficient
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Math::BigInteger* coefficient;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: RsaPrivateKeyStructure
    RsaPrivateKeyStructure(Org::BouncyCastle::Math::BigInteger* modulus_ = {}, Org::BouncyCastle::Math::BigInteger* publicExponent_ = {}, Org::BouncyCastle::Math::BigInteger* privateExponent_ = {}, Org::BouncyCastle::Math::BigInteger* prime1_ = {}, Org::BouncyCastle::Math::BigInteger* prime2_ = {}, Org::BouncyCastle::Math::BigInteger* exponent1_ = {}, Org::BouncyCastle::Math::BigInteger* exponent2_ = {}, Org::BouncyCastle::Math::BigInteger* coefficient_ = {}) noexcept : modulus{modulus_}, publicExponent{publicExponent_}, privateExponent{privateExponent_}, prime1{prime1_}, prime2{prime2_}, exponent1{exponent1_}, exponent2{exponent2_}, coefficient{coefficient_} {}
    // static public Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure GetInstance(System.Object obj)
    // Offset: 0x17447D4
    static Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1744878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaPrivateKeyStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaPrivateKeyStructure*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_Modulus()
    // Offset: 0x1744BFC
    Org::BouncyCastle::Math::BigInteger* get_Modulus();
    // public Org.BouncyCastle.Math.BigInteger get_PublicExponent()
    // Offset: 0x1744C04
    Org::BouncyCastle::Math::BigInteger* get_PublicExponent();
    // public Org.BouncyCastle.Math.BigInteger get_PrivateExponent()
    // Offset: 0x1744C0C
    Org::BouncyCastle::Math::BigInteger* get_PrivateExponent();
    // public Org.BouncyCastle.Math.BigInteger get_Prime1()
    // Offset: 0x1744C14
    Org::BouncyCastle::Math::BigInteger* get_Prime1();
    // public Org.BouncyCastle.Math.BigInteger get_Prime2()
    // Offset: 0x1744C1C
    Org::BouncyCastle::Math::BigInteger* get_Prime2();
    // public Org.BouncyCastle.Math.BigInteger get_Exponent1()
    // Offset: 0x1744C24
    Org::BouncyCastle::Math::BigInteger* get_Exponent1();
    // public Org.BouncyCastle.Math.BigInteger get_Exponent2()
    // Offset: 0x1744C2C
    Org::BouncyCastle::Math::BigInteger* get_Exponent2();
    // public Org.BouncyCastle.Math.BigInteger get_Coefficient()
    // Offset: 0x1744C34
    Org::BouncyCastle::Math::BigInteger* get_Coefficient();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1744C3C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure
  #pragma pack(pop)
  static check_size<sizeof(RsaPrivateKeyStructure), 72 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Asn1_Pkcs_RsaPrivateKeyStructureSizeCheck;
  static_assert(sizeof(RsaPrivateKeyStructure) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*, "Org.BouncyCastle.Asn1.Pkcs", "RsaPrivateKeyStructure");
// Writing includes for template specializations
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::GetInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Modulus
// Il2CppName: get_Modulus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Modulus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_Modulus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_PublicExponent
// Il2CppName: get_PublicExponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_PublicExponent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_PublicExponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_PrivateExponent
// Il2CppName: get_PrivateExponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_PrivateExponent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_PrivateExponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Prime1
// Il2CppName: get_Prime1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Prime1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_Prime1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Prime2
// Il2CppName: get_Prime2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Prime2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_Prime2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Exponent1
// Il2CppName: get_Exponent1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Exponent1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_Exponent1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Exponent2
// Il2CppName: get_Exponent2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Exponent2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_Exponent2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Coefficient
// Il2CppName: get_Coefficient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::get_Coefficient)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "get_Coefficient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::*)()>(&Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure::ToAsn1Object)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
