#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextOnlyTableCell)
namespace UnityEngine {
struct Color;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class ImageView;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class TextOnlyTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextOnlyTableCell);
// Type: ::TextOnlyTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5440))
// CS Name: ::TextOnlyTableCell*
class CORDL_TYPE TextOnlyTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _selectedHighlightColor offset 0x58
 __declspec(property(get=__get__selectedHighlightColor, put=__set__selectedHighlightColor)) ::UnityEngine::Color  _selectedHighlightColor;

/// @brief Field _text offset 0x68
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _bgImage offset 0x70
 __declspec(property(get=__get__bgImage, put=__set__bgImage)) ::HMUI::ImageView*  _bgImage;

/// @brief Field _highlightImage offset 0x78
 __declspec(property(get=__get__highlightImage, put=__set__highlightImage)) ::HMUI::ImageView*  _highlightImage;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

constexpr void __set__selectedHighlightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedHighlightColor() ;

constexpr ::UnityEngine::Color const& __get__selectedHighlightColor() const;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__bgImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__bgImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__bgImage() const;

constexpr void __set__highlightImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__highlightImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__highlightImage() const;

/// @brief Method get_text addr 0x227c84c size 0x24 virtual false final false
inline ::StringW get_text() ;

/// @brief Method set_text addr 0x227c870 size 0x24 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method SelectionDidChange addr 0x227c894 size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x227c964 size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x227c898 size 0xcc virtual false final false
inline void RefreshVisuals() ;

static inline ::GlobalNamespace::TextOnlyTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x227c968 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextOnlyTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextOnlyTableCell(TextOnlyTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextOnlyTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextOnlyTableCell(TextOnlyTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextOnlyTableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextOnlyTableCell, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextOnlyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextOnlyTableCell*, "", "TextOnlyTableCell");
