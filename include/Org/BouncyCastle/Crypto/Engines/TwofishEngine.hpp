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
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.TwofishEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class TwofishEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x10
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypting and: gMDS0
    char __padding0[0x7] = {};
    // private System.Int32[] gMDS0
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* gMDS0;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] gMDS1
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* gMDS1;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] gMDS2
    // Size: 0x8
    // Offset: 0x28
    ::Array<int>* gMDS2;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] gMDS3
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* gMDS3;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] gSubKeys
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* gSubKeys;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] gSBox
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* gSBox;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 k64Cnt
    // Size: 0x4
    // Offset: 0x48
    int k64Cnt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: k64Cnt and: workingKey
    char __padding7[0x4] = {};
    // private System.Byte[] workingKey
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: TwofishEngine
    TwofishEngine(bool encrypting_ = {}, ::Array<int>* gMDS0_ = {}, ::Array<int>* gMDS1_ = {}, ::Array<int>* gMDS2_ = {}, ::Array<int>* gMDS3_ = {}, ::Array<int>* gSubKeys_ = {}, ::Array<int>* gSBox_ = {}, int k64Cnt_ = {}, ::Array<uint8_t>* workingKey_ = {}) noexcept : encrypting{encrypting_}, gMDS0{gMDS0_}, gMDS1{gMDS1_}, gMDS2{gMDS2_}, gMDS3{gMDS3_}, gSubKeys{gSubKeys_}, gSBox{gSBox_}, k64Cnt{k64Cnt_}, workingKey{workingKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[,] P
    static ::Array<uint8_t>* _get_P();
    // Set static field: static private readonly System.Byte[,] P
    static void _set_P(::Array<uint8_t>* value);
    // Get instance field reference: private System.Boolean encrypting
    bool& dyn_encrypting();
    // Get instance field reference: private System.Int32[] gMDS0
    ::Array<int>*& dyn_gMDS0();
    // Get instance field reference: private System.Int32[] gMDS1
    ::Array<int>*& dyn_gMDS1();
    // Get instance field reference: private System.Int32[] gMDS2
    ::Array<int>*& dyn_gMDS2();
    // Get instance field reference: private System.Int32[] gMDS3
    ::Array<int>*& dyn_gMDS3();
    // Get instance field reference: private System.Int32[] gSubKeys
    ::Array<int>*& dyn_gSubKeys();
    // Get instance field reference: private System.Int32[] gSBox
    ::Array<int>*& dyn_gSBox();
    // Get instance field reference: private System.Int32 k64Cnt
    int& dyn_k64Cnt();
    // Get instance field reference: private System.Byte[] workingKey
    ::Array<uint8_t>*& dyn_workingKey();
    // public System.String get_AlgorithmName()
    // Offset: 0x190E21C
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x190E264
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x190F0E0
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x190D6F4
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x190E26C
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x190E8A0
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x190E8B0
    int GetBlockSize();
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x190D870
    void SetKey(::Array<uint8_t>* key);
    // private System.Void EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x190E390
    void EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // private System.Void DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x190E618
    void DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // private System.Int32 F32(System.Int32 x, System.Int32[] k32)
    // Offset: 0x190E9D4
    int F32(int x, ::Array<int>* k32);
    // private System.Int32 RS_MDS_Encode(System.Int32 k0, System.Int32 k1)
    // Offset: 0x190E934
    int RS_MDS_Encode(int k0, int k1);
    // private System.Int32 RS_rem(System.Int32 x)
    // Offset: 0x190F068
    int RS_rem(int x);
    // private System.Int32 LFSR1(System.Int32 x)
    // Offset: 0x190F0A8
    int LFSR1(int x);
    // private System.Int32 LFSR2(System.Int32 x)
    // Offset: 0x190F0BC
    int LFSR2(int x);
    // private System.Int32 Mx_X(System.Int32 x)
    // Offset: 0x190D698
    int Mx_X(int x);
    // private System.Int32 Mx_Y(System.Int32 x)
    // Offset: 0x190D6C0
    int Mx_Y(int x);
    // private System.Int32 M_b0(System.Int32 x)
    // Offset: 0x190EE84
    int M_b0(int x);
    // private System.Int32 M_b1(System.Int32 x)
    // Offset: 0x190EE8C
    int M_b1(int x);
    // private System.Int32 M_b2(System.Int32 x)
    // Offset: 0x190EE94
    int M_b2(int x);
    // private System.Int32 M_b3(System.Int32 x)
    // Offset: 0x190EE9C
    int M_b3(int x);
    // private System.Int32 Fe32_0(System.Int32 x)
    // Offset: 0x190EEA4
    int Fe32_0(int x);
    // private System.Int32 Fe32_3(System.Int32 x)
    // Offset: 0x190EF3C
    int Fe32_3(int x);
    // private System.Int32 BytesTo32Bits(System.Byte[] b, System.Int32 p)
    // Offset: 0x190E8B8
    int BytesTo32Bits(::Array<uint8_t>* b, int p);
    // private System.Void Bits32ToBytes(System.Int32 inData, System.Byte[] b, System.Int32 offset)
    // Offset: 0x190EFDC
    void Bits32ToBytes(int inData, ::Array<uint8_t>* b, int offset);
    // public System.Void .ctor()
    // Offset: 0x190D304
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwofishEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::TwofishEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwofishEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.TwofishEngine
  #pragma pack(pop)
  static check_size<sizeof(TwofishEngine), 80 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Engines_TwofishEngineSizeCheck;
  static_assert(sizeof(TwofishEngine) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::TwofishEngine*, "Org.BouncyCastle.Crypto.Engines", "TwofishEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::F32
// Il2CppName: F32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int, ::Array<int>*)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::F32)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k32 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "F32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, k32});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::RS_MDS_Encode
// Il2CppName: RS_MDS_Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::RS_MDS_Encode)> {
  static const MethodInfo* get() {
    static auto* k0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* k1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "RS_MDS_Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k0, k1});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::RS_rem
// Il2CppName: RS_rem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::RS_rem)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "RS_rem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::LFSR1
// Il2CppName: LFSR1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::LFSR1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "LFSR1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::LFSR2
// Il2CppName: LFSR2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::LFSR2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "LFSR2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Mx_X
// Il2CppName: Mx_X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Mx_X)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Mx_X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Mx_Y
// Il2CppName: Mx_Y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Mx_Y)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Mx_Y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b0
// Il2CppName: M_b0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "M_b0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b1
// Il2CppName: M_b1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "M_b1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b2
// Il2CppName: M_b2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "M_b2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b3
// Il2CppName: M_b3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::M_b3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "M_b3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Fe32_0
// Il2CppName: Fe32_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Fe32_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Fe32_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Fe32_3
// Il2CppName: Fe32_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Fe32_3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Fe32_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::BytesTo32Bits
// Il2CppName: BytesTo32Bits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::BytesTo32Bits)> {
  static const MethodInfo* get() {
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "BytesTo32Bits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::Bits32ToBytes
// Il2CppName: Bits32ToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TwofishEngine::*)(int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TwofishEngine::Bits32ToBytes)> {
  static const MethodInfo* get() {
    static auto* inData = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TwofishEngine*), "Bits32ToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inData, b, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TwofishEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
