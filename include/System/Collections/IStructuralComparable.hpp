// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IStructuralComparable
  class IStructuralComparable {
    public:
    // Creating value type constructor for type: IStructuralComparable
    IStructuralComparable() noexcept {}
    // public System.Int32 CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFF
    int CompareTo(::Il2CppObject* other, System::Collections::IComparer* comparer);
  }; // System.Collections.IStructuralComparable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IStructuralComparable*, "System.Collections", "IStructuralComparable");
// Writing includes for template specializations
#include "System/Collections/IComparer.hpp"
// Writing MetadataGetter for method: System::Collections::IStructuralComparable::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::IStructuralComparable::*)(::Il2CppObject*, System::Collections::IComparer*)>(&System::Collections::IStructuralComparable::CompareTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IStructuralComparable*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::IComparer*>()});
  }
};
