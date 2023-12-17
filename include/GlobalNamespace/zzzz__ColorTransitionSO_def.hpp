#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
CORDL_MODULE_EXPORT(ColorTransitionSO)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorTransitionSO);
// Type: ::ColorTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5448))
// CS Name: ::ColorTransitionSO*
class CORDL_TYPE ColorTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::BaseTransitionSO)]{};

/// @brief Field _normalColor offset 0x20
 __declspec(property(get=__get__normalColor, put=__set__normalColor)) ::GlobalNamespace::ColorSO*  _normalColor;

/// @brief Field _highlightedColor offset 0x28
 __declspec(property(get=__get__highlightedColor, put=__set__highlightedColor)) ::GlobalNamespace::ColorSO*  _highlightedColor;

/// @brief Field _pressedColor offset 0x30
 __declspec(property(get=__get__pressedColor, put=__set__pressedColor)) ::GlobalNamespace::ColorSO*  _pressedColor;

/// @brief Field _disabledColor offset 0x38
 __declspec(property(get=__get__disabledColor, put=__set__disabledColor)) ::GlobalNamespace::ColorSO*  _disabledColor;

/// @brief Field _selectedColor offset 0x40
 __declspec(property(get=__get__selectedColor, put=__set__selectedColor)) ::GlobalNamespace::ColorSO*  _selectedColor;

/// @brief Field _selectedAndHighlightedColor offset 0x48
 __declspec(property(get=__get__selectedAndHighlightedColor, put=__set__selectedAndHighlightedColor)) ::GlobalNamespace::ColorSO*  _selectedAndHighlightedColor;

 __declspec(property(get=get_normalColor)) ::UnityEngine::Color  normalColor;

 __declspec(property(get=get_highlightedColor)) ::UnityEngine::Color  highlightedColor;

 __declspec(property(get=get_pressedColor)) ::UnityEngine::Color  pressedColor;

 __declspec(property(get=get_disabledColor)) ::UnityEngine::Color  disabledColor;

 __declspec(property(get=get_selectedColor)) ::UnityEngine::Color  selectedColor;

 __declspec(property(get=get_selectedAndHighlightedColor)) ::UnityEngine::Color  selectedAndHighlightedColor;

constexpr void __set__normalColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get__normalColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get__normalColor() const;

constexpr void __set__highlightedColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get__highlightedColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get__highlightedColor() const;

constexpr void __set__pressedColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get__pressedColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get__pressedColor() const;

constexpr void __set__disabledColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get__disabledColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get__disabledColor() const;

constexpr void __set__selectedColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get__selectedColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get__selectedColor() const;

constexpr void __set__selectedAndHighlightedColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get__selectedAndHighlightedColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get__selectedAndHighlightedColor() const;

/// @brief Method get_normalColor addr 0x227d2f0 size 0xc virtual false final false
inline ::UnityEngine::Color get_normalColor() ;

/// @brief Method get_highlightedColor addr 0x227d560 size 0xc virtual false final false
inline ::UnityEngine::Color get_highlightedColor() ;

/// @brief Method get_pressedColor addr 0x227d598 size 0xc virtual false final false
inline ::UnityEngine::Color get_pressedColor() ;

/// @brief Method get_disabledColor addr 0x227d5d0 size 0xc virtual false final false
inline ::UnityEngine::Color get_disabledColor() ;

/// @brief Method get_selectedColor addr 0x227d608 size 0xc virtual false final false
inline ::UnityEngine::Color get_selectedColor() ;

/// @brief Method get_selectedAndHighlightedColor addr 0x227d640 size 0xc virtual false final false
inline ::UnityEngine::Color get_selectedAndHighlightedColor() ;

static inline ::GlobalNamespace::ColorTransitionSO* New_ctor() ;

/// @brief Method .ctor addr 0x227de4c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorTransitionSO(ColorTransitionSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorTransitionSO(ColorTransitionSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorTransitionSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTransitionSO, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTransitionSO*, "", "ColorTransitionSO");
