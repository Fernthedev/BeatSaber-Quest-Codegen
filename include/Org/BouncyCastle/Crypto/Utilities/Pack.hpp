// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Utilities
namespace Org::BouncyCastle::Crypto::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Utilities.Pack
  // [TokenAttribute] Offset: FFFFFFFF
  class Pack : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Pack
    Pack() noexcept {}
    // static System.Void UInt32_To_BE(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x128943C
    static void UInt32_To_BE(uint n, ::Array<uint8_t>* bs, int off);
    // static System.Void UInt32_To_BE(System.UInt32[] ns, System.Byte[] bs, System.Int32 off)
    // Offset: 0x12894C8
    static void UInt32_To_BE(::Array<uint>* ns, ::Array<uint8_t>* bs, int off);
    // static System.UInt32 BE_To_UInt32(System.Byte[] bs)
    // Offset: 0x1289554
    static uint BE_To_UInt32(::Array<uint8_t>* bs);
    // static System.UInt32 BE_To_UInt32(System.Byte[] bs, System.Int32 off)
    // Offset: 0x12895B8
    static uint BE_To_UInt32(::Array<uint8_t>* bs, int off);
    // static System.Void BE_To_UInt32(System.Byte[] bs, System.Int32 off, System.UInt32[] ns)
    // Offset: 0x1289638
    static void BE_To_UInt32(::Array<uint8_t>* bs, int off, ::Array<uint>* ns);
    // static public System.Void BE_To_UInt32(System.Byte[] bs, System.Int32 bsOff, System.UInt32[] ns, System.Int32 nsOff, System.Int32 nsLen)
    // Offset: 0x12896C0
    static void BE_To_UInt32(::Array<uint8_t>* bs, int bsOff, ::Array<uint>* ns, int nsOff, int nsLen);
    // static System.Void UInt64_To_BE(System.UInt64 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1289764
    static void UInt64_To_BE(uint64_t n, ::Array<uint8_t>* bs, int off);
    // static System.UInt64 BE_To_UInt64(System.Byte[] bs)
    // Offset: 0x12897A4
    static uint64_t BE_To_UInt64(::Array<uint8_t>* bs);
    // static System.UInt64 BE_To_UInt64(System.Byte[] bs, System.Int32 off)
    // Offset: 0x12897DC
    static uint64_t BE_To_UInt64(::Array<uint8_t>* bs, int off);
    // static System.Byte[] UInt32_To_LE(System.UInt32 n)
    // Offset: 0x1289820
    static ::Array<uint8_t>* UInt32_To_LE(uint n);
    // static System.Void UInt32_To_LE(System.UInt32 n, System.Byte[] bs)
    // Offset: 0x1289918
    static void UInt32_To_LE(uint n, ::Array<uint8_t>* bs);
    // static System.Void UInt32_To_LE(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x128988C
    static void UInt32_To_LE(uint n, ::Array<uint8_t>* bs, int off);
    // static System.Void UInt32_To_LE(System.UInt32[] ns, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1289978
    static void UInt32_To_LE(::Array<uint>* ns, ::Array<uint8_t>* bs, int off);
    // static System.UInt32 LE_To_UInt32(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1289A04
    static uint LE_To_UInt32(::Array<uint8_t>* bs, int off);
    // static System.Void LE_To_UInt32(System.Byte[] bs, System.Int32 bOff, System.UInt32[] ns, System.Int32 nOff, System.Int32 count)
    // Offset: 0x1289A84
    static void LE_To_UInt32(::Array<uint8_t>* bs, int bOff, ::Array<uint>* ns, int nOff, int count);
    // static System.UInt32[] LE_To_UInt32(System.Byte[] bs, System.Int32 off, System.Int32 count)
    // Offset: 0x1289B28
    static ::Array<uint>* LE_To_UInt32(::Array<uint8_t>* bs, int off, int count);
    // static System.Byte[] UInt64_To_LE(System.UInt64 n)
    // Offset: 0x1289BF0
    static ::Array<uint8_t>* UInt64_To_LE(uint64_t n);
    // static System.Void UInt64_To_LE(System.UInt64 n, System.Byte[] bs)
    // Offset: 0x127CAB0
    static void UInt64_To_LE(uint64_t n, ::Array<uint8_t>* bs);
    // static System.Void UInt64_To_LE(System.UInt64 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1289C6C
    static void UInt64_To_LE(uint64_t n, ::Array<uint8_t>* bs, int off);
    // static System.Void UInt64_To_LE(System.UInt64[] ns, System.Int32 nsOff, System.Int32 nsLen, System.Byte[] bs, System.Int32 bsOff)
    // Offset: 0x1289CA8
    static void UInt64_To_LE(::Array<uint64_t>* ns, int nsOff, int nsLen, ::Array<uint8_t>* bs, int bsOff);
    // static System.UInt64 LE_To_UInt64(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1289D64
    static uint64_t LE_To_UInt64(::Array<uint8_t>* bs, int off);
  }; // Org.BouncyCastle.Crypto.Utilities.Pack
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE
// Il2CppName: UInt32_To_BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt32_To_BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE
// Il2CppName: UInt32_To_BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_BE)> {
  static const MethodInfo* get() {
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt32_To_BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32
// Il2CppName: BE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "BE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32
// Il2CppName: BE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "BE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32
// Il2CppName: BE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, ::Array<uint>*)>(&Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "BE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, off, ns});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32
// Il2CppName: BE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, ::Array<uint>*, int, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bsOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* nsOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nsLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "BE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, bsOff, ns, nsOff, nsLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE
// Il2CppName: UInt64_To_BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_BE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt64_To_BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64
// Il2CppName: BE_To_UInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "BE_To_UInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64
// Il2CppName: BE_To_UInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::BE_To_UInt64)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "BE_To_UInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE
// Il2CppName: UInt32_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(uint)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt32_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE
// Il2CppName: UInt32_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt32_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE
// Il2CppName: UInt32_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt32_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE
// Il2CppName: UInt32_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt32_To_LE)> {
  static const MethodInfo* get() {
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt32_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32
// Il2CppName: LE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "LE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32
// Il2CppName: LE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, ::Array<uint>*, int, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* nOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "LE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, bOff, ns, nOff, count});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32
// Il2CppName: LE_To_UInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt32)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "LE_To_UInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, off, count});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE
// Il2CppName: UInt64_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt64_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE
// Il2CppName: UInt64_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt64_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE
// Il2CppName: UInt64_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt64_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, bs, off});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE
// Il2CppName: UInt64_To_LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::UInt64_To_LE)> {
  static const MethodInfo* get() {
    static auto* ns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* nsOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nsLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bsOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "UInt64_To_LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns, nsOff, nsLen, bs, bsOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt64
// Il2CppName: LE_To_UInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Utilities::Pack::LE_To_UInt64)> {
  static const MethodInfo* get() {
    static auto* bs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Utilities::Pack*), "LE_To_UInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bs, off});
  }
};
