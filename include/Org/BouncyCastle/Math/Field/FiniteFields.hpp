// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
  // Forward declaring type: IPolynomialExtensionField
  class IPolynomialExtensionField;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.FiniteFields
  class FiniteFields : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: FiniteFields
    FiniteFields() noexcept {}
    // Get static field: static readonly Org.BouncyCastle.Math.Field.IFiniteField GF_2
    static Org::BouncyCastle::Math::Field::IFiniteField* _get_GF_2();
    // Set static field: static readonly Org.BouncyCastle.Math.Field.IFiniteField GF_2
    static void _set_GF_2(Org::BouncyCastle::Math::Field::IFiniteField* value);
    // Get static field: static readonly Org.BouncyCastle.Math.Field.IFiniteField GF_3
    static Org::BouncyCastle::Math::Field::IFiniteField* _get_GF_3();
    // Set static field: static readonly Org.BouncyCastle.Math.Field.IFiniteField GF_3
    static void _set_GF_3(Org::BouncyCastle::Math::Field::IFiniteField* value);
    // static public Org.BouncyCastle.Math.Field.IPolynomialExtensionField GetBinaryExtensionField(System.Int32[] exponents)
    // Offset: 0x1D32E64
    static Org::BouncyCastle::Math::Field::IPolynomialExtensionField* GetBinaryExtensionField(::Array<int>* exponents);
    // static public Org.BouncyCastle.Math.Field.IFiniteField GetPrimeField(Org.BouncyCastle.Math.BigInteger characteristic)
    // Offset: 0x1D33090
    static Org::BouncyCastle::Math::Field::IFiniteField* GetPrimeField(Org::BouncyCastle::Math::BigInteger* characteristic);
    // static private System.Void .cctor()
    // Offset: 0x1D33234
    static void _cctor();
  }; // Org.BouncyCastle.Math.Field.FiniteFields
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::FiniteFields*, "Org.BouncyCastle.Math.Field", "FiniteFields");
// Writing includes for template specializations
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::FiniteFields::GetBinaryExtensionField
// Il2CppName: GetBinaryExtensionField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IPolynomialExtensionField* (*)(::Array<int>*)>(&Org::BouncyCastle::Math::Field::FiniteFields::GetBinaryExtensionField)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::FiniteFields*), "GetBinaryExtensionField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<int>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::FiniteFields::GetPrimeField
// Il2CppName: GetPrimeField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IFiniteField* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::Field::FiniteFields::GetPrimeField)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::FiniteFields*), "GetPrimeField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::FiniteFields::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::Field::FiniteFields::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::FiniteFields*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
