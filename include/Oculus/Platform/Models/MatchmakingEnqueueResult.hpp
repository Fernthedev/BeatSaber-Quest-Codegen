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
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingEnqueueResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingEnqueueResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingAdminSnapshot AdminSnapshotOptional
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshotOptional;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::MatchmakingAdminSnapshot*) == 0x8);
    // [ObsoleteAttribute] Offset: 0xE23770
    // public readonly Oculus.Platform.Models.MatchmakingAdminSnapshot AdminSnapshot
    // Size: 0x8
    // Offset: 0x18
    Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshot;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::MatchmakingAdminSnapshot*) == 0x8);
    // public readonly System.UInt32 AverageWait
    // Size: 0x4
    // Offset: 0x20
    uint AverageWait;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 MatchesInLastHourCount
    // Size: 0x4
    // Offset: 0x24
    uint MatchesInLastHourCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 MaxExpectedWait
    // Size: 0x4
    // Offset: 0x28
    uint MaxExpectedWait;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: MaxExpectedWait and: Pool
    char __padding4[0x4] = {};
    // public readonly System.String Pool
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* Pool;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt32 RecentMatchPercentage
    // Size: 0x4
    // Offset: 0x38
    uint RecentMatchPercentage;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: RecentMatchPercentage and: RequestHash
    char __padding6[0x4] = {};
    // public readonly System.String RequestHash
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* RequestHash;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MatchmakingEnqueueResult
    MatchmakingEnqueueResult(Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshotOptional_ = {}, Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshot_ = {}, uint AverageWait_ = {}, uint MatchesInLastHourCount_ = {}, uint MaxExpectedWait_ = {}, ::Il2CppString* Pool_ = {}, uint RecentMatchPercentage_ = {}, ::Il2CppString* RequestHash_ = {}) noexcept : AdminSnapshotOptional{AdminSnapshotOptional_}, AdminSnapshot{AdminSnapshot_}, AverageWait{AverageWait_}, MatchesInLastHourCount{MatchesInLastHourCount_}, MaxExpectedWait{MaxExpectedWait_}, Pool{Pool_}, RecentMatchPercentage{RecentMatchPercentage_}, RequestHash{RequestHash_} {}
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingAdminSnapshot AdminSnapshotOptional
    Oculus::Platform::Models::MatchmakingAdminSnapshot*& dyn_AdminSnapshotOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.MatchmakingAdminSnapshot AdminSnapshot
    Oculus::Platform::Models::MatchmakingAdminSnapshot*& dyn_AdminSnapshot();
    // Get instance field reference: public readonly System.UInt32 AverageWait
    uint& dyn_AverageWait();
    // Get instance field reference: public readonly System.UInt32 MatchesInLastHourCount
    uint& dyn_MatchesInLastHourCount();
    // Get instance field reference: public readonly System.UInt32 MaxExpectedWait
    uint& dyn_MaxExpectedWait();
    // Get instance field reference: public readonly System.String Pool
    ::Il2CppString*& dyn_Pool();
    // Get instance field reference: public readonly System.UInt32 RecentMatchPercentage
    uint& dyn_RecentMatchPercentage();
    // Get instance field reference: public readonly System.String RequestHash
    ::Il2CppString*& dyn_RequestHash();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x15314E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingEnqueueResult* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::MatchmakingEnqueueResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingEnqueueResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingEnqueueResult
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingEnqueueResult), 64 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_MatchmakingEnqueueResultSizeCheck;
  static_assert(sizeof(MatchmakingEnqueueResult) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingEnqueueResult*, "Oculus.Platform.Models", "MatchmakingEnqueueResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::MatchmakingEnqueueResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
