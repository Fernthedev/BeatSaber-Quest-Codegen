#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetIMECursorPositionCommand)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct SetIMECursorPositionCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand);
// Type: UnityEngine.InputSystem.LowLevel::SetIMECursorPositionCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6488))
// CS Name: ::UnityEngine.InputSystem.LowLevel::SetIMECursorPositionCommand
struct CORDL_TYPE SetIMECursorPositionCommand : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x10)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field m_Position offset 0x8
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector2  m_Position;

 __declspec(property(get=get_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_m_Position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Position() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Position() const;

/// @brief Method get_Type addr 0x2ae83dc size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_position addr 0x2ae840c size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_position() ;

/// @brief Method get_typeStatic addr 0x2ae8414 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae8444 size 0x50 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand Create(::UnityEngine::Vector2  cursorPosition) ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr SetIMECursorPositionCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, ::UnityEngine::Vector2  m_Position) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SetIMECursorPositionCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SetIMECursorPositionCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::SetIMECursorPositionCommand, "UnityEngine.InputSystem.LowLevel", "SetIMECursorPositionCommand");
