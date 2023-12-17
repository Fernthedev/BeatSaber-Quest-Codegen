#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __KeyboardState___keys_e__FixedBuffer;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct KeyboardState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __KeyboardState___keys_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::KeyboardState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer);
// Type: ::<keys>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6502))
// CS Name: ::KeyboardState::<keys>e__FixedBuffer
struct CORDL_TYPE __KeyboardState___keys_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0xe> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __KeyboardState___keys_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __KeyboardState___keys_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xe>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __KeyboardState___keys_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer, 0xe>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::KeyboardState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6503))
// CS Name: ::UnityEngine.InputSystem.LowLevel::KeyboardState
struct CORDL_TYPE KeyboardState : public ::bs_hook::ValueTypeWrapper<0xe> {
public:
// Declarations
using _keys_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe};

/// @brief Field kSizeInBits offset 0x0
static constexpr int32_t  kSizeInBits{static_cast<int32_t>(0x6e)};

/// @brief Field kSizeInBytes offset 0x0
static constexpr int32_t  kSizeInBytes{static_cast<int32_t>(0xe)};

/// @brief Field keys offset 0x0
 __declspec(property(get=__get_keys, put=__set_keys)) ::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer  keys;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_keys(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer& __get_keys() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer const& __get_keys() const;

/// @brief Method get_Format addr 0x2ae88b0 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method .ctor addr 0x2ae88e0 size 0xc8 virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Key,::Array<::UnityEngine::InputSystem::Key>*>  pressedKeys) ;

/// @brief Method Set addr 0x2ae89a8 size 0xc virtual false final false
inline void Set(::UnityEngine::InputSystem::Key  key, bool  state) ;

/// @brief Method Press addr 0x2ae89b4 size 0xc virtual false final false
inline void Press(::UnityEngine::InputSystem::Key  key) ;

/// @brief Method Release addr 0x2ae89c0 size 0xc virtual false final false
inline void Release(::UnityEngine::InputSystem::Key  key) ;

/// @brief Method get_format addr 0x2ae89cc size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "keys", ty: "::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr KeyboardState(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer  keys) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KeyboardState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xe>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KeyboardState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::KeyboardState, 0xe>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::KeyboardState, "UnityEngine.InputSystem.LowLevel", "KeyboardState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "KeyboardState/<keys>e__FixedBuffer");
