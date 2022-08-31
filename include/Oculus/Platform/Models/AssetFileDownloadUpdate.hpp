// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDownloadUpdate
  class AssetFileDownloadUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadUpdate*, "Oculus.Platform.Models", "AssetFileDownloadUpdate");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetFileDownloadUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetFileDownloadUpdate : public ::Il2CppObject {
    public:
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
    // public readonly System.UInt64 BytesTotal
    // Size: 0x8
    // Offset: 0x20
    uint64_t BytesTotal;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Int64 BytesTransferred
    // Size: 0x8
    // Offset: 0x28
    int64_t BytesTransferred;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Boolean Completed
    // Size: 0x1
    // Offset: 0x30
    bool Completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.UInt64 AssetFileId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetFileId();
    // Get instance field reference: public readonly System.UInt64 AssetId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetId();
    // Get instance field reference: public readonly System.UInt64 BytesTotal
    [[deprecated("Use field access instead!")]] uint64_t& dyn_BytesTotal();
    // Get instance field reference: public readonly System.Int64 BytesTransferred
    [[deprecated("Use field access instead!")]] int64_t& dyn_BytesTransferred();
    // Get instance field reference: public readonly System.Boolean Completed
    [[deprecated("Use field access instead!")]] bool& dyn_Completed();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19EE35C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileDownloadUpdate* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AssetFileDownloadUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileDownloadUpdate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetFileDownloadUpdate
  #pragma pack(pop)
  static check_size<sizeof(AssetFileDownloadUpdate), 48 + sizeof(bool)> __Oculus_Platform_Models_AssetFileDownloadUpdateSizeCheck;
  static_assert(sizeof(AssetFileDownloadUpdate) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AssetFileDownloadUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
