// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Forward declaring type: Interleave
  class Interleave;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Interleave);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Interleave*, "Org.BouncyCastle.Math.Raw", "Interleave");
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Interleave
  // [TokenAttribute] Offset: FFFFFFFF
  class Interleave : public ::Il2CppObject {
    public:
    // static System.UInt32 Expand8to16(System.UInt32 x)
    // Offset: 0x2325E6C
    static uint Expand8to16(uint x);
    // static System.UInt64 Expand32to64(System.UInt32 x)
    // Offset: 0x2325E8C
    static uint64_t Expand32to64(uint x);
    // static System.Void Expand64To128(System.UInt64 x, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x2325EE4
    static void Expand64To128(uint64_t x, ::ArrayW<uint64_t> z, int zOff);
    // static System.UInt32 Shuffle2(System.UInt32 x)
    // Offset: 0x2321C00
    static uint Shuffle2(uint x);
    // static System.UInt64 Unshuffle(System.UInt64 x)
    // Offset: 0x2325F98
    static uint64_t Unshuffle(uint64_t x);
  }; // Org.BouncyCastle.Math.Raw.Interleave
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Interleave::Expand8to16
// Il2CppName: Expand8to16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Math::Raw::Interleave::Expand8to16)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Interleave*), "Expand8to16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Interleave::Expand32to64
// Il2CppName: Expand32to64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint)>(&Org::BouncyCastle::Math::Raw::Interleave::Expand32to64)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Interleave*), "Expand32to64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Interleave::Expand64To128
// Il2CppName: Expand64To128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint64_t>, int)>(&Org::BouncyCastle::Math::Raw::Interleave::Expand64To128)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Interleave*), "Expand64To128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Interleave::Shuffle2
// Il2CppName: Shuffle2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Math::Raw::Interleave::Shuffle2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Interleave*), "Shuffle2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Interleave::Unshuffle
// Il2CppName: Unshuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Math::Raw::Interleave::Unshuffle)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Interleave*), "Unshuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
