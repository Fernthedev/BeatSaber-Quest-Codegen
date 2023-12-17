#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ButtonSpriteSwap_def.hpp"
CORDL_MODULE_EXPORT(ButtonSpriteSwapToggle)
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwapToggle;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonSpriteSwapToggle);
// Type: HMUI::ButtonSpriteSwapToggle
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13620))
// CS Name: ::HMUI::ButtonSpriteSwapToggle*
class CORDL_TYPE ButtonSpriteSwapToggle : public ::HMUI::ButtonSpriteSwap {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::HMUI::ButtonSpriteSwap)]{};

/// @brief Field _resetToggleOnEnable offset 0x49
 __declspec(property(get=__get__resetToggleOnEnable, put=__set__resetToggleOnEnable)) bool  _resetToggleOnEnable;

/// @brief Field _ignoreHighlight offset 0x4a
 __declspec(property(get=__get__ignoreHighlight, put=__set__ignoreHighlight)) bool  _ignoreHighlight;

/// @brief Field _isToggled offset 0x4b
 __declspec(property(get=__get__isToggled, put=__set__isToggled)) bool  _isToggled;

 __declspec(property(get=get_isToggled, put=set_isToggled)) bool  isToggled;

constexpr void __set__resetToggleOnEnable(bool  value) ;

constexpr bool& __get__resetToggleOnEnable() ;

constexpr bool const& __get__resetToggleOnEnable() const;

constexpr void __set__ignoreHighlight(bool  value) ;

constexpr bool& __get__ignoreHighlight() ;

constexpr bool const& __get__ignoreHighlight() const;

constexpr void __set__isToggled(bool  value) ;

constexpr bool& __get__isToggled() ;

constexpr bool const& __get__isToggled() const;

/// @brief Method get_isToggled addr 0x2130674 size 0x8 virtual false final false
inline bool get_isToggled() ;

/// @brief Method set_isToggled addr 0x213067c size 0x40 virtual false final false
inline void set_isToggled(bool  value) ;

/// @brief Method OnEnable addr 0x21306bc size 0x30 virtual true final false
inline void OnEnable() ;

/// @brief Method HandleButtonSelectionStateDidChange addr 0x21306ec size 0x14c virtual true final false
inline void HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState  state) ;

static inline ::HMUI::ButtonSpriteSwapToggle* New_ctor() ;

/// @brief Method .ctor addr 0x2130838 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonSpriteSwapToggle(ButtonSpriteSwapToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonSpriteSwapToggle(ButtonSpriteSwapToggle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ButtonSpriteSwapToggle()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonSpriteSwapToggle, 0x50>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ButtonSpriteSwapToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonSpriteSwapToggle*, "HMUI", "ButtonSpriteSwapToggle");
