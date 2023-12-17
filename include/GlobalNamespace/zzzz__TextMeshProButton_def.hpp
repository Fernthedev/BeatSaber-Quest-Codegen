#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextMeshProButton)
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProButton;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextMeshProButton);
// Type: ::TextMeshProButton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5439))
// CS Name: ::TextMeshProButton*
class CORDL_TYPE TextMeshProButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _button offset 0x20
 __declspec(property(get=__get__button, put=__set__button)) ::UnityEngine::UI::Button*  _button;

 __declspec(property(get=get_text)) ::TMPro::TextMeshProUGUI*  text;

 __declspec(property(get=get_button)) ::UnityEngine::UI::Button*  button;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__button(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__button() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__button() const;

/// @brief Method get_text addr 0x227c834 size 0x8 virtual false final false
inline ::TMPro::TextMeshProUGUI* get_text() ;

/// @brief Method get_button addr 0x227c83c size 0x8 virtual false final false
inline ::UnityEngine::UI::Button* get_button() ;

static inline ::GlobalNamespace::TextMeshProButton* New_ctor() ;

/// @brief Method .ctor addr 0x227c844 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMeshProButton(TextMeshProButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMeshProButton(TextMeshProButton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextMeshProButton()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProButton, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProButton*, "", "TextMeshProButton");
