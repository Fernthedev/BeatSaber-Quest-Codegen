// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Forward declaring type: OcbBlockCipher
  class OcbBlockCipher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher");
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class OcbBlockCipher : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher hashCipher
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher mainCipher
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: macSize
    char __padding2[0x3] = {};
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x24
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] initialAssociatedText
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> initialAssociatedText;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Collections.IList L
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::IList* L;
    // Field size check
    static_assert(sizeof(::System::Collections::IList*) == 0x8);
    // private System.Byte[] L_Asterisk
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> L_Asterisk;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] L_Dollar
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> L_Dollar;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] KtopInput
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> KtopInput;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] Stretch
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> Stretch;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] OffsetMAIN_0
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> OffsetMAIN_0;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] hashBlock
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> hashBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] mainBlock
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<uint8_t> mainBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 hashBlockPos
    // Size: 0x4
    // Offset: 0x70
    int hashBlockPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 mainBlockPos
    // Size: 0x4
    // Offset: 0x74
    int mainBlockPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 hashBlockCount
    // Size: 0x8
    // Offset: 0x78
    int64_t hashBlockCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 mainBlockCount
    // Size: 0x8
    // Offset: 0x80
    int64_t mainBlockCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Byte[] OffsetHASH
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<uint8_t> OffsetHASH;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] Sum
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<uint8_t> Sum;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] OffsetMAIN
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<uint8_t> OffsetMAIN;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] Checksum
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<uint8_t> Checksum;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] macBlock
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<uint8_t> macBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IAeadBlockCipher
    inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i_IAeadBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher hashCipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IBlockCipher*& dyn_hashCipher();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher mainCipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IBlockCipher*& dyn_mainCipher();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // Get instance field reference: private System.Int32 macSize
    [[deprecated("Use field access instead!")]] int& dyn_macSize();
    // Get instance field reference: private System.Byte[] initialAssociatedText
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_initialAssociatedText();
    // Get instance field reference: private System.Collections.IList L
    [[deprecated("Use field access instead!")]] ::System::Collections::IList*& dyn_L();
    // Get instance field reference: private System.Byte[] L_Asterisk
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_L_Asterisk();
    // Get instance field reference: private System.Byte[] L_Dollar
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_L_Dollar();
    // Get instance field reference: private System.Byte[] KtopInput
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_KtopInput();
    // Get instance field reference: private System.Byte[] Stretch
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Stretch();
    // Get instance field reference: private System.Byte[] OffsetMAIN_0
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_OffsetMAIN_0();
    // Get instance field reference: private System.Byte[] hashBlock
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_hashBlock();
    // Get instance field reference: private System.Byte[] mainBlock
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_mainBlock();
    // Get instance field reference: private System.Int32 hashBlockPos
    [[deprecated("Use field access instead!")]] int& dyn_hashBlockPos();
    // Get instance field reference: private System.Int32 mainBlockPos
    [[deprecated("Use field access instead!")]] int& dyn_mainBlockPos();
    // Get instance field reference: private System.Int64 hashBlockCount
    [[deprecated("Use field access instead!")]] int64_t& dyn_hashBlockCount();
    // Get instance field reference: private System.Int64 mainBlockCount
    [[deprecated("Use field access instead!")]] int64_t& dyn_mainBlockCount();
    // Get instance field reference: private System.Byte[] OffsetHASH
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_OffsetHASH();
    // Get instance field reference: private System.Byte[] Sum
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Sum();
    // Get instance field reference: private System.Byte[] OffsetMAIN
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_OffsetMAIN();
    // Get instance field reference: private System.Byte[] Checksum
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Checksum();
    // Get instance field reference: private System.Byte[] macBlock
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_macBlock();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher hashCipher, Org.BouncyCastle.Crypto.IBlockCipher mainCipher)
    // Offset: 0x1E38380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OcbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OcbBlockCipher*, creationType>(hashCipher, mainCipher)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E3874C
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // protected System.Int32 ProcessNonce(System.Byte[] N)
    // Offset: 0x1E38EAC
    int ProcessNonce(::ArrayW<uint8_t> N);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E390F8
    int GetBlockSize();
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x1E39100
    int GetOutputSize(int len);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x1E39128
    int GetUpdateOutputSize(int len);
    // public System.Void ProcessAadBytes(System.Byte[] input, System.Int32 off, System.Int32 len)
    // Offset: 0x1E39160
    void ProcessAadBytes(::ArrayW<uint8_t> input, int off, int len);
    // public System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E39230
    int ProcessBytes(::ArrayW<uint8_t> input, int inOff, int len, ::ArrayW<uint8_t> output, int outOff);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E3932C
    int DoFinal(::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E39800
    void Reset();
    // protected System.Void Clear(System.Byte[] bs)
    // Offset: 0x1E39814
    void Clear(::ArrayW<uint8_t> bs);
    // protected System.Byte[] GetLSub(System.Int32 n)
    // Offset: 0x1E39830
    ::ArrayW<uint8_t> GetLSub(int n);
    // protected System.Void ProcessHashBlock()
    // Offset: 0x1E39B18
    void ProcessHashBlock();
    // protected System.Void ProcessMainBlock(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E39BC8
    void ProcessMainBlock(::ArrayW<uint8_t> output, int outOff);
    // protected System.Void Reset(System.Boolean clearMac)
    // Offset: 0x1E39DA4
    void Reset(bool clearMac);
    // protected System.Void UpdateHASH(System.Byte[] LSub)
    // Offset: 0x1E39FA8
    void UpdateHASH(::ArrayW<uint8_t> LSub);
    // static protected System.Byte[] OCB_double(System.Byte[] block)
    // Offset: 0x1E38E04
    static ::ArrayW<uint8_t> OCB_double(::ArrayW<uint8_t> block);
    // static protected System.Void OCB_extend(System.Byte[] block, System.Int32 pos)
    // Offset: 0x1E39730
    static void OCB_extend(::ArrayW<uint8_t> block, int pos);
    // static protected System.Int32 OCB_ntz(System.Int64 x)
    // Offset: 0x1E39B94
    static int OCB_ntz(int64_t x);
    // static protected System.Int32 ShiftLeft(System.Byte[] block, System.Byte[] output)
    // Offset: 0x1E3A0A0
    static int ShiftLeft(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> output);
    // static protected System.Void Xor(System.Byte[] block, System.Byte[] val)
    // Offset: 0x1E3979C
    static void Xor(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> val);
  }; // Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(OcbBlockCipher), 168 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Modes_OcbBlockCipherSizeCheck;
  static_assert(sizeof(OcbBlockCipher) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessNonce
// Il2CppName: ProcessNonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessNonce)> {
  static const MethodInfo* get() {
    static auto* N = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "ProcessNonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{N});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadBytes
// Il2CppName: ProcessAadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "ProcessAadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Clear)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetLSub
// Il2CppName: GetLSub
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetLSub)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "GetLSub", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessHashBlock
// Il2CppName: ProcessHashBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessHashBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "ProcessHashBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessMainBlock
// Il2CppName: ProcessMainBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessMainBlock)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "ProcessMainBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(bool)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset)> {
  static const MethodInfo* get() {
    static auto* clearMac = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearMac});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::UpdateHASH
// Il2CppName: UpdateHASH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::UpdateHASH)> {
  static const MethodInfo* get() {
    static auto* LSub = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "UpdateHASH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{LSub});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_double
// Il2CppName: OCB_double
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_double)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "OCB_double", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_extend
// Il2CppName: OCB_extend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_extend)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "OCB_extend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, pos});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_ntz
// Il2CppName: OCB_ntz
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_ntz)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "OCB_ntz", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ShiftLeft
// Il2CppName: ShiftLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ShiftLeft)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "ShiftLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Xor
// Il2CppName: Xor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Xor)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* val = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*), "Xor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, val});
  }
};
