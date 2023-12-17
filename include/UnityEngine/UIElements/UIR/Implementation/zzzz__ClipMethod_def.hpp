#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipMethod)
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::ClipMethod);
// Type: UnityEngine.UIElements.UIR.Implementation::ClipMethod
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7445))
// CS Name: ::UnityEngine.UIElements.UIR.Implementation::ClipMethod
struct CORDL_TYPE ClipMethod : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClipMethod_Unwrapped
enum struct __ClipMethod_Unwrapped : int32_t {
__E_Undetermined = static_cast<int32_t>(0x0),
__E_NotClipped = static_cast<int32_t>(0x1),
__E_Scissor = static_cast<int32_t>(0x2),
__E_ShaderDiscard = static_cast<int32_t>(0x3),
__E_Stencil = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Undetermined value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Undetermined;

/// @brief Field NotClipped value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const NotClipped;

/// @brief Field Scissor value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Scissor;

/// @brief Field ShaderDiscard value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const ShaderDiscard;

/// @brief Field Stencil value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Stencil;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ClipMethod_Unwrapped () const noexcept {
return std::bit_cast<__ClipMethod_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClipMethod(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ClipMethod(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ClipMethod()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::ClipMethod, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR::Implementation
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::ClipMethod, "UnityEngine.UIElements.UIR.Implementation", "ClipMethod");
