// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LanguagePackInfo
  class LanguagePackInfo;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetDetails
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetDetails : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 AssetId
    // Size: 0x8
    // Offset: 0x10
    uint64_t AssetId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String AssetType
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* AssetType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String DownloadStatus
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* DownloadStatus;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Filepath
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* Filepath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String IapStatus
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* IapStatus;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Oculus.Platform.Models.LanguagePackInfo LanguageOptional
    // Size: 0x8
    // Offset: 0x38
    Oculus::Platform::Models::LanguagePackInfo* LanguageOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::LanguagePackInfo*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xE23620
    // public readonly Oculus.Platform.Models.LanguagePackInfo Language
    // Size: 0x8
    // Offset: 0x40
    Oculus::Platform::Models::LanguagePackInfo* Language;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::LanguagePackInfo*) == 0x8);
    // public readonly System.String Metadata
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* Metadata;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssetDetails
    AssetDetails(uint64_t AssetId_ = {}, ::Il2CppString* AssetType_ = {}, ::Il2CppString* DownloadStatus_ = {}, ::Il2CppString* Filepath_ = {}, ::Il2CppString* IapStatus_ = {}, Oculus::Platform::Models::LanguagePackInfo* LanguageOptional_ = {}, Oculus::Platform::Models::LanguagePackInfo* Language_ = {}, ::Il2CppString* Metadata_ = {}) noexcept : AssetId{AssetId_}, AssetType{AssetType_}, DownloadStatus{DownloadStatus_}, Filepath{Filepath_}, IapStatus{IapStatus_}, LanguageOptional{LanguageOptional_}, Language{Language_}, Metadata{Metadata_} {}
    // Get instance field reference: public readonly System.UInt64 AssetId
    uint64_t& dyn_AssetId();
    // Get instance field reference: public readonly System.String AssetType
    ::Il2CppString*& dyn_AssetType();
    // Get instance field reference: public readonly System.String DownloadStatus
    ::Il2CppString*& dyn_DownloadStatus();
    // Get instance field reference: public readonly System.String Filepath
    ::Il2CppString*& dyn_Filepath();
    // Get instance field reference: public readonly System.String IapStatus
    ::Il2CppString*& dyn_IapStatus();
    // Get instance field reference: public readonly Oculus.Platform.Models.LanguagePackInfo LanguageOptional
    Oculus::Platform::Models::LanguagePackInfo*& dyn_LanguageOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.LanguagePackInfo Language
    Oculus::Platform::Models::LanguagePackInfo*& dyn_Language();
    // Get instance field reference: public readonly System.String Metadata
    ::Il2CppString*& dyn_Metadata();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x152C5C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetDetails* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AssetDetails::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetDetails*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetDetails
  #pragma pack(pop)
  static check_size<sizeof(AssetDetails), 72 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_AssetDetailsSizeCheck;
  static_assert(sizeof(AssetDetails) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetDetails*, "Oculus.Platform.Models", "AssetDetails");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AssetDetails::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
