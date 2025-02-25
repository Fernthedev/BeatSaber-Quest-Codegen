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
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Cast5Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class Cast5Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] _Kr
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* Kr;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.UInt32[] _Km
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* Km;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Boolean _encrypting
    // Size: 0x1
    // Offset: 0x20
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypting and: workingKey
    char __padding2[0x7] = {};
    // private System.Byte[] _workingKey
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _rounds
    // Size: 0x4
    // Offset: 0x30
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Cast5Engine
    Cast5Engine(::Array<int>* Kr_ = {}, ::Array<uint>* Km_ = {}, bool encrypting_ = {}, ::Array<uint8_t>* workingKey_ = {}, int rounds_ = {}) noexcept : Kr{Kr_}, Km{Km_}, encrypting{encrypting_}, workingKey{workingKey_}, rounds{rounds_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] S1
    static ::Array<uint>* _get_S1();
    // Set static field: static private readonly System.UInt32[] S1
    static void _set_S1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S2
    static ::Array<uint>* _get_S2();
    // Set static field: static private readonly System.UInt32[] S2
    static void _set_S2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S3
    static ::Array<uint>* _get_S3();
    // Set static field: static private readonly System.UInt32[] S3
    static void _set_S3(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S4
    static ::Array<uint>* _get_S4();
    // Set static field: static private readonly System.UInt32[] S4
    static void _set_S4(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S5
    static ::Array<uint>* _get_S5();
    // Set static field: static private readonly System.UInt32[] S5
    static void _set_S5(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S6
    static ::Array<uint>* _get_S6();
    // Set static field: static private readonly System.UInt32[] S6
    static void _set_S6(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S7
    static ::Array<uint>* _get_S7();
    // Set static field: static private readonly System.UInt32[] S7
    static void _set_S7(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S8
    static ::Array<uint>* _get_S8();
    // Set static field: static private readonly System.UInt32[] S8
    static void _set_S8(::Array<uint>* value);
    // Get static field: static readonly System.Int32 MAX_ROUNDS
    static int _get_MAX_ROUNDS();
    // Set static field: static readonly System.Int32 MAX_ROUNDS
    static void _set_MAX_ROUNDS(int value);
    // Get static field: static readonly System.Int32 RED_ROUNDS
    static int _get_RED_ROUNDS();
    // Set static field: static readonly System.Int32 RED_ROUNDS
    static void _set_RED_ROUNDS(int value);
    // Get instance field reference: private System.Int32[] _Kr
    ::Array<int>*& dyn__Kr();
    // Get instance field reference: private System.UInt32[] _Km
    ::Array<uint>*& dyn__Km();
    // Get instance field reference: private System.Boolean _encrypting
    bool& dyn__encrypting();
    // Get instance field reference: private System.Byte[] _workingKey
    ::Array<uint8_t>*& dyn__workingKey();
    // Get instance field reference: private System.Int32 _rounds
    int& dyn__rounds();
    // public System.String get_AlgorithmName()
    // Offset: 0x1E6B500
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1E6B548
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x1E6FC64
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E6B370
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E6B550
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E6B6A4
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1E6B6A8
    int GetBlockSize();
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x1E6B6B0
    void SetKey(::Array<uint8_t>* key);
    // System.Int32 EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x1E6F230
    int EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // System.Int32 DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x1E6F58C
    int DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // static System.UInt32 F1(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x1E6F904
    static uint F1(uint D, uint Kmi, int Kri);
    // static System.UInt32 F2(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x1E6FA24
    static uint F2(uint D, uint Kmi, int Kri);
    // static System.UInt32 F3(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x1E6FB44
    static uint F3(uint D, uint Kmi, int Kri);
    // System.Void CAST_Encipher(System.UInt32 L0, System.UInt32 R0, System.UInt32[] result)
    // Offset: 0x1E6F33C
    void CAST_Encipher(uint L0, uint R0, ::Array<uint>* result);
    // System.Void CAST_Decipher(System.UInt32 L16, System.UInt32 R16, System.UInt32[] result)
    // Offset: 0x1E6F698
    void CAST_Decipher(uint L16, uint R16, ::Array<uint>* result);
    // static System.Void Bits32ToInts(System.UInt32 inData, System.Int32[] b, System.Int32 offset)
    // Offset: 0x1E6F1A0
    static void Bits32ToInts(uint inData, ::Array<int>* b, int offset);
    // static System.UInt32 IntsTo32bits(System.Int32[] b, System.Int32 i)
    // Offset: 0x1E6F11C
    static uint IntsTo32bits(::Array<int>* b, int i);
    // public System.Void .ctor()
    // Offset: 0x1E6B2C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cast5Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::Cast5Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cast5Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.Cast5Engine
  #pragma pack(pop)
  static check_size<sizeof(Cast5Engine), 48 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_Cast5EngineSizeCheck;
  static_assert(sizeof(Cast5Engine) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Cast5Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast5Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, srcIndex, dst, dstIndex});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::F1
// Il2CppName: F1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::F1)> {
  static const MethodInfo* get() {
    static auto* D = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Kmi = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Kri = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "F1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{D, Kmi, Kri});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::F2
// Il2CppName: F2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::F2)> {
  static const MethodInfo* get() {
    static auto* D = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Kmi = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Kri = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "F2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{D, Kmi, Kri});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::F3
// Il2CppName: F3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::F3)> {
  static const MethodInfo* get() {
    static auto* D = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Kmi = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Kri = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "F3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{D, Kmi, Kri});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::CAST_Encipher
// Il2CppName: CAST_Encipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(uint, uint, ::Array<uint>*)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::CAST_Encipher)> {
  static const MethodInfo* get() {
    static auto* L0 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* R0 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* result = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "CAST_Encipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{L0, R0, result});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::CAST_Decipher
// Il2CppName: CAST_Decipher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::Cast5Engine::*)(uint, uint, ::Array<uint>*)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::CAST_Decipher)> {
  static const MethodInfo* get() {
    static auto* L16 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* R16 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* result = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "CAST_Decipher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{L16, R16, result});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::Bits32ToInts
// Il2CppName: Bits32ToInts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::Array<int>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::Bits32ToInts)> {
  static const MethodInfo* get() {
    static auto* inData = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "Bits32ToInts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inData, b, offset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::IntsTo32bits
// Il2CppName: IntsTo32bits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<int>*, int)>(&Org::BouncyCastle::Crypto::Engines::Cast5Engine::IntsTo32bits)> {
  static const MethodInfo* get() {
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::Cast5Engine*), "IntsTo32bits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, i});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::Cast5Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
