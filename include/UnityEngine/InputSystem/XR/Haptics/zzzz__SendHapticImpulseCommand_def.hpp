#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendHapticImpulseCommand)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendHapticImpulseCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand);
// Type: UnityEngine.InputSystem.XR.Haptics::SendHapticImpulseCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6349))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::SendHapticImpulseCommand
struct CORDL_TYPE SendHapticImpulseCommand : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x14)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field channel offset 0x8
 __declspec(property(get=__get_channel, put=__set_channel)) int32_t  channel;

/// @brief Field amplitude offset 0xc
 __declspec(property(get=__get_amplitude, put=__set_amplitude)) float_t  amplitude;

/// @brief Field duration offset 0x10
 __declspec(property(get=__get_duration, put=__set_duration)) float_t  duration;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_channel(int32_t  value) ;

constexpr int32_t& __get_channel() ;

constexpr int32_t const& __get_channel() const;

constexpr void __set_amplitude(float_t  value) ;

constexpr float_t& __get_amplitude() ;

constexpr float_t const& __get_amplitude() const;

constexpr void __set_duration(float_t  value) ;

constexpr float_t& __get_duration() ;

constexpr float_t const& __get_duration() const;

/// @brief Method get_Type addr 0x2ac99a0 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2ac99d0 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ac5ce4 size 0x7c virtual false final false
static inline ::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand Create(int32_t  motorChannel, float_t  motorAmplitude, float_t  motorDuration) ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }]
constexpr SendHapticImpulseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, int32_t  channel, float_t  amplitude, float_t  duration) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SendHapticImpulseCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SendHapticImpulseCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, "UnityEngine.InputSystem.XR.Haptics", "SendHapticImpulseCommand");
