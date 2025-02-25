// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileSystemInfo
#include "System/IO/FileSystemInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DirectoryInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA1B6C
  class DirectoryInfo : public System::IO::FileSystemInfo {
    public:
    // private System.String current
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* current;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String parent
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* parent;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DirectoryInfo
    DirectoryInfo(::Il2CppString* current_ = {}, ::Il2CppString* parent_ = {}) noexcept : current{current_}, parent{parent_} {}
    // Get instance field reference: private System.String current
    ::Il2CppString*& dyn_current();
    // Get instance field reference: private System.String parent
    ::Il2CppString*& dyn_parent();
    // public System.IO.DirectoryInfo get_Parent()
    // Offset: 0x1970D38
    System::IO::DirectoryInfo* get_Parent();
    // public System.Void .ctor(System.String path)
    // Offset: 0x1972468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::Il2CppString* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(path)));
    }
    // System.Void .ctor(System.String path, System.Boolean simpleOriginalPath)
    // Offset: 0x1970C68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::Il2CppString* path, bool simpleOriginalPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(path, simpleOriginalPath)));
    }
    // private System.Void Initialize()
    // Offset: 0x197273C
    void Initialize();
    // public System.Void Create()
    // Offset: 0x1970DB4
    void Create();
    // public System.IO.DirectoryInfo[] GetDirectories()
    // Offset: 0x1972B90
    ::Array<System::IO::DirectoryInfo*>* GetDirectories();
    // public System.IO.DirectoryInfo[] GetDirectories(System.String searchPattern)
    // Offset: 0x1972BE0
    ::Array<System::IO::DirectoryInfo*>* GetDirectories(::Il2CppString* searchPattern);
    // System.Void CheckPath(System.String path)
    // Offset: 0x19724D0
    void CheckPath(::Il2CppString* path);
    // public override System.Boolean get_Exists()
    // Offset: 0x1972AFC
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Boolean FileSystemInfo::get_Exists()
    bool get_Exists();
    // public override System.String get_Name()
    // Offset: 0x1972B88
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.String FileSystemInfo::get_Name()
    ::Il2CppString* get_Name();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19729B8
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x1972D4C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.IO.DirectoryInfo
  #pragma pack(pop)
  static check_size<sizeof(DirectoryInfo), 104 + sizeof(::Il2CppString*)> __System_IO_DirectoryInfoSizeCheck;
  static_assert(sizeof(DirectoryInfo) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::DirectoryInfo::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::DirectoryInfo* (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::get_Parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::IO::DirectoryInfo*>* (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::GetDirectories)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::IO::DirectoryInfo*>* (System::IO::DirectoryInfo::*)(::Il2CppString*)>(&System::IO::DirectoryInfo::GetDirectories)> {
  static const MethodInfo* get() {
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::CheckPath
// Il2CppName: CheckPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::*)(::Il2CppString*)>(&System::IO::DirectoryInfo::CheckPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "CheckPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::get_Exists
// Il2CppName: get_Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::get_Exists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "get_Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::DirectoryInfo::*)()>(&System::IO::DirectoryInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
