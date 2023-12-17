#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextButton)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class TextButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextButton);
// Type: ::TextButton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5438))
// CS Name: ::TextButton*
class CORDL_TYPE TextButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::UnityEngine::UI::Text*  _text;

/// @brief Field _button offset 0x20
 __declspec(property(get=__get__button, put=__set__button)) ::UnityEngine::UI::Button*  _button;

 __declspec(property(get=get_text)) ::UnityEngine::UI::Text*  text;

 __declspec(property(get=get_button)) ::UnityEngine::UI::Button*  button;

constexpr void __set__text(::UnityEngine::UI::Text*  value) ;

constexpr ::UnityEngine::UI::Text* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> __get__text() const;

constexpr void __set__button(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__button() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__button() const;

/// @brief Method get_text addr 0x227c81c size 0x8 virtual false final false
inline ::UnityEngine::UI::Text* get_text() ;

/// @brief Method get_button addr 0x227c824 size 0x8 virtual false final false
inline ::UnityEngine::UI::Button* get_button() ;

static inline ::GlobalNamespace::TextButton* New_ctor() ;

/// @brief Method .ctor addr 0x227c82c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextButton(TextButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextButton(TextButton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextButton()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextButton, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextButton*, "", "TextButton");
