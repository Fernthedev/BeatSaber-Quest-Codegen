#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryKeyNameCommand)
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryKeyNameCommand___nameBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryKeyNameCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryKeyNameCommand___nameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer);
// Type: ::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6477))
// CS Name: ::QueryKeyNameCommand::<nameBuffer>e__FixedBuffer
struct CORDL_TYPE __QueryKeyNameCommand___nameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x100> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x100};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __QueryKeyNameCommand___nameBuffer_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QueryKeyNameCommand___nameBuffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x100>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QueryKeyNameCommand___nameBuffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer, 0x100>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryKeyNameCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6478))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryKeyNameCommand
struct CORDL_TYPE QueryKeyNameCommand : public ::bs_hook::ValueTypeWrapper<0x10c> {
public:
// Declarations
using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10c};

/// @brief Field kMaxNameLength offset 0x0
static constexpr int32_t  kMaxNameLength{static_cast<int32_t>(0x100)};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x10c)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field scanOrKeyCode offset 0x8
 __declspec(property(get=__get_scanOrKeyCode, put=__set_scanOrKeyCode)) int32_t  scanOrKeyCode;

/// @brief Field nameBuffer offset 0xc
 __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer)) ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer  nameBuffer;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_scanOrKeyCode(int32_t  value) ;

constexpr int32_t& __get_scanOrKeyCode() ;

constexpr int32_t const& __get_scanOrKeyCode() const;

constexpr void __set_nameBuffer(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer& __get_nameBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer const& __get_nameBuffer() const;

/// @brief Method get_Type addr 0x2ae7d84 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method ReadKeyName addr 0x2ae7db4 size 0x10 virtual false final false
inline ::StringW ReadKeyName() ;

/// @brief Method get_typeStatic addr 0x2ae7dc4 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae7df4 size 0x60 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand Create(::UnityEngine::InputSystem::Key  key) ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "scanOrKeyCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryKeyNameCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, int32_t  scanOrKeyCode, ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer  nameBuffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QueryKeyNameCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QueryKeyNameCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand, 0x10c>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand, "UnityEngine.InputSystem.LowLevel", "QueryKeyNameCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryKeyNameCommand/<nameBuffer>e__FixedBuffer");
