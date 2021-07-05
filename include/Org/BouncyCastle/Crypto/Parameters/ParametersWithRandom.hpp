// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
  class ParametersWithRandom : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: ParametersWithRandom
    ParametersWithRandom(Org::BouncyCastle::Crypto::ICipherParameters* parameters_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : parameters{parameters_}, random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // public Org.BouncyCastle.Security.SecureRandom get_Random()
    // Offset: 0x125D55C
    Org::BouncyCastle::Security::SecureRandom* get_Random();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x125D564
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
  #pragma pack(pop)
  static check_size<sizeof(ParametersWithRandom), 24 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithRandomSizeCheck;
  static_assert(sizeof(ParametersWithRandom) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithRandom");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Random
// Il2CppName: get_Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom* (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Random)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*), "get_Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Parameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
