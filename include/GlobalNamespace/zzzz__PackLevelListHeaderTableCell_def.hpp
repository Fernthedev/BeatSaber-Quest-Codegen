#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackLevelListHeaderTableCell)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class PackLevelListHeaderTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackLevelListHeaderTableCell);
// Type: ::PackLevelListHeaderTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5433))
// CS Name: ::PackLevelListHeaderTableCell*
class CORDL_TYPE PackLevelListHeaderTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _selectedHighlightElementsColor offset 0x58
 __declspec(property(get=__get__selectedHighlightElementsColor, put=__set__selectedHighlightElementsColor)) ::UnityEngine::Color  _selectedHighlightElementsColor;

/// @brief Field _text offset 0x68
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _bgImage offset 0x70
 __declspec(property(get=__get__bgImage, put=__set__bgImage)) ::UnityEngine::UI::Image*  _bgImage;

/// @brief Field _highlightImage offset 0x78
 __declspec(property(get=__get__highlightImage, put=__set__highlightImage)) ::UnityEngine::UI::Image*  _highlightImage;

/// @brief Field _arrowImage offset 0x80
 __declspec(property(get=__get__arrowImage, put=__set__arrowImage)) ::UnityEngine::UI::Image*  _arrowImage;

/// @brief Field _cancellationTokenSource offset 0x88
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

constexpr void __set__selectedHighlightElementsColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedHighlightElementsColor() ;

constexpr ::UnityEngine::Color const& __get__selectedHighlightElementsColor() const;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__bgImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__bgImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__bgImage() const;

constexpr void __set__highlightImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__highlightImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__highlightImage() const;

constexpr void __set__arrowImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__arrowImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__arrowImage() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

/// @brief Method set_text addr 0x227c2ec size 0x24 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_text addr 0x227c310 size 0x24 virtual false final false
inline ::StringW get_text() ;

/// @brief Method SelectionDidChange addr 0x227c334 size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x227c3c0 size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x227c338 size 0x88 virtual false final false
inline void RefreshVisuals() ;

static inline ::GlobalNamespace::PackLevelListHeaderTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x227c3c4 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PackLevelListHeaderTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PackLevelListHeaderTableCell(PackLevelListHeaderTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PackLevelListHeaderTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PackLevelListHeaderTableCell(PackLevelListHeaderTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PackLevelListHeaderTableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackLevelListHeaderTableCell, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackLevelListHeaderTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackLevelListHeaderTableCell*, "", "PackLevelListHeaderTableCell");
