// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC6Engine
  class RC6Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] _S
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* S;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC6Engine
    RC6Engine(::Array<int>* S_ = {}, bool forEncryption_ = {}) noexcept : S{S_}, forEncryption{forEncryption_} {}
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
    // Get static field: static private readonly System.Int32 _noRounds
    static int _get__noRounds();
    // Set static field: static private readonly System.Int32 _noRounds
    static void _set__noRounds(int value);
    // Get static field: static private readonly System.Int32 P32
    static int _get_P32();
    // Set static field: static private readonly System.Int32 P32
    static void _set_P32(int value);
    // Get static field: static private readonly System.Int32 Q32
    static int _get_Q32();
    // Set static field: static private readonly System.Int32 Q32
    static void _set_Q32(int value);
    // Get static field: static private readonly System.Int32 LGW
    static int _get_LGW();
    // Set static field: static private readonly System.Int32 LGW
    static void _set_LGW(int value);
    // public System.String get_AlgorithmName()
    // Offset: 0x1DA7F2C
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1DA7F74
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1DA7F7C
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1DA7FE8
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1DA8458
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1DA8BFC
    void Reset();
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x1DA8140
    void SetKey(::Array<uint8_t>* key);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1DA88C0
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1DA8594
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RotateLeft(System.Int32 x, System.Int32 y)
    // Offset: 0x1DA8C00
    int RotateLeft(int x, int y);
    // private System.Int32 RotateRight(System.Int32 x, System.Int32 y)
    // Offset: 0x1DA8E38
    int RotateRight(int x, int y);
    // private System.Int32 BytesToWord(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x1DA8C90
    int BytesToWord(::Array<uint8_t>* src, int srcOff);
    // private System.Void WordToBytes(System.Int32 word, System.Byte[] dst, System.Int32 dstOff)
    // Offset: 0x1DA8D58
    void WordToBytes(int word, ::Array<uint8_t>* dst, int dstOff);
    // static private System.Void .cctor()
    // Offset: 0x1DA8EC8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DA7F24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC6Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RC6Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC6Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RC6Engine
  #pragma pack(pop)
  static check_size<sizeof(RC6Engine), 24 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_RC6EngineSizeCheck;
  static_assert(sizeof(RC6Engine) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC6Engine*, "Org.BouncyCastle.Crypto.Engines", "RC6Engine");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::get_IsPartialBlockOkay)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::GetBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::ICipherParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::ProcessBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::SetKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::EncryptBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::DecryptBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::RotateLeft)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::RotateRight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::BytesToWord
// Il2CppName: BytesToWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::BytesToWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "BytesToWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::WordToBytes
// Il2CppName: WordToBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC6Engine::*)(int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::WordToBytes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), "WordToBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::RC6Engine::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC6Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC6Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
