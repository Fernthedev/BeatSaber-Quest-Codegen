// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.PathInternal
  class PathInternal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PathInternal
    PathInternal() noexcept {}
    // static public System.Boolean IsPartiallyQualified(System.String path)
    // Offset: 0x1956D68
    static bool IsPartiallyQualified(::Il2CppString* path);
    // static public System.Boolean HasIllegalCharacters(System.String path, System.Boolean checkAdditional)
    // Offset: 0x1956A2C
    static bool HasIllegalCharacters(::Il2CppString* path, bool checkAdditional);
  }; // System.IO.PathInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::PathInternal*, "System.IO", "PathInternal");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::IO::PathInternal::IsPartiallyQualified
// Il2CppName: IsPartiallyQualified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::IO::PathInternal::IsPartiallyQualified)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "IsPartiallyQualified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::HasIllegalCharacters
// Il2CppName: HasIllegalCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, bool)>(&System::IO::PathInternal::HasIllegalCharacters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "HasIllegalCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
