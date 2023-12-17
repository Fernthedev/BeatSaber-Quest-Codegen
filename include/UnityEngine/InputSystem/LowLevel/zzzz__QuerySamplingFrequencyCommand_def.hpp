#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuerySamplingFrequencyCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QuerySamplingFrequencyCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand);
// Type: UnityEngine.InputSystem.LowLevel::QuerySamplingFrequencyCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6483))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QuerySamplingFrequencyCommand
struct CORDL_TYPE QuerySamplingFrequencyCommand : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0xc)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field frequency offset 0x8
 __declspec(property(get=__get_frequency, put=__set_frequency)) float_t  frequency;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_frequency(float_t  value) ;

constexpr float_t& __get_frequency() ;

constexpr float_t const& __get_frequency() const;

/// @brief Method get_Type addr 0x2ae8154 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2ae8184 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae81b4 size 0x38 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "frequency", ty: "float_t", modifiers: "", def_value: None }]
constexpr QuerySamplingFrequencyCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, float_t  frequency) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QuerySamplingFrequencyCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QuerySamplingFrequencyCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QuerySamplingFrequencyCommand, "UnityEngine.InputSystem.LowLevel", "QuerySamplingFrequencyCommand");
