#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct PointerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::PointerState);
// Type: UnityEngine.InputSystem.LowLevel::PointerState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6507))
// CS Name: ::UnityEngine.InputSystem.LowLevel::PointerState
struct CORDL_TYPE PointerState : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field pointerId offset 0x0
 __declspec(property(get=__get_pointerId, put=__set_pointerId)) uint32_t  pointerId;

/// @brief Field position offset 0x4
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector2  position;

/// @brief Field delta offset 0xc
 __declspec(property(get=__get_delta, put=__set_delta)) ::UnityEngine::Vector2  delta;

/// @brief Field pressure offset 0x14
 __declspec(property(get=__get_pressure, put=__set_pressure)) float_t  pressure;

/// @brief Field radius offset 0x18
 __declspec(property(get=__get_radius, put=__set_radius)) ::UnityEngine::Vector2  radius;

/// @brief Field buttons offset 0x20
 __declspec(property(get=__get_buttons, put=__set_buttons)) uint16_t  buttons;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_pointerId(uint32_t  value) ;

constexpr uint32_t& __get_pointerId() ;

constexpr uint32_t const& __get_pointerId() const;

constexpr void __set_position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_position() ;

constexpr ::UnityEngine::Vector2 const& __get_position() const;

constexpr void __set_delta(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_delta() ;

constexpr ::UnityEngine::Vector2 const& __get_delta() const;

constexpr void __set_pressure(float_t  value) ;

constexpr float_t& __get_pressure() ;

constexpr float_t const& __get_pressure() const;

constexpr void __set_radius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_radius() ;

constexpr ::UnityEngine::Vector2 const& __get_radius() const;

constexpr void __set_buttons(uint16_t  value) ;

constexpr uint16_t& __get_buttons() ;

constexpr uint16_t const& __get_buttons() const;

/// @brief Method get_kFormat addr 0x2ae8b1c size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x2ae8b4c size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "pointerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr PointerState(uint32_t  pointerId, ::UnityEngine::Vector2  position, ::UnityEngine::Vector2  delta, float_t  pressure, ::UnityEngine::Vector2  radius, uint16_t  buttons) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PointerState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PointerState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::PointerState, 0x24>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::PointerState, "UnityEngine.InputSystem.LowLevel", "PointerState");
