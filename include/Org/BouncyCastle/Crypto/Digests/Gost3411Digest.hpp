// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
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
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3411Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Byte[] H
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* H;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] L
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* L;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] M
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* M;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] Sum
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* Sum;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[][] C
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Array<uint8_t>*>* C;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // private System.Byte[] xBuf
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* xBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 xBufOff
    // Size: 0x4
    // Offset: 0x40
    int xBufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: xBufOff and: byteCount
    char __padding6[0x4] = {};
    // private System.UInt64 byteCount
    // Size: 0x8
    // Offset: 0x48
    uint64_t byteCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private System.Byte[] sBox
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* sBox;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] K
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* K;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] a
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* a;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int16[] wS
    // Size: 0x8
    // Offset: 0x70
    ::Array<int16_t>* wS;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // System.Int16[] w_S
    // Size: 0x8
    // Offset: 0x78
    ::Array<int16_t>* w_S;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // System.Byte[] S
    // Size: 0x8
    // Offset: 0x80
    ::Array<uint8_t>* S;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Byte[] U
    // Size: 0x8
    // Offset: 0x88
    ::Array<uint8_t>* U;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Byte[] V
    // Size: 0x8
    // Offset: 0x90
    ::Array<uint8_t>* V;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Byte[] W
    // Size: 0x8
    // Offset: 0x98
    ::Array<uint8_t>* W;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Gost3411Digest
    Gost3411Digest(::Array<uint8_t>* H_ = {}, ::Array<uint8_t>* L_ = {}, ::Array<uint8_t>* M_ = {}, ::Array<uint8_t>* Sum_ = {}, ::Array<::Array<uint8_t>*>* C_ = {}, ::Array<uint8_t>* xBuf_ = {}, int xBufOff_ = {}, uint64_t byteCount_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, ::Array<uint8_t>* sBox_ = {}, ::Array<uint8_t>* K_ = {}, ::Array<uint8_t>* a_ = {}, ::Array<int16_t>* wS_ = {}, ::Array<int16_t>* w_S_ = {}, ::Array<uint8_t>* S_ = {}, ::Array<uint8_t>* U_ = {}, ::Array<uint8_t>* V_ = {}, ::Array<uint8_t>* W_ = {}) noexcept : H{H_}, L{L_}, M{M_}, Sum{Sum_}, C{C_}, xBuf{xBuf_}, xBufOff{xBufOff_}, byteCount{byteCount_}, cipher{cipher_}, sBox{sBox_}, K{K_}, a{a_}, wS{wS_}, w_S{w_S_}, S{S_}, U{U_}, V{V_}, W{W_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] C2
    static ::Array<uint8_t>* _get_C2();
    // Set static field: static private readonly System.Byte[] C2
    static void _set_C2(::Array<uint8_t>* value);
    // Get instance field reference: private System.Byte[] H
    ::Array<uint8_t>*& dyn_H();
    // Get instance field reference: private System.Byte[] L
    ::Array<uint8_t>*& dyn_L();
    // Get instance field reference: private System.Byte[] M
    ::Array<uint8_t>*& dyn_M();
    // Get instance field reference: private System.Byte[] Sum
    ::Array<uint8_t>*& dyn_Sum();
    // Get instance field reference: private System.Byte[][] C
    ::Array<::Array<uint8_t>*>*& dyn_C();
    // Get instance field reference: private System.Byte[] xBuf
    ::Array<uint8_t>*& dyn_xBuf();
    // Get instance field reference: private System.Int32 xBufOff
    int& dyn_xBufOff();
    // Get instance field reference: private System.UInt64 byteCount
    uint64_t& dyn_byteCount();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // Get instance field reference: private System.Byte[] sBox
    ::Array<uint8_t>*& dyn_sBox();
    // Get instance field reference: private System.Byte[] K
    ::Array<uint8_t>*& dyn_K();
    // Get instance field reference: private System.Byte[] a
    ::Array<uint8_t>*& dyn_a();
    // Get instance field reference: System.Int16[] wS
    ::Array<int16_t>*& dyn_wS();
    // Get instance field reference: System.Int16[] w_S
    ::Array<int16_t>*& dyn_w_S();
    // Get instance field reference: System.Byte[] S
    ::Array<uint8_t>*& dyn_S();
    // Get instance field reference: System.Byte[] U
    ::Array<uint8_t>*& dyn_U();
    // Get instance field reference: System.Byte[] V
    ::Array<uint8_t>*& dyn_V();
    // Get instance field reference: System.Byte[] W
    ::Array<uint8_t>*& dyn_W();
    // public System.String get_AlgorithmName()
    // Offset: 0x1D5E688
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Gost3411Digest t)
    // Offset: 0x1D5E224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411Digest*, creationType>(t)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D5F37C
    static void _cctor();
    // static private System.Byte[][] MakeC()
    // Offset: 0x1D5DD74
    static ::Array<::Array<uint8_t>*>* MakeC();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1D5E6D0
    int GetDigestSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1D5E6D8
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1D5EB2C
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // private System.Byte[] P(System.Byte[] input)
    // Offset: 0x1D5EC74
    ::Array<uint8_t>* P(::Array<uint8_t>* input);
    // private System.Byte[] A(System.Byte[] input)
    // Offset: 0x1D5ED94
    ::Array<uint8_t>* A(::Array<uint8_t>* input);
    // private System.Void E(System.Byte[] key, System.Byte[] s, System.Int32 sOff, System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1D5EE60
    void E(::Array<uint8_t>* key, ::Array<uint8_t>* s, int sOff, ::Array<uint8_t>* input, int inOff);
    // private System.Void fw(System.Byte[] input)
    // Offset: 0x1D5EFE4
    void fw(::Array<uint8_t>* input);
    // private System.Void processBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1D5E7F0
    void processBlock(::Array<uint8_t>* input, int inOff);
    // private System.Void finish()
    // Offset: 0x1D5F258
    void finish();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1D5F2BC
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1D5E0AC
    void Reset();
    // private System.Void sumByteArray(System.Byte[] input)
    // Offset: 0x1D5E76C
    void sumByteArray(::Array<uint8_t>* input);
    // static private System.Void cpyBytesToShort(System.Byte[] S, System.Int16[] wS)
    // Offset: 0x1D5F10C
    static void cpyBytesToShort(::Array<uint8_t>* S, ::Array<int16_t>* wS);
    // static private System.Void cpyShortToBytes(System.Int16[] wS, System.Byte[] S)
    // Offset: 0x1D5F1B0
    static void cpyShortToBytes(::Array<int16_t>* wS, ::Array<uint8_t>* S);
    // public System.Int32 GetByteLength()
    // Offset: 0x1D5F314
    int GetByteLength();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1D5F31C
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1D5E3AC
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // public System.Void .ctor()
    // Offset: 0x1D5DE54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411Digest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411Digest
  #pragma pack(pop)
  static check_size<sizeof(Gost3411Digest), 152 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Digests_Gost3411DigestSizeCheck;
  static_assert(sizeof(Gost3411Digest) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411Digest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::MakeC
// Il2CppName: MakeC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Array<uint8_t>*>* (*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::MakeC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "MakeC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::P
// Il2CppName: P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::P)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::A
// Il2CppName: A
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::A)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "A", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::E
// Il2CppName: E
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*, ::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::E)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* s = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* sOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "E", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, s, sOff, input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::fw
// Il2CppName: fw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::fw)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "fw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::processBlock
// Il2CppName: processBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::processBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "processBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::finish
// Il2CppName: finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::sumByteArray
// Il2CppName: sumByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::sumByteArray)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "sumByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyBytesToShort
// Il2CppName: cpyBytesToShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, ::Array<int16_t>*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyBytesToShort)> {
  static const MethodInfo* get() {
    static auto* S = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* wS = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "cpyBytesToShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{S, wS});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyShortToBytes
// Il2CppName: cpyShortToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<int16_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::cpyShortToBytes)> {
  static const MethodInfo* get() {
    static auto* wS = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* S = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "cpyShortToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wS, S});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Gost3411Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Gost3411Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Gost3411Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
