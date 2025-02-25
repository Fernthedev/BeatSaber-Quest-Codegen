// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class OfbBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Byte[] IV
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* IV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] ofbV
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* ofbV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] ofbOutV
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* ofbOutV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x28
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blockSize and: cipher
    char __padding3[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // Creating value type constructor for type: OfbBlockCipher
    OfbBlockCipher(::Array<uint8_t>* IV_ = {}, ::Array<uint8_t>* ofbV_ = {}, ::Array<uint8_t>* ofbOutV_ = {}, int blockSize_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}) noexcept : IV{IV_}, ofbV{ofbV_}, ofbOutV{ofbOutV_}, blockSize{blockSize_}, cipher{cipher_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get instance field reference: private System.Byte[] IV
    ::Array<uint8_t>*& dyn_IV();
    // Get instance field reference: private System.Byte[] ofbV
    ::Array<uint8_t>*& dyn_ofbV();
    // Get instance field reference: private System.Byte[] ofbOutV
    ::Array<uint8_t>*& dyn_ofbOutV();
    // Get instance field reference: private readonly System.Int32 blockSize
    int& dyn_blockSize();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // public System.String get_AlgorithmName()
    // Offset: 0x1927B30
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1927C2C
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 blockSize)
    // Offset: 0x1927690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OfbBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int blockSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OfbBlockCipher*, creationType>(cipher, blockSize)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1927884
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1927C34
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1927C3C
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1927A5C
    void Reset();
  }; // Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(OfbBlockCipher), 48 + sizeof(Org::BouncyCastle::Crypto::IBlockCipher*)> __Org_BouncyCastle_Crypto_Modes_OfbBlockCipherSizeCheck;
  static_assert(sizeof(OfbBlockCipher) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "OfbBlockCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OfbBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
