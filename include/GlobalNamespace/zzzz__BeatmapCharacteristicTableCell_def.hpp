#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicTableCell)
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicTableCell);
// Type: ::BeatmapCharacteristicTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5416))
// CS Name: ::BeatmapCharacteristicTableCell*
class CORDL_TYPE BeatmapCharacteristicTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _nameText offset 0x58
 __declspec(property(get=__get__nameText, put=__set__nameText)) ::TMPro::TextMeshProUGUI*  _nameText;

/// @brief Field _iconImage offset 0x60
 __declspec(property(get=__get__iconImage, put=__set__iconImage)) ::UnityEngine::UI::Image*  _iconImage;

/// @brief Field _bgImage offset 0x68
 __declspec(property(get=__get__bgImage, put=__set__bgImage)) ::UnityEngine::UI::Image*  _bgImage;

/// @brief Field _selectionImage offset 0x70
 __declspec(property(get=__get__selectionImage, put=__set__selectionImage)) ::UnityEngine::UI::Image*  _selectionImage;

/// @brief Field _bgNormalColor offset 0x78
 __declspec(property(get=__get__bgNormalColor, put=__set__bgNormalColor)) ::UnityEngine::Color  _bgNormalColor;

/// @brief Field _bgHighlightColor offset 0x88
 __declspec(property(get=__get__bgHighlightColor, put=__set__bgHighlightColor)) ::UnityEngine::Color  _bgHighlightColor;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__nameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__nameText() const;

constexpr void __set__iconImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__iconImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__iconImage() const;

constexpr void __set__bgImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__bgImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__bgImage() const;

constexpr void __set__selectionImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__selectionImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__selectionImage() const;

constexpr void __set__bgNormalColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__bgNormalColor() ;

constexpr ::UnityEngine::Color const& __get__bgNormalColor() const;

constexpr void __set__bgHighlightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__bgHighlightColor() ;

constexpr ::UnityEngine::Color const& __get__bgHighlightColor() const;

/// @brief Method SetData addr 0x22787c8 size 0x60 virtual false final false
inline void SetData(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic) ;

/// @brief Method SelectionDidChange addr 0x2278828 size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x22788a8 size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x227882c size 0x7c virtual false final false
inline void RefreshVisuals() ;

static inline ::GlobalNamespace::BeatmapCharacteristicTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x22788ac size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCharacteristicTableCell(BeatmapCharacteristicTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCharacteristicTableCell(BeatmapCharacteristicTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapCharacteristicTableCell()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicTableCell, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicTableCell*, "", "BeatmapCharacteristicTableCell");
