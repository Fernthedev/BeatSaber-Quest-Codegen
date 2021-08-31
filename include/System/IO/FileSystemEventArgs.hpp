// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IO.WatcherChangeTypes
#include "System/IO/WatcherChangeTypes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemEventArgs : public System::EventArgs {
    public:
    // private System.IO.WatcherChangeTypes changeType
    // Size: 0x4
    // Offset: 0x10
    System::IO::WatcherChangeTypes changeType;
    // Field size check
    static_assert(sizeof(System::IO::WatcherChangeTypes) == 0x4);
    // Padding between fields: changeType and: directory
    char __padding0[0x4] = {};
    // private System.String directory
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* directory;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FileSystemEventArgs
    FileSystemEventArgs(System::IO::WatcherChangeTypes changeType_ = {}, ::Il2CppString* directory_ = {}, ::Il2CppString* name_ = {}) noexcept : changeType{changeType_}, directory{directory_}, name{name_} {}
    // Get instance field: private System.IO.WatcherChangeTypes changeType
    System::IO::WatcherChangeTypes _get_changeType();
    // Set instance field: private System.IO.WatcherChangeTypes changeType
    void _set_changeType(System::IO::WatcherChangeTypes value);
    // Get instance field: private System.String directory
    ::Il2CppString* _get_directory();
    // Set instance field: private System.String directory
    void _set_directory(::Il2CppString* value);
    // Get instance field: private System.String name
    ::Il2CppString* _get_name();
    // Set instance field: private System.String name
    void _set_name(::Il2CppString* value);
    // public System.Void .ctor(System.IO.WatcherChangeTypes changeType, System.String directory, System.String name)
    // Offset: 0x18BC1AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEventArgs* New_ctor(System::IO::WatcherChangeTypes changeType, ::Il2CppString* directory, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEventArgs*, creationType>(changeType, directory, name)));
    }
  }; // System.IO.FileSystemEventArgs
  #pragma pack(pop)
  static check_size<sizeof(FileSystemEventArgs), 32 + sizeof(::Il2CppString*)> __System_IO_FileSystemEventArgsSizeCheck;
  static_assert(sizeof(FileSystemEventArgs) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemEventArgs*, "System.IO", "FileSystemEventArgs");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
