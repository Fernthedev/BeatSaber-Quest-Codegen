#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetCurrentHapticStateCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticState;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct GetCurrentHapticStateCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand);
// Type: UnityEngine.InputSystem.XR.Haptics::GetCurrentHapticStateCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6344))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::GetCurrentHapticStateCommand
struct CORDL_TYPE GetCurrentHapticStateCommand : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x10)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field samplesQueued offset 0x8
 __declspec(property(get=__get_samplesQueued, put=__set_samplesQueued)) uint32_t  samplesQueued;

/// @brief Field samplesAvailable offset 0xc
 __declspec(property(get=__get_samplesAvailable, put=__set_samplesAvailable)) uint32_t  samplesAvailable;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

 __declspec(property(get=get_currentState)) ::UnityEngine::InputSystem::XR::Haptics::HapticState  currentState;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_samplesQueued(uint32_t  value) ;

constexpr uint32_t& __get_samplesQueued() ;

constexpr uint32_t const& __get_samplesQueued() const;

constexpr void __set_samplesAvailable(uint32_t  value) ;

constexpr uint32_t& __get_samplesAvailable() ;

constexpr uint32_t const& __get_samplesAvailable() const;

/// @brief Method get_Type addr 0x2ac97ec size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2ac981c size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method get_currentState addr 0x2ac984c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::XR::Haptics::HapticState get_currentState() ;

/// @brief Method Create addr 0x2ac9854 size 0x50 virtual false final false
static inline ::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "samplesQueued", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "samplesAvailable", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetCurrentHapticStateCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, uint32_t  samplesQueued, uint32_t  samplesAvailable) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GetCurrentHapticStateCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GetCurrentHapticStateCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::GetCurrentHapticStateCommand, "UnityEngine.InputSystem.XR.Haptics", "GetCurrentHapticStateCommand");
