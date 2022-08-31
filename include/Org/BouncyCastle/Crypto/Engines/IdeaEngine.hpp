// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: IdeaEngine
  class IdeaEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::IdeaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::IdeaEngine*, "Org.BouncyCastle.Crypto.Engines", "IdeaEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.IdeaEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class IdeaEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    public:
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> workingKey;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IBlockCipher
    inline ::Org::BouncyCastle::Crypto::IBlockCipher* i_IBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<int>
    constexpr operator ::ArrayW<int>() const noexcept {
      return workingKey;
    }
    // Get static field: static private readonly System.Int32 MASK
    static int _get_MASK();
    // Set static field: static private readonly System.Int32 MASK
    static void _set_MASK(int value);
    // Get static field: static private readonly System.Int32 BASE
    static int _get_BASE();
    // Set static field: static private readonly System.Int32 BASE
    static void _set_BASE(int value);
    // Get instance field reference: private System.Int32[] workingKey
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_workingKey();
    // public System.String get_AlgorithmName()
    // Offset: 0x237BEBC
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x237BF04
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor()
    // Offset: 0x237BD4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdeaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::IdeaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdeaEngine*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x237CB40
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x237BD54
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x237BF0C
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x237BF14
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x237C2F0
    void Reset();
    // private System.Int32 BytesToWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x237C2F4
    int BytesToWord(::ArrayW<uint8_t> input, int inOff);
    // private System.Void WordToBytes(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x237C340
    void WordToBytes(int word, ::ArrayW<uint8_t> outBytes, int outOff);
    // private System.Int32 Mul(System.Int32 x, System.Int32 y)
    // Offset: 0x237C394
    int Mul(int x, int y);
    // private System.Void IdeaFunc(System.Int32[] workingKey, System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x237C018
    void IdeaFunc(::ArrayW<int> workingKey, ::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> outBytes, int outOff);
    // private System.Int32[] ExpandKey(System.Byte[] uKey)
    // Offset: 0x237C4B8
    ::ArrayW<int> ExpandKey(::ArrayW<uint8_t> uKey);
    // private System.Int32 MulInv(System.Int32 x)
    // Offset: 0x237C6B4
    int MulInv(int x);
    // private System.Int32 AddInv(System.Int32 x)
    // Offset: 0x237C7F4
    int AddInv(int x);
    // private System.Int32[] InvertKey(System.Int32[] inKey)
    // Offset: 0x237C868
    ::ArrayW<int> InvertKey(::ArrayW<int> inKey);
    // private System.Int32[] GenerateWorkingKey(System.Boolean forEncryption, System.Byte[] userKey)
    // Offset: 0x237BE84
    ::ArrayW<int> GenerateWorkingKey(bool forEncryption, ::ArrayW<uint8_t> userKey);
  }; // Org.BouncyCastle.Crypto.Engines.IdeaEngine
  #pragma pack(pop)
  static check_size<sizeof(IdeaEngine), 16 + sizeof(::ArrayW<int>)> __Org_BouncyCastle_Crypto_Engines_IdeaEngineSizeCheck;
  static_assert(sizeof(IdeaEngine) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::BytesToWord
// Il2CppName: BytesToWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::BytesToWord)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "BytesToWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::WordToBytes
// Il2CppName: WordToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::WordToBytes)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "WordToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::Mul)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::IdeaFunc
// Il2CppName: IdeaFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<int>, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::IdeaFunc)> {
  static const MethodInfo* get() {
    static auto* workingKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "IdeaFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workingKey, input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::ExpandKey
// Il2CppName: ExpandKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::ExpandKey)> {
  static const MethodInfo* get() {
    static auto* uKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "ExpandKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::MulInv
// Il2CppName: MulInv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::MulInv)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "MulInv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::AddInv
// Il2CppName: AddInv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(int)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::AddInv)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "AddInv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::InvertKey
// Il2CppName: InvertKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(::ArrayW<int>)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::InvertKey)> {
  static const MethodInfo* get() {
    static auto* inKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "InvertKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inKey});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::IdeaEngine::GenerateWorkingKey
// Il2CppName: GenerateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (Org::BouncyCastle::Crypto::Engines::IdeaEngine::*)(bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::IdeaEngine::GenerateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* userKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::IdeaEngine*), "GenerateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, userKey});
  }
};
