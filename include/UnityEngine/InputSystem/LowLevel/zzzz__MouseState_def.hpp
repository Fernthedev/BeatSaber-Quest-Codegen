#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseState)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct MouseButton;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct MouseState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::MouseState);
// Type: UnityEngine.InputSystem.LowLevel::MouseState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6504))
// CS Name: ::UnityEngine.InputSystem.LowLevel::MouseState
struct CORDL_TYPE MouseState : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector2  position;

/// @brief Field delta offset 0x8
 __declspec(property(get=__get_delta, put=__set_delta)) ::UnityEngine::Vector2  delta;

/// @brief Field scroll offset 0x10
 __declspec(property(get=__get_scroll, put=__set_scroll)) ::UnityEngine::Vector2  scroll;

/// @brief Field buttons offset 0x18
 __declspec(property(get=__get_buttons, put=__set_buttons)) uint16_t  buttons;

/// @brief Field displayIndex offset 0x1a
 __declspec(property(get=__get_displayIndex, put=__set_displayIndex)) uint16_t  displayIndex;

/// @brief Field clickCount offset 0x1c
 __declspec(property(get=__get_clickCount, put=__set_clickCount)) uint16_t  clickCount;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_position() ;

constexpr ::UnityEngine::Vector2 const& __get_position() const;

constexpr void __set_delta(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_delta() ;

constexpr ::UnityEngine::Vector2 const& __get_delta() const;

constexpr void __set_scroll(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_scroll() ;

constexpr ::UnityEngine::Vector2 const& __get_scroll() const;

constexpr void __set_buttons(uint16_t  value) ;

constexpr uint16_t& __get_buttons() ;

constexpr uint16_t const& __get_buttons() const;

constexpr void __set_displayIndex(uint16_t  value) ;

constexpr uint16_t& __get_displayIndex() ;

constexpr uint16_t const& __get_displayIndex() const;

constexpr void __set_clickCount(uint16_t  value) ;

constexpr uint16_t& __get_clickCount() ;

constexpr uint16_t const& __get_clickCount() const;

/// @brief Method get_Format addr 0x2ae89fc size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method WithButton addr 0x2ae8a2c size 0x2c virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::MouseState WithButton(::UnityEngine::InputSystem::LowLevel::MouseButton  button, bool  state) ;

/// @brief Method get_format addr 0x2ae8a58 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "clickCount", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MouseState(::UnityEngine::Vector2  position, ::UnityEngine::Vector2  delta, ::UnityEngine::Vector2  scroll, uint16_t  buttons, uint16_t  displayIndex, uint16_t  clickCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MouseState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MouseState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::MouseState, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::MouseState, "UnityEngine.InputSystem.LowLevel", "MouseState");
