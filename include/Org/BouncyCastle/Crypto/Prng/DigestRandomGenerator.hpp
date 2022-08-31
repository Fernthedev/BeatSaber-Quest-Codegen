// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Prng.IRandomGenerator
#include "Org/BouncyCastle/Crypto/Prng/IRandomGenerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Prng
namespace Org::BouncyCastle::Crypto::Prng {
  // Forward declaring type: DigestRandomGenerator
  class DigestRandomGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "DigestRandomGenerator");
// Type namespace: Org.BouncyCastle.Crypto.Prng
namespace Org::BouncyCastle::Crypto::Prng {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class DigestRandomGenerator : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*/ {
    public:
    public:
    // private System.Int64 stateCounter
    // Size: 0x8
    // Offset: 0x10
    int64_t stateCounter;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 seedCounter
    // Size: 0x8
    // Offset: 0x18
    int64_t seedCounter;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private System.Byte[] state
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> state;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] seed
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> seed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator
    operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(this);
    }
    // Creating interface conversion operator: i_IRandomGenerator
    inline ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* i_IRandomGenerator() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(this);
    }
    // Get instance field reference: private System.Int64 stateCounter
    [[deprecated("Use field access instead!")]] int64_t& dyn_stateCounter();
    // Get instance field reference: private System.Int64 seedCounter
    [[deprecated("Use field access instead!")]] int64_t& dyn_seedCounter();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IDigest digest
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private System.Byte[] state
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_state();
    // Get instance field reference: private System.Byte[] seed
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_seed();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x15FD75C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestRandomGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestRandomGenerator*, creationType>(digest)));
    }
    // public System.Void AddSeedMaterial(System.Byte[] inSeed)
    // Offset: 0x15FD8D0
    void AddSeedMaterial(::ArrayW<uint8_t> inSeed);
    // public System.Void AddSeedMaterial(System.Int64 rSeed)
    // Offset: 0x15FDB08
    void AddSeedMaterial(int64_t rSeed);
    // public System.Void NextBytes(System.Byte[] bytes)
    // Offset: 0x15FDCAC
    void NextBytes(::ArrayW<uint8_t> bytes);
    // public System.Void NextBytes(System.Byte[] bytes, System.Int32 start, System.Int32 len)
    // Offset: 0x15FDCC8
    void NextBytes(::ArrayW<uint8_t> bytes, int start, int len);
    // private System.Void CycleSeed()
    // Offset: 0x15FDEA8
    void CycleSeed();
    // private System.Void GenerateState()
    // Offset: 0x15FDE24
    void GenerateState();
    // private System.Void DigestAddCounter(System.Int64 seedVal)
    // Offset: 0x15FDBA4
    void DigestAddCounter(int64_t seedVal);
    // private System.Void DigestUpdate(System.Byte[] inSeed)
    // Offset: 0x15FD96C
    void DigestUpdate(::ArrayW<uint8_t> inSeed);
    // private System.Void DigestDoFinal(System.Byte[] result)
    // Offset: 0x15FDA40
    void DigestDoFinal(::ArrayW<uint8_t> result);
  }; // Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
  #pragma pack(pop)
  static check_size<sizeof(DigestRandomGenerator), 48 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Prng_DigestRandomGeneratorSizeCheck;
  static_assert(sizeof(DigestRandomGenerator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial
// Il2CppName: AddSeedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial)> {
  static const MethodInfo* get() {
    static auto* inSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "AddSeedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inSeed});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial
// Il2CppName: AddSeedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(int64_t)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial)> {
  static const MethodInfo* get() {
    static auto* rSeed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "AddSeedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rSeed});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes
// Il2CppName: NextBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "NextBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes
// Il2CppName: NextBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "NextBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, start, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::CycleSeed
// Il2CppName: CycleSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)()>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::CycleSeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "CycleSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::GenerateState
// Il2CppName: GenerateState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)()>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::GenerateState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "GenerateState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestAddCounter
// Il2CppName: DigestAddCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(int64_t)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestAddCounter)> {
  static const MethodInfo* get() {
    static auto* seedVal = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "DigestAddCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seedVal});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestUpdate
// Il2CppName: DigestUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestUpdate)> {
  static const MethodInfo* get() {
    static auto* inSeed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "DigestUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inSeed});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestDoFinal
// Il2CppName: DigestDoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestDoFinal)> {
  static const MethodInfo* get() {
    static auto* result = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*), "DigestDoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
