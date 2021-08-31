// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.CloudStorageDataStatus
#include "Oculus/Platform/CloudStorageDataStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CloudStorageMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorageMetadata : public ::Il2CppObject {
    public:
    // public readonly System.String Bucket
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Bucket;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int64 Counter
    // Size: 0x8
    // Offset: 0x18
    int64_t Counter;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.UInt32 DataSize
    // Size: 0x4
    // Offset: 0x20
    uint DataSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: DataSize and: ExtraData
    char __padding2[0x4] = {};
    // public readonly System.String ExtraData
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* ExtraData;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Key
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* Key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt64 SaveTime
    // Size: 0x8
    // Offset: 0x38
    uint64_t SaveTime;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.CloudStorageDataStatus Status
    // Size: 0x4
    // Offset: 0x40
    Oculus::Platform::CloudStorageDataStatus Status;
    // Field size check
    static_assert(sizeof(Oculus::Platform::CloudStorageDataStatus) == 0x4);
    // Padding between fields: Status and: VersionHandle
    char __padding6[0x4] = {};
    // public readonly System.String VersionHandle
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* VersionHandle;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CloudStorageMetadata
    CloudStorageMetadata(::Il2CppString* Bucket_ = {}, int64_t Counter_ = {}, uint DataSize_ = {}, ::Il2CppString* ExtraData_ = {}, ::Il2CppString* Key_ = {}, uint64_t SaveTime_ = {}, Oculus::Platform::CloudStorageDataStatus Status_ = {}, ::Il2CppString* VersionHandle_ = {}) noexcept : Bucket{Bucket_}, Counter{Counter_}, DataSize{DataSize_}, ExtraData{ExtraData_}, Key{Key_}, SaveTime{SaveTime_}, Status{Status_}, VersionHandle{VersionHandle_} {}
    // Get instance field: public readonly System.String Bucket
    ::Il2CppString* _get_Bucket();
    // Set instance field: public readonly System.String Bucket
    void _set_Bucket(::Il2CppString* value);
    // Get instance field: public readonly System.Int64 Counter
    int64_t _get_Counter();
    // Set instance field: public readonly System.Int64 Counter
    void _set_Counter(int64_t value);
    // Get instance field: public readonly System.UInt32 DataSize
    uint _get_DataSize();
    // Set instance field: public readonly System.UInt32 DataSize
    void _set_DataSize(uint value);
    // Get instance field: public readonly System.String ExtraData
    ::Il2CppString* _get_ExtraData();
    // Set instance field: public readonly System.String ExtraData
    void _set_ExtraData(::Il2CppString* value);
    // Get instance field: public readonly System.String Key
    ::Il2CppString* _get_Key();
    // Set instance field: public readonly System.String Key
    void _set_Key(::Il2CppString* value);
    // Get instance field: public readonly System.UInt64 SaveTime
    uint64_t _get_SaveTime();
    // Set instance field: public readonly System.UInt64 SaveTime
    void _set_SaveTime(uint64_t value);
    // Get instance field: public readonly Oculus.Platform.CloudStorageDataStatus Status
    Oculus::Platform::CloudStorageDataStatus _get_Status();
    // Set instance field: public readonly Oculus.Platform.CloudStorageDataStatus Status
    void _set_Status(Oculus::Platform::CloudStorageDataStatus value);
    // Get instance field: public readonly System.String VersionHandle
    ::Il2CppString* _get_VersionHandle();
    // Set instance field: public readonly System.String VersionHandle
    void _set_VersionHandle(::Il2CppString* value);
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14E9B84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStorageMetadata* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::CloudStorageMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStorageMetadata*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CloudStorageMetadata
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageMetadata), 72 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_CloudStorageMetadataSizeCheck;
  static_assert(sizeof(CloudStorageMetadata) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageMetadata*, "Oculus.Platform.Models", "CloudStorageMetadata");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CloudStorageMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
