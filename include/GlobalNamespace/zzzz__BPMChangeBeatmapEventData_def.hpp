#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BPMChangeBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BPMChangeBeatmapEventData);
// Type: ::BPMChangeBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14729))
// CS Name: ::BPMChangeBeatmapEventData*
class CORDL_TYPE BPMChangeBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::BeatmapEventData)]{};

/// @brief Field bpm offset 0x30
 __declspec(property(get=__get_bpm, put=__set_bpm)) float_t  bpm;

constexpr void __set_bpm(float_t  value) ;

constexpr float_t& __get_bpm() ;

constexpr float_t const& __get_bpm() const;

static inline ::GlobalNamespace::BPMChangeBeatmapEventData* New_ctor(float_t  time, float_t  bpm) ;

/// @brief Method .ctor addr 0xdfe0c4 size 0x44 virtual false final false
inline void _ctor(float_t  time, float_t  bpm) ;

/// @brief Method GetCopy addr 0xdfe108 size 0x8c virtual true final false
inline ::GlobalNamespace::BeatmapDataItem* GetCopy() ;

/// @brief Method GetDefault addr 0xdfe194 size 0x8 virtual true final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "BPMChangeBeatmapEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BPMChangeBeatmapEventData(BPMChangeBeatmapEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BPMChangeBeatmapEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BPMChangeBeatmapEventData(BPMChangeBeatmapEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BPMChangeBeatmapEventData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BPMChangeBeatmapEventData, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BPMChangeBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BPMChangeBeatmapEventData*, "", "BPMChangeBeatmapEventData");
