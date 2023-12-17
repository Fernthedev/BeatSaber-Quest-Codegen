#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetHapticCapabilitiesCommand)
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
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
struct GetHapticCapabilitiesCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand);
// Type: UnityEngine.InputSystem.XR.Haptics::GetHapticCapabilitiesCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6346))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::GetHapticCapabilitiesCommand
struct CORDL_TYPE GetHapticCapabilitiesCommand : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x14)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field numChannels offset 0x8
 __declspec(property(get=__get_numChannels, put=__set_numChannels)) uint32_t  numChannels;

/// @brief Field frequencyHz offset 0xc
 __declspec(property(get=__get_frequencyHz, put=__set_frequencyHz)) uint32_t  frequencyHz;

/// @brief Field maxBufferSize offset 0x10
 __declspec(property(get=__get_maxBufferSize, put=__set_maxBufferSize)) uint32_t  maxBufferSize;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

 __declspec(property(get=get_capabilities)) ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities  capabilities;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_numChannels(uint32_t  value) ;

constexpr uint32_t& __get_numChannels() ;

constexpr uint32_t const& __get_numChannels() const;

constexpr void __set_frequencyHz(uint32_t  value) ;

constexpr uint32_t& __get_frequencyHz() ;

constexpr uint32_t const& __get_frequencyHz() const;

constexpr void __set_maxBufferSize(uint32_t  value) ;

constexpr uint32_t& __get_maxBufferSize() ;

constexpr uint32_t const& __get_maxBufferSize() const;

/// @brief Method get_Type addr 0x2ac98e0 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2ac9910 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method get_capabilities addr 0x2ac95ac size 0xc virtual false final false
inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities() ;

/// @brief Method Create addr 0x2ac9550 size 0x5c virtual false final false
static inline ::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "numChannels", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxBufferSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetHapticCapabilitiesCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, uint32_t  numChannels, uint32_t  frequencyHz, uint32_t  maxBufferSize) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GetHapticCapabilitiesCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GetHapticCapabilitiesCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, "UnityEngine.InputSystem.XR.Haptics", "GetHapticCapabilitiesCommand");
