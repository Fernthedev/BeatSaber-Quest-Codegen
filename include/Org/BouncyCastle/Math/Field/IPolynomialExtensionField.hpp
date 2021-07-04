// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Org.BouncyCastle.Math.Field.IFiniteField
#include "Org/BouncyCastle/Math/Field/IFiniteField.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IPolynomial
  class IPolynomial;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.IPolynomialExtensionField
  class IPolynomialExtensionField/*, public Org::BouncyCastle::Math::Field::IFiniteField*/ {
    public:
    // Creating value type constructor for type: IPolynomialExtensionField
    IPolynomialExtensionField() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::Field::IFiniteField
    operator Org::BouncyCastle::Math::Field::IFiniteField() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::Field::IFiniteField*>(this);
    }
    // public Org.BouncyCastle.Math.Field.IPolynomial get_MinimalPolynomial()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial();
  }; // Org.BouncyCastle.Math.Field.IPolynomialExtensionField
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::IPolynomialExtensionField*, "Org.BouncyCastle.Math.Field", "IPolynomialExtensionField");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::IPolynomialExtensionField::get_MinimalPolynomial
// Il2CppName: get_MinimalPolynomial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::Field::IPolynomial* (Org::BouncyCastle::Math::Field::IPolynomialExtensionField::*)()>(&Org::BouncyCastle::Math::Field::IPolynomialExtensionField::get_MinimalPolynomial)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::IPolynomialExtensionField*), "get_MinimalPolynomial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
