#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PercentSlider)
// Forward declare root types
namespace HMUI {
class PercentSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::PercentSlider);
// Type: HMUI::PercentSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13557))
// CS Name: ::HMUI::PercentSlider*
class CORDL_TYPE PercentSlider : public ::HMUI::RangeValuesTextSlider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x168};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x168 - sizeof(::HMUI::RangeValuesTextSlider)]{};

/// @brief Method TextForValue addr 0x2122460 size 0x8c virtual true final false
inline ::StringW TextForValue(float_t  value) ;

static inline ::HMUI::PercentSlider* New_ctor() ;

/// @brief Method .ctor addr 0x21224ec size 0xc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PercentSlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PercentSlider(PercentSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PercentSlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PercentSlider(PercentSlider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PercentSlider()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::PercentSlider, 0x168>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::PercentSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PercentSlider*, "HMUI", "PercentSlider");
