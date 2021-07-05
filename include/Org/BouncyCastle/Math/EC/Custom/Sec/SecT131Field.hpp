// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field
  class SecT131Field : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecT131Field
    SecT131Field() noexcept {}
    // Get static field: static private readonly System.UInt64[] ROOT_Z
    static ::Array<uint64_t>* _get_ROOT_Z();
    // Set static field: static private readonly System.UInt64[] ROOT_Z
    static void _set_ROOT_Z(::Array<uint64_t>* value);
    // static public System.Void Add(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1E41444
    static void Add(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void AddExt(System.UInt64[] xx, System.UInt64[] yy, System.UInt64[] zz)
    // Offset: 0x1E414F8
    static void AddExt(::Array<uint64_t>* xx, ::Array<uint64_t>* yy, ::Array<uint64_t>* zz);
    // static public System.Void AddOne(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E4160C
    static void AddOne(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static private System.Void AddTo(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E41688
    static void AddTo(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.UInt64[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1E41718
    static ::Array<uint64_t>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void HalfTrace(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E41728
    static void HalfTrace(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Invert(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E41990
    static void Invert(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Multiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] z)
    // Offset: 0x1E41BEC
    static void Multiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* z);
    // static public System.Void MultiplyAddToExt(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1E420AC
    static void MultiplyAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static public System.Void Reduce(System.UInt64[] xx, System.UInt64[] z)
    // Offset: 0x1E418A4
    static void Reduce(::Array<uint64_t>* xx, ::Array<uint64_t>* z);
    // static public System.Void Sqrt(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E42148
    static void Sqrt(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Square(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1E41B58
    static void Square(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void SquareAddToExt(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1E422A4
    static void SquareAddToExt(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static public System.Void SquareN(System.UInt64[] x, System.Int32 n, System.UInt64[] z)
    // Offset: 0x1E41C84
    static void SquareN(::Array<uint64_t>* x, int n, ::Array<uint64_t>* z);
    // static public System.UInt32 Trace(System.UInt64[] x)
    // Offset: 0x1E4233C
    static uint Trace(::Array<uint64_t>* x);
    // static protected System.Void ImplCompactExt(System.UInt64[] zz)
    // Offset: 0x1E42390
    static void ImplCompactExt(::Array<uint64_t>* zz);
    // static protected System.Void ImplMultiply(System.UInt64[] x, System.UInt64[] y, System.UInt64[] zz)
    // Offset: 0x1E41D70
    static void ImplMultiply(::Array<uint64_t>* x, ::Array<uint64_t>* y, ::Array<uint64_t>* zz);
    // static protected System.Void ImplMulw(System.UInt64 x, System.UInt64 y, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x1E4242C
    static void ImplMulw(uint64_t x, uint64_t y, ::Array<uint64_t>* z, int zOff);
    // static protected System.Void ImplSquare(System.UInt64[] x, System.UInt64[] zz)
    // Offset: 0x1E41808
    static void ImplSquare(::Array<uint64_t>* x, ::Array<uint64_t>* zz);
    // static private System.Void .cctor()
    // Offset: 0x1E42620
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT131Field");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Add)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::AddExt
// Il2CppName: AddExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::AddExt)> {
  const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* yy = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "AddExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, yy, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::AddOne
// Il2CppName: AddOne
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::AddOne)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "AddOne", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::AddTo
// Il2CppName: AddTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::AddTo)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "AddTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::FromBigInteger
// Il2CppName: FromBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::FromBigInteger)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "FromBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::HalfTrace
// Il2CppName: HalfTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::HalfTrace)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "HalfTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Invert
// Il2CppName: Invert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Invert)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Invert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Multiply)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::MultiplyAddToExt
// Il2CppName: MultiplyAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::MultiplyAddToExt)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "MultiplyAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Reduce)> {
  const MethodInfo* get() {
    static auto* xx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xx, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Sqrt
// Il2CppName: Sqrt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Sqrt)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Sqrt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Square)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::SquareAddToExt
// Il2CppName: SquareAddToExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::SquareAddToExt)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "SquareAddToExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::SquareN
// Il2CppName: SquareN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::SquareN)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "SquareN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::Trace)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplCompactExt
// Il2CppName: ImplCompactExt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplCompactExt)> {
  const MethodInfo* get() {
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "ImplCompactExt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplMultiply
// Il2CppName: ImplMultiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplMultiply)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* y = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "ImplMultiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplMulw
// Il2CppName: ImplMulw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint64_t, ::Array<uint64_t>*, int)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplMulw)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "ImplMulw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, zOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplSquare
// Il2CppName: ImplSquare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::ImplSquare)> {
  const MethodInfo* get() {
    static auto* x = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* zz = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), "ImplSquare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, zz});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
