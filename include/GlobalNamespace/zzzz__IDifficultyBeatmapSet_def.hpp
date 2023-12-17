#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDifficultyBeatmapSet)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDifficultyBeatmapSet);
// Type: ::IDifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4396))
// CS Name: ::IDifficultyBeatmapSet*
class CORDL_TYPE IDifficultyBeatmapSet {
public:
// Declarations
 __declspec(property(get=get_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic;

 __declspec(property(get=get_difficultyBeatmaps)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*  difficultyBeatmaps;

/// @brief Method get_beatmapCharacteristic addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic() ;

/// @brief Method get_difficultyBeatmaps addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps() ;

// Ctor Parameters [CppParam { name: "", ty: "IDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IDifficultyBeatmapSet(IDifficultyBeatmapSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDifficultyBeatmapSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDifficultyBeatmapSet(IDifficultyBeatmapSet const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDifficultyBeatmapSet*, "", "IDifficultyBeatmapSet");
