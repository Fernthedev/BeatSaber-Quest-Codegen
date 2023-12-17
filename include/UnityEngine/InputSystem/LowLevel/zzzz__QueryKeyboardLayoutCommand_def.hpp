#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryKeyboardLayoutCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryKeyboardLayoutCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer);
// Type: ::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6475))
// CS Name: ::QueryKeyboardLayoutCommand::<nameBuffer>e__FixedBuffer
struct CORDL_TYPE __QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x100> {
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
constexpr __QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x100>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer, 0x100>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryKeyboardLayoutCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6476))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryKeyboardLayoutCommand
struct CORDL_TYPE QueryKeyboardLayoutCommand : public ::bs_hook::ValueTypeWrapper<0x108> {
public:
// Declarations
using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x108};

/// @brief Field kMaxNameLength offset 0x0
static constexpr int32_t  kMaxNameLength{static_cast<int32_t>(0x100)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field nameBuffer offset 0x8
 __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer)) ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer  nameBuffer;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_nameBuffer(::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer& __get_nameBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer const& __get_nameBuffer() const;

/// @brief Method get_Type addr 0x2ae7c98 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method ReadLayoutName addr 0x2ae7cc8 size 0x10 virtual false final false
inline ::StringW ReadLayoutName() ;

/// @brief Method WriteLayoutName addr 0x2ae7cd8 size 0x24 virtual false final false
inline void WriteLayoutName(::StringW  name) ;

/// @brief Method get_typeStatic addr 0x2ae7cfc size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae7d2c size 0x58 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryKeyboardLayoutCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, ::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer  nameBuffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QueryKeyboardLayoutCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x108>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QueryKeyboardLayoutCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand, 0x108>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand, "UnityEngine.InputSystem.LowLevel", "QueryKeyboardLayoutCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer");
