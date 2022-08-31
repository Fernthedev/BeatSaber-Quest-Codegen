// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDsa
  class IDsa;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IDsaExt
  class IDsaExt;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaEncoding
  class IDsaEncoding;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: DsaDigestSigner
  class DsaDigestSigner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaDigestSigner");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class DsaDigestSigner : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.IDsa dsa
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IDsa* dsa;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDsa*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x28
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ISigner
    operator ::Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Creating interface conversion operator: i_ISigner
    inline ::Org::BouncyCastle::Crypto::ISigner* i_ISigner() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDsa dsa
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IDsa*& dyn_dsa();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest digest
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& dyn_encoding();
    // Get instance field reference: private System.Boolean forSigning
    [[deprecated("Use field access instead!")]] bool& dyn_forSigning();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDsa dsa, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x15FDF18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsa* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaDigestSigner*, creationType>(dsa, digest)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDsaExt dsa, Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding)
    // Offset: 0x15FDFA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaDigestSigner*, creationType>(dsa, digest, encoding)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x15FDFE8
    void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x15FE1F0
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x15FE2CC
    ::ArrayW<uint8_t> GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x15FE63C
    void Reset();
    // protected Org.BouncyCastle.Math.BigInteger GetOrder()
    // Offset: 0x15FE6F0
    ::Org::BouncyCastle::Math::BigInteger* GetOrder();
  }; // Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
  #pragma pack(pop)
  static check_size<sizeof(DsaDigestSigner), 40 + sizeof(bool)> __Org_BouncyCastle_Crypto_Signers_DsaDigestSignerSizeCheck;
  static_assert(sizeof(DsaDigestSigner) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GetOrder
// Il2CppName: GetOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GetOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*), "GetOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
