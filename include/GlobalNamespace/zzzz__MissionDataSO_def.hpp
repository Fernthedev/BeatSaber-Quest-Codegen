#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionDataSO)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MissionHelpSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionDataSO);
// Type: ::MissionDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4457))
// CS Name: ::MissionDataSO*
class CORDL_TYPE MissionDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _level offset 0x18
 __declspec(property(get=__get__level, put=__set__level)) ::GlobalNamespace::BeatmapLevelSO*  _level;

/// @brief Field _beatmapCharacteristic offset 0x20
 __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  _beatmapCharacteristic;

/// @brief Field _beatmapDifficulty offset 0x28
 __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  _beatmapDifficulty;

/// @brief Field _missionObjectives offset 0x30
 __declspec(property(get=__get__missionObjectives, put=__set__missionObjectives)) ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  _missionObjectives;

/// @brief Field _gameplayModifiers offset 0x38
 __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  _gameplayModifiers;

/// @brief Field _missionHelp offset 0x40
 __declspec(property(get=__get__missionHelp, put=__set__missionHelp)) ::GlobalNamespace::MissionHelpSO*  _missionHelp;

 __declspec(property(get=get_missionObjectives)) ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives;

 __declspec(property(get=get_level)) ::GlobalNamespace::BeatmapLevelSO*  level;

 __declspec(property(get=get_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic;

 __declspec(property(get=get_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty;

 __declspec(property(get=get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

 __declspec(property(get=get_missionHelp)) ::GlobalNamespace::MissionHelpSO*  missionHelp;

constexpr void __set__level(::GlobalNamespace::BeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO* __get__level() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> __get__level() const;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get__beatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get__beatmapCharacteristic() const;

constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty() const;

constexpr void __set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>& __get__missionObjectives() ;

constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*> const& __get__missionObjectives() const;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get__gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get__gameplayModifiers() const;

constexpr void __set__missionHelp(::GlobalNamespace::MissionHelpSO*  value) ;

constexpr ::GlobalNamespace::MissionHelpSO* __get__missionHelp() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpSO*> __get__missionHelp() const;

/// @brief Method get_missionObjectives addr 0x2352a14 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*> get_missionObjectives() ;

/// @brief Method get_level addr 0x2352a1c size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapLevelSO* get_level() ;

/// @brief Method get_beatmapCharacteristic addr 0x2352a24 size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic() ;

/// @brief Method get_beatmapDifficulty addr 0x2352a2c size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty() ;

/// @brief Method get_gameplayModifiers addr 0x2352a34 size 0x8 virtual false final false
inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers() ;

/// @brief Method get_missionHelp addr 0x2352a3c size 0x8 virtual false final false
inline ::GlobalNamespace::MissionHelpSO* get_missionHelp() ;

/// @brief Method OnValidate addr 0x2352a44 size 0x8c virtual false final false
inline void OnValidate() ;

static inline ::GlobalNamespace::MissionDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x2352ad0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionDataSO(MissionDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionDataSO(MissionDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionDataSO, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionDataSO*, "", "MissionDataSO");
