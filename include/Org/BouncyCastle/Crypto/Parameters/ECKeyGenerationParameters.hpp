// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.KeyGenerationParameters
#include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
  class ECKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.Parameters.ECDomainParameters domainParams
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParams;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // Creating value type constructor for type: ECKeyGenerationParameters
    ECKeyGenerationParameters(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParams_ = {}, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet_ = {}) noexcept : domainParams{domainParams_}, publicKeyParamSet{publicKeyParamSet_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters domainParameters, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x125A9B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyGenerationParameters* New_ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParameters, Org::BouncyCastle::Security::SecureRandom* random) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyGenerationParameters*, creationType>(domainParameters, random)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters get_DomainParameters()
    // Offset: 0x125AA10
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_DomainParameters();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_PublicKeyParamSet()
    // Offset: 0x125AA18
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
  }; // Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
  #pragma pack(pop)
  static check_size<sizeof(ECKeyGenerationParameters), 40 + sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Crypto_Parameters_ECKeyGenerationParametersSizeCheck;
  static_assert(sizeof(ECKeyGenerationParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECKeyGenerationParameters");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/Parameters/ECDomainParameters.hpp"
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_DomainParameters
// Il2CppName: get_DomainParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* (Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_DomainParameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters*), "get_DomainParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_PublicKeyParamSet
// Il2CppName: get_PublicKeyParamSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_PublicKeyParamSet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters*), "get_PublicKeyParamSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
