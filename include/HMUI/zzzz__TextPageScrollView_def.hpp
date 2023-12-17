#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextPageScrollView)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class TextPageScrollView;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextPageScrollView);
// Type: HMUI::TextPageScrollView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13648))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13670))
// CS Name: ::HMUI::TextPageScrollView*
class CORDL_TYPE TextPageScrollView : public ::HMUI::ScrollView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::HMUI::ScrollView)]{};

/// @brief Field _text offset 0xa0
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

/// @brief Method SetText addr 0x214aa2c size 0x68 virtual false final false
inline void SetText(::StringW  text) ;

static inline ::HMUI::TextPageScrollView* New_ctor() ;

/// @brief Method .ctor addr 0x214aa94 size 0x30 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextPageScrollView(TextPageScrollView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextPageScrollView(TextPageScrollView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextPageScrollView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextPageScrollView, 0xa8>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::TextPageScrollView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextPageScrollView*, "HMUI", "TextPageScrollView");
