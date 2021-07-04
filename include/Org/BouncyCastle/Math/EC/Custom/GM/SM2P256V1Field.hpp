// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.GM
namespace Org::BouncyCastle::Math::EC::Custom::GM {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Field
  class SM2P256V1Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SM2P256V1Field
    SM2P256V1Field() noexcept {}
    // Get static field: static readonly System.UInt32[] P
    static ::Array<uint>* _get_P();
    // Set static field: static readonly System.UInt32[] P
    static void _set_P(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] PExt
    static ::Array<uint>* _get_PExt();
    // Set static field: static private readonly System.UInt32[] PExt
    static void _set_PExt(::Array<uint>* value);
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1D15DD0
    static void Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void AddOne(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1D15FCC
    static void AddOne(::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1D160CC
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1D161B8
    static void Inv(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x1D164A0
    static int IsZero(::Array<uint>* x);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1D16590
    static void Multiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void MultiplyAddToExt(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1D16958
    static void MultiplyAddToExt(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Negate(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1D16A74
    static void Negate(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void Random(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x1D16B48
    static void Random(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void RandomMult(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x1D158D8
    static void RandomMult(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void Reduce(System.UInt32[] xx, System.UInt32[] z)
    // Offset: 0x1D1670C
    static void Reduce(::Array<uint>* xx, ::Array<uint>* z);
    // static public System.Void Reduce32(System.UInt32 x, System.UInt32[] z)
    // Offset: 0x1D16C24
    static void Reduce32(uint x, ::Array<uint>* z);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1D16500
    static void Square(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void SquareN(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x1D16628
    static void SquareN(::Array<uint>* x, int n, ::Array<uint>* z);
    // static public System.Void Subtract(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1D16DE8
    static void Subtract(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Twice(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1D16F7C
    static void Twice(::Array<uint>* x, ::Array<uint>* z);
    // static private System.Void AddPInvTo(System.UInt32[] z)
    // Offset: 0x1D15ED4
    static void AddPInvTo(::Array<uint>* z);
    // static private System.Void SubPInvFrom(System.UInt32[] z)
    // Offset: 0x1D16E84
    static void SubPInvFrom(::Array<uint>* z);
    // static private System.Void .cctor()
    // Offset: 0x1D17080
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Field");
// Writing includes for template specializations
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Add)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::AddOne)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::FromBigInteger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Inv
// Il2CppName: Inv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Inv)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Inv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::IsZero)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Multiply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::MultiplyAddToExt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Negate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Security::SecureRandom*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Random)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Security::SecureRandom*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::RandomMult
// Il2CppName: RandomMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Security::SecureRandom*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::RandomMult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "RandomMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Security::SecureRandom*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Reduce)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Reduce32
// Il2CppName: Reduce32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Reduce32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Reduce32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Square)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::SquareN
// Il2CppName: SquareN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, int, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::SquareN)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Subtract)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Twice
// Il2CppName: Twice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::Twice)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "Twice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::AddPInvTo
// Il2CppName: AddPInvTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::AddPInvTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "AddPInvTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::SubPInvFrom
// Il2CppName: SubPInvFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*)>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::SubPInvFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), "SubPInvFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
