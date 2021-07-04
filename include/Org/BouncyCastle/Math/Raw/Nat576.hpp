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
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat576
  class Nat576 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat576
    Nat576() noexcept {}
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x1341D08
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x1341E28
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt64[] Create64()
    // Offset: 0x1341FF8
    static ::Array<uint64_t>* Create64();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x1342044
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x1342090
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x1342100
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x134216C
    static bool IsZero64(::Array<uint64_t>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x13421CC
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat576
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat576*, "Org.BouncyCastle.Math.Raw", "Nat576");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat576::Copy64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Copy64
// Il2CppName: Copy64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint64_t>*, int, ::Array<uint64_t>*, int)>(&Org::BouncyCastle::Math::Raw::Nat576::Copy64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Copy64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Create64
// Il2CppName: Create64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat576::Create64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Create64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::CreateExt64
// Il2CppName: CreateExt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint64_t>* (*)()>(&Org::BouncyCastle::Math::Raw::Nat576::CreateExt64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "CreateExt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::Eq64
// Il2CppName: Eq64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat576::Eq64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "Eq64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::IsOne64
// Il2CppName: IsOne64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat576::IsOne64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "IsOne64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::IsZero64
// Il2CppName: IsZero64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat576::IsZero64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "IsZero64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat576::ToBigInteger64
// Il2CppName: ToBigInteger64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Math::Raw::Nat576::ToBigInteger64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat576*), "ToBigInteger64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint64_t>*>()});
  }
};
