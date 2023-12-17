#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionType)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionType);
// Type: UnityEngine.InputSystem::InputActionType
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6182))
// CS Name: ::UnityEngine.InputSystem::InputActionType
struct CORDL_TYPE InputActionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputActionType_Unwrapped
enum struct __InputActionType_Unwrapped : int32_t {
__E_Value = static_cast<int32_t>(0x0),
__E_Button = static_cast<int32_t>(0x1),
__E_PassThrough = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Value value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::InputActionType const Value;

/// @brief Field Button value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::InputActionType const Button;

/// @brief Field PassThrough value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::InputActionType const PassThrough;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionType_Unwrapped () const noexcept {
return std::bit_cast<__InputActionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputActionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputActionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionType, "UnityEngine.InputSystem", "InputActionType");
