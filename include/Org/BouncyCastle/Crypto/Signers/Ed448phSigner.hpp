// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IXof
  class IXof;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
  // Forward declaring type: Ed448PublicKeyParameters
  class Ed448PublicKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed448phSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed448phSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IXof prehash
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IXof* prehash;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IXof*) == 0x8);
    // private readonly System.Byte[] context
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* context;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x20
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forSigning and: privateKey
    char __padding2[0x7] = {};
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters publicKey
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*) == 0x8);
    // Creating value type constructor for type: Ed448phSigner
    Ed448phSigner(Org::BouncyCastle::Crypto::IXof* prehash_ = {}, ::Array<uint8_t>* context_ = {}, bool forSigning_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey_ = {}) noexcept : prehash{prehash_}, context{context_}, forSigning{forSigning_}, privateKey{privateKey_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IXof prehash
    Org::BouncyCastle::Crypto::IXof*& dyn_prehash();
    // Get instance field reference: private readonly System.Byte[] context
    ::Array<uint8_t>*& dyn_context();
    // Get instance field reference: private System.Boolean forSigning
    bool& dyn_forSigning();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey
    Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*& dyn_privateKey();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters publicKey
    Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*& dyn_publicKey();
    // public System.Void .ctor(System.Byte[] context)
    // Offset: 0x127BECC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448phSigner* New_ctor(::Array<uint8_t>* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Ed448phSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448phSigner*, creationType>(context)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x127BF80
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x127C0E4
    void BlockUpdate(::Array<uint8_t>* buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x127C1C0
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x127C030
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Ed448phSigner
  #pragma pack(pop)
  static check_size<sizeof(Ed448phSigner), 48 + sizeof(Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Signers_Ed448phSignerSizeCheck;
  static_assert(sizeof(Ed448phSigner) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*, "Org.BouncyCastle.Crypto.Signers", "Ed448phSigner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
