#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomFormatRangeValuesSlider)
// Forward declare root types
namespace HMUI {
class CustomFormatRangeValuesSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::CustomFormatRangeValuesSlider);
// Type: HMUI::CustomFormatRangeValuesSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13556))
// CS Name: ::HMUI::CustomFormatRangeValuesSlider*
class CORDL_TYPE CustomFormatRangeValuesSlider : public ::HMUI::RangeValuesTextSlider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x170};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x170 - sizeof(::HMUI::RangeValuesTextSlider)]{};

/// @brief Field _formatString offset 0x168
 __declspec(property(get=__get__formatString, put=__set__formatString)) ::StringW  _formatString;

constexpr void __set__formatString(::StringW  value) ;

constexpr ::StringW& __get__formatString() ;

constexpr ::StringW const& __get__formatString() const;

/// @brief Method TextForValue addr 0x21223d8 size 0x70 virtual true final false
inline ::StringW TextForValue(float_t  value) ;

static inline ::HMUI::CustomFormatRangeValuesSlider* New_ctor() ;

/// @brief Method .ctor addr 0x2122448 size 0xc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomFormatRangeValuesSlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomFormatRangeValuesSlider(CustomFormatRangeValuesSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomFormatRangeValuesSlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomFormatRangeValuesSlider(CustomFormatRangeValuesSlider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomFormatRangeValuesSlider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::CustomFormatRangeValuesSlider, 0x170>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::CustomFormatRangeValuesSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CustomFormatRangeValuesSlider*, "HMUI", "CustomFormatRangeValuesSlider");
