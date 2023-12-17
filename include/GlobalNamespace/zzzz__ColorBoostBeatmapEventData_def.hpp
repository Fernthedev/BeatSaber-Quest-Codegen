#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorBoostBeatmapEventData)
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorBoostBeatmapEventData);
// Type: ::ColorBoostBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14730))
// CS Name: ::ColorBoostBeatmapEventData*
class CORDL_TYPE ColorBoostBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::BeatmapEventData)]{};

/// @brief Field boostColorsAreOn offset 0x30
 __declspec(property(get=__get_boostColorsAreOn, put=__set_boostColorsAreOn)) bool  boostColorsAreOn;

constexpr void __set_boostColorsAreOn(bool  value) ;

constexpr bool& __get_boostColorsAreOn() ;

constexpr bool const& __get_boostColorsAreOn() const;

static inline void setStaticF__defaultCopy(::GlobalNamespace::ColorBoostBeatmapEventData*  value) ;

static inline ::GlobalNamespace::ColorBoostBeatmapEventData* getStaticF__defaultCopy() ;

static inline ::GlobalNamespace::ColorBoostBeatmapEventData* New_ctor(float_t  time, bool  boostColorsAreOn) ;

/// @brief Method .ctor addr 0xdfe19c size 0x4c virtual false final false
inline void _ctor(float_t  time, bool  boostColorsAreOn) ;

/// @brief Method GetCopy addr 0xdfe1e8 size 0x8c virtual true final false
inline ::GlobalNamespace::BeatmapDataItem* GetCopy() ;

/// @brief Method GetDefault addr 0xdfe274 size 0x58 virtual true final false
inline ::GlobalNamespace::BeatmapEventData* GetDefault() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorBoostBeatmapEventData(ColorBoostBeatmapEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorBoostBeatmapEventData(ColorBoostBeatmapEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorBoostBeatmapEventData()  = default;
public:


// Fields

// Static field _defaultCopy


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorBoostBeatmapEventData, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorBoostBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorBoostBeatmapEventData*, "", "ColorBoostBeatmapEventData");
