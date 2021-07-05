// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
  class ECDomainParameters : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECCurve curve
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* curve;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // private readonly System.Byte[] seed
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* seed;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly Org.BouncyCastle.Math.EC.ECPoint g
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::ECPoint* g;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger n
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* n;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger h
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* h;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private Org.BouncyCastle.Math.BigInteger hInv
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Math::BigInteger* hInv;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: ECDomainParameters
    ECDomainParameters(Org::BouncyCastle::Math::EC::ECCurve* curve_ = {}, ::Array<uint8_t>* seed_ = {}, Org::BouncyCastle::Math::EC::ECPoint* g_ = {}, Org::BouncyCastle::Math::BigInteger* n_ = {}, Org::BouncyCastle::Math::BigInteger* h_ = {}, Org::BouncyCastle::Math::BigInteger* hInv_ = {}) noexcept : curve{curve_}, seed{seed_}, g{g_}, n{n_}, h{h_}, hInv{hInv_} {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X9.X9ECParameters x9)
    // Offset: 0x125A0BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECDomainParameters* New_ctor(Org::BouncyCastle::Asn1::X9::X9ECParameters* x9) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECDomainParameters*, creationType>(x9)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h)
    // Offset: 0x125A250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECDomainParameters* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECDomainParameters*, creationType>(curve, g, n, h)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h, System.Byte[] seed)
    // Offset: 0x125A110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECDomainParameters* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h, ::Array<uint8_t>* seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECDomainParameters*, creationType>(curve, g, n, h, seed)));
    }
    // public Org.BouncyCastle.Math.EC.ECCurve get_Curve()
    // Offset: 0x125A394
    Org::BouncyCastle::Math::EC::ECCurve* get_Curve();
    // public Org.BouncyCastle.Math.EC.ECPoint get_G()
    // Offset: 0x125A39C
    Org::BouncyCastle::Math::EC::ECPoint* get_G();
    // public Org.BouncyCastle.Math.BigInteger get_N()
    // Offset: 0x125A3A4
    Org::BouncyCastle::Math::BigInteger* get_N();
    // public Org.BouncyCastle.Math.BigInteger get_H()
    // Offset: 0x125A3AC
    Org::BouncyCastle::Math::BigInteger* get_H();
    // public Org.BouncyCastle.Math.BigInteger get_HInv()
    // Offset: 0x125A3B4
    Org::BouncyCastle::Math::BigInteger* get_HInv();
    // public System.Byte[] GetSeed()
    // Offset: 0x125A5A4
    ::Array<uint8_t>* GetSeed();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters other)
    // Offset: 0x125A6C8
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* other);
    // public Org.BouncyCastle.Math.BigInteger ValidatePrivateScalar(Org.BouncyCastle.Math.BigInteger d)
    // Offset: 0x125A7D4
    Org::BouncyCastle::Math::BigInteger* ValidatePrivateScalar(Org::BouncyCastle::Math::BigInteger* d);
    // static Org.BouncyCastle.Math.EC.ECPoint ValidatePublicPoint(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.ECPoint q)
    // Offset: 0x125A258
    static Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::ECPoint* q);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x125A610
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x125A754
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
  #pragma pack(pop)
  static check_size<sizeof(ECDomainParameters), 56 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_ECDomainParametersSizeCheck;
  static_assert(sizeof(ECDomainParameters) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_Curve
// Il2CppName: get_Curve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_Curve)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "get_Curve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_G)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_N
// Il2CppName: get_N
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_N)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "get_N", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_H
// Il2CppName: get_H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_H)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "get_H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_HInv
// Il2CppName: get_HInv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_HInv)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "get_HInv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetSeed
// Il2CppName: GetSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetSeed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "GetSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePrivateScalar
// Il2CppName: ValidatePrivateScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePrivateScalar)> {
  const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "ValidatePrivateScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePublicPoint
// Il2CppName: ValidatePublicPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::ECCurve*, Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePublicPoint)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "ValidatePublicPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, q});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
