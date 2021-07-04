// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchOption
  struct SearchOption;
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Directory
  // [ComVisibleAttribute] Offset: D7C7C4
  class Directory : public ::Il2CppObject {
    public:
    // Nested type: System::IO::Directory::SearchData
    class SearchData;
    // Creating value type constructor for type: Directory
    Directory() noexcept {}
    // static public System.String[] GetFiles(System.String path)
    // Offset: 0x1945A14
    static ::Array<::Il2CppString*>* GetFiles(::Il2CppString* path);
    // static public System.String[] GetFiles(System.String path, System.String searchPattern)
    // Offset: 0x1945AD4
    static ::Array<::Il2CppString*>* GetFiles(::Il2CppString* path, ::Il2CppString* searchPattern);
    // static private System.String[] InternalGetFiles(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x1945AB8
    static ::Array<::Il2CppString*>* InternalGetFiles(::Il2CppString* path, ::Il2CppString* searchPattern, System::IO::SearchOption searchOption);
    // static public System.String[] GetDirectories(System.String path)
    // Offset: 0x1945C74
    static ::Array<::Il2CppString*>* GetDirectories(::Il2CppString* path);
    // static public System.String[] GetDirectories(System.String path, System.String searchPattern)
    // Offset: 0x1945D34
    static ::Array<::Il2CppString*>* GetDirectories(::Il2CppString* path, ::Il2CppString* searchPattern);
    // static private System.String[] InternalGetDirectories(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x1945D18
    static ::Array<::Il2CppString*>* InternalGetDirectories(::Il2CppString* path, ::Il2CppString* searchPattern, System::IO::SearchOption searchOption);
    // static public System.String[] GetFileSystemEntries(System.String path, System.String searchPattern)
    // Offset: 0x1945DFC
    static ::Array<::Il2CppString*>* GetFileSystemEntries(::Il2CppString* path, ::Il2CppString* searchPattern);
    // static private System.String[] InternalGetFileSystemEntries(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x1945EC4
    static ::Array<::Il2CppString*>* InternalGetFileSystemEntries(::Il2CppString* path, ::Il2CppString* searchPattern, System::IO::SearchOption searchOption);
    // static System.String[] InternalGetFileDirectoryNames(System.String path, System.String userPathOriginal, System.String searchPattern, System.Boolean includeFiles, System.Boolean includeDirs, System.IO.SearchOption searchOption, System.Boolean checkHost)
    // Offset: 0x1945B9C
    static ::Array<::Il2CppString*>* InternalGetFileDirectoryNames(::Il2CppString* path, ::Il2CppString* userPathOriginal, ::Il2CppString* searchPattern, bool includeFiles, bool includeDirs, System::IO::SearchOption searchOption, bool checkHost);
    // static public System.IO.DirectoryInfo CreateDirectory(System.String path)
    // Offset: 0x1945FB4
    static System::IO::DirectoryInfo* CreateDirectory(::Il2CppString* path);
    // static private System.IO.DirectoryInfo CreateDirectoriesInternal(System.String path)
    // Offset: 0x19462D4
    static System::IO::DirectoryInfo* CreateDirectoriesInternal(::Il2CppString* path);
    // static public System.Void Delete(System.String path)
    // Offset: 0x1946D04
    static void Delete(::Il2CppString* path);
    // static private System.Void RecursiveDelete(System.String path)
    // Offset: 0x1947150
    static void RecursiveDelete(::Il2CppString* path);
    // static public System.Void Delete(System.String path, System.Boolean recursive)
    // Offset: 0x1947500
    static void Delete(::Il2CppString* path, bool recursive);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0x1947594
    static bool Exists(::Il2CppString* path);
    // static public System.String GetCurrentDirectory()
    // Offset: 0x19477DC
    static ::Il2CppString* GetCurrentDirectory();
    // static System.String InsecureGetCurrentDirectory()
    // Offset: 0x19477F4
    static ::Il2CppString* InsecureGetCurrentDirectory();
    // static public System.String[] GetLogicalDrives()
    // Offset: 0x19479A0
    static ::Array<::Il2CppString*>* GetLogicalDrives();
    // static System.String GetDemandDir(System.String fullPath, System.Boolean thisDirOnly)
    // Offset: 0x19479A8
    static ::Il2CppString* GetDemandDir(::Il2CppString* fullPath, bool thisDirOnly);
  }; // System.IO.Directory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Directory*, "System.IO", "Directory");
// Writing includes for template specializations
#include "System/IO/SearchOption.hpp"
// Writing MetadataGetter for method: System::IO::Directory::GetFiles
// Il2CppName: GetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*)>(&System::IO::Directory::GetFiles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetFiles
// Il2CppName: GetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Directory::GetFiles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetFiles
// Il2CppName: InternalGetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, System::IO::SearchOption)>(&System::IO::Directory::InternalGetFiles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SearchOption>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*)>(&System::IO::Directory::GetDirectories)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Directory::GetDirectories)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetDirectories
// Il2CppName: InternalGetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, System::IO::SearchOption)>(&System::IO::Directory::InternalGetDirectories)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SearchOption>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetFileSystemEntries
// Il2CppName: GetFileSystemEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Directory::GetFileSystemEntries)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFileSystemEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetFileSystemEntries
// Il2CppName: InternalGetFileSystemEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, System::IO::SearchOption)>(&System::IO::Directory::InternalGetFileSystemEntries)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetFileSystemEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SearchOption>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetFileDirectoryNames
// Il2CppName: InternalGetFileDirectoryNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, bool, bool, System::IO::SearchOption, bool)>(&System::IO::Directory::InternalGetFileDirectoryNames)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetFileDirectoryNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SearchOption>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::CreateDirectory
// Il2CppName: CreateDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::DirectoryInfo* (*)(::Il2CppString*)>(&System::IO::Directory::CreateDirectory)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "CreateDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::CreateDirectoriesInternal
// Il2CppName: CreateDirectoriesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::DirectoryInfo* (*)(::Il2CppString*)>(&System::IO::Directory::CreateDirectoriesInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "CreateDirectoriesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::IO::Directory::Delete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::RecursiveDelete
// Il2CppName: RecursiveDelete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::IO::Directory::RecursiveDelete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "RecursiveDelete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool)>(&System::IO::Directory::Delete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::IO::Directory::Exists)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetCurrentDirectory
// Il2CppName: GetCurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::IO::Directory::GetCurrentDirectory)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetCurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InsecureGetCurrentDirectory
// Il2CppName: InsecureGetCurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::IO::Directory::InsecureGetCurrentDirectory)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InsecureGetCurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetLogicalDrives
// Il2CppName: GetLogicalDrives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::IO::Directory::GetLogicalDrives)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetLogicalDrives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetDemandDir
// Il2CppName: GetDemandDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, bool)>(&System::IO::Directory::GetDemandDir)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetDemandDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
