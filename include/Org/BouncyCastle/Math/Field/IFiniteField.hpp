// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.IFiniteField
  class IFiniteField {
    public:
    // Creating value type constructor for type: IFiniteField
    IFiniteField() noexcept {}
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* get_Characteristic();
    // public System.Int32 get_Dimension()
    // Offset: 0xFFFFFFFF
    int get_Dimension();
  }; // Org.BouncyCastle.Math.Field.IFiniteField
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::IFiniteField*, "Org.BouncyCastle.Math.Field", "IFiniteField");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::IFiniteField::get_Characteristic
// Il2CppName: get_Characteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::Field::IFiniteField::*)()>(&Org::BouncyCastle::Math::Field::IFiniteField::get_Characteristic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::IFiniteField*), "get_Characteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::IFiniteField::get_Dimension
// Il2CppName: get_Dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::IFiniteField::*)()>(&Org::BouncyCastle::Math::Field::IFiniteField::get_Dimension)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::IFiniteField*), "get_Dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
