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
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IDsa
  class IDsa;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410DigestSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDsa dsaSigner
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDsa* dsaSigner;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDsa*) == 0x8);
    // private readonly System.Int32 size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 halfSize
    // Size: 0x4
    // Offset: 0x24
    int halfSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x28
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Gost3410DigestSigner
    Gost3410DigestSigner(Org::BouncyCastle::Crypto::IDigest* digest_ = {}, Org::BouncyCastle::Crypto::IDsa* dsaSigner_ = {}, int size_ = {}, int halfSize_ = {}, bool forSigning_ = {}) noexcept : digest{digest_}, dsaSigner{dsaSigner_}, size{size_}, halfSize{halfSize_}, forSigning{forSigning_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field: private readonly Org.BouncyCastle.Crypto.IDigest digest
    Org::BouncyCastle::Crypto::IDigest* _get_digest();
    // Set instance field: private readonly Org.BouncyCastle.Crypto.IDigest digest
    void _set_digest(Org::BouncyCastle::Crypto::IDigest* value);
    // Get instance field: private readonly Org.BouncyCastle.Crypto.IDsa dsaSigner
    Org::BouncyCastle::Crypto::IDsa* _get_dsaSigner();
    // Set instance field: private readonly Org.BouncyCastle.Crypto.IDsa dsaSigner
    void _set_dsaSigner(Org::BouncyCastle::Crypto::IDsa* value);
    // Get instance field: private readonly System.Int32 size
    int _get_size();
    // Set instance field: private readonly System.Int32 size
    void _set_size(int value);
    // Get instance field: private System.Int32 halfSize
    int _get_halfSize();
    // Set instance field: private System.Int32 halfSize
    void _set_halfSize(int value);
    // Get instance field: private System.Boolean forSigning
    bool _get_forSigning();
    // Set instance field: private System.Boolean forSigning
    void _set_forSigning(bool value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDsa signer, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x127C3E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410DigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDsa* signer, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410DigestSigner*, creationType>(signer, digest)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x127C4C0
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x127C6C8
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x127C7A4
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x127CB68
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
  #pragma pack(pop)
  static check_size<sizeof(Gost3410DigestSigner), 40 + sizeof(bool)> __Org_BouncyCastle_Crypto_Signers_Gost3410DigestSignerSizeCheck;
  static_assert(sizeof(Gost3410DigestSigner) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*, "Org.BouncyCastle.Crypto.Signers", "Gost3410DigestSigner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
