// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetFileDownloadCancelResult
  class AssetFileDownloadCancelResult : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 AssetFileId
    // Size: 0x8
    // Offset: 0x10
    uint64_t AssetFileId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 AssetId
    // Size: 0x8
    // Offset: 0x18
    uint64_t AssetId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String Filepath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Filepath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Boolean Success
    // Size: 0x1
    // Offset: 0x28
    bool Success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AssetFileDownloadCancelResult
    AssetFileDownloadCancelResult(uint64_t AssetFileId_ = {}, uint64_t AssetId_ = {}, ::Il2CppString* Filepath_ = {}, bool Success_ = {}) noexcept : AssetFileId{AssetFileId_}, AssetId{AssetId_}, Filepath{Filepath_}, Success{Success_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14CCDE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileDownloadCancelResult* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AssetFileDownloadCancelResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileDownloadCancelResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetFileDownloadCancelResult
  #pragma pack(pop)
  static check_size<sizeof(AssetFileDownloadCancelResult), 40 + sizeof(bool)> __Oculus_Platform_Models_AssetFileDownloadCancelResultSizeCheck;
  static_assert(sizeof(AssetFileDownloadCancelResult) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetFileDownloadCancelResult*, "Oculus.Platform.Models", "AssetFileDownloadCancelResult");
// Writing includes for template specializations
// Writing MetadataGetter for method: Oculus::Platform::Models::AssetFileDownloadCancelResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
