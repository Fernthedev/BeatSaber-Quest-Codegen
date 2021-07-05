// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ElGamalKeyParameters.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalParameters
  class ElGamalParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters
  class ElGamalPublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger y
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* y;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: ElGamalPublicKeyParameters
    ElGamalPublicKeyParameters(Org::BouncyCastle::Math::BigInteger* y_ = {}) noexcept : y{y_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters)
    // Offset: 0x125CB28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElGamalPublicKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElGamalPublicKeyParameters*, creationType>(y, parameters)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_Y()
    // Offset: 0x125CBD0
    Org::BouncyCastle::Math::BigInteger* get_Y();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters other)
    // Offset: 0x125CC88
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x125CBD8
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
    // Base method: System.Boolean ElGamalKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x125CCE4
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
    // Base method: System.Int32 ElGamalKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(ElGamalPublicKeyParameters), 32 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_ElGamalPublicKeyParametersSizeCheck;
  static_assert(sizeof(ElGamalPublicKeyParameters) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPublicKeyParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::get_Y
// Il2CppName: get_Y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::get_Y)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*), "get_Y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ElGamalPublicKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
