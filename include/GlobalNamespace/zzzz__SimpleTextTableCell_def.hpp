#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleTextTableCell)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTextTableCell);
// Type: ::SimpleTextTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13500))
// CS Name: ::SimpleTextTableCell*
class CORDL_TYPE SimpleTextTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _text offset 0x58
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

/// @brief Method set_text addr 0x21161c4 size 0x24 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_text addr 0x21161e8 size 0x24 virtual false final false
inline ::StringW get_text() ;

static inline ::GlobalNamespace::SimpleTextTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x211620c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleTextTableCell(SimpleTextTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleTextTableCell(SimpleTextTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleTextTableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextTableCell, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextTableCell*, "", "SimpleTextTableCell");
