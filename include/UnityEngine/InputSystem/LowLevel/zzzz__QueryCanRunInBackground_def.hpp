#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryCanRunInBackground)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryCanRunInBackground;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground);
// Type: UnityEngine.InputSystem.LowLevel::QueryCanRunInBackground
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6472))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryCanRunInBackground
struct CORDL_TYPE QueryCanRunInBackground : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x9)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field canRunInBackground offset 0x8
 __declspec(property(get=__get_canRunInBackground, put=__set_canRunInBackground)) bool  canRunInBackground;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_canRunInBackground(bool  value) ;

constexpr bool& __get_canRunInBackground() ;

constexpr bool const& __get_canRunInBackground() const;

/// @brief Method get_Type addr 0x2ae7ac8 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2ae7af8 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae7b28 size 0x3c virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "canRunInBackground", ty: "bool", modifiers: "", def_value: None }]
constexpr QueryCanRunInBackground(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, bool  canRunInBackground) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QueryCanRunInBackground(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QueryCanRunInBackground()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground, "UnityEngine.InputSystem.LowLevel", "QueryCanRunInBackground");
