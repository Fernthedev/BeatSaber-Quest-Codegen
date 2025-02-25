// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.IPolynomial
  // [TokenAttribute] Offset: FFFFFFFF
  class IPolynomial {
    public:
    // Creating value type constructor for type: IPolynomial
    IPolynomial() noexcept {}
    // public System.Int32 get_Degree()
    // Offset: 0xFFFFFFFF
    int get_Degree();
    // public System.Int32[] GetExponentsPresent()
    // Offset: 0xFFFFFFFF
    ::Array<int>* GetExponentsPresent();
  }; // Org.BouncyCastle.Math.Field.IPolynomial
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::IPolynomial*, "Org.BouncyCastle.Math.Field", "IPolynomial");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::IPolynomial::get_Degree
// Il2CppName: get_Degree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Math::Field::IPolynomial::*)()>(&Org::BouncyCastle::Math::Field::IPolynomial::get_Degree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::IPolynomial*), "get_Degree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Field::IPolynomial::GetExponentsPresent
// Il2CppName: GetExponentsPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (Org::BouncyCastle::Math::Field::IPolynomial::*)()>(&Org::BouncyCastle::Math::Field::IPolynomial::GetExponentsPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Field::IPolynomial*), "GetExponentsPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
