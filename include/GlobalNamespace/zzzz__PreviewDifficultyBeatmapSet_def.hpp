#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PreviewDifficultyBeatmapSet)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviewDifficultyBeatmapSet);
// Type: ::PreviewDifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4409))
// CS Name: ::PreviewDifficultyBeatmapSet*
class CORDL_TYPE PreviewDifficultyBeatmapSet : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _beatmapCharacteristic offset 0x10
 __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  _beatmapCharacteristic;

/// @brief Field _beatmapDifficulties offset 0x18
 __declspec(property(get=__get__beatmapDifficulties, put=__set__beatmapDifficulties)) ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  _beatmapDifficulties;

 __declspec(property(get=get_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic;

 __declspec(property(get=get_beatmapDifficulties)) ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  beatmapDifficulties;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get__beatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get__beatmapCharacteristic() const;

constexpr void __set__beatmapDifficulties(::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>& __get__beatmapDifficulties() ;

constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*> const& __get__beatmapDifficulties() const;

/// @brief Method get_beatmapCharacteristic addr 0x234c5e0 size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic() ;

/// @brief Method get_beatmapDifficulties addr 0x234c5e8 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*> get_beatmapDifficulties() ;

static inline ::GlobalNamespace::PreviewDifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  beatmapDifficulties) ;

/// @brief Method .ctor addr 0x234c5f0 size 0x2c virtual false final false
inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  beatmapDifficulties) ;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreviewDifficultyBeatmapSet(PreviewDifficultyBeatmapSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreviewDifficultyBeatmapSet(PreviewDifficultyBeatmapSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PreviewDifficultyBeatmapSet()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewDifficultyBeatmapSet, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSet*, "", "PreviewDifficultyBeatmapSet");
