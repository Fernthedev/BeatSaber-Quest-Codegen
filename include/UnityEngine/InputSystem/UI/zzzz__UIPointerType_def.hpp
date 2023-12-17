#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIPointerType)
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::UIPointerType);
// Type: UnityEngine.InputSystem.UI::UIPointerType
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6372))
// CS Name: ::UnityEngine.InputSystem.UI::UIPointerType
struct CORDL_TYPE UIPointerType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UIPointerType_Unwrapped
enum struct __UIPointerType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MouseOrPen = static_cast<int32_t>(0x1),
__E_Touch = static_cast<int32_t>(0x2),
__E_Tracked = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::UI::UIPointerType const None;

/// @brief Field MouseOrPen value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::UI::UIPointerType const MouseOrPen;

/// @brief Field Touch value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::UI::UIPointerType const Touch;

/// @brief Field Tracked value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::UI::UIPointerType const Tracked;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UIPointerType_Unwrapped () const noexcept {
return std::bit_cast<__UIPointerType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UIPointerType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UIPointerType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UIPointerType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::UIPointerType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::UIPointerType, "UnityEngine.InputSystem.UI", "UIPointerType");
