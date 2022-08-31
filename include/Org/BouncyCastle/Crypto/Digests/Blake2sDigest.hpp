// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Forward declaring type: Blake2sDigest
  class Blake2sDigest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2sDigest");
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Blake2sDigest
  // [TokenAttribute] Offset: FFFFFFFF
  class Blake2sDigest : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IDigest*/ {
    public:
    public:
    // private System.Int32 digestLength
    // Size: 0x4
    // Offset: 0x10
    int digestLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyLength
    // Size: 0x4
    // Offset: 0x14
    int keyLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] salt
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> salt;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] personalization
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> personalization;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufferPos
    // Size: 0x4
    // Offset: 0x38
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferPos and: internalState
    char __padding6[0x4] = {};
    // private System.UInt32[] internalState
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint> internalState;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] chainValue
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint> chainValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32 t0
    // Size: 0x4
    // Offset: 0x50
    uint t0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 t1
    // Size: 0x4
    // Offset: 0x54
    uint t1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 f0
    // Size: 0x4
    // Offset: 0x58
    uint f0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IDigest
    operator ::Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: i_IDigest
    inline ::Org::BouncyCastle::Crypto::IDigest* i_IDigest() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Get static field: static private readonly System.UInt32[] blake2s_IV
    static ::ArrayW<uint> _get_blake2s_IV();
    // Set static field: static private readonly System.UInt32[] blake2s_IV
    static void _set_blake2s_IV(::ArrayW<uint> value);
    // Get static field: static private readonly System.Byte[,] blake2s_sigma
    static ::ArrayW<uint8_t> _get_blake2s_sigma();
    // Set static field: static private readonly System.Byte[,] blake2s_sigma
    static void _set_blake2s_sigma(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Int32 digestLength
    [[deprecated("Use field access instead!")]] int& dyn_digestLength();
    // Get instance field reference: private System.Int32 keyLength
    [[deprecated("Use field access instead!")]] int& dyn_keyLength();
    // Get instance field reference: private System.Byte[] salt
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_salt();
    // Get instance field reference: private System.Byte[] personalization
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_personalization();
    // Get instance field reference: private System.Byte[] key
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_key();
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.Int32 bufferPos
    [[deprecated("Use field access instead!")]] int& dyn_bufferPos();
    // Get instance field reference: private System.UInt32[] internalState
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_internalState();
    // Get instance field reference: private System.UInt32[] chainValue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_chainValue();
    // Get instance field reference: private System.UInt32 t0
    [[deprecated("Use field access instead!")]] uint& dyn_t0();
    // Get instance field reference: private System.UInt32 t1
    [[deprecated("Use field access instead!")]] uint& dyn_t1();
    // Get instance field reference: private System.UInt32 f0
    [[deprecated("Use field access instead!")]] uint& dyn_f0();
    // public System.String get_AlgorithmName()
    // Offset: 0x22A81AC
    ::StringW get_AlgorithmName();
    // public System.Void .ctor(System.Int32 digestBits)
    // Offset: 0x22A703C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Blake2sDigest* New_ctor(int digestBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Digests::Blake2sDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Blake2sDigest*, creationType>(digestBits)));
    }
    // static private System.Void .cctor()
    // Offset: 0x22A8204
    static void _cctor();
    // private System.Void Init()
    // Offset: 0x22A7144
    void Init();
    // private System.Void InitializeInternalState()
    // Offset: 0x22A74B8
    void InitializeInternalState();
    // public System.Void Update(System.Byte b)
    // Offset: 0x22A766C
    void Update(uint8_t b);
    // public System.Void BlockUpdate(System.Byte[] message, System.Int32 offset, System.Int32 len)
    // Offset: 0x22A7CBC
    void BlockUpdate(::ArrayW<uint8_t> message, int offset, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOffset)
    // Offset: 0x22A7E00
    int DoFinal(::ArrayW<uint8_t> output, int outOffset);
    // public System.Void Reset()
    // Offset: 0x22A7F44
    void Reset();
    // private System.Void Compress(System.Byte[] message, System.Int32 messagePos)
    // Offset: 0x22A7730
    void Compress(::ArrayW<uint8_t> message, int messagePos);
    // private System.Void G(System.UInt32 m1, System.UInt32 m2, System.Int32 posA, System.Int32 posB, System.Int32 posC, System.Int32 posD)
    // Offset: 0x22A7FB4
    void G(uint m1, uint m2, int posA, int posB, int posC, int posD);
    // private System.UInt32 rotr32(System.UInt32 x, System.Int32 rot)
    // Offset: 0x22A81A4
    uint rotr32(uint x, int rot);
    // public System.Int32 GetDigestSize()
    // Offset: 0x22A81F4
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x22A81FC
    int GetByteLength();
  }; // Org.BouncyCastle.Crypto.Digests.Blake2sDigest
  #pragma pack(pop)
  static check_size<sizeof(Blake2sDigest), 88 + sizeof(uint)> __Org_BouncyCastle_Crypto_Digests_Blake2sDigestSizeCheck;
  static_assert(sizeof(Blake2sDigest) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::InitializeInternalState
// Il2CppName: InitializeInternalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::InitializeInternalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "InitializeInternalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Update)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, offset, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOffset});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Compress
// Il2CppName: Compress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::Compress)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* messagePos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "Compress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, messagePos});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(uint, uint, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::G)> {
  static const MethodInfo* get() {
    static auto* m1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* m2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* posA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* posB = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* posC = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* posD = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m1, m2, posA, posB, posC, posD});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::rotr32
// Il2CppName: rotr32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)(uint, int)>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::rotr32)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "rotr32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, rot});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Blake2sDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::Blake2sDigest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
