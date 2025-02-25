// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchOption
  struct SearchOption;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemEnumerableFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemEnumerableFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: FileSystemEnumerableFactory
    FileSystemEnumerableFactory() noexcept {}
    // static System.Collections.Generic.IEnumerable`1<System.String> CreateFileNameIterator(System.String path, System.String originalUserPath, System.String searchPattern, System.Boolean includeFiles, System.Boolean includeDirs, System.IO.SearchOption searchOption, System.Boolean checkHost)
    // Offset: 0x1970724
    static System::Collections::Generic::IEnumerable_1<::Il2CppString*>* CreateFileNameIterator(::Il2CppString* path, ::Il2CppString* originalUserPath, ::Il2CppString* searchPattern, bool includeFiles, bool includeDirs, System::IO::SearchOption searchOption, bool checkHost);
  }; // System.IO.FileSystemEnumerableFactory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEnumerableFactory*, "System.IO", "FileSystemEnumerableFactory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemEnumerableFactory::CreateFileNameIterator
// Il2CppName: CreateFileNameIterator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, bool, bool, System::IO::SearchOption, bool)>(&System::IO::FileSystemEnumerableFactory::CreateFileNameIterator)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* originalUserPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* includeFiles = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* includeDirs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    static auto* checkHost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemEnumerableFactory*), "CreateFileNameIterator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, originalUserPath, searchPattern, includeFiles, includeDirs, searchOption, checkHost});
  }
};
