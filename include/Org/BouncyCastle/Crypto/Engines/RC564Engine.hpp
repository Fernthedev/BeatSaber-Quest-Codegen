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
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC564Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class RC564Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32 _noRounds
    // Size: 0x4
    // Offset: 0x10
    int noRounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: noRounds and: S
    char __padding0[0x4] = {};
    // private System.Int64[] _S
    // Size: 0x8
    // Offset: 0x18
    ::Array<int64_t>* S;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC564Engine
    RC564Engine(int noRounds_ = {}, ::Array<int64_t>* S_ = {}, bool forEncryption_ = {}) noexcept : noRounds{noRounds_}, S{S_}, forEncryption{forEncryption_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32 wordSize
    static int _get_wordSize();
    // Set static field: static private readonly System.Int32 wordSize
    static void _set_wordSize(int value);
    // Get static field: static private readonly System.Int32 bytesPerWord
    static int _get_bytesPerWord();
    // Set static field: static private readonly System.Int32 bytesPerWord
    static void _set_bytesPerWord(int value);
    // Get static field: static private readonly System.Int64 P64
    static int64_t _get_P64();
    // Set static field: static private readonly System.Int64 P64
    static void _set_P64(int64_t value);
    // Get static field: static private readonly System.Int64 Q64
    static int64_t _get_Q64();
    // Set static field: static private readonly System.Int64 Q64
    static void _set_Q64(int64_t value);
    // Get instance field reference: private System.Int32 _noRounds
    int& dyn__noRounds();
    // Get instance field reference: private System.Int64[] _S
    ::Array<int64_t>*& dyn__S();
    // Get instance field reference: private System.Boolean forEncryption
    bool& dyn_forEncryption();
    // public System.String get_AlgorithmName()
    // Offset: 0x1E78F68
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1E78FB0
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x1E79B28
    static void _cctor();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E78FB8
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E79024
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E794B8
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E7985C
    void Reset();
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x1E791C0
    void SetKey(::Array<uint8_t>* key);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E79690
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E794C8
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int64 RotateLeft(System.Int64 x, System.Int64 y)
    // Offset: 0x1E79860
    int64_t RotateLeft(int64_t x, int64_t y);
    // private System.Int64 RotateRight(System.Int64 x, System.Int64 y)
    // Offset: 0x1E79A98
    int64_t RotateRight(int64_t x, int64_t y);
    // private System.Int64 BytesToWord(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x1E798F0
    int64_t BytesToWord(::Array<uint8_t>* src, int srcOff);
    // private System.Void WordToBytes(System.Int64 word, System.Byte[] dst, System.Int32 dstOff)
    // Offset: 0x1E799B8
    void WordToBytes(int64_t word, ::Array<uint8_t>* dst, int dstOff);
    // public System.Void .ctor()
    // Offset: 0x1E78F3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC564Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RC564Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC564Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RC564Engine
  #pragma pack(pop)
  static check_size<sizeof(RC564Engine), 32 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_RC564EngineSizeCheck;
  static_assert(sizeof(RC564Engine) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC564Engine*, "Org.BouncyCastle.Crypto.Engines", "RC564Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateLeft)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::RotateRight)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::BytesToWord
// Il2CppName: BytesToWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::BytesToWord)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "BytesToWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::WordToBytes
// Il2CppName: WordToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC564Engine::*)(int64_t, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC564Engine::WordToBytes)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC564Engine*), "WordToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, dst, dstOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC564Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
