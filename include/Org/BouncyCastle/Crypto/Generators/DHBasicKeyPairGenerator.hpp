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
  // Forward declaring type: DHKeyGenerationParameters
  class DHKeyGenerationParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: KeyGenerationParameters
  class KeyGenerationParameters;
  // Forward declaring type: AsymmetricCipherKeyPair
  class AsymmetricCipherKeyPair;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
  class DHBasicKeyPairGenerator : public ::Il2CppObject {
    public:
    // private Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters param
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* param;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*) == 0x8);
    // Creating value type constructor for type: DHBasicKeyPairGenerator
    DHBasicKeyPairGenerator(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* param_ = {}) noexcept : param{param_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*
    constexpr operator Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*() const noexcept {
      return param;
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.KeyGenerationParameters parameters)
    // Offset: 0x18BEA6C
    void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);
    // public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateKeyPair()
    // Offset: 0x18BEAFC
    Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();
    // public System.Void .ctor()
    // Offset: 0x18BEE48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHBasicKeyPairGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHBasicKeyPairGenerator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
  #pragma pack(pop)
  static check_size<sizeof(DHBasicKeyPairGenerator), 16 + sizeof(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*)> __Org_BouncyCastle_Crypto_Generators_DHBasicKeyPairGeneratorSizeCheck;
  static_assert(sizeof(DHBasicKeyPairGenerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "DHBasicKeyPairGenerator");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(&Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::KeyGenerationParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::GenerateKeyPair
// Il2CppName: GenerateKeyPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::GenerateKeyPair)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator*), "GenerateKeyPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
