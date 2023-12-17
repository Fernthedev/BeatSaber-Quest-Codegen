#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SpriteState)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UI {
struct SpriteState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::SpriteState);
// Type: UnityEngine.UI::SpriteState
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13125))
// CS Name: ::UnityEngine.UI::SpriteState
struct CORDL_TYPE SpriteState : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_HighlightedSprite offset 0x0
 __declspec(property(get=__get_m_HighlightedSprite, put=__set_m_HighlightedSprite)) ::UnityEngine::Sprite*  m_HighlightedSprite;

/// @brief Field m_PressedSprite offset 0x8
 __declspec(property(get=__get_m_PressedSprite, put=__set_m_PressedSprite)) ::UnityEngine::Sprite*  m_PressedSprite;

/// @brief Field m_SelectedSprite offset 0x10
 __declspec(property(get=__get_m_SelectedSprite, put=__set_m_SelectedSprite)) ::UnityEngine::Sprite*  m_SelectedSprite;

/// @brief Field m_DisabledSprite offset 0x18
 __declspec(property(get=__get_m_DisabledSprite, put=__set_m_DisabledSprite)) ::UnityEngine::Sprite*  m_DisabledSprite;

 __declspec(property(get=get_highlightedSprite, put=set_highlightedSprite)) ::UnityEngine::Sprite*  highlightedSprite;

 __declspec(property(get=get_pressedSprite, put=set_pressedSprite)) ::UnityEngine::Sprite*  pressedSprite;

 __declspec(property(get=get_selectedSprite, put=set_selectedSprite)) ::UnityEngine::Sprite*  selectedSprite;

 __declspec(property(get=get_disabledSprite, put=set_disabledSprite)) ::UnityEngine::Sprite*  disabledSprite;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::SpriteState>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UI::SpriteState>*() ;

constexpr void __set_m_HighlightedSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_m_HighlightedSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_m_HighlightedSprite() const;

constexpr void __set_m_PressedSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_m_PressedSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_m_PressedSprite() const;

constexpr void __set_m_SelectedSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_m_SelectedSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_m_SelectedSprite() const;

constexpr void __set_m_DisabledSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get_m_DisabledSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get_m_DisabledSprite() const;

/// @brief Method get_highlightedSprite addr 0x2d89c5c size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_highlightedSprite() ;

/// @brief Method set_highlightedSprite addr 0x2d89c64 size 0x8 virtual false final false
inline void set_highlightedSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method get_pressedSprite addr 0x2d89c6c size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_pressedSprite() ;

/// @brief Method set_pressedSprite addr 0x2d89c74 size 0x8 virtual false final false
inline void set_pressedSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method get_selectedSprite addr 0x2d89c7c size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_selectedSprite() ;

/// @brief Method set_selectedSprite addr 0x2d89c84 size 0x8 virtual false final false
inline void set_selectedSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method get_disabledSprite addr 0x2d89c8c size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_disabledSprite() ;

/// @brief Method set_disabledSprite addr 0x2d89c94 size 0x8 virtual false final false
inline void set_disabledSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method Equals addr 0x2d89c9c size 0x108 virtual true final true
inline bool Equals(::UnityEngine::UI::SpriteState  other) ;

// Ctor Parameters [CppParam { name: "m_HighlightedSprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "m_PressedSprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "m_SelectedSprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }, CppParam { name: "m_DisabledSprite", ty: "::UnityEngine::Sprite*", modifiers: "", def_value: None }]
constexpr SpriteState(::UnityEngine::Sprite*  m_HighlightedSprite, ::UnityEngine::Sprite*  m_PressedSprite, ::UnityEngine::Sprite*  m_SelectedSprite, ::UnityEngine::Sprite*  m_DisabledSprite) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SpriteState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SpriteState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::SpriteState, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::SpriteState, "UnityEngine.UI", "SpriteState");
