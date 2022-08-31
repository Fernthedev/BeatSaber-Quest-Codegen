// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Math.BigInteger
#include "Mono/Math/BigInteger_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::BigInteger_::ModulusRing);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::BigInteger_::ModulusRing*, "Mono.Math", "BigInteger/ModulusRing");
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger/Mono.Math.ModulusRing
  // [TokenAttribute] Offset: FFFFFFFF
  class BigInteger_::ModulusRing : public ::Il2CppObject {
    public:
    public:
    // private Mono.Math.BigInteger mod
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Math::BigInteger_* mod;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    // private Mono.Math.BigInteger constant
    // Size: 0x8
    // Offset: 0x18
    ::Mono::Math::BigInteger_* constant;
    // Field size check
    static_assert(sizeof(::Mono::Math::BigInteger_*) == 0x8);
    public:
    // Get instance field reference: private Mono.Math.BigInteger mod
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_mod();
    // Get instance field reference: private Mono.Math.BigInteger constant
    [[deprecated("Use field access instead!")]] ::Mono::Math::BigInteger_*& dyn_constant();
    // public System.Void .ctor(Mono.Math.BigInteger modulus)
    // Offset: 0x1F6E7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BigInteger_::ModulusRing* New_ctor(::Mono::Math::BigInteger_* modulus) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Math::BigInteger_::ModulusRing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BigInteger_::ModulusRing*, creationType>(modulus)));
    }
    // public System.Void BarrettReduction(Mono.Math.BigInteger x)
    // Offset: 0x1F6F648
    void BarrettReduction(::Mono::Math::BigInteger_* x);
    // public Mono.Math.BigInteger Multiply(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
    // Offset: 0x1F6F8B8
    ::Mono::Math::BigInteger_* Multiply(::Mono::Math::BigInteger_* a, ::Mono::Math::BigInteger_* b);
    // public Mono.Math.BigInteger Difference(Mono.Math.BigInteger a, Mono.Math.BigInteger b)
    // Offset: 0x1F6F438
    ::Mono::Math::BigInteger_* Difference(::Mono::Math::BigInteger_* a, ::Mono::Math::BigInteger_* b);
    // public Mono.Math.BigInteger Pow(Mono.Math.BigInteger a, Mono.Math.BigInteger k)
    // Offset: 0x1F6E8D0
    ::Mono::Math::BigInteger_* Pow(::Mono::Math::BigInteger_* a, ::Mono::Math::BigInteger_* k);
    // public Mono.Math.BigInteger Pow(System.UInt32 b, Mono.Math.BigInteger exp)
    // Offset: 0x1F6FA88
    ::Mono::Math::BigInteger_* Pow(uint b, ::Mono::Math::BigInteger_* exp);
  }; // Mono.Math.BigInteger/Mono.Math.ModulusRing
  #pragma pack(pop)
  static check_size<sizeof(BigInteger_::ModulusRing), 24 + sizeof(::Mono::Math::BigInteger_*)> __Mono_Math_BigInteger__ModulusRingSizeCheck;
  static_assert(sizeof(BigInteger_::ModulusRing) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModulusRing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModulusRing::BarrettReduction
// Il2CppName: BarrettReduction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Math::BigInteger_::ModulusRing::*)(::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModulusRing::BarrettReduction)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_::ModulusRing*), "BarrettReduction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModulusRing::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::BigInteger_::ModulusRing::*)(::Mono::Math::BigInteger_*, ::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModulusRing::Multiply)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_::ModulusRing*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModulusRing::Difference
// Il2CppName: Difference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::BigInteger_::ModulusRing::*)(::Mono::Math::BigInteger_*, ::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModulusRing::Difference)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_::ModulusRing*), "Difference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModulusRing::Pow
// Il2CppName: Pow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::BigInteger_::ModulusRing::*)(::Mono::Math::BigInteger_*, ::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModulusRing::Pow)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_::ModulusRing*), "Pow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, k});
  }
};
// Writing MetadataGetter for method: Mono::Math::BigInteger_::ModulusRing::Pow
// Il2CppName: Pow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger_* (Mono::Math::BigInteger_::ModulusRing::*)(uint, ::Mono::Math::BigInteger_*)>(&Mono::Math::BigInteger_::ModulusRing::Pow)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* exp = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::BigInteger_::ModulusRing*), "Pow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, exp});
  }
};
