#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionEvent)
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionEvent);
// Type: UnityEngine.InputSystem.LowLevel::IMECompositionEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6526))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IMECompositionEvent
struct CORDL_TYPE IMECompositionEvent : public ::bs_hook::ValueTypeWrapper<0x98> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field kIMECharBufferSize offset 0x0
static constexpr int32_t  kIMECharBufferSize{static_cast<int32_t>(0x40)};

/// @brief Field Type offset 0x0
static constexpr int32_t  Type{static_cast<int32_t>(0x494d4553)};

/// @brief Field baseEvent offset 0x0
 __declspec(property(get=__get_baseEvent, put=__set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

/// @brief Field compositionString offset 0x14
 __declspec(property(get=__get_compositionString, put=__set_compositionString)) ::UnityEngine::InputSystem::LowLevel::IMECompositionString  compositionString;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

constexpr void __set_compositionString(::UnityEngine::InputSystem::LowLevel::IMECompositionString  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString& __get_compositionString() ;

constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString const& __get_compositionString() const;

/// @brief Method get_typeStatic addr 0x2ae9d4c size 0x20 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae9d6c size 0xf4 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent Create(int32_t  deviceId, ::StringW  compositionString, double_t  time) ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "compositionString", ty: "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }]
constexpr IMECompositionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, ::UnityEngine::InputSystem::LowLevel::IMECompositionString  compositionString) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IMECompositionEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x98>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IMECompositionEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionEvent, "UnityEngine.InputSystem.LowLevel", "IMECompositionEvent");
