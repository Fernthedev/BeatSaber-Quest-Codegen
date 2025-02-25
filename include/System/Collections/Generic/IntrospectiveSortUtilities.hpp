// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.IntrospectiveSortUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class IntrospectiveSortUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IntrospectiveSortUtilities
    IntrospectiveSortUtilities() noexcept {}
    // static System.Int32 FloorLog2(System.Int32 n)
    // Offset: 0x17D3864
    static int FloorLog2(int n);
    // static System.Void ThrowOrIgnoreBadComparer(System.Object comparer)
    // Offset: 0x17D39C4
    static void ThrowOrIgnoreBadComparer(::Il2CppObject* comparer);
  }; // System.Collections.Generic.IntrospectiveSortUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::IntrospectiveSortUtilities*, "System.Collections.Generic", "IntrospectiveSortUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2
// Il2CppName: FloorLog2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::IntrospectiveSortUtilities*), "FloorLog2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer
// Il2CppName: ThrowOrIgnoreBadComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer)> {
  static const MethodInfo* get() {
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::IntrospectiveSortUtilities*), "ThrowOrIgnoreBadComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparer});
  }
};
