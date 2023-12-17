#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PenState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct PenButton;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct PenState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::PenState);
// Type: UnityEngine.InputSystem.LowLevel::PenState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6506))
// CS Name: ::UnityEngine.InputSystem.LowLevel::PenState
struct CORDL_TYPE PenState : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector2  position;

/// @brief Field delta offset 0x8
 __declspec(property(get=__get_delta, put=__set_delta)) ::UnityEngine::Vector2  delta;

/// @brief Field tilt offset 0x10
 __declspec(property(get=__get_tilt, put=__set_tilt)) ::UnityEngine::Vector2  tilt;

/// @brief Field pressure offset 0x18
 __declspec(property(get=__get_pressure, put=__set_pressure)) float_t  pressure;

/// @brief Field twist offset 0x1c
 __declspec(property(get=__get_twist, put=__set_twist)) float_t  twist;

/// @brief Field buttons offset 0x20
 __declspec(property(get=__get_buttons, put=__set_buttons)) uint16_t  buttons;

/// @brief Field displayIndex offset 0x22
 __declspec(property(get=__get_displayIndex, put=__set_displayIndex)) uint16_t  displayIndex;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_position() ;

constexpr ::UnityEngine::Vector2 const& __get_position() const;

constexpr void __set_delta(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_delta() ;

constexpr ::UnityEngine::Vector2 const& __get_delta() const;

constexpr void __set_tilt(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_tilt() ;

constexpr ::UnityEngine::Vector2 const& __get_tilt() const;

constexpr void __set_pressure(float_t  value) ;

constexpr float_t& __get_pressure() ;

constexpr float_t const& __get_pressure() const;

constexpr void __set_twist(float_t  value) ;

constexpr float_t& __get_twist() ;

constexpr float_t const& __get_twist() const;

constexpr void __set_buttons(uint16_t  value) ;

constexpr uint16_t& __get_buttons() ;

constexpr uint16_t const& __get_buttons() const;

constexpr void __set_displayIndex(uint16_t  value) ;

constexpr uint16_t& __get_displayIndex() ;

constexpr uint16_t const& __get_displayIndex() const;

/// @brief Method get_Format addr 0x2ae8a88 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method WithButton addr 0x2ae8ab8 size 0x34 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::PenState WithButton(::UnityEngine::InputSystem::PenButton  button, bool  state) ;

/// @brief Method get_format addr 0x2ae8aec size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr PenState(::UnityEngine::Vector2  position, ::UnityEngine::Vector2  delta, ::UnityEngine::Vector2  tilt, float_t  pressure, float_t  twist, uint16_t  buttons, uint16_t  displayIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PenState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PenState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::PenState, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::PenState, "UnityEngine.InputSystem.LowLevel", "PenState");
