// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
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
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.SipHash
  // [TokenAttribute] Offset: FFFFFFFF
  class SipHash : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // protected readonly System.Int32 c
    // Size: 0x4
    // Offset: 0x10
    int c;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected readonly System.Int32 d
    // Size: 0x4
    // Offset: 0x14
    int d;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int64 k0
    // Size: 0x8
    // Offset: 0x18
    int64_t k0;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 k1
    // Size: 0x8
    // Offset: 0x20
    int64_t k1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v0
    // Size: 0x8
    // Offset: 0x28
    int64_t v0;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v1
    // Size: 0x8
    // Offset: 0x30
    int64_t v1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v2
    // Size: 0x8
    // Offset: 0x38
    int64_t v2;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 v3
    // Size: 0x8
    // Offset: 0x40
    int64_t v3;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int64 m
    // Size: 0x8
    // Offset: 0x48
    int64_t m;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // protected System.Int32 wordPos
    // Size: 0x4
    // Offset: 0x50
    int wordPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 wordCount
    // Size: 0x4
    // Offset: 0x54
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SipHash
    SipHash(int c_ = {}, int d_ = {}, int64_t k0_ = {}, int64_t k1_ = {}, int64_t v0_ = {}, int64_t v1_ = {}, int64_t v2_ = {}, int64_t v3_ = {}, int64_t m_ = {}, int wordPos_ = {}, int wordCount_ = {}) noexcept : c{c_}, d{d_}, k0{k0_}, k1{k1_}, v0{v0_}, v1{v1_}, v2{v2_}, v3{v3_}, m{m_}, wordPos{wordPos_}, wordCount{wordCount_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: protected readonly System.Int32 c
    int& dyn_c();
    // Get instance field reference: protected readonly System.Int32 d
    int& dyn_d();
    // Get instance field reference: protected System.Int64 k0
    int64_t& dyn_k0();
    // Get instance field reference: protected System.Int64 k1
    int64_t& dyn_k1();
    // Get instance field reference: protected System.Int64 v0
    int64_t& dyn_v0();
    // Get instance field reference: protected System.Int64 v1
    int64_t& dyn_v1();
    // Get instance field reference: protected System.Int64 v2
    int64_t& dyn_v2();
    // Get instance field reference: protected System.Int64 v3
    int64_t& dyn_v3();
    // Get instance field reference: protected System.Int64 m
    int64_t& dyn_m();
    // Get instance field reference: protected System.Int32 wordPos
    int& dyn_wordPos();
    // Get instance field reference: protected System.Int32 wordCount
    int& dyn_wordCount();
    // public System.Void .ctor(System.Int32 c, System.Int32 d)
    // Offset: 0x1919970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SipHash* New_ctor(int c, int d) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::SipHash::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SipHash*, creationType>(c, d)));
    }
    // public System.Int32 GetMacSize()
    // Offset: 0x19199AC
    int GetMacSize();
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x19199B4
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void Update(System.Byte input)
    // Offset: 0x1919AF8
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 offset, System.Int32 length)
    // Offset: 0x1919B48
    void BlockUpdate(::Array<uint8_t>* input, int offset, int length);
    // public System.Int64 DoFinal()
    // Offset: 0x1919D18
    int64_t DoFinal();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1919DB8
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1919E00
    void Reset();
    // protected System.Void ProcessMessageWord()
    // Offset: 0x1919E64
    void ProcessMessageWord();
    // protected System.Void ApplySipRounds(System.Int32 n)
    // Offset: 0x1919EBC
    void ApplySipRounds(int n);
    // static protected System.Int64 RotateLeft(System.Int64 x, System.Int32 n)
    // Offset: 0x1919F08
    static int64_t RotateLeft(int64_t x, int n);
    // public System.Void .ctor()
    // Offset: 0x191993C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SipHash* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::SipHash::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SipHash*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Macs.SipHash
  #pragma pack(pop)
  static check_size<sizeof(SipHash), 84 + sizeof(int)> __Org_BouncyCastle_Crypto_Macs_SipHashSizeCheck;
  static_assert(sizeof(SipHash) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::SipHash*, "Org.BouncyCastle.Crypto.Macs", "SipHash");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::SipHash::*)()>(&Org::BouncyCastle::Crypto::Macs::SipHash::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::SipHash::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::SipHash::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::SipHash::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::SipHash::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::SipHash::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Macs::SipHash::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, offset, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Crypto::Macs::SipHash::*)()>(&Org::BouncyCastle::Crypto::Macs::SipHash::DoFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::SipHash::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Macs::SipHash::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::SipHash::*)()>(&Org::BouncyCastle::Crypto::Macs::SipHash::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::ProcessMessageWord
// Il2CppName: ProcessMessageWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::SipHash::*)()>(&Org::BouncyCastle::Crypto::Macs::SipHash::ProcessMessageWord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "ProcessMessageWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::ApplySipRounds
// Il2CppName: ApplySipRounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::SipHash::*)(int)>(&Org::BouncyCastle::Crypto::Macs::SipHash::ApplySipRounds)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "ApplySipRounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int)>(&Org::BouncyCastle::Crypto::Macs::SipHash::RotateLeft)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::SipHash*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::SipHash::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
