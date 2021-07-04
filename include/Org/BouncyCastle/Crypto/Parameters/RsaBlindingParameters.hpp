// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
  class RsaBlindingParameters : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters publicKey
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*) == 0x8);
    // Creating value type constructor for type: RsaBlindingParameters
    RsaBlindingParameters(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey_ = {}) noexcept : publicKey{publicKey_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*
    constexpr operator Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*() const noexcept {
      return publicKey;
    }
    // public Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters get_PublicKey()
    // Offset: 0x125D628
    Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* get_PublicKey();
  }; // Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
  #pragma pack(pop)
  static check_size<sizeof(RsaBlindingParameters), 16 + sizeof(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*)> __Org_BouncyCastle_Crypto_Parameters_RsaBlindingParametersSizeCheck;
  static_assert(sizeof(RsaBlindingParameters) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaBlindingParameters");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* (Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
