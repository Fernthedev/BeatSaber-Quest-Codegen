// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IHashCodeProvider
  // [ObsoleteAttribute] Offset: D7FE9C
  // [ComVisibleAttribute] Offset: D7FE9C
  class IHashCodeProvider {
    public:
    // Creating value type constructor for type: IHashCodeProvider
    IHashCodeProvider() noexcept {}
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.IHashCodeProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IHashCodeProvider*, "System.Collections", "IHashCodeProvider");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Collections::IHashCodeProvider::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::IHashCodeProvider::*)(::Il2CppObject*)>(&System::Collections::IHashCodeProvider::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IHashCodeProvider*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
