// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.BufferedCipherBase
#include "Org/BouncyCastle/Crypto/BufferedCipherBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferedBlockCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
    public:
    // System.Byte[] buf
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x18
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x1C
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: cipher
    char __padding2[0x3] = {};
    // Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // Creating value type constructor for type: BufferedBlockCipher
    BufferedBlockCipher(::Array<uint8_t>* buf_ = {}, int bufOff_ = {}, bool forEncryption_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}) noexcept : buf{buf_}, bufOff{bufOff_}, forEncryption{forEncryption_}, cipher{cipher_} {}
    // Get instance field reference: System.Byte[] buf
    ::Array<uint8_t>*& dyn_buf();
    // Get instance field reference: System.Int32 bufOff
    int& dyn_bufOff();
    // Get instance field reference: System.Boolean forEncryption
    bool& dyn_forEncryption();
    // Get instance field reference: Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1A0D3A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::BufferedBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedBlockCipher*, creationType>(cipher)));
    }
    // protected System.Void .ctor()
    // Offset: 0x1A0D338
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedBlockCipher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::BufferedBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedBlockCipher*, creationType>()));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1A0D4E8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1A0D60C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 GetUpdateOutputSize(System.Int32 length)
    // Offset: 0x1A0D6C0
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetUpdateOutputSize(System.Int32 length)
    int GetUpdateOutputSize(int length);
    // public override System.Int32 GetOutputSize(System.Int32 length)
    // Offset: 0x1A0D6EC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetOutputSize(System.Int32 length)
    int GetOutputSize(int length);
    // public override System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1A0D6F8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* ProcessBytes(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A0D858
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::Array<uint8_t>* input, int inOff, int length, ::Array<uint8_t>* output, int outOff);
    // public override System.Byte[] DoFinal()
    // Offset: 0x1A0DBBC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal()
    ::Array<uint8_t>* DoFinal();
    // public override System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1A0DCE4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    ::Array<uint8_t>* DoFinal(::Array<uint8_t>* input, int inOff, int inLen);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1A0DEA0
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1A0E0BC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(BufferedBlockCipher), 32 + sizeof(Org::BouncyCastle::Crypto::IBlockCipher*)> __Org_BouncyCastle_Crypto_BufferedBlockCipherSizeCheck;
  static_assert(sizeof(BufferedBlockCipher) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedBlockCipher*, "Org.BouncyCastle.Crypto", "BufferedBlockCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedBlockCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
