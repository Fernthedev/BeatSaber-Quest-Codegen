// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileAttributes
  // [ComVisibleAttribute] Offset: D7C9E0
  // [FlagsAttribute] Offset: FFFFFFFF
  struct FileAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FileAttributes
    constexpr FileAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.FileAttributes Archive
    static constexpr const int Archive = 32;
    // Get static field: static public System.IO.FileAttributes Archive
    static System::IO::FileAttributes _get_Archive();
    // Set static field: static public System.IO.FileAttributes Archive
    static void _set_Archive(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Compressed
    static constexpr const int Compressed = 2048;
    // Get static field: static public System.IO.FileAttributes Compressed
    static System::IO::FileAttributes _get_Compressed();
    // Set static field: static public System.IO.FileAttributes Compressed
    static void _set_Compressed(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Device
    static constexpr const int Device = 64;
    // Get static field: static public System.IO.FileAttributes Device
    static System::IO::FileAttributes _get_Device();
    // Set static field: static public System.IO.FileAttributes Device
    static void _set_Device(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Directory
    static constexpr const int Directory = 16;
    // Get static field: static public System.IO.FileAttributes Directory
    static System::IO::FileAttributes _get_Directory();
    // Set static field: static public System.IO.FileAttributes Directory
    static void _set_Directory(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Encrypted
    static constexpr const int Encrypted = 16384;
    // Get static field: static public System.IO.FileAttributes Encrypted
    static System::IO::FileAttributes _get_Encrypted();
    // Set static field: static public System.IO.FileAttributes Encrypted
    static void _set_Encrypted(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Hidden
    static constexpr const int Hidden = 2;
    // Get static field: static public System.IO.FileAttributes Hidden
    static System::IO::FileAttributes _get_Hidden();
    // Set static field: static public System.IO.FileAttributes Hidden
    static void _set_Hidden(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Normal
    static constexpr const int Normal = 128;
    // Get static field: static public System.IO.FileAttributes Normal
    static System::IO::FileAttributes _get_Normal();
    // Set static field: static public System.IO.FileAttributes Normal
    static void _set_Normal(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes NotContentIndexed
    static constexpr const int NotContentIndexed = 8192;
    // Get static field: static public System.IO.FileAttributes NotContentIndexed
    static System::IO::FileAttributes _get_NotContentIndexed();
    // Set static field: static public System.IO.FileAttributes NotContentIndexed
    static void _set_NotContentIndexed(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Offline
    static constexpr const int Offline = 4096;
    // Get static field: static public System.IO.FileAttributes Offline
    static System::IO::FileAttributes _get_Offline();
    // Set static field: static public System.IO.FileAttributes Offline
    static void _set_Offline(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes ReadOnly
    static constexpr const int ReadOnly = 1;
    // Get static field: static public System.IO.FileAttributes ReadOnly
    static System::IO::FileAttributes _get_ReadOnly();
    // Set static field: static public System.IO.FileAttributes ReadOnly
    static void _set_ReadOnly(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes ReparsePoint
    static constexpr const int ReparsePoint = 1024;
    // Get static field: static public System.IO.FileAttributes ReparsePoint
    static System::IO::FileAttributes _get_ReparsePoint();
    // Set static field: static public System.IO.FileAttributes ReparsePoint
    static void _set_ReparsePoint(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes SparseFile
    static constexpr const int SparseFile = 512;
    // Get static field: static public System.IO.FileAttributes SparseFile
    static System::IO::FileAttributes _get_SparseFile();
    // Set static field: static public System.IO.FileAttributes SparseFile
    static void _set_SparseFile(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes System
    static constexpr const int System = 4;
    // Get static field: static public System.IO.FileAttributes System
    static System::IO::FileAttributes _get_System();
    // Set static field: static public System.IO.FileAttributes System
    static void _set_System(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes Temporary
    static constexpr const int Temporary = 256;
    // Get static field: static public System.IO.FileAttributes Temporary
    static System::IO::FileAttributes _get_Temporary();
    // Set static field: static public System.IO.FileAttributes Temporary
    static void _set_Temporary(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes IntegrityStream
    static constexpr const int IntegrityStream = 32768;
    // Get static field: static public System.IO.FileAttributes IntegrityStream
    static System::IO::FileAttributes _get_IntegrityStream();
    // Set static field: static public System.IO.FileAttributes IntegrityStream
    static void _set_IntegrityStream(System::IO::FileAttributes value);
    // static field const value: static public System.IO.FileAttributes NoScrubData
    static constexpr const int NoScrubData = 131072;
    // Get static field: static public System.IO.FileAttributes NoScrubData
    static System::IO::FileAttributes _get_NoScrubData();
    // Set static field: static public System.IO.FileAttributes NoScrubData
    static void _set_NoScrubData(System::IO::FileAttributes value);
  }; // System.IO.FileAttributes
  #pragma pack(pop)
  static check_size<sizeof(FileAttributes), 0 + sizeof(int)> __System_IO_FileAttributesSizeCheck;
  static_assert(sizeof(FileAttributes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileAttributes, "System.IO", "FileAttributes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
