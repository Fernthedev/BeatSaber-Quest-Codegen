#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataItemExecutionOrderConstants)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataItemExecutionOrderConstants;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants);
// Type: ::BeatmapDataItemExecutionOrderConstants
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14726))
// CS Name: ::BeatmapDataItemExecutionOrderConstants*
class CORDL_TYPE BeatmapDataItemExecutionOrderConstants : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kBPMChangeBeatmapEventExecutionOrder offset 0x0
static constexpr int32_t  kBPMChangeBeatmapEventExecutionOrder{static_cast<int32_t>(0xfffffc17)};

/// @brief Field kEarlySpawnRotationBeatmapEventExecutionOrder offset 0x0
static constexpr int32_t  kEarlySpawnRotationBeatmapEventExecutionOrder{static_cast<int32_t>(0xfffffc18)};

/// @brief Field kCommonBeatmapEventExecutionOrder offset 0x0
static constexpr int32_t  kCommonBeatmapEventExecutionOrder{static_cast<int32_t>(0xffffff9c)};

/// @brief Field kCommonBeatmapObjectDataExecutionOrder offset 0x0
static constexpr int32_t  kCommonBeatmapObjectDataExecutionOrder{static_cast<int32_t>(0x64)};

/// @brief Field kLateSpawnRotationBeatmapEventExecutionOrder offset 0x0
static constexpr int32_t  kLateSpawnRotationBeatmapEventExecutionOrder{static_cast<int32_t>(0x3e8)};

static inline ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants* New_ctor() ;

/// @brief Method .ctor addr 0xdfe048 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItemExecutionOrderConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataItemExecutionOrderConstants(BeatmapDataItemExecutionOrderConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItemExecutionOrderConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataItemExecutionOrderConstants(BeatmapDataItemExecutionOrderConstants const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataItemExecutionOrderConstants()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*, "", "BeatmapDataItemExecutionOrderConstants");
