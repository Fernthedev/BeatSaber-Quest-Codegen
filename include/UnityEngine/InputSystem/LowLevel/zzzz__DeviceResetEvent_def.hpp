#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceResetEvent)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeviceResetEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DeviceResetEvent);
// Type: UnityEngine.InputSystem.LowLevel::DeviceResetEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6524))
// CS Name: ::UnityEngine.InputSystem.LowLevel::DeviceResetEvent
struct CORDL_TYPE DeviceResetEvent : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Type offset 0x0
static constexpr int32_t  Type{static_cast<int32_t>(0x44525354)};

/// @brief Field baseEvent offset 0x0
 __declspec(property(get=__get_baseEvent, put=__set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

/// @brief Field hardReset offset 0x8
 __declspec(property(get=__get_hardReset, put=__set_hardReset)) bool  hardReset;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

constexpr void __set_hardReset(bool  value) ;

constexpr bool& __get_hardReset() ;

constexpr bool const& __get_hardReset() const;

/// @brief Method get_typeStatic addr 0x2ae9c70 size 0x20 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae9c90 size 0xbc virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent Create(int32_t  deviceId, bool  hardReset, double_t  time) ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "hardReset", ty: "bool", modifiers: "", def_value: None }]
constexpr DeviceResetEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, bool  hardReset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DeviceResetEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DeviceResetEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, "UnityEngine.InputSystem.LowLevel", "DeviceResetEvent");
