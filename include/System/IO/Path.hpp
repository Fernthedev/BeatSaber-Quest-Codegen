// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Path
  // [ComVisibleAttribute] Offset: D7CABC
  class Path : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Path
    Path() noexcept {}
    // [ObsoleteAttribute] Offset: 0xD81434
    // Get static field: static public readonly System.Char[] InvalidPathChars
    static ::Array<::Il2CppChar>* _get_InvalidPathChars();
    // Set static field: static public readonly System.Char[] InvalidPathChars
    static void _set_InvalidPathChars(::Array<::Il2CppChar>* value);
    // Get static field: static public readonly System.Char AltDirectorySeparatorChar
    static ::Il2CppChar _get_AltDirectorySeparatorChar();
    // Set static field: static public readonly System.Char AltDirectorySeparatorChar
    static void _set_AltDirectorySeparatorChar(::Il2CppChar value);
    // Get static field: static public readonly System.Char DirectorySeparatorChar
    static ::Il2CppChar _get_DirectorySeparatorChar();
    // Set static field: static public readonly System.Char DirectorySeparatorChar
    static void _set_DirectorySeparatorChar(::Il2CppChar value);
    // Get static field: static public readonly System.Char PathSeparator
    static ::Il2CppChar _get_PathSeparator();
    // Set static field: static public readonly System.Char PathSeparator
    static void _set_PathSeparator(::Il2CppChar value);
    // Get static field: static readonly System.String DirectorySeparatorStr
    static ::Il2CppString* _get_DirectorySeparatorStr();
    // Set static field: static readonly System.String DirectorySeparatorStr
    static void _set_DirectorySeparatorStr(::Il2CppString* value);
    // Get static field: static public readonly System.Char VolumeSeparatorChar
    static ::Il2CppChar _get_VolumeSeparatorChar();
    // Set static field: static public readonly System.Char VolumeSeparatorChar
    static void _set_VolumeSeparatorChar(::Il2CppChar value);
    // Get static field: static readonly System.Char[] PathSeparatorChars
    static ::Array<::Il2CppChar>* _get_PathSeparatorChars();
    // Set static field: static readonly System.Char[] PathSeparatorChars
    static void _set_PathSeparatorChars(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Boolean dirEqualsVolume
    static bool _get_dirEqualsVolume();
    // Set static field: static private readonly System.Boolean dirEqualsVolume
    static void _set_dirEqualsVolume(bool value);
    // Get static field: static readonly System.Char[] trimEndCharsWindows
    static ::Array<::Il2CppChar>* _get_trimEndCharsWindows();
    // Set static field: static readonly System.Char[] trimEndCharsWindows
    static void _set_trimEndCharsWindows(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] trimEndCharsUnix
    static ::Array<::Il2CppChar>* _get_trimEndCharsUnix();
    // Set static field: static readonly System.Char[] trimEndCharsUnix
    static void _set_trimEndCharsUnix(::Array<::Il2CppChar>* value);
    // static public System.String ChangeExtension(System.String path, System.String extension)
    // Offset: 0x195394C
    static ::Il2CppString* ChangeExtension(::Il2CppString* path, ::Il2CppString* extension);
    // static public System.String Combine(System.String path1, System.String path2)
    // Offset: 0x1953BEC
    static ::Il2CppString* Combine(::Il2CppString* path1, ::Il2CppString* path2);
    // static System.String CleanPath(System.String s)
    // Offset: 0x1954054
    static ::Il2CppString* CleanPath(::Il2CppString* s);
    // static public System.String GetDirectoryName(System.String path)
    // Offset: 0x1948964
    static ::Il2CppString* GetDirectoryName(::Il2CppString* path);
    // static public System.String GetExtension(System.String path)
    // Offset: 0x19549CC
    static ::Il2CppString* GetExtension(::Il2CppString* path);
    // static public System.String GetFileName(System.String path)
    // Offset: 0x1947DE0
    static ::Il2CppString* GetFileName(::Il2CppString* path);
    // static public System.String GetFileNameWithoutExtension(System.String path)
    // Offset: 0x1954AF4
    static ::Il2CppString* GetFileNameWithoutExtension(::Il2CppString* path);
    // static public System.String GetFullPath(System.String path)
    // Offset: 0x19476C4
    static ::Il2CppString* GetFullPath(::Il2CppString* path);
    // static System.String GetFullPathInternal(System.String path)
    // Offset: 0x194AC80
    static ::Il2CppString* GetFullPathInternal(::Il2CppString* path);
    // static private System.Int32 GetFullPathName(System.String path, System.Int32 numBufferChars, System.Text.StringBuilder buffer, ref System.IntPtr lpFilePartOrNull)
    // Offset: 0x1954B60
    static int GetFullPathName(::Il2CppString* path, int numBufferChars, System::Text::StringBuilder* buffer, System::IntPtr& lpFilePartOrNull);
    // static System.String GetFullPathName(System.String path)
    // Offset: 0x1954C40
    static ::Il2CppString* GetFullPathName(::Il2CppString* path);
    // static System.String WindowsDriveAdjustment(System.String path)
    // Offset: 0x1954DF4
    static ::Il2CppString* WindowsDriveAdjustment(::Il2CppString* path);
    // static System.String InsecureGetFullPath(System.String path)
    // Offset: 0x194CA04
    static ::Il2CppString* InsecureGetFullPath(::Il2CppString* path);
    // static System.Boolean IsDirectorySeparator(System.Char c)
    // Offset: 0x19550DC
    static bool IsDirectorySeparator(::Il2CppChar c);
    // static public System.String GetPathRoot(System.String path)
    // Offset: 0x1954540
    static ::Il2CppString* GetPathRoot(::Il2CppString* path);
    // static public System.Boolean IsPathRooted(System.String path)
    // Offset: 0x1953E80
    static bool IsPathRooted(::Il2CppString* path);
    // static public System.Char[] GetInvalidFileNameChars()
    // Offset: 0x1955928
    static ::Array<::Il2CppChar>* GetInvalidFileNameChars();
    // static public System.Char[] GetInvalidPathChars()
    // Offset: 0x19559E0
    static ::Array<::Il2CppChar>* GetInvalidPathChars();
    // static private System.Int32 findExtension(System.String path)
    // Offset: 0x1953B40
    static int findExtension(::Il2CppString* path);
    // static private System.Void .cctor()
    // Offset: 0x1955A70
    static void _cctor();
    // static private System.String GetServerAndShare(System.String path)
    // Offset: 0x1955C28
    static ::Il2CppString* GetServerAndShare(::Il2CppString* path);
    // static private System.Boolean SameRoot(System.String root, System.String path)
    // Offset: 0x1955DA4
    static bool SameRoot(::Il2CppString* root, ::Il2CppString* path);
    // static private System.String CanonicalizePath(System.String path)
    // Offset: 0x1955180
    static ::Il2CppString* CanonicalizePath(::Il2CppString* path);
    // static public System.String Combine(params System.String[] paths)
    // Offset: 0x19560C0
    static ::Il2CppString* Combine(::Array<::Il2CppString*>* paths);
    // Creating initializer_list -> params proxy for: System.String Combine(params System.String[] paths)
    static ::Il2CppString* Combine(std::initializer_list<::Il2CppString*> paths);
    // Creating TArgs -> initializer_list proxy for: System.String Combine(params System.String[] paths)
    template<class ...TParams>
    static ::Il2CppString* Combine(TParams&&... paths) {
      return Combine({paths...});
    }
    // static public System.String Combine(System.String path1, System.String path2, System.String path3)
    // Offset: 0x19563CC
    static ::Il2CppString* Combine(::Il2CppString* path1, ::Il2CppString* path2, ::Il2CppString* path3);
    // static System.Void Validate(System.String path)
    // Offset: 0x1946F04
    static void Validate(::Il2CppString* path);
    // static System.Void Validate(System.String path, System.String parameterName)
    // Offset: 0x1956560
    static void Validate(::Il2CppString* path, ::Il2CppString* parameterName);
    // static System.String get_DirectorySeparatorCharAsString()
    // Offset: 0x19566B8
    static ::Il2CppString* get_DirectorySeparatorCharAsString();
    // static System.Char[] get_TrimEndChars()
    // Offset: 0x1956720
    static ::Array<::Il2CppChar>* get_TrimEndChars();
    // static System.Void CheckSearchPattern(System.String searchPattern)
    // Offset: 0x19567C0
    static void CheckSearchPattern(::Il2CppString* searchPattern);
    // static System.Void CheckInvalidPathChars(System.String path, System.Boolean checkAdditional)
    // Offset: 0x195694C
    static void CheckInvalidPathChars(::Il2CppString* path, bool checkAdditional);
    // static System.String InternalCombine(System.String path1, System.String path2)
    // Offset: 0x1956AB4
    static ::Il2CppString* InternalCombine(::Il2CppString* path1, ::Il2CppString* path2);
  }; // System.IO.Path
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Path*, "System.IO", "Path");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Path::ChangeExtension
// Il2CppName: ChangeExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Path::ChangeExtension)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "ChangeExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, extension});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Path::Combine)> {
  const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CleanPath
// Il2CppName: CleanPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::CleanPath)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CleanPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetDirectoryName
// Il2CppName: GetDirectoryName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetDirectoryName)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetDirectoryName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetExtension
// Il2CppName: GetExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetExtension)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFileName
// Il2CppName: GetFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetFileName)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFileNameWithoutExtension
// Il2CppName: GetFileNameWithoutExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetFileNameWithoutExtension)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFileNameWithoutExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPath
// Il2CppName: GetFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetFullPath)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPathInternal
// Il2CppName: GetFullPathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetFullPathInternal)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPathName
// Il2CppName: GetFullPathName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int, System::Text::StringBuilder*, System::IntPtr&)>(&System::IO::Path::GetFullPathName)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numBufferChars = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* lpFilePartOrNull = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPathName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, numBufferChars, buffer, lpFilePartOrNull});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPathName
// Il2CppName: GetFullPathName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetFullPathName)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPathName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::WindowsDriveAdjustment
// Il2CppName: WindowsDriveAdjustment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::WindowsDriveAdjustment)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "WindowsDriveAdjustment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::InsecureGetFullPath
// Il2CppName: InsecureGetFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::InsecureGetFullPath)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "InsecureGetFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::IsDirectorySeparator
// Il2CppName: IsDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::IO::Path::IsDirectorySeparator)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "IsDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetPathRoot
// Il2CppName: GetPathRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetPathRoot)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetPathRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::IsPathRooted
// Il2CppName: IsPathRooted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::IO::Path::IsPathRooted)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "IsPathRooted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetInvalidFileNameChars
// Il2CppName: GetInvalidFileNameChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppChar>* (*)()>(&System::IO::Path::GetInvalidFileNameChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetInvalidFileNameChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetInvalidPathChars
// Il2CppName: GetInvalidPathChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppChar>* (*)()>(&System::IO::Path::GetInvalidPathChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetInvalidPathChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::findExtension
// Il2CppName: findExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&System::IO::Path::findExtension)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "findExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Path::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetServerAndShare
// Il2CppName: GetServerAndShare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::GetServerAndShare)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetServerAndShare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::SameRoot
// Il2CppName: SameRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Path::SameRoot)> {
  const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "SameRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CanonicalizePath
// Il2CppName: CanonicalizePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::IO::Path::CanonicalizePath)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CanonicalizePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<::Il2CppString*>*)>(&System::IO::Path::Combine)> {
  const MethodInfo* get() {
    static auto* paths = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paths});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::IO::Path::Combine)> {
  const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path3 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2, path3});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::IO::Path::Validate)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Path::Validate)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, parameterName});
  }
};
// Writing MetadataGetter for method: System::IO::Path::get_DirectorySeparatorCharAsString
// Il2CppName: get_DirectorySeparatorCharAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::IO::Path::get_DirectorySeparatorCharAsString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "get_DirectorySeparatorCharAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::get_TrimEndChars
// Il2CppName: get_TrimEndChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppChar>* (*)()>(&System::IO::Path::get_TrimEndChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "get_TrimEndChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CheckSearchPattern
// Il2CppName: CheckSearchPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::IO::Path::CheckSearchPattern)> {
  const MethodInfo* get() {
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CheckSearchPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CheckInvalidPathChars
// Il2CppName: CheckInvalidPathChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, bool)>(&System::IO::Path::CheckInvalidPathChars)> {
  const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkAdditional = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CheckInvalidPathChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, checkAdditional});
  }
};
// Writing MetadataGetter for method: System::IO::Path::InternalCombine
// Il2CppName: InternalCombine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&System::IO::Path::InternalCombine)> {
  const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "InternalCombine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2});
  }
};
