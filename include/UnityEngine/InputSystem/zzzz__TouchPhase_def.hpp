#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchPhase)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::TouchPhase);
// Type: UnityEngine.InputSystem::TouchPhase
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6287))
// CS Name: ::UnityEngine.InputSystem::TouchPhase
struct CORDL_TYPE TouchPhase : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchPhase_Unwrapped
enum struct __TouchPhase_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Began = static_cast<int32_t>(0x1),
__E_Moved = static_cast<int32_t>(0x2),
__E_Ended = static_cast<int32_t>(0x3),
__E_Canceled = static_cast<int32_t>(0x4),
__E_Stationary = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::TouchPhase const None;

/// @brief Field Began value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::TouchPhase const Began;

/// @brief Field Moved value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::TouchPhase const Moved;

/// @brief Field Ended value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::TouchPhase const Ended;

/// @brief Field Canceled value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::TouchPhase const Canceled;

/// @brief Field Stationary value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::TouchPhase const Stationary;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPhase_Unwrapped () const noexcept {
return std::bit_cast<__TouchPhase_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPhase(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TouchPhase(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TouchPhase()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::TouchPhase, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::TouchPhase, "UnityEngine.InputSystem", "TouchPhase");
