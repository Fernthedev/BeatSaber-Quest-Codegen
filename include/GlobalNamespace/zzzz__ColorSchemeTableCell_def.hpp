#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ColorSchemeTableCell)
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class ColorSchemeView;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeTableCell);
// Type: ::ColorSchemeTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5411))
// CS Name: ::ColorSchemeTableCell*
class CORDL_TYPE ColorSchemeTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _text offset 0x58
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _colorSchemeView offset 0x60
 __declspec(property(get=__get__colorSchemeView, put=__set__colorSchemeView)) ::GlobalNamespace::ColorSchemeView*  _colorSchemeView;

/// @brief Field _editIcon offset 0x68
 __declspec(property(get=__get__editIcon, put=__set__editIcon)) ::UnityEngine::UI::Image*  _editIcon;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(put=set_showEditIcon)) bool  showEditIcon;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__colorSchemeView(::GlobalNamespace::ColorSchemeView*  value) ;

constexpr ::GlobalNamespace::ColorSchemeView* __get__colorSchemeView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeView*> __get__colorSchemeView() const;

constexpr void __set__editIcon(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__editIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__editIcon() const;

/// @brief Method set_text addr 0x2275b64 size 0x24 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_text addr 0x2275e58 size 0x24 virtual false final false
inline ::StringW get_text() ;

/// @brief Method set_showEditIcon addr 0x2275b44 size 0x20 virtual false final false
inline void set_showEditIcon(bool  value) ;

/// @brief Method SetColors addr 0x2275b88 size 0x7c virtual false final false
inline void SetColors(::UnityEngine::Color  saberAColor, ::UnityEngine::Color  saberBColor, ::UnityEngine::Color  environment0Color, ::UnityEngine::Color  environment1Color, ::UnityEngine::Color  environmentColor0Boost, ::UnityEngine::Color  environmentColor1Boost, ::UnityEngine::Color  obstacleColor) ;

static inline ::GlobalNamespace::ColorSchemeTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x2275e7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemeTableCell(ColorSchemeTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemeTableCell(ColorSchemeTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemeTableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeTableCell, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeTableCell*, "", "ColorSchemeTableCell");
