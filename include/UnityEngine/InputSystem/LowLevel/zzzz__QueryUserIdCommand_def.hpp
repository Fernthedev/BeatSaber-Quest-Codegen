#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryUserIdCommand)
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryUserIdCommand___idBuffer_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryUserIdCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryUserIdCommand___idBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer);
// Type: ::<idBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6484))
// CS Name: ::QueryUserIdCommand::<idBuffer>e__FixedBuffer
struct CORDL_TYPE __QueryUserIdCommand___idBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x200> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x200};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __QueryUserIdCommand___idBuffer_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QueryUserIdCommand___idBuffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x200>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QueryUserIdCommand___idBuffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryUserIdCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6485))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryUserIdCommand
struct CORDL_TYPE QueryUserIdCommand : public ::bs_hook::ValueTypeWrapper<0x208> {
public:
// Declarations
using _idBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x208};

/// @brief Field kMaxIdLength offset 0x0
static constexpr int32_t  kMaxIdLength{static_cast<int32_t>(0x100)};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x208)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field idBuffer offset 0x8
 __declspec(property(get=__get_idBuffer, put=__set_idBuffer)) ::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer  idBuffer;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_idBuffer(::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer& __get_idBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer const& __get_idBuffer() const;

/// @brief Method get_Type addr 0x2ae81ec size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method ReadId addr 0x2ae821c size 0x10 virtual false final false
inline ::StringW ReadId() ;

/// @brief Method get_typeStatic addr 0x2ae822c size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae825c size 0x58 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "idBuffer", ty: "::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryUserIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, ::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer  idBuffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QueryUserIdCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x208>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QueryUserIdCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand, 0x208>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand, "UnityEngine.InputSystem.LowLevel", "QueryUserIdCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryUserIdCommand___idBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryUserIdCommand/<idBuffer>e__FixedBuffer");
