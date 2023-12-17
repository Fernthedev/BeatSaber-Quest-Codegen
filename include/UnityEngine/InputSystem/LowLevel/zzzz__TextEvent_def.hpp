#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEvent)
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TextEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TextEvent);
// Type: UnityEngine.InputSystem.LowLevel::TextEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6547))
// CS Name: ::UnityEngine.InputSystem.LowLevel::TextEvent
struct CORDL_TYPE TextEvent : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Type offset 0x0
static constexpr int32_t  Type{static_cast<int32_t>(0x54455854)};

/// @brief Field baseEvent offset 0x0
 __declspec(property(get=__get_baseEvent, put=__set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

/// @brief Field character offset 0x14
 __declspec(property(get=__get_character, put=__set_character)) int32_t  character;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

constexpr void __set_character(int32_t  value) ;

constexpr int32_t& __get_character() ;

constexpr int32_t const& __get_character() const;

/// @brief Method get_typeStatic addr 0x2af07a0 size 0x20 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method From addr 0x2af07c0 size 0x12c virtual false final false
static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TextEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method Create addr 0x2af08ec size 0xa0 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::TextEvent Create(int32_t  deviceId, char16_t  character, double_t  time) ;

/// @brief Method Create addr 0x2af098c size 0x9c virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::TextEvent Create(int32_t  deviceId, int32_t  character, double_t  time) ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "character", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, int32_t  character) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TextEvent, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TextEvent, "UnityEngine.InputSystem.LowLevel", "TextEvent");
