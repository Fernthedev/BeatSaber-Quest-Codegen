// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Arrays
  // [TokenAttribute] Offset: FFFFFFFF
  class Arrays : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Arrays
    Arrays() noexcept {}
    // Get static field: static public readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static public readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // Get static field: static public readonly System.Int32[] EmptyInts
    static ::Array<int>* _get_EmptyInts();
    // Set static field: static public readonly System.Int32[] EmptyInts
    static void _set_EmptyInts(::Array<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x13D82D4
    static void _cctor();
    // static public System.Boolean AreEqual(System.Byte[] a, System.Byte[] b)
    // Offset: 0x13C7868
    static bool AreEqual(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static public System.Boolean ConstantTimeAreEqual(System.Byte[] a, System.Byte[] b)
    // Offset: 0x13D7594
    static bool ConstantTimeAreEqual(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static public System.Boolean ConstantTimeAreEqual(System.Int32 len, System.Byte[] a, System.Int32 aOff, System.Byte[] b, System.Int32 bOff)
    // Offset: 0x13D76B8
    static bool ConstantTimeAreEqual(int len, ::Array<uint8_t>* a, int aOff, ::Array<uint8_t>* b, int bOff);
    // static public System.Boolean AreEqual(System.Int32[] a, System.Int32[] b)
    // Offset: 0x13D78AC
    static bool AreEqual(::Array<int>* a, ::Array<int>* b);
    // static public System.Boolean AreEqual(System.UInt32[] a, System.UInt32[] b)
    // Offset: 0x13D79C0
    static bool AreEqual(::Array<uint>* a, ::Array<uint>* b);
    // static private System.Boolean HaveSameContents(System.Byte[] a, System.Byte[] b)
    // Offset: 0x13D751C
    static bool HaveSameContents(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static private System.Boolean HaveSameContents(System.Int32[] a, System.Int32[] b)
    // Offset: 0x13D7948
    static bool HaveSameContents(::Array<int>* a, ::Array<int>* b);
    // static private System.Boolean HaveSameContents(System.UInt32[] a, System.UInt32[] b)
    // Offset: 0x13D7A5C
    static bool HaveSameContents(::Array<uint>* a, ::Array<uint>* b);
    // static public System.Int32 GetHashCode(System.Byte[] data)
    // Offset: 0x13D7AD4
    static int GetHashCode(::Array<uint8_t>* data);
    // static public System.Int32 GetHashCode(System.Int32[] data)
    // Offset: 0x13D7B34
    static int GetHashCode(::Array<int>* data);
    // static public System.Int32 GetHashCode(System.UInt32[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x13D7B94
    static int GetHashCode(::Array<uint>* data, int off, int len);
    // static public System.Int32 GetHashCode(System.UInt64[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x13D7BF0
    static int GetHashCode(::Array<uint64_t>* data, int off, int len);
    // static public System.Byte[] Clone(System.Byte[] data)
    // Offset: 0x13D7C54
    static ::Array<uint8_t>* Clone(::Array<uint8_t>* data);
    // static public System.Int32[] Clone(System.Int32[] data)
    // Offset: 0x13D7CD4
    static ::Array<int>* Clone(::Array<int>* data);
    // static public System.UInt32[] Clone(System.UInt32[] data)
    // Offset: 0x13D7D54
    static ::Array<uint>* Clone(::Array<uint>* data);
    // static public System.Int64[] Clone(System.Int64[] data)
    // Offset: 0x13D7DD4
    static ::Array<int64_t>* Clone(::Array<int64_t>* data);
    // static public System.UInt64[] Clone(System.UInt64[] data)
    // Offset: 0x13D7E54
    static ::Array<uint64_t>* Clone(::Array<uint64_t>* data);
    // static public System.Boolean Contains(System.Byte[] a, System.Byte n)
    // Offset: 0x13D7ED4
    static bool Contains(::Array<uint8_t>* a, uint8_t n);
    // static public System.Void Fill(System.Byte[] buf, System.Byte b)
    // Offset: 0x13D7F38
    static void Fill(::Array<uint8_t>* buf, uint8_t b);
    // static public System.Void Fill(System.Byte[] buf, System.Int32 from, System.Int32 to, System.Byte b)
    // Offset: 0x13D7FA0
    static void Fill(::Array<uint8_t>* buf, int from, int to, uint8_t b);
    // static public System.Byte[] CopyOfRange(System.Byte[] data, System.Int32 from, System.Int32 to)
    // Offset: 0x13D7FFC
    static ::Array<uint8_t>* CopyOfRange(::Array<uint8_t>* data, int from, int to);
    // static private System.Int32 GetLength(System.Int32 from, System.Int32 to)
    // Offset: 0x13D80F4
    static int GetLength(int from, int to);
    // static public System.Byte[] Prepend(System.Byte[] a, System.Byte b)
    // Offset: 0x13D81CC
    static ::Array<uint8_t>* Prepend(::Array<uint8_t>* a, uint8_t b);
    // static public System.Byte[] Reverse(System.Byte[] a)
    // Offset: 0x13C9498
    static ::Array<uint8_t>* Reverse(::Array<uint8_t>* a);
    // static public System.Boolean IsNullOrContainsNull(System.Object[] array)
    // Offset: 0x13D8298
    static bool IsNullOrContainsNull(::Array<::Il2CppObject*>* array);
  }; // Org.BouncyCastle.Utilities.Arrays
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Utilities::Arrays::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Arrays::AreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::ConstantTimeAreEqual
// Il2CppName: ConstantTimeAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Arrays::ConstantTimeAreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "ConstantTimeAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::ConstantTimeAreEqual
// Il2CppName: ConstantTimeAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Utilities::Arrays::ConstantTimeAreEqual)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* aOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "ConstantTimeAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len, a, aOff, b, bOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<int>*, ::Array<int>*)>(&Org::BouncyCastle::Utilities::Arrays::AreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Utilities::Arrays::AreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::HaveSameContents
// Il2CppName: HaveSameContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Arrays::HaveSameContents)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "HaveSameContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::HaveSameContents
// Il2CppName: HaveSameContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<int>*, ::Array<int>*)>(&Org::BouncyCastle::Utilities::Arrays::HaveSameContents)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "HaveSameContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::HaveSameContents
// Il2CppName: HaveSameContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Utilities::Arrays::HaveSameContents)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "HaveSameContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Arrays::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<int>*)>(&Org::BouncyCastle::Utilities::Arrays::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint>*, int, int)>(&Org::BouncyCastle::Utilities::Arrays::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint64_t>*, int, int)>(&Org::BouncyCastle::Utilities::Arrays::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Arrays::Clone)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (*)(::Array<int>*)>(&Org::BouncyCastle::Utilities::Arrays::Clone)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint>* (*)(::Array<uint>*)>(&Org::BouncyCastle::Utilities::Arrays::Clone)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int64_t>* (*)(::Array<int64_t>*)>(&Org::BouncyCastle::Utilities::Arrays::Clone)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Utilities::Arrays::Clone)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, uint8_t)>(&Org::BouncyCastle::Utilities::Arrays::Contains)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Fill
// Il2CppName: Fill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, uint8_t)>(&Org::BouncyCastle::Utilities::Arrays::Fill)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Fill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Fill
// Il2CppName: Fill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, int, int, uint8_t)>(&Org::BouncyCastle::Utilities::Arrays::Fill)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Fill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, from, to, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::CopyOfRange
// Il2CppName: CopyOfRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Utilities::Arrays::CopyOfRange)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "CopyOfRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, from, to});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Org::BouncyCastle::Utilities::Arrays::GetLength)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Prepend
// Il2CppName: Prepend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, uint8_t)>(&Org::BouncyCastle::Utilities::Arrays::Prepend)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Prepend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::Reverse
// Il2CppName: Reverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Arrays::Reverse)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "Reverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Arrays::IsNullOrContainsNull
// Il2CppName: IsNullOrContainsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<::Il2CppObject*>*)>(&Org::BouncyCastle::Utilities::Arrays::IsNullOrContainsNull)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Arrays*), "IsNullOrContainsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
