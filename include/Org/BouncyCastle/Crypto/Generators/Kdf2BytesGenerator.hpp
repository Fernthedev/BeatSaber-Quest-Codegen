// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
#include "Org/BouncyCastle/Crypto/Generators/BaseKdfBytesGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.Kdf2BytesGenerator
  class Kdf2BytesGenerator : public Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator {
    public:
    // Creating value type constructor for type: Kdf2BytesGenerator
    Kdf2BytesGenerator() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x18BF728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Kdf2BytesGenerator* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Kdf2BytesGenerator*, creationType>(digest)));
    }
  }; // Org.BouncyCastle.Crypto.Generators.Kdf2BytesGenerator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "Kdf2BytesGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
