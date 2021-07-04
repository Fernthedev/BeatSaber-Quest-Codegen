// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaKCalculator
  class IDsaKCalculator;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DsaKeyParameters
  class DsaKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.DsaSigner
  class DsaSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDsaExt*/ {
    public:
    // protected readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*) == 0x8);
    // protected Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters key
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*) == 0x8);
    // protected Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: DsaSigner
    DsaSigner(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator_ = {}, Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* key_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : kCalculator{kCalculator_}, key{key_}, random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDsaExt
    operator Org::BouncyCastle::Crypto::IDsaExt() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x125FEE8
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x12600FC
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public Org.BouncyCastle.Math.BigInteger[] GenerateSignature(System.Byte[] message)
    // Offset: 0x1260124
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GenerateSignature(::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Math.BigInteger CalculateE(Org.BouncyCastle.Math.BigInteger n, System.Byte[] message)
    // Offset: 0x1260808
    Org::BouncyCastle::Math::BigInteger* CalculateE(Org::BouncyCastle::Math::BigInteger* n, ::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Security.SecureRandom InitSecureRandom(System.Boolean needed, Org.BouncyCastle.Security.SecureRandom provided)
    // Offset: 0x1260A28
    Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(bool needed, Org::BouncyCastle::Security::SecureRandom* provided);
    // public System.Void .ctor()
    // Offset: 0x125FE70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaSigner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::DsaSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaSigner*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.DsaSigner
  #pragma pack(pop)
  static check_size<sizeof(DsaSigner), 32 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Signers_DsaSignerSizeCheck;
  static_assert(sizeof(DsaSigner) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::DsaSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaSigner");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::ICipherParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaSigner::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::get_Order)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaSigner*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Math::BigInteger*>* (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::GenerateSignature)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaSigner::CalculateE
// Il2CppName: CalculateE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(Org::BouncyCastle::Math::BigInteger*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::CalculateE)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaSigner*), "CalculateE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaSigner::InitSecureRandom
// Il2CppName: InitSecureRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom* (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(bool, Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::InitSecureRandom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaSigner*), "InitSecureRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Security::SecureRandom*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
