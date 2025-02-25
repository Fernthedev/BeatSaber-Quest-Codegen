// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.Cast5Engine
#include "Org/BouncyCastle/Crypto/Engines/Cast5Engine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Cast6Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class Cast6Engine : public Org::BouncyCastle::Crypto::Engines::Cast5Engine {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    // private System.Int32[] _Kr
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* Kr;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.UInt32[] _Km
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* Km;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Int32[] _Tr
    // Size: 0x8
    // Offset: 0x48
    ::Array<int>* Tr;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.UInt32[] _Tm
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint>* Tm;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] _workingKey
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: Cast6Engine
    Cast6Engine(::Array<int>* Kr_ = {}, ::Array<uint>* Km_ = {}, ::Array<int>* Tr_ = {}, ::Array<uint>* Tm_ = {}, ::Array<uint>* workingKey_ = {}) noexcept : Kr{Kr_}, Km{Km_}, Tr{Tr_}, Tm{Tm_}, workingKey{workingKey_} {}
    // Get instance field reference: private System.Int32[] _Kr
    ::Array<int>*& dyn__Kr();
    // Get instance field reference: private System.UInt32[] _Km
    ::Array<uint>*& dyn__Km();
    // Get instance field reference: private System.Int32[] _Tr
    ::Array<int>*& dyn__Tr();
    // Get instance field reference: private System.UInt32[] _Tm
    ::Array<uint>*& dyn__Tm();
    // Get instance field reference: private System.UInt32[] _workingKey
    ::Array<uint>*& dyn__workingKey();
    // private System.Void CAST_Encipher(System.UInt32 A, System.UInt32 B, System.UInt32 C, System.UInt32 D, System.UInt32[] result)
    // Offset: 0x1E70BA4
    void CAST_Encipher(uint A, uint B, uint C, uint D, ::Array<uint>* result);
    // private System.Void CAST_Decipher(System.UInt32 A, System.UInt32 B, System.UInt32 C, System.UInt32 D, System.UInt32[] result)
    // Offset: 0x1E710A8
    void CAST_Decipher(uint A, uint B, uint C, uint D, ::Array<uint>* result);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1E6FF1C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.String Cast5Engine::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1E6FE50
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Void Cast5Engine::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cast6Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::Cast6Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cast6Engine*, creationType>()));
    }
    // public override System.Void Reset()
    // Offset: 0x1E6FF64
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Void Cast5Engine::Reset()
    void Reset();
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1E6FF68
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Int32 Cast5Engine::GetBlockSize()
    int GetBlockSize();
    // override System.Void SetKey(System.Byte[] key)
    // Offset: 0x1E6FF70
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Void Cast5Engine::SetKey(System.Byte[] key)
    void SetKey(::Array<uint8_t>* key);
    // override System.Int32 EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x1E70A20
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Int32 Cast5Engine::EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    int EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // override System.Int32 DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x1E70F24
    // Implemented from: Org.BouncyCastle.Crypto.Engines.Cast5Engine
    // Base method: System.Int32 Cast5Engine::DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    int DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
  }; // Org.BouncyCastle.Crypto.Engines.Cast6Engine
  #pragma pack(pop)
  static check_size<sizeof(Cast6Engine), 88 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Crypto_Engines_Cast6EngineSizeCheck;
  static_assert(sizeof(Cast6Engine) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Cast6Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast6Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Encipher
// Il2CppName: CAST_Encipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(uint, uint, uint, uint, ::Array<uint>*)>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Encipher)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* C = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* D = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* result = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "CAST_Encipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, C, D, result});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Decipher
// Il2CppName: CAST_Decipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(uint, uint, uint, uint, ::Array<uint>*)>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::CAST_Decipher)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* C = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* D = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* result = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "CAST_Decipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, C, D, result});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast6Engine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast6Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast6Engine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast6Engine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
