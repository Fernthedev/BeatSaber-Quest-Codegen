// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
  // [TokenAttribute] Offset: FFFFFFFF
  class RipeMD320Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.Int32 H0
    // Size: 0x4
    // Offset: 0x28
    int H0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H1
    // Size: 0x4
    // Offset: 0x2C
    int H1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H2
    // Size: 0x4
    // Offset: 0x30
    int H2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H3
    // Size: 0x4
    // Offset: 0x34
    int H3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H4
    // Size: 0x4
    // Offset: 0x38
    int H4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H5
    // Size: 0x4
    // Offset: 0x3C
    int H5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H6
    // Size: 0x4
    // Offset: 0x40
    int H6;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H7
    // Size: 0x4
    // Offset: 0x44
    int H7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H8
    // Size: 0x4
    // Offset: 0x48
    int H8;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H9
    // Size: 0x4
    // Offset: 0x4C
    int H9;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] X
    // Size: 0x8
    // Offset: 0x50
    ::Array<int>* X;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x58
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RipeMD320Digest
    RipeMD320Digest(int H0_ = {}, int H1_ = {}, int H2_ = {}, int H3_ = {}, int H4_ = {}, int H5_ = {}, int H6_ = {}, int H7_ = {}, int H8_ = {}, int H9_ = {}, ::Array<int>* X_ = {}, int xOff_ = {}) noexcept : H0{H0_}, H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, H5{H5_}, H6{H6_}, H7{H7_}, H8{H8_}, H9{H9_}, X{X_}, xOff{xOff_} {}
    // Get instance field reference: private System.Int32 H0
    int& dyn_H0();
    // Get instance field reference: private System.Int32 H1
    int& dyn_H1();
    // Get instance field reference: private System.Int32 H2
    int& dyn_H2();
    // Get instance field reference: private System.Int32 H3
    int& dyn_H3();
    // Get instance field reference: private System.Int32 H4
    int& dyn_H4();
    // Get instance field reference: private System.Int32 H5
    int& dyn_H5();
    // Get instance field reference: private System.Int32 H6
    int& dyn_H6();
    // Get instance field reference: private System.Int32 H7
    int& dyn_H7();
    // Get instance field reference: private System.Int32 H8
    int& dyn_H8();
    // Get instance field reference: private System.Int32 H9
    int& dyn_H9();
    // Get instance field reference: private System.Int32[] X
    ::Array<int>*& dyn_X();
    // Get instance field reference: private System.Int32 xOff
    int& dyn_xOff();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.RipeMD320Digest t)
    // Offset: 0x1927F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD320Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD320Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD320Digest t)
    // Offset: 0x1927FD4
    void CopyIn(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest* t);
    // private System.Void UnpackWord(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x19281C8
    void UnpackWord(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RL(System.Int32 x, System.Int32 n)
    // Offset: 0x19283D4
    int RL(int x, int n);
    // private System.Int32 F1(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x19283E0
    int F1(int x, int y, int z);
    // private System.Int32 F2(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x19283EC
    int F2(int x, int y, int z);
    // private System.Int32 F3(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x19283FC
    int F3(int x, int y, int z);
    // private System.Int32 F4(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1928408
    int F4(int x, int y, int z);
    // private System.Int32 F5(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1928418
    int F5(int x, int y, int z);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1927E94
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1927EE4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD320Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD320Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1927EDC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x192807C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1928144
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1928254
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1928340
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x1928424
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1929BE4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1929C44
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
  #pragma pack(pop)
  static check_size<sizeof(RipeMD320Digest), 88 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_RipeMD320DigestSizeCheck;
  static_assert(sizeof(RipeMD320Digest) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD320Digest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "RipeMD320Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::UnpackWord
// Il2CppName: UnpackWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::UnpackWord)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "UnpackWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::RL
// Il2CppName: RL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::RL)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "RL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F1
// Il2CppName: F1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "F1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F2
// Il2CppName: F2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "F2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F3
// Il2CppName: F3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "F3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F4
// Il2CppName: F4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "F4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F5
// Il2CppName: F5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::F5)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "F5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::ProcessWord)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::ProcessLength)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::RipeMD320Digest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
