// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: DHParameters
  class DHParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DHKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.Parameters.DHParameters parameters
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*) == 0x8);
    // Creating value type constructor for type: DHKeyGenerationParameters
    DHKeyGenerationParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Parameters::DHParameters*
    constexpr operator Org::BouncyCastle::Crypto::Parameters::DHParameters*() const noexcept {
      return parameters;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.DHParameters parameters
    Org::BouncyCastle::Crypto::Parameters::DHParameters*& dyn_parameters();
    // public Org.BouncyCastle.Crypto.Parameters.DHParameters get_Parameters()
    // Offset: 0x12746DC
    Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters();
    // public System.Void .ctor(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0x127465C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHKeyGenerationParameters* New_ctor(Org::BouncyCastle::Security::SecureRandom* random, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHKeyGenerationParameters*, creationType>(random, parameters)));
    }
    // static System.Int32 GetStrength(Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0x12746A8
    static int GetStrength(Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);
  }; // Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
  #pragma pack(pop)
  static check_size<sizeof(DHKeyGenerationParameters), 32 + sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*)> __Org_BouncyCastle_Crypto_Parameters_DHKeyGenerationParametersSizeCheck;
  static_assert(sizeof(DHKeyGenerationParameters) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHKeyGenerationParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHParameters* (Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::GetStrength
// Il2CppName: GetStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::GetStrength)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*), "GetStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
