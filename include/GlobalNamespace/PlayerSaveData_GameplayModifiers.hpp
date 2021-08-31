// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/GameplayModifiers
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::GameplayModifiers : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType
    struct EnabledObstacleType;
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType
    struct EnergyType;
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed
    struct SongSpeed;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlayerSaveData/GameplayModifiers/EnabledObstacleType
    // [TokenAttribute] Offset: FFFFFFFF
    struct EnabledObstacleType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: EnabledObstacleType
      constexpr EnabledObstacleType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType All
      static constexpr const int All = 0;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType All
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_All();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType All
      static void _set_All(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType FullHeightOnly
      static constexpr const int FullHeightOnly = 1;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType FullHeightOnly
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_FullHeightOnly();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType FullHeightOnly
      static void _set_FullHeightOnly(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType None
      static constexpr const int None = 2;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType None
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_None();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType None
      static void _set_None(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // PlayerSaveData/GameplayModifiers/EnabledObstacleType
    #pragma pack(pop)
    static check_size<sizeof(PlayerSaveData::GameplayModifiers::EnabledObstacleType), 0 + sizeof(int)> __GlobalNamespace_PlayerSaveData_GameplayModifiers_EnabledObstacleTypeSizeCheck;
    static_assert(sizeof(PlayerSaveData::GameplayModifiers::EnabledObstacleType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlayerSaveData/GameplayModifiers/EnergyType
    // [TokenAttribute] Offset: FFFFFFFF
    struct EnergyType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: EnergyType
      constexpr EnergyType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnergyType Bar
      static constexpr const int Bar = 0;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnergyType Bar
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType _get_Bar();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnergyType Bar
      static void _set_Bar(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnergyType Battery
      static constexpr const int Battery = 1;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnergyType Battery
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType _get_Battery();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnergyType Battery
      static void _set_Battery(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // PlayerSaveData/GameplayModifiers/EnergyType
    #pragma pack(pop)
    static check_size<sizeof(PlayerSaveData::GameplayModifiers::EnergyType), 0 + sizeof(int)> __GlobalNamespace_PlayerSaveData_GameplayModifiers_EnergyTypeSizeCheck;
    static_assert(sizeof(PlayerSaveData::GameplayModifiers::EnergyType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlayerSaveData/GameplayModifiers/SongSpeed
    // [TokenAttribute] Offset: FFFFFFFF
    struct SongSpeed/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: SongSpeed
      constexpr SongSpeed(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlayerSaveData/GameplayModifiers/SongSpeed Normal
      static constexpr const int Normal = 0;
      // Get static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Normal
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_Normal();
      // Set static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Normal
      static void _set_Normal(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/SongSpeed Faster
      static constexpr const int Faster = 1;
      // Get static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Faster
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_Faster();
      // Set static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Faster
      static void _set_Faster(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/SongSpeed Slower
      static constexpr const int Slower = 2;
      // Get static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Slower
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_Slower();
      // Set static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Slower
      static void _set_Slower(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // PlayerSaveData/GameplayModifiers/SongSpeed
    #pragma pack(pop)
    static check_size<sizeof(PlayerSaveData::GameplayModifiers::SongSpeed), 0 + sizeof(int)> __GlobalNamespace_PlayerSaveData_GameplayModifiers_SongSpeedSizeCheck;
    static_assert(sizeof(PlayerSaveData::GameplayModifiers::SongSpeed) == 0x4);
    // public PlayerSaveData/GameplayModifiers/EnergyType energyType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType energyType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType) == 0x4);
    // public System.Boolean instaFail
    // Size: 0x1
    // Offset: 0x14
    bool instaFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean failOnSaberClash
    // Size: 0x1
    // Offset: 0x15
    bool failOnSaberClash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: failOnSaberClash and: enabledObstacleType
    char __padding2[0x2] = {};
    // public PlayerSaveData/GameplayModifiers/EnabledObstacleType enabledObstacleType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType enabledObstacleType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType) == 0x4);
    // public System.Boolean fastNotes
    // Size: 0x1
    // Offset: 0x1C
    bool fastNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean strictAngles
    // Size: 0x1
    // Offset: 0x1D
    bool strictAngles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disappearingArrows
    // Size: 0x1
    // Offset: 0x1E
    bool disappearingArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ghostNotes
    // Size: 0x1
    // Offset: 0x1F
    bool ghostNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noBombs
    // Size: 0x1
    // Offset: 0x20
    bool noBombs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noBombs and: songSpeed
    char __padding8[0x3] = {};
    // public PlayerSaveData/GameplayModifiers/SongSpeed songSpeed
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed songSpeed;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed) == 0x4);
    // public System.Boolean noArrows
    // Size: 0x1
    // Offset: 0x28
    bool noArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noFailOn0Energy
    // Size: 0x1
    // Offset: 0x29
    bool noFailOn0Energy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean proMode
    // Size: 0x1
    // Offset: 0x2A
    bool proMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean zenMode
    // Size: 0x1
    // Offset: 0x2B
    bool zenMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean smallCubes
    // Size: 0x1
    // Offset: 0x2C
    bool smallCubes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameplayModifiers
    GameplayModifiers(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType energyType_ = {}, bool instaFail_ = {}, bool failOnSaberClash_ = {}, GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType enabledObstacleType_ = {}, bool fastNotes_ = {}, bool strictAngles_ = {}, bool disappearingArrows_ = {}, bool ghostNotes_ = {}, bool noBombs_ = {}, GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed songSpeed_ = {}, bool noArrows_ = {}, bool noFailOn0Energy_ = {}, bool proMode_ = {}, bool zenMode_ = {}, bool smallCubes_ = {}) noexcept : energyType{energyType_}, instaFail{instaFail_}, failOnSaberClash{failOnSaberClash_}, enabledObstacleType{enabledObstacleType_}, fastNotes{fastNotes_}, strictAngles{strictAngles_}, disappearingArrows{disappearingArrows_}, ghostNotes{ghostNotes_}, noBombs{noBombs_}, songSpeed{songSpeed_}, noArrows{noArrows_}, noFailOn0Energy{noFailOn0Energy_}, proMode{proMode_}, zenMode{zenMode_}, smallCubes{smallCubes_} {}
    // Get instance field: public PlayerSaveData/GameplayModifiers/EnergyType energyType
    GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType _get_energyType();
    // Set instance field: public PlayerSaveData/GameplayModifiers/EnergyType energyType
    void _set_energyType(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType value);
    // Get instance field: public System.Boolean instaFail
    bool _get_instaFail();
    // Set instance field: public System.Boolean instaFail
    void _set_instaFail(bool value);
    // Get instance field: public System.Boolean failOnSaberClash
    bool _get_failOnSaberClash();
    // Set instance field: public System.Boolean failOnSaberClash
    void _set_failOnSaberClash(bool value);
    // Get instance field: public PlayerSaveData/GameplayModifiers/EnabledObstacleType enabledObstacleType
    GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_enabledObstacleType();
    // Set instance field: public PlayerSaveData/GameplayModifiers/EnabledObstacleType enabledObstacleType
    void _set_enabledObstacleType(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
    // Get instance field: public System.Boolean fastNotes
    bool _get_fastNotes();
    // Set instance field: public System.Boolean fastNotes
    void _set_fastNotes(bool value);
    // Get instance field: public System.Boolean strictAngles
    bool _get_strictAngles();
    // Set instance field: public System.Boolean strictAngles
    void _set_strictAngles(bool value);
    // Get instance field: public System.Boolean disappearingArrows
    bool _get_disappearingArrows();
    // Set instance field: public System.Boolean disappearingArrows
    void _set_disappearingArrows(bool value);
    // Get instance field: public System.Boolean ghostNotes
    bool _get_ghostNotes();
    // Set instance field: public System.Boolean ghostNotes
    void _set_ghostNotes(bool value);
    // Get instance field: public System.Boolean noBombs
    bool _get_noBombs();
    // Set instance field: public System.Boolean noBombs
    void _set_noBombs(bool value);
    // Get instance field: public PlayerSaveData/GameplayModifiers/SongSpeed songSpeed
    GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_songSpeed();
    // Set instance field: public PlayerSaveData/GameplayModifiers/SongSpeed songSpeed
    void _set_songSpeed(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
    // Get instance field: public System.Boolean noArrows
    bool _get_noArrows();
    // Set instance field: public System.Boolean noArrows
    void _set_noArrows(bool value);
    // Get instance field: public System.Boolean noFailOn0Energy
    bool _get_noFailOn0Energy();
    // Set instance field: public System.Boolean noFailOn0Energy
    void _set_noFailOn0Energy(bool value);
    // Get instance field: public System.Boolean proMode
    bool _get_proMode();
    // Set instance field: public System.Boolean proMode
    void _set_proMode(bool value);
    // Get instance field: public System.Boolean zenMode
    bool _get_zenMode();
    // Set instance field: public System.Boolean zenMode
    void _set_zenMode(bool value);
    // Get instance field: public System.Boolean smallCubes
    bool _get_smallCubes();
    // Set instance field: public System.Boolean smallCubes
    void _set_smallCubes(bool value);
    // public System.Void .ctor()
    // Offset: 0x1137614
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::GameplayModifiers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::GameplayModifiers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::GameplayModifiers*, creationType>()));
    }
  }; // PlayerSaveData/GameplayModifiers
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::GameplayModifiers), 44 + sizeof(bool)> __GlobalNamespace_PlayerSaveData_GameplayModifiersSizeCheck;
  static_assert(sizeof(PlayerSaveData::GameplayModifiers) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers*, "", "PlayerSaveData/GameplayModifiers");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType, "", "PlayerSaveData/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType, "", "PlayerSaveData/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed, "", "PlayerSaveData/GameplayModifiers/SongSpeed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::GameplayModifiers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
