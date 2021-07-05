// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/UploadScoreResult
  struct PlatformLeaderboardsModel::UploadScoreResult/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UploadScoreResult
    constexpr UploadScoreResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlatformLeaderboardsModel/UploadScoreResult Ok
    static constexpr const int Ok = 0;
    // Get static field: static public PlatformLeaderboardsModel/UploadScoreResult Ok
    static GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult _get_Ok();
    // Set static field: static public PlatformLeaderboardsModel/UploadScoreResult Ok
    static void _set_Ok(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult value);
    // static field const value: static public PlatformLeaderboardsModel/UploadScoreResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformLeaderboardsModel/UploadScoreResult Failed
    static GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult _get_Failed();
    // Set static field: static public PlatformLeaderboardsModel/UploadScoreResult Failed
    static void _set_Failed(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult value);
  }; // PlatformLeaderboardsModel/UploadScoreResult
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardsModel::UploadScoreResult), 0 + sizeof(int)> __GlobalNamespace_PlatformLeaderboardsModel_UploadScoreResultSizeCheck;
  static_assert(sizeof(PlatformLeaderboardsModel::UploadScoreResult) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult, "", "PlatformLeaderboardsModel/UploadScoreResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
