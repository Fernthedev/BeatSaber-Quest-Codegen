// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: EnabledObstacleType because it is already included!
  // Skipping declaration: SongSpeed because it is already included!
  // Skipping declaration: EnergyType because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiers
  // [PreserveAttribute] Offset: DE26B0
  class GameplayModifiers : public ::Il2CppObject/*, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers*>*/ {
    public:
    // Nested type: GlobalNamespace::GameplayModifiers::EnabledObstacleType
    struct EnabledObstacleType;
    // Nested type: GlobalNamespace::GameplayModifiers::EnergyType
    struct EnergyType;
    // Nested type: GlobalNamespace::GameplayModifiers::SongSpeed
    struct SongSpeed;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GameplayModifiers/EnabledObstacleType
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
      // static field const value: static public GameplayModifiers/EnabledObstacleType All
      static constexpr const int All = 0;
      // Get static field: static public GameplayModifiers/EnabledObstacleType All
      static GlobalNamespace::GameplayModifiers::EnabledObstacleType _get_All();
      // Set static field: static public GameplayModifiers/EnabledObstacleType All
      static void _set_All(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public GameplayModifiers/EnabledObstacleType FullHeightOnly
      static constexpr const int FullHeightOnly = 1;
      // Get static field: static public GameplayModifiers/EnabledObstacleType FullHeightOnly
      static GlobalNamespace::GameplayModifiers::EnabledObstacleType _get_FullHeightOnly();
      // Set static field: static public GameplayModifiers/EnabledObstacleType FullHeightOnly
      static void _set_FullHeightOnly(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public GameplayModifiers/EnabledObstacleType NoObstacles
      static constexpr const int NoObstacles = 2;
      // Get static field: static public GameplayModifiers/EnabledObstacleType NoObstacles
      static GlobalNamespace::GameplayModifiers::EnabledObstacleType _get_NoObstacles();
      // Set static field: static public GameplayModifiers/EnabledObstacleType NoObstacles
      static void _set_NoObstacles(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
    }; // GameplayModifiers/EnabledObstacleType
    #pragma pack(pop)
    static check_size<sizeof(GameplayModifiers::EnabledObstacleType), 0 + sizeof(int)> __GlobalNamespace_GameplayModifiers_EnabledObstacleTypeSizeCheck;
    static_assert(sizeof(GameplayModifiers::EnabledObstacleType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GameplayModifiers/EnergyType
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
      // static field const value: static public GameplayModifiers/EnergyType Bar
      static constexpr const int Bar = 0;
      // Get static field: static public GameplayModifiers/EnergyType Bar
      static GlobalNamespace::GameplayModifiers::EnergyType _get_Bar();
      // Set static field: static public GameplayModifiers/EnergyType Bar
      static void _set_Bar(GlobalNamespace::GameplayModifiers::EnergyType value);
      // static field const value: static public GameplayModifiers/EnergyType Battery
      static constexpr const int Battery = 1;
      // Get static field: static public GameplayModifiers/EnergyType Battery
      static GlobalNamespace::GameplayModifiers::EnergyType _get_Battery();
      // Set static field: static public GameplayModifiers/EnergyType Battery
      static void _set_Battery(GlobalNamespace::GameplayModifiers::EnergyType value);
    }; // GameplayModifiers/EnergyType
    #pragma pack(pop)
    static check_size<sizeof(GameplayModifiers::EnergyType), 0 + sizeof(int)> __GlobalNamespace_GameplayModifiers_EnergyTypeSizeCheck;
    static_assert(sizeof(GameplayModifiers::EnergyType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GameplayModifiers/SongSpeed
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
      // static field const value: static public GameplayModifiers/SongSpeed Normal
      static constexpr const int Normal = 0;
      // Get static field: static public GameplayModifiers/SongSpeed Normal
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_Normal();
      // Set static field: static public GameplayModifiers/SongSpeed Normal
      static void _set_Normal(GlobalNamespace::GameplayModifiers::SongSpeed value);
      // static field const value: static public GameplayModifiers/SongSpeed Faster
      static constexpr const int Faster = 1;
      // Get static field: static public GameplayModifiers/SongSpeed Faster
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_Faster();
      // Set static field: static public GameplayModifiers/SongSpeed Faster
      static void _set_Faster(GlobalNamespace::GameplayModifiers::SongSpeed value);
      // static field const value: static public GameplayModifiers/SongSpeed Slower
      static constexpr const int Slower = 2;
      // Get static field: static public GameplayModifiers/SongSpeed Slower
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_Slower();
      // Set static field: static public GameplayModifiers/SongSpeed Slower
      static void _set_Slower(GlobalNamespace::GameplayModifiers::SongSpeed value);
      // static field const value: static public GameplayModifiers/SongSpeed SuperFast
      static constexpr const int SuperFast = 3;
      // Get static field: static public GameplayModifiers/SongSpeed SuperFast
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_SuperFast();
      // Set static field: static public GameplayModifiers/SongSpeed SuperFast
      static void _set_SuperFast(GlobalNamespace::GameplayModifiers::SongSpeed value);
    }; // GameplayModifiers/SongSpeed
    #pragma pack(pop)
    static check_size<sizeof(GameplayModifiers::SongSpeed), 0 + sizeof(int)> __GlobalNamespace_GameplayModifiers_SongSpeedSizeCheck;
    static_assert(sizeof(GameplayModifiers::SongSpeed) == 0x4);
    // private GameplayModifiers/EnergyType _energyType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers::EnergyType) == 0x4);
    // private System.Boolean _noFailOn0Energy
    // Size: 0x1
    // Offset: 0x14
    bool noFailOn0Energy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _demoNoFail
    // Size: 0x1
    // Offset: 0x15
    bool demoNoFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _instaFail
    // Size: 0x1
    // Offset: 0x16
    bool instaFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _failOnSaberClash
    // Size: 0x1
    // Offset: 0x17
    bool failOnSaberClash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private GameplayModifiers/EnabledObstacleType _enabledObstacleType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstacleType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers::EnabledObstacleType) == 0x4);
    // private System.Boolean _demoNoObstacles
    // Size: 0x1
    // Offset: 0x1C
    bool demoNoObstacles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _fastNotes
    // Size: 0x1
    // Offset: 0x1D
    bool fastNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _strictAngles
    // Size: 0x1
    // Offset: 0x1E
    bool strictAngles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disappearingArrows
    // Size: 0x1
    // Offset: 0x1F
    bool disappearingArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _ghostNotes
    // Size: 0x1
    // Offset: 0x20
    bool ghostNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _noBombs
    // Size: 0x1
    // Offset: 0x21
    bool noBombs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noBombs and: songSpeed
    char __padding11[0x2] = {};
    // private GameplayModifiers/SongSpeed _songSpeed
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::GameplayModifiers::SongSpeed songSpeed;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers::SongSpeed) == 0x4);
    // private System.Boolean _noArrows
    // Size: 0x1
    // Offset: 0x28
    bool noArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _proMode
    // Size: 0x1
    // Offset: 0x29
    bool proMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _zenMode
    // Size: 0x1
    // Offset: 0x2A
    bool zenMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _smallCubes
    // Size: 0x1
    // Offset: 0x2B
    bool smallCubes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameplayModifiers
    GameplayModifiers(GlobalNamespace::GameplayModifiers::EnergyType energyType_ = {}, bool noFailOn0Energy_ = {}, bool demoNoFail_ = {}, bool instaFail_ = {}, bool failOnSaberClash_ = {}, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstacleType_ = {}, bool demoNoObstacles_ = {}, bool fastNotes_ = {}, bool strictAngles_ = {}, bool disappearingArrows_ = {}, bool ghostNotes_ = {}, bool noBombs_ = {}, GlobalNamespace::GameplayModifiers::SongSpeed songSpeed_ = {}, bool noArrows_ = {}, bool proMode_ = {}, bool zenMode_ = {}, bool smallCubes_ = {}) noexcept : energyType{energyType_}, noFailOn0Energy{noFailOn0Energy_}, demoNoFail{demoNoFail_}, instaFail{instaFail_}, failOnSaberClash{failOnSaberClash_}, enabledObstacleType{enabledObstacleType_}, demoNoObstacles{demoNoObstacles_}, fastNotes{fastNotes_}, strictAngles{strictAngles_}, disappearingArrows{disappearingArrows_}, ghostNotes{ghostNotes_}, noBombs{noBombs_}, songSpeed{songSpeed_}, noArrows{noArrows_}, proMode{proMode_}, zenMode{zenMode_}, smallCubes{smallCubes_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers*>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers*>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers*>*>(this);
    }
    // public GameplayModifiers/EnergyType get_energyType()
    // Offset: 0x2347408
    GlobalNamespace::GameplayModifiers::EnergyType get_energyType();
    // public System.Boolean get_noFailOn0Energy()
    // Offset: 0x2347410
    bool get_noFailOn0Energy();
    // public System.Boolean get_demoNoFail()
    // Offset: 0x2347418
    bool get_demoNoFail();
    // public System.Boolean get_instaFail()
    // Offset: 0x2347420
    bool get_instaFail();
    // public System.Boolean get_failOnSaberClash()
    // Offset: 0x2347428
    bool get_failOnSaberClash();
    // public GameplayModifiers/EnabledObstacleType get_enabledObstacleType()
    // Offset: 0x2347430
    GlobalNamespace::GameplayModifiers::EnabledObstacleType get_enabledObstacleType();
    // public System.Boolean get_demoNoObstacles()
    // Offset: 0x2347438
    bool get_demoNoObstacles();
    // public System.Boolean get_fastNotes()
    // Offset: 0x2347440
    bool get_fastNotes();
    // public System.Boolean get_strictAngles()
    // Offset: 0x2347448
    bool get_strictAngles();
    // public System.Boolean get_disappearingArrows()
    // Offset: 0x2347450
    bool get_disappearingArrows();
    // public System.Boolean get_ghostNotes()
    // Offset: 0x2347458
    bool get_ghostNotes();
    // public System.Boolean get_noBombs()
    // Offset: 0x2347460
    bool get_noBombs();
    // public GameplayModifiers/SongSpeed get_songSpeed()
    // Offset: 0x2347468
    GlobalNamespace::GameplayModifiers::SongSpeed get_songSpeed();
    // public System.Boolean get_noArrows()
    // Offset: 0x2347470
    bool get_noArrows();
    // public System.Boolean get_proMode()
    // Offset: 0x2347478
    bool get_proMode();
    // public System.Boolean get_zenMode()
    // Offset: 0x2347480
    bool get_zenMode();
    // public System.Boolean get_smallCubes()
    // Offset: 0x2347488
    bool get_smallCubes();
    // public System.Single get_songSpeedMul()
    // Offset: 0x2347490
    float get_songSpeedMul();
    // public System.Single get_cutAngleTolerance()
    // Offset: 0x23474B4
    float get_cutAngleTolerance();
    // public System.Single get_notesUniformScale()
    // Offset: 0x23474D0
    float get_notesUniformScale();
    // public System.Void .ctor(System.Boolean demoNoFail, System.Boolean demoNoObstacles, GameplayModifiers/EnergyType energyType, System.Boolean noFailOn0Energy, System.Boolean instaFail, System.Boolean failOnSaberClash, GameplayModifiers/EnabledObstacleType enabledObstacleType, System.Boolean noBombs, System.Boolean fastNotes, System.Boolean strictAngles, System.Boolean disappearingArrows, GameplayModifiers/SongSpeed songSpeed, System.Boolean noArrows, System.Boolean ghostNotes, System.Boolean proMode, System.Boolean zenMode, System.Boolean smallCubes)
    // Offset: 0x2347518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiers* New_ctor(bool demoNoFail, bool demoNoObstacles, GlobalNamespace::GameplayModifiers::EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows, GlobalNamespace::GameplayModifiers::SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode, bool smallCubes) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiers*, creationType>(demoNoFail, demoNoObstacles, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes)));
    }
    // public GameplayModifiers CopyWith(System.Nullable`1<System.Boolean> demoNoFail, System.Nullable`1<System.Boolean> demoNoObstacles, System.Nullable`1<GameplayModifiers/EnergyType> energyType, System.Nullable`1<System.Boolean> noFailOn0Energy, System.Nullable`1<System.Boolean> instaFail, System.Nullable`1<System.Boolean> failOnSaberClash, System.Nullable`1<GameplayModifiers/EnabledObstacleType> enabledObstacleType, System.Nullable`1<System.Boolean> noBombs, System.Nullable`1<System.Boolean> fastNotes, System.Nullable`1<System.Boolean> strictAngles, System.Nullable`1<System.Boolean> disappearingArrows, System.Nullable`1<GameplayModifiers/SongSpeed> songSpeed, System.Nullable`1<System.Boolean> noArrows, System.Nullable`1<System.Boolean> ghostNotes, System.Nullable`1<System.Boolean> proMode, System.Nullable`1<System.Boolean> zenMode, System.Nullable`1<System.Boolean> smallCubes)
    // Offset: 0x2347650
    GlobalNamespace::GameplayModifiers* CopyWith(System::Nullable_1<bool> demoNoFail, System::Nullable_1<bool> demoNoObstacles, System::Nullable_1<GlobalNamespace::GameplayModifiers::EnergyType> energyType, System::Nullable_1<bool> noFailOn0Energy, System::Nullable_1<bool> instaFail, System::Nullable_1<bool> failOnSaberClash, System::Nullable_1<GlobalNamespace::GameplayModifiers::EnabledObstacleType> enabledObstacleType, System::Nullable_1<bool> noBombs, System::Nullable_1<bool> fastNotes, System::Nullable_1<bool> strictAngles, System::Nullable_1<bool> disappearingArrows, System::Nullable_1<GlobalNamespace::GameplayModifiers::SongSpeed> songSpeed, System::Nullable_1<bool> noArrows, System::Nullable_1<bool> ghostNotes, System::Nullable_1<bool> proMode, System::Nullable_1<bool> zenMode, System::Nullable_1<bool> smallCubes);
    // public System.Boolean IsWithoutModifiers()
    // Offset: 0x23478D4
    bool IsWithoutModifiers();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x234796C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // private GameplayModifiers LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2347ABC
    GlobalNamespace::GameplayModifiers* LiteNetLib_Utils_INetImmutableSerializable$GameplayModifiers$_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public GameplayModifiers CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2347AC4
    static GlobalNamespace::GameplayModifiers* CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x23474E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiers*, creationType>()));
    }
  }; // GameplayModifiers
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifiers), 43 + sizeof(bool)> __GlobalNamespace_GameplayModifiersSizeCheck;
  static_assert(sizeof(GameplayModifiers) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers*, "", "GameplayModifiers");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers::EnabledObstacleType, "", "GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers::EnergyType, "", "GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers::SongSpeed, "", "GameplayModifiers/SongSpeed");
// Writing includes for template specializations
#include "System/Nullable_1.hpp"
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_energyType
// Il2CppName: get_energyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers::EnergyType (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_energyType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_energyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_noFailOn0Energy
// Il2CppName: get_noFailOn0Energy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_noFailOn0Energy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_noFailOn0Energy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_demoNoFail
// Il2CppName: get_demoNoFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_demoNoFail)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_demoNoFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_instaFail
// Il2CppName: get_instaFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_instaFail)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_instaFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_failOnSaberClash
// Il2CppName: get_failOnSaberClash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_failOnSaberClash)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_failOnSaberClash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_enabledObstacleType
// Il2CppName: get_enabledObstacleType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers::EnabledObstacleType (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_enabledObstacleType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_enabledObstacleType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_demoNoObstacles
// Il2CppName: get_demoNoObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_demoNoObstacles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_demoNoObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_fastNotes
// Il2CppName: get_fastNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_fastNotes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_fastNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_strictAngles
// Il2CppName: get_strictAngles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_strictAngles)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_strictAngles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_disappearingArrows
// Il2CppName: get_disappearingArrows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_disappearingArrows)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_disappearingArrows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_ghostNotes
// Il2CppName: get_ghostNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_ghostNotes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_ghostNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_noBombs
// Il2CppName: get_noBombs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_noBombs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_noBombs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_songSpeed
// Il2CppName: get_songSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers::SongSpeed (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_songSpeed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_songSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_noArrows
// Il2CppName: get_noArrows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_noArrows)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_noArrows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_proMode
// Il2CppName: get_proMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_proMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_proMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_zenMode
// Il2CppName: get_zenMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_zenMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_zenMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_smallCubes
// Il2CppName: get_smallCubes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_smallCubes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_smallCubes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_songSpeedMul
// Il2CppName: get_songSpeedMul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_songSpeedMul)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_songSpeedMul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_cutAngleTolerance
// Il2CppName: get_cutAngleTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_cutAngleTolerance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_cutAngleTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::get_notesUniformScale
// Il2CppName: get_notesUniformScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_notesUniformScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "get_notesUniformScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::CopyWith
// Il2CppName: CopyWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::GameplayModifiers::*)(System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<GlobalNamespace::GameplayModifiers::EnergyType>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<GlobalNamespace::GameplayModifiers::EnabledObstacleType>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<GlobalNamespace::GameplayModifiers::SongSpeed>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>)>(&GlobalNamespace::GameplayModifiers::CopyWith)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "CopyWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<GlobalNamespace::GameplayModifiers::EnergyType>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<GlobalNamespace::GameplayModifiers::EnabledObstacleType>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<GlobalNamespace::GameplayModifiers::SongSpeed>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>(), ::il2cpp_utils::ExtractIndependentType<System::Nullable_1<bool>>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::IsWithoutModifiers
// Il2CppName: IsWithoutModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::IsWithoutModifiers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "IsWithoutModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiers::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::GameplayModifiers::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable$GameplayModifiers$_CreateFromSerializedData
// Il2CppName: LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::GameplayModifiers::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable$GameplayModifiers$_CreateFromSerializedData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::GameplayModifiers::CreateFromSerializedData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiers*), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
