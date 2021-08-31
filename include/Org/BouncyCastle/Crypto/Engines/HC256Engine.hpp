// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IStreamCipher
#include "Org/BouncyCastle/Crypto/IStreamCipher.hpp"
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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.HC256Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class HC256Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IStreamCipher*/ {
    public:
    // private System.UInt32[] p
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* p;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] q
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint>* q;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32 cnt
    // Size: 0x4
    // Offset: 0x20
    uint cnt;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: cnt and: key
    char __padding2[0x4] = {};
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] iv
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* iv;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean initialised
    // Size: 0x1
    // Offset: 0x38
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialised and: buf
    char __padding5[0x7] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 idx
    // Size: 0x4
    // Offset: 0x48
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HC256Engine
    HC256Engine(::Array<uint>* p_ = {}, ::Array<uint>* q_ = {}, uint cnt_ = {}, ::Array<uint8_t>* key_ = {}, ::Array<uint8_t>* iv_ = {}, bool initialised_ = {}, ::Array<uint8_t>* buf_ = {}, int idx_ = {}) noexcept : p{p_}, q{q_}, cnt{cnt_}, key{key_}, iv{iv_}, initialised{initialised_}, buf{buf_}, idx{idx_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher
    operator Org::BouncyCastle::Crypto::IStreamCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IStreamCipher*>(this);
    }
    // Get instance field: private System.UInt32[] p
    ::Array<uint>* _get_p();
    // Set instance field: private System.UInt32[] p
    void _set_p(::Array<uint>* value);
    // Get instance field: private System.UInt32[] q
    ::Array<uint>* _get_q();
    // Set instance field: private System.UInt32[] q
    void _set_q(::Array<uint>* value);
    // Get instance field: private System.UInt32 cnt
    uint _get_cnt();
    // Set instance field: private System.UInt32 cnt
    void _set_cnt(uint value);
    // Get instance field: private System.Byte[] key
    ::Array<uint8_t>* _get_key();
    // Set instance field: private System.Byte[] key
    void _set_key(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] iv
    ::Array<uint8_t>* _get_iv();
    // Set instance field: private System.Byte[] iv
    void _set_iv(::Array<uint8_t>* value);
    // Get instance field: private System.Boolean initialised
    bool _get_initialised();
    // Set instance field: private System.Boolean initialised
    void _set_initialised(bool value);
    // Get instance field: private System.Byte[] buf
    ::Array<uint8_t>* _get_buf();
    // Set instance field: private System.Byte[] buf
    void _set_buf(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 idx
    int _get_idx();
    // Set instance field: private System.Int32 idx
    void _set_idx(int value);
    // public System.String get_AlgorithmName()
    // Offset: 0x1E740C0
    ::Il2CppString* get_AlgorithmName();
    // private System.UInt32 Step()
    // Offset: 0x1E73AD0
    uint Step();
    // private System.Void Init()
    // Offset: 0x1E73D40
    void Init();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E74108
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Byte GetByte()
    // Offset: 0x1E742D8
    uint8_t GetByte();
    // public System.Void ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E74358
    void ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E744F8
    void Reset();
    // static private System.UInt32 RotateRight(System.UInt32 x, System.Int32 bits)
    // Offset: 0x1E73D38
    static uint RotateRight(uint x, int bits);
    // public System.Void .ctor()
    // Offset: 0x1E744FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HC256Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::HC256Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HC256Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.HC256Engine
  #pragma pack(pop)
  static check_size<sizeof(HC256Engine), 72 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_HC256EngineSizeCheck;
  static_assert(sizeof(HC256Engine) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::HC256Engine*, "Org.BouncyCastle.Crypto.Engines", "HC256Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::Step
// Il2CppName: Step
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::Step)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "Step", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::GetByte
// Il2CppName: GetByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::GetByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "GetByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, len, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::HC256Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Crypto::Engines::HC256Engine::RotateRight)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::HC256Engine*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, bits});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::HC256Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
