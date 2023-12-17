#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleTextWithIconTableCell)
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextWithIconTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTextWithIconTableCell);
// Type: ::SimpleTextWithIconTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13501))
// CS Name: ::SimpleTextWithIconTableCell*
class CORDL_TYPE SimpleTextWithIconTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _text offset 0x58
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _icon offset 0x60
 __declspec(property(get=__get__icon, put=__set__icon)) ::UnityEngine::UI::Image*  _icon;

 __declspec(property(get=get_icon, put=set_icon)) ::UnityEngine::UI::Image*  icon;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__icon(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__icon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__icon() const;

/// @brief Method set_icon addr 0x2116214 size 0x8 virtual false final false
inline void set_icon(::UnityEngine::UI::Image*  value) ;

/// @brief Method get_icon addr 0x211621c size 0x8 virtual false final false
inline ::UnityEngine::UI::Image* get_icon() ;

/// @brief Method set_text addr 0x2116224 size 0x24 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_text addr 0x2116248 size 0x24 virtual false final false
inline ::StringW get_text() ;

static inline ::GlobalNamespace::SimpleTextWithIconTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x211626c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleTextWithIconTableCell(SimpleTextWithIconTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleTextWithIconTableCell(SimpleTextWithIconTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleTextWithIconTableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextWithIconTableCell, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextWithIconTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextWithIconTableCell*, "", "SimpleTextWithIconTableCell");
