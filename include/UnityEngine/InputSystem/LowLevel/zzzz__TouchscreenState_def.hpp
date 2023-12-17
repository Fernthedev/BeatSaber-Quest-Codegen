#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchscreenState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __TouchscreenState___touchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __TouchscreenState___primaryTouchData_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __TouchscreenState___primaryTouchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __TouchscreenState___touchData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchscreenState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer);
// Type: ::<primaryTouchData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6515))
// CS Name: ::TouchscreenState::<primaryTouchData>e__FixedBuffer
struct CORDL_TYPE __TouchscreenState___primaryTouchData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TouchscreenState___primaryTouchData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TouchscreenState___primaryTouchData_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TouchscreenState___primaryTouchData_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<touchData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6516))
// CS Name: ::TouchscreenState::<touchData>e__FixedBuffer
struct CORDL_TYPE __TouchscreenState___touchData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x230> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x230};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TouchscreenState___touchData_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TouchscreenState___touchData_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x230>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TouchscreenState___touchData_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer, 0x230>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::TouchscreenState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6517))
// CS Name: ::UnityEngine.InputSystem.LowLevel::TouchscreenState
struct CORDL_TYPE TouchscreenState : public ::bs_hook::ValueTypeWrapper<0x268> {
public:
// Declarations
using _touchData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer;

using _primaryTouchData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x268};

/// @brief Field MaxTouches offset 0x0
static constexpr int32_t  MaxTouches{static_cast<int32_t>(0xa)};

/// @brief Field kTouchDataOffset offset 0x0
static constexpr int32_t  kTouchDataOffset{static_cast<int32_t>(0x38)};

/// @brief Field primaryTouchData offset 0x0
 __declspec(property(get=__get_primaryTouchData, put=__set_primaryTouchData)) ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer  primaryTouchData;

/// @brief Field touchData offset 0x38
 __declspec(property(get=__get_touchData, put=__set_touchData)) ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer  touchData;

 __declspec(property(get=get_primaryTouch)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState>  primaryTouch;

 __declspec(property(get=get_touches)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState>  touches;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_primaryTouchData(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer& __get_primaryTouchData() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer const& __get_primaryTouchData() const;

constexpr void __set_touchData(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer& __get_touchData() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer const& __get_touchData() const;

/// @brief Method get_Format addr 0x2ae9164 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method get_primaryTouch addr 0x2ae9194 size 0x4 virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState> get_primaryTouch() ;

/// @brief Method get_touches addr 0x2ae9198 size 0x8 virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState> get_touches() ;

/// @brief Method get_format addr 0x2ae91a0 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "touchData", ty: "::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr TouchscreenState(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer  primaryTouchData, ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer  touchData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TouchscreenState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x268>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TouchscreenState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchscreenState, 0x268>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchscreenState, "UnityEngine.InputSystem.LowLevel", "TouchscreenState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "TouchscreenState/<primaryTouchData>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "TouchscreenState/<touchData>e__FixedBuffer");
