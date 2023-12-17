#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendBufferedHapticCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct __SendBufferedHapticCommand___buffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendBufferedHapticCommand;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct __SendBufferedHapticCommand___buffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand);
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer);
// Type: ::<buffer>e__FixedBuffer
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6347))
// CS Name: ::SendBufferedHapticCommand::<buffer>e__FixedBuffer
struct CORDL_TYPE __SendBufferedHapticCommand___buffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x400> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x400};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __SendBufferedHapticCommand___buffer_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SendBufferedHapticCommand___buffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x400>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SendBufferedHapticCommand___buffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer, 0x400>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
// Type: UnityEngine.InputSystem.XR.Haptics::SendBufferedHapticCommand
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6348))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::SendBufferedHapticCommand
struct CORDL_TYPE SendBufferedHapticCommand : public ::bs_hook::ValueTypeWrapper<0x410> {
public:
// Declarations
using _buffer_e__FixedBuffer = ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x410};

/// @brief Field kMaxHapticBufferSize offset 0x0
static constexpr int32_t  kMaxHapticBufferSize{static_cast<int32_t>(0x400)};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x410)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field channel offset 0x8
 __declspec(property(get=__get_channel, put=__set_channel)) int32_t  channel;

/// @brief Field bufferSize offset 0xc
 __declspec(property(get=__get_bufferSize, put=__set_bufferSize)) int32_t  bufferSize;

/// @brief Field buffer offset 0x10
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer  buffer;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_channel(int32_t  value) ;

constexpr int32_t& __get_channel() ;

constexpr int32_t const& __get_channel() const;

constexpr void __set_bufferSize(int32_t  value) ;

constexpr int32_t& __get_bufferSize() ;

constexpr int32_t const& __get_bufferSize() const;

constexpr void __set_buffer(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer& __get_buffer() ;

constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer const& __get_buffer() const;

/// @brief Method get_Type addr 0x2ac9940 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic addr 0x2ac9970 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ac9660 size 0x164 virtual false final false
static inline ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand Create(::ArrayW<uint8_t,::Array<uint8_t>*>  rumbleBuffer) ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr SendBufferedHapticCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, int32_t  channel, int32_t  bufferSize, ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer  buffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SendBufferedHapticCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x410>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SendBufferedHapticCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, 0x410>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand/<buffer>e__FixedBuffer");
