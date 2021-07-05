// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Integers
  class Integers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Integers
    Integers() noexcept {}
    // static public System.Int32 NumberOfLeadingZeros(System.Int32 i)
    // Offset: 0x1F8C99C
    static int NumberOfLeadingZeros(int i);
    // static public System.Int32 NumberOfTrailingZeros(System.Int32 i)
    // Offset: 0x1F8CA18
    static int NumberOfTrailingZeros(int i);
    // static public System.Int32 RotateLeft(System.Int32 i, System.Int32 distance)
    // Offset: 0x1F8CA4C
    static int RotateLeft(int i, int distance);
    // static public System.UInt32 RotateLeft(System.UInt32 i, System.Int32 distance)
    // Offset: 0x1F8CA60
    static uint RotateLeft(uint i, int distance);
  }; // Org.BouncyCastle.Utilities.Integers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Integers*, "Org.BouncyCastle.Utilities", "Integers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Integers::NumberOfLeadingZeros
// Il2CppName: NumberOfLeadingZeros
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Org::BouncyCastle::Utilities::Integers::NumberOfLeadingZeros)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Integers*), "NumberOfLeadingZeros", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Integers::NumberOfTrailingZeros
// Il2CppName: NumberOfTrailingZeros
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Org::BouncyCastle::Utilities::Integers::NumberOfTrailingZeros)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Integers*), "NumberOfTrailingZeros", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Integers::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Org::BouncyCastle::Utilities::Integers::RotateLeft)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Integers*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, distance});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Integers::RotateLeft
// Il2CppName: RotateLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&Org::BouncyCastle::Utilities::Integers::RotateLeft)> {
  const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Integers*), "RotateLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, distance});
  }
};
