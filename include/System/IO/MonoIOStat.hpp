// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IO.FileAttributes
#include "System/IO/FileAttributes.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IO.MonoIOStat
  // [TokenAttribute] Offset: FFFFFFFF
  struct MonoIOStat/*, public System::ValueType*/ {
    public:
    // public System.IO.FileAttributes fileAttributes
    // Size: 0x4
    // Offset: 0x0
    System::IO::FileAttributes fileAttributes;
    // Field size check
    static_assert(sizeof(System::IO::FileAttributes) == 0x4);
    // Padding between fields: fileAttributes and: Length
    char __padding0[0x4] = {};
    // public System.Int64 Length
    // Size: 0x8
    // Offset: 0x8
    int64_t Length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 CreationTime
    // Size: 0x8
    // Offset: 0x10
    int64_t CreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 LastAccessTime
    // Size: 0x8
    // Offset: 0x18
    int64_t LastAccessTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 LastWriteTime
    // Size: 0x8
    // Offset: 0x20
    int64_t LastWriteTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: MonoIOStat
    constexpr MonoIOStat(System::IO::FileAttributes fileAttributes_ = {}, int64_t Length_ = {}, int64_t CreationTime_ = {}, int64_t LastAccessTime_ = {}, int64_t LastWriteTime_ = {}) noexcept : fileAttributes{fileAttributes_}, Length{Length_}, CreationTime{CreationTime_}, LastAccessTime{LastAccessTime_}, LastWriteTime{LastWriteTime_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IO.FileAttributes fileAttributes
    System::IO::FileAttributes& dyn_fileAttributes();
    // Get instance field reference: public System.Int64 Length
    int64_t& dyn_Length();
    // Get instance field reference: public System.Int64 CreationTime
    int64_t& dyn_CreationTime();
    // Get instance field reference: public System.Int64 LastAccessTime
    int64_t& dyn_LastAccessTime();
    // Get instance field reference: public System.Int64 LastWriteTime
    int64_t& dyn_LastWriteTime();
  }; // System.IO.MonoIOStat
  #pragma pack(pop)
  static check_size<sizeof(MonoIOStat), 32 + sizeof(int64_t)> __System_IO_MonoIOStatSizeCheck;
  static_assert(sizeof(MonoIOStat) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::MonoIOStat, "System.IO", "MonoIOStat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
