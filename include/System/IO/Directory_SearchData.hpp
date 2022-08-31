// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Directory
#include "System/IO/Directory.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Directory::SearchData);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Directory::SearchData*, "System.IO", "Directory/SearchData");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Directory/System.IO.SearchData
  // [TokenAttribute] Offset: FFFFFFFF
  class Directory::SearchData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String fullPath
    // Size: 0x8
    // Offset: 0x10
    ::StringW fullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String userPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW userPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.IO.SearchOption searchOption
    // Size: 0x4
    // Offset: 0x20
    ::System::IO::SearchOption searchOption;
    // Field size check
    static_assert(sizeof(::System::IO::SearchOption) == 0x4);
    public:
    // Get instance field reference: public readonly System.String fullPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fullPath();
    // Get instance field reference: public readonly System.String userPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userPath();
    // Get instance field reference: public readonly System.IO.SearchOption searchOption
    [[deprecated("Use field access instead!")]] ::System::IO::SearchOption& dyn_searchOption();
    // public System.Void .ctor(System.String fullPath, System.String userPath, System.IO.SearchOption searchOption)
    // Offset: 0x202A400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Directory::SearchData* New_ctor(::StringW fullPath, ::StringW userPath, ::System::IO::SearchOption searchOption) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Directory::SearchData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Directory::SearchData*, creationType>(fullPath, userPath, searchOption)));
    }
  }; // System.IO.Directory/System.IO.SearchData
  #pragma pack(pop)
  static check_size<sizeof(Directory::SearchData), 32 + sizeof(::System::IO::SearchOption)> __System_IO_Directory_SearchDataSizeCheck;
  static_assert(sizeof(Directory::SearchData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Directory::SearchData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
