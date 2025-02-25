// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.ECNRSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class ECNRSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDsaExt*/ {
    public:
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x10
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forSigning and: key
    char __padding0[0x7] = {};
    // private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters key
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: ECNRSigner
    ECNRSigner(bool forSigning_ = {}, Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : forSigning{forSigning_}, key{key_}, random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDsaExt
    operator Org::BouncyCastle::Crypto::IDsaExt() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // Get instance field reference: private System.Boolean forSigning
    bool& dyn_forSigning();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters key
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& dyn_key();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x127F314
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x127F180
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger[] GenerateSignature(System.Byte[] message)
    // Offset: 0x127F33C
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GenerateSignature(::Array<uint8_t>* message);
    // public System.Void .ctor()
    // Offset: 0x127F69C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECNRSigner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::ECNRSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECNRSigner*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.ECNRSigner
  #pragma pack(pop)
  static check_size<sizeof(ECNRSigner), 32 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Signers_ECNRSignerSizeCheck;
  static_assert(sizeof(ECNRSigner) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECNRSigner*, "Org.BouncyCastle.Crypto.Signers", "ECNRSigner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECNRSigner::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::ECNRSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::ECNRSigner::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::ECNRSigner*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECNRSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::ECNRSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::ECNRSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::ECNRSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECNRSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Math::BigInteger*>* (Org::BouncyCastle::Crypto::Signers::ECNRSigner::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Signers::ECNRSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::ECNRSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::ECNRSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
