#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticBeatmapObjectSpawnMovementData)
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticBeatmapObjectSpawnMovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticBeatmapObjectSpawnMovementData);
// Type: ::StaticBeatmapObjectSpawnMovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14781))
// CS Name: ::StaticBeatmapObjectSpawnMovementData*
class CORDL_TYPE StaticBeatmapObjectSpawnMovementData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kNoteLinesDistance offset 0x0
static constexpr float_t  kNoteLinesDistance{0.6};

/// @brief Field kBaseLinesYPos offset 0x0
static constexpr float_t  kBaseLinesYPos{0.25};

/// @brief Field kUpperLinesYPos offset 0x0
static constexpr float_t  kUpperLinesYPos{0.85};

/// @brief Field kTopLinesYPos offset 0x0
static constexpr float_t  kTopLinesYPos{1.45};

/// @brief Field kObstacleVerticalOffset offset 0x0
static constexpr float_t  kObstacleVerticalOffset{-0.15};

/// @brief Method Get2DNoteOffset addr 0xe04e84 size 0x4c virtual false final false
static inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t  noteLineIndex, int32_t  noteLinesCount, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

/// @brief Method LineYPosForLineLayer addr 0xe05268 size 0x24 virtual false final false
static inline float_t LineYPosForLineLayer(::GlobalNamespace::NoteLineLayer  lineLayer) ;

/// @brief Method get_layerHeight addr 0xe0528c size 0xc virtual false final false
static inline float_t get_layerHeight() ;

// Ctor Parameters [CppParam { name: "", ty: "StaticBeatmapObjectSpawnMovementData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticBeatmapObjectSpawnMovementData(StaticBeatmapObjectSpawnMovementData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticBeatmapObjectSpawnMovementData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticBeatmapObjectSpawnMovementData(StaticBeatmapObjectSpawnMovementData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticBeatmapObjectSpawnMovementData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBeatmapObjectSpawnMovementData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBeatmapObjectSpawnMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBeatmapObjectSpawnMovementData*, "", "StaticBeatmapObjectSpawnMovementData");
