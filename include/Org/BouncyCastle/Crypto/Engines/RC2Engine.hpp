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
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC2Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class RC2Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x18
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RC2Engine
    RC2Engine(::Array<int>* workingKey_ = {}, bool encrypting_ = {}) noexcept : workingKey{workingKey_}, encrypting{encrypting_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] piTable
    static ::Array<uint8_t>* _get_piTable();
    // Set static field: static private readonly System.Byte[] piTable
    static void _set_piTable(::Array<uint8_t>* value);
    // Get instance field reference: private System.Int32[] workingKey
    ::Array<int>*& dyn_workingKey();
    // Get instance field reference: private System.Boolean encrypting
    bool& dyn_encrypting();
    // public System.String get_AlgorithmName()
    // Offset: 0x1E77564
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1E775AC
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x1E78050
    static void _cctor();
    // private System.Int32[] GenerateWorkingKey(System.Byte[] key, System.Int32 bits)
    // Offset: 0x1E770B0
    ::Array<int>* GenerateWorkingKey(::Array<uint8_t>* key, int bits);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E773E4
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void Reset()
    // Offset: 0x1E77560
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E775B4
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E775BC
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // private System.Int32 RotateWordLeft(System.Int32 x, System.Int32 y)
    // Offset: 0x1E78034
    int RotateWordLeft(int x, int y);
    // private System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E776E0
    void EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E77BCC
    void DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void .ctor()
    // Offset: 0x1E780CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RC2Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RC2Engine
  #pragma pack(pop)
  static check_size<sizeof(RC2Engine), 24 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_RC2EngineSizeCheck;
  static_assert(sizeof(RC2Engine) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC2Engine*, "Org.BouncyCastle.Crypto.Engines", "RC2Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::GenerateWorkingKey
// Il2CppName: GenerateWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::GenerateWorkingKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "GenerateWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::RotateWordLeft
// Il2CppName: RotateWordLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)(int, int)>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::RotateWordLeft)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "RotateWordLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RC2Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::RC2Engine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RC2Engine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RC2Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
