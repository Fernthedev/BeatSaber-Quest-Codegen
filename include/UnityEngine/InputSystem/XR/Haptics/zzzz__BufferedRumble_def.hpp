#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedRumble)
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct BufferedRumble;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::BufferedRumble);
// Type: UnityEngine.InputSystem.XR.Haptics::BufferedRumble
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6342))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::BufferedRumble
struct CORDL_TYPE BufferedRumble : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <capabilities>k__BackingField offset 0x0
 __declspec(property(get=__get__capabilities_k__BackingField, put=__set__capabilities_k__BackingField)) ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities  _capabilities_k__BackingField;

/// @brief Field <device>k__BackingField offset 0x10
 __declspec(property(get=__get__device_k__BackingField, put=__set__device_k__BackingField)) ::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField;

 __declspec(property(get=get_capabilities, put=set_capabilities)) ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities  capabilities;

 __declspec(property(get=get_device, put=set_device)) ::UnityEngine::InputSystem::InputDevice*  device;

constexpr void __set__capabilities_k__BackingField(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities  value) ;

constexpr ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities& __get__capabilities_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities const& __get__capabilities_k__BackingField() const;

constexpr void __set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice*  value) ;

constexpr ::UnityEngine::InputSystem::InputDevice* __get__device_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> __get__device_k__BackingField() const;

/// @brief Method get_capabilities addr 0x2ac942c size 0x10 virtual false final false
inline ::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities get_capabilities() ;

/// @brief Method set_capabilities addr 0x2ac943c size 0xc virtual false final false
inline void set_capabilities(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities  value) ;

/// @brief Method get_device addr 0x2ac9448 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// @brief Method set_device addr 0x2ac9450 size 0x8 virtual false final false
inline void set_device(::UnityEngine::InputSystem::InputDevice*  value) ;

/// @brief Method .ctor addr 0x2ac9458 size 0xf8 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method EnqueueRumble addr 0x2ac95b8 size 0xa8 virtual false final false
inline void EnqueueRumble(::ArrayW<uint8_t,::Array<uint8_t>*>  samples) ;

// Ctor Parameters [CppParam { name: "_capabilities_k__BackingField", ty: "::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities", modifiers: "", def_value: None }, CppParam { name: "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }]
constexpr BufferedRumble(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities  _capabilities_k__BackingField, ::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BufferedRumble(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BufferedRumble()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::BufferedRumble, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::BufferedRumble, "UnityEngine.InputSystem.XR.Haptics", "BufferedRumble");
