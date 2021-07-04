// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat384
  class Nat384 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat384
    Nat384() noexcept {}
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x13413A8
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x13414E4
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
  }; // Org.BouncyCastle.Math.Raw.Nat384
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat384*, "Org.BouncyCastle.Math.Raw", "Nat384");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat384::Mul
// Il2CppName: Mul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat384::Mul)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat384*), "Mul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::Raw::Nat384::Square
// Il2CppName: Square
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint>*, ::Array<uint>*)>(&Org::BouncyCastle::Math::Raw::Nat384::Square)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::Raw::Nat384*), "Square", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint>*>()});
  }
};
