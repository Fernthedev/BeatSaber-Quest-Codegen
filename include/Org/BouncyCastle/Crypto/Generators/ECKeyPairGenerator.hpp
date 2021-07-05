// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: ECPublicKeyParameters
  class ECPublicKeyParameters;
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
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
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: KeyGenerationParameters
  class KeyGenerationParameters;
  // Forward declaring type: AsymmetricCipherKeyPair
  class AsymmetricCipherKeyPair;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator
  class ECKeyPairGenerator : public ::Il2CppObject {
    public:
    // private readonly System.String algorithm
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* algorithm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: ECKeyPairGenerator
    ECKeyPairGenerator(::Il2CppString* algorithm_ = {}, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters_ = {}, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : algorithm{algorithm_}, parameters{parameters_}, publicKeyParamSet{publicKeyParamSet_}, random{random_} {}
    // public System.Void .ctor(System.String algorithm)
    // Offset: 0x18BEF0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyPairGenerator* New_ctor(::Il2CppString* algorithm) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyPairGenerator*, creationType>(algorithm)));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.KeyGenerationParameters parameters)
    // Offset: 0x18BEFD4
    void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);
    // public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateKeyPair()
    // Offset: 0x18BF32C
    Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x18BF5E4
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();
    // static Org.BouncyCastle.Asn1.X9.X9ECParameters FindECCurveByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x18BF2A8
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* FindECCurveByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters GetCorrespondingPublicKey(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters privKey)
    // Offset: 0x18BF640
    static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* GetCorrespondingPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey);
    // public System.Void .ctor()
    // Offset: 0x18BEEBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyPairGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyPairGenerator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator
  #pragma pack(pop)
  static check_size<sizeof(ECKeyPairGenerator), 40 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Generators_ECKeyPairGeneratorSizeCheck;
  static_assert(sizeof(ECKeyPairGenerator) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "ECKeyPairGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(&Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::Init)> {
  const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "KeyGenerationParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::GenerateKeyPair
// Il2CppName: GenerateKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::GenerateKeyPair)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*), "GenerateKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::CreateBasePointMultiplier
// Il2CppName: CreateBasePointMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::CreateBasePointMultiplier)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*), "CreateBasePointMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::FindECCurveByOid
// Il2CppName: FindECCurveByOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::FindECCurveByOid)> {
  const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*), "FindECCurveByOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::GetCorrespondingPublicKey
// Il2CppName: GetCorrespondingPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (*)(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*)>(&Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::GetCorrespondingPublicKey)> {
  const MethodInfo* get() {
    static auto* privKey = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECPrivateKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator*), "GetCorrespondingPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
