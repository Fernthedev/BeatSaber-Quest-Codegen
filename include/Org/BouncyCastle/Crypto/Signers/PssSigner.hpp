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
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.PssSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class PssSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IDigest contentDigest1
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* contentDigest1;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest contentDigest2
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* contentDigest2;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest mgfDigest
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IDigest* mgfDigest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private System.Int32 hLen
    // Size: 0x4
    // Offset: 0x38
    int hLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 mgfhLen
    // Size: 0x4
    // Offset: 0x3C
    int mgfhLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 sLen
    // Size: 0x4
    // Offset: 0x40
    int sLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean sSet
    // Size: 0x1
    // Offset: 0x44
    bool sSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sSet and: emBits
    char __padding8[0x3] = {};
    // private System.Int32 emBits
    // Size: 0x4
    // Offset: 0x48
    int emBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: emBits and: salt
    char __padding9[0x4] = {};
    // private System.Byte[] salt
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* salt;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] mDash
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* mDash;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] block
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* block;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte trailer
    // Size: 0x1
    // Offset: 0x68
    uint8_t trailer;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: PssSigner
    PssSigner(Org::BouncyCastle::Crypto::IDigest* contentDigest1_ = {}, Org::BouncyCastle::Crypto::IDigest* contentDigest2_ = {}, Org::BouncyCastle::Crypto::IDigest* mgfDigest_ = {}, Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}, int hLen_ = {}, int mgfhLen_ = {}, int sLen_ = {}, bool sSet_ = {}, int emBits_ = {}, ::Array<uint8_t>* salt_ = {}, ::Array<uint8_t>* mDash_ = {}, ::Array<uint8_t>* block_ = {}, uint8_t trailer_ = {}) noexcept : contentDigest1{contentDigest1_}, contentDigest2{contentDigest2_}, mgfDigest{mgfDigest_}, cipher{cipher_}, random{random_}, hLen{hLen_}, mgfhLen{mgfhLen_}, sLen{sLen_}, sSet{sSet_}, emBits{emBits_}, salt{salt_}, mDash{mDash_}, block{block_}, trailer{trailer_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest contentDigest1
    Org::BouncyCastle::Crypto::IDigest*& dyn_contentDigest1();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest contentDigest2
    Org::BouncyCastle::Crypto::IDigest*& dyn_contentDigest2();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest mgfDigest
    Org::BouncyCastle::Crypto::IDigest*& dyn_mgfDigest();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_cipher();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // Get instance field reference: private System.Int32 hLen
    int& dyn_hLen();
    // Get instance field reference: private System.Int32 mgfhLen
    int& dyn_mgfhLen();
    // Get instance field reference: private System.Int32 sLen
    int& dyn_sLen();
    // Get instance field reference: private System.Boolean sSet
    bool& dyn_sSet();
    // Get instance field reference: private System.Int32 emBits
    int& dyn_emBits();
    // Get instance field reference: private System.Byte[] salt
    ::Array<uint8_t>*& dyn_salt();
    // Get instance field reference: private System.Byte[] mDash
    ::Array<uint8_t>*& dyn_mDash();
    // Get instance field reference: private System.Byte[] block
    ::Array<uint8_t>*& dyn_block();
    // Get instance field reference: private System.Byte trailer
    uint8_t& dyn_trailer();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x127EA4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PssSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::PssSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PssSigner*, creationType>(cipher, digest)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Int32 saltLen)
    // Offset: 0x127EB3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PssSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, int saltLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::PssSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PssSigner*, creationType>(cipher, digest, saltLen)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Int32 saltLen, System.Byte trailer)
    // Offset: 0x127EB6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PssSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, int saltLen, uint8_t trailer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::PssSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PssSigner*, creationType>(cipher, digest, saltLen, trailer)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest contentDigest, Org.BouncyCastle.Crypto.IDigest mgfDigest, System.Int32 saltLen, System.Byte trailer)
    // Offset: 0x127EB9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PssSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* contentDigest, Org::BouncyCastle::Crypto::IDigest* mgfDigest, int saltLen, uint8_t trailer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::PssSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PssSigner*, creationType>(cipher, contentDigest, mgfDigest, saltLen, trailer)));
    }
    // private System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest contentDigest1, Org.BouncyCastle.Crypto.IDigest contentDigest2, Org.BouncyCastle.Crypto.IDigest mgfDigest, System.Int32 saltLen, System.Byte[] salt, System.Byte trailer)
    // Offset: 0x127E884
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PssSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* contentDigest1, Org::BouncyCastle::Crypto::IDigest* contentDigest2, Org::BouncyCastle::Crypto::IDigest* mgfDigest, int saltLen, ::Array<uint8_t>* salt, uint8_t trailer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::PssSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PssSigner*, creationType>(cipher, contentDigest1, contentDigest2, mgfDigest, saltLen, salt, trailer)));
    }
    // static public Org.BouncyCastle.Crypto.Signers.PssSigner CreateRawSigner(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x127E758
    static Org::BouncyCastle::Crypto::Signers::PssSigner* CreateRawSigner(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest);
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x127EBCC
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void ClearBlock(System.Byte[] block)
    // Offset: 0x127EE10
    void ClearBlock(::Array<uint8_t>* block);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x127EE34
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Void Reset()
    // Offset: 0x127EF10
    void Reset();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x127EFC4
    ::Array<uint8_t>* GenerateSignature();
    // private System.Void ItoOSP(System.Int32 i, System.Byte[] sp)
    // Offset: 0x127F8B8
    void ItoOSP(int i, ::Array<uint8_t>* sp);
    // private System.Byte[] MaskGeneratorFunction1(System.Byte[] Z, System.Int32 zOff, System.Int32 zLen, System.Int32 length)
    // Offset: 0x127F418
    ::Array<uint8_t>* MaskGeneratorFunction1(::Array<uint8_t>* Z, int zOff, int zLen, int length);
  }; // Org.BouncyCastle.Crypto.Signers.PssSigner
  #pragma pack(pop)
  static check_size<sizeof(PssSigner), 104 + sizeof(uint8_t)> __Org_BouncyCastle_Crypto_Signers_PssSignerSizeCheck;
  static_assert(sizeof(PssSigner) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::PssSigner*, "Org.BouncyCastle.Crypto.Signers", "PssSigner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner
// Il2CppName: CreateRawSigner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Signers::PssSigner* (*)(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, Org::BouncyCastle::Crypto::IDigest*)>(&Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner)> {
  static const MethodInfo* get() {
    static auto* cipher = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "IAsymmetricBlockCipher")->byval_arg;
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "IDigest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "CreateRawSigner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cipher, digest});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::PssSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::PssSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::ClearBlock
// Il2CppName: ClearBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Signers::PssSigner::ClearBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "ClearBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Signers::PssSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::PssSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::PssSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::PssSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::PssSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::ItoOSP
// Il2CppName: ItoOSP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::PssSigner::*)(int, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Signers::PssSigner::ItoOSP)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sp = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "ItoOSP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, sp});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::PssSigner::MaskGeneratorFunction1
// Il2CppName: MaskGeneratorFunction1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::PssSigner::*)(::Array<uint8_t>*, int, int, int)>(&Org::BouncyCastle::Crypto::Signers::PssSigner::MaskGeneratorFunction1)> {
  static const MethodInfo* get() {
    static auto* Z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::PssSigner*), "MaskGeneratorFunction1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Z, zOff, zLen, length});
  }
};
