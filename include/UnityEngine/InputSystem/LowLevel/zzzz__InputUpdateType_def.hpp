#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdateType)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputUpdateType);
// Type: UnityEngine.InputSystem.LowLevel::InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6553))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputUpdateType
struct CORDL_TYPE InputUpdateType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputUpdateType_Unwrapped
enum struct __InputUpdateType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Dynamic = static_cast<int32_t>(0x1),
__E_Fixed = static_cast<int32_t>(0x2),
__E_BeforeRender = static_cast<int32_t>(0x4),
__E_Editor = static_cast<int32_t>(0x8),
__E_Manual = static_cast<int32_t>(0x10),
__E_Default = static_cast<int32_t>(0xb),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const None;

/// @brief Field Dynamic value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Dynamic;

/// @brief Field Fixed value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Fixed;

/// @brief Field BeforeRender value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const BeforeRender;

/// @brief Field Editor value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Editor;

/// @brief Field Manual value: static_cast<int32_t>(0x10)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Manual;

/// @brief Field Default value: static_cast<int32_t>(0xb)
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Default;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputUpdateType_Unwrapped () const noexcept {
return std::bit_cast<__InputUpdateType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputUpdateType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputUpdateType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputUpdateType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdateType, "UnityEngine.InputSystem.LowLevel", "InputUpdateType");
