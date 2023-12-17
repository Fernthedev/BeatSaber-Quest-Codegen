#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectData)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectData);
// Type: ::BeatmapObjectData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14751))
// CS Name: ::BeatmapObjectData*
class CORDL_TYPE BeatmapObjectData : public ::GlobalNamespace::BeatmapDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::BeatmapDataItem)]{};

static inline ::GlobalNamespace::BeatmapObjectData* New_ctor(float_t  time, int32_t  subtypeIdentifier) ;

/// @brief Method .ctor addr 0xe0069c size 0x40 virtual false final false
inline void _ctor(float_t  time, int32_t  subtypeIdentifier) ;

/// @brief Method Mirror addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Mirror(int32_t  lineCount) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectData(BeatmapObjectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectData(BeatmapObjectData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectData*, "", "BeatmapObjectData");
