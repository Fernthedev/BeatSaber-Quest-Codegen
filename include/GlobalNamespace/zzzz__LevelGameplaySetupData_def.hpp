#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LevelGameplaySetupData)
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelGameplaySetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelGameplaySetupData);
// Type: ::LevelGameplaySetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4498))
// CS Name: ::LevelGameplaySetupData*
class CORDL_TYPE LevelGameplaySetupData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _beatmapLevel offset 0x10
 __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel)) ::GlobalNamespace::PreviewDifficultyBeatmap*  _beatmapLevel;

/// @brief Field _gameplayModifiers offset 0x18
 __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  _gameplayModifiers;

 __declspec(property(get=get_beatmapLevel)) ::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel;

 __declspec(property(get=get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

/// @brief Convert operator to "::GlobalNamespace::ILevelGameplaySetupData"
constexpr operator  ::GlobalNamespace::ILevelGameplaySetupData*() noexcept;

constexpr void __set__beatmapLevel(::GlobalNamespace::PreviewDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::PreviewDifficultyBeatmap* __get__beatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewDifficultyBeatmap*> __get__beatmapLevel() const;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get__gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get__gameplayModifiers() const;

/// @brief Method get_beatmapLevel addr 0x2355d34 size 0x8 virtual true final true
inline ::GlobalNamespace::PreviewDifficultyBeatmap* get_beatmapLevel() ;

/// @brief Method get_gameplayModifiers addr 0x2355d3c size 0x8 virtual true final true
inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers() ;

static inline ::GlobalNamespace::LevelGameplaySetupData* New_ctor() ;

/// @brief Method .ctor addr 0x2355d44 size 0x68 virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::LevelGameplaySetupData* New_ctor(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers) ;

/// @brief Method .ctor addr 0x2355dac size 0xa4 virtual false final false
inline void _ctor(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers) ;

/// @brief Method ClearGameplaySetupData addr 0x2355e50 size 0x64 virtual false final false
inline void ClearGameplaySetupData() ;

/// @brief Method SetBeatmapLevel addr 0x2355eb4 size 0x8 virtual false final false
inline void SetBeatmapLevel(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel) ;

/// @brief Method SetGameplayModifiers addr 0x2355ebc size 0x78 virtual false final false
inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers*  gameplayModifiers) ;

// Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelGameplaySetupData(LevelGameplaySetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelGameplaySetupData(LevelGameplaySetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelGameplaySetupData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelGameplaySetupData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelGameplaySetupData*, "", "LevelGameplaySetupData");
