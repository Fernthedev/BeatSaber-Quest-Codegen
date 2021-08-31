// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
  // Forward declaring type: IPreCompCallback
  class IPreCompCallback;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECCurve
  // [TokenAttribute] Offset: FFFFFFFF
  class ECCurve : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::ECCurve::Config
    class Config;
    // Nested type: Org::BouncyCastle::Math::EC::ECCurve::DefaultLookupTable
    class DefaultLookupTable;
    // protected readonly Org.BouncyCastle.Math.Field.IFiniteField m_field
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::Field::IFiniteField* m_field;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::Field::IFiniteField*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement m_a
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECFieldElement* m_a;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement m_b
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::ECFieldElement* m_b;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    // protected Org.BouncyCastle.Math.BigInteger m_order
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* m_order;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected Org.BouncyCastle.Math.BigInteger m_cofactor
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* m_cofactor;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected System.Int32 m_coord
    // Size: 0x4
    // Offset: 0x38
    int m_coord;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_coord and: m_endomorphism
    char __padding5[0x4] = {};
    // protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier m_multiplier
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*) == 0x8);
    // Creating value type constructor for type: ECCurve
    ECCurve(Org::BouncyCastle::Math::Field::IFiniteField* m_field_ = {}, Org::BouncyCastle::Math::EC::ECFieldElement* m_a_ = {}, Org::BouncyCastle::Math::EC::ECFieldElement* m_b_ = {}, Org::BouncyCastle::Math::BigInteger* m_order_ = {}, Org::BouncyCastle::Math::BigInteger* m_cofactor_ = {}, int m_coord_ = {}, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism_ = {}, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* m_multiplier_ = {}) noexcept : m_field{m_field_}, m_a{m_a_}, m_b{m_b_}, m_order{m_order_}, m_cofactor{m_cofactor_}, m_coord{m_coord_}, m_endomorphism{m_endomorphism_}, m_multiplier{m_multiplier_} {}
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.Field.IFiniteField m_field
    Org::BouncyCastle::Math::Field::IFiniteField*& dyn_m_field();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECFieldElement m_a
    Org::BouncyCastle::Math::EC::ECFieldElement*& dyn_m_a();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.ECFieldElement m_b
    Org::BouncyCastle::Math::EC::ECFieldElement*& dyn_m_b();
    // Get instance field reference: protected Org.BouncyCastle.Math.BigInteger m_order
    Org::BouncyCastle::Math::BigInteger*& dyn_m_order();
    // Get instance field reference: protected Org.BouncyCastle.Math.BigInteger m_cofactor
    Org::BouncyCastle::Math::BigInteger*& dyn_m_cofactor();
    // Get instance field reference: protected System.Int32 m_coord
    int& dyn_m_coord();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& dyn_m_endomorphism();
    // Get instance field reference: protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier m_multiplier
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*& dyn_m_multiplier();
    // public System.Int32 get_FieldSize()
    // Offset: 0xFFFFFFFF
    int get_FieldSize();
    // public Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public Org.BouncyCastle.Math.Field.IFiniteField get_Field()
    // Offset: 0x2142A98
    Org::BouncyCastle::Math::Field::IFiniteField* get_Field();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_A()
    // Offset: 0x2142AA0
    Org::BouncyCastle::Math::EC::ECFieldElement* get_A();
    // public Org.BouncyCastle.Math.EC.ECFieldElement get_B()
    // Offset: 0x2142AA8
    Org::BouncyCastle::Math::EC::ECFieldElement* get_B();
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x2142AB0
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public Org.BouncyCastle.Math.BigInteger get_Cofactor()
    // Offset: 0x2142AB8
    Org::BouncyCastle::Math::BigInteger* get_Cofactor();
    // public System.Int32 get_CoordinateSystem()
    // Offset: 0x2142AC0
    int get_CoordinateSystem();
    // protected System.Void .ctor(Org.BouncyCastle.Math.Field.IFiniteField field)
    // Offset: 0x2142058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECCurve* New_ctor(Org::BouncyCastle::Math::Field::IFiniteField* field) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECCurve*, creationType>(field)));
    }
    // public Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // public Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
    // public Org.BouncyCastle.Math.EC.ECCurve/Org.BouncyCastle.Math.EC.Config Configure()
    // Offset: 0x214208C
    Org::BouncyCastle::Math::EC::ECCurve::Config* Configure();
    // public Org.BouncyCastle.Math.EC.ECPoint ValidatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y)
    // Offset: 0x2142160
    Org::BouncyCastle::Math::EC::ECPoint* ValidatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y);
    // public Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y)
    // Offset: 0x2142230
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y);
    // public Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    // Offset: 0x2142240
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y, bool withCompression);
    // protected Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // protected internal Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateDefaultMultiplier()
    // Offset: 0x21422A8
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();
    // public System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x2142354
    bool SupportsCoordinateSystem(int coord);
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.ECPoint point, System.String name, Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback callback)
    // Offset: 0x2142360
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::ECPoint* point, ::Il2CppString* name, Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* callback);
    // public Org.BouncyCastle.Math.EC.ECPoint ImportPoint(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x2142684
    Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(Org::BouncyCastle::Math::EC::ECPoint* p);
    // public System.Void NormalizeAll(Org.BouncyCastle.Math.EC.ECPoint[] points)
    // Offset: 0x2142784
    void NormalizeAll(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points);
    // public System.Void NormalizeAll(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len, Org.BouncyCastle.Math.EC.ECFieldElement iso)
    // Offset: 0x21427B0
    void NormalizeAll(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len, Org::BouncyCastle::Math::EC::ECFieldElement* iso);
    // public Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x2142AC8
    Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
    // protected System.Void CheckPoint(Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x2142D30
    void CheckPoint(Org::BouncyCastle::Math::EC::ECPoint* point);
    // protected System.Void CheckPoints(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x2142DE0
    void CheckPoints(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.ECCurve other)
    // Offset: 0x2142F64
    bool Equals(Org::BouncyCastle::Math::EC::ECCurve* other);
    // protected Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, Org::BouncyCastle::Math::BigInteger* X1);
    // public Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier GetMultiplier()
    // Offset: 0x2143238
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* GetMultiplier();
    // public Org.BouncyCastle.Math.EC.ECPoint DecodePoint(System.Byte[] encoded)
    // Offset: 0x21432D0
    Org::BouncyCastle::Math::EC::ECPoint* DecodePoint(::Array<uint8_t>* encoded);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x21430C4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2143160
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.ECCurve
  #pragma pack(pop)
  static check_size<sizeof(ECCurve), 72 + sizeof(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*)> __Org_BouncyCastle_Math_EC_ECCurveSizeCheck;
  static_assert(sizeof(ECCurve) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECCurve*, "Org.BouncyCastle.Math.EC", "ECCurve");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_FieldSize
// Il2CppName: get_FieldSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_FieldSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_FieldSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_Infinity
// Il2CppName: get_Infinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Infinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_Infinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_Field
// Il2CppName: get_Field
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IFiniteField* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Field)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_Field", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_A
// Il2CppName: get_A
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_A)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_A", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_B
// Il2CppName: get_B
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_B)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_B", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_Cofactor
// Il2CppName: get_Cofactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_Cofactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_Cofactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::get_CoordinateSystem
// Il2CppName: get_CoordinateSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::get_CoordinateSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "get_CoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECCurve::FromBigInteger)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElementMult
// Il2CppName: RandomFieldElementMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Math::EC::ECCurve::RandomFieldElementMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "RandomFieldElementMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Configure
// Il2CppName: Configure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve::Config* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::Configure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "Configure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint
// Il2CppName: ValidatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECCurve::ValidatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "ValidatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECCurve::CreatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CreatePoint
// Il2CppName: CreatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::CreatePoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CreatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CloneCurve
// Il2CppName: CloneCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::CloneCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CloneCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint
// Il2CppName: CreateRawPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECFieldElement*, Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*, bool)>(&Org::BouncyCastle::Math::EC::ECCurve::CreateRawPoint)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    static auto* zs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement"), 1)->byval_arg;
    static auto* withCompression = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CreateRawPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zs, withCompression});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CreateDefaultMultiplier
// Il2CppName: CreateDefaultMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::CreateDefaultMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CreateDefaultMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::SupportsCoordinateSystem
// Il2CppName: SupportsCoordinateSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(int)>(&Org::BouncyCastle::Math::EC::ECCurve::SupportsCoordinateSystem)> {
  static const MethodInfo* get() {
    static auto* coord = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "SupportsCoordinateSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coord});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint*, ::Il2CppString*, Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*)>(&Org::BouncyCastle::Math::EC::ECCurve::Precompute)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "IPreCompCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, name, callback});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::ImportPoint
// Il2CppName: ImportPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECCurve::ImportPoint)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "ImportPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll
// Il2CppName: NormalizeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*)>(&Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "NormalizeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll
// Il2CppName: NormalizeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int, int, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Math::EC::ECCurve::NormalizeAll)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* iso = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "NormalizeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, off, len, iso});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CreateCacheSafeLookupTable
// Il2CppName: CreateCacheSafeLookupTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECLookupTable* (Org::BouncyCastle::Math::EC::ECCurve::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int, int)>(&Org::BouncyCastle::Math::EC::ECCurve::CreateCacheSafeLookupTable)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CreateCacheSafeLookupTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CheckPoint
// Il2CppName: CheckPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::ECCurve::CheckPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CheckPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::CheckPoints
// Il2CppName: CheckPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::ECCurve::*)(::Array<Org::BouncyCastle::Math::EC::ECPoint*>*, int, int)>(&Org::BouncyCastle::Math::EC::ECCurve::CheckPoints)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "CheckPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(Org::BouncyCastle::Math::EC::ECCurve*)>(&Org::BouncyCastle::Math::EC::ECCurve::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DecompressPoint
// Il2CppName: DecompressPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(int, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECCurve::DecompressPoint)> {
  static const MethodInfo* get() {
    static auto* yTilde = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* X1 = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "DecompressPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yTilde, X1});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::GetMultiplier
// Il2CppName: GetMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::GetMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "GetMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::DecodePoint
// Il2CppName: DecodePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECCurve::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Math::EC::ECCurve::DecodePoint)> {
  static const MethodInfo* get() {
    static auto* encoded = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "DecodePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoded});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::ECCurve::*)(::Il2CppObject*)>(&Org::BouncyCastle::Math::EC::ECCurve::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECCurve::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::EC::ECCurve::*)()>(&Org::BouncyCastle::Math::EC::ECCurve::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECCurve*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
