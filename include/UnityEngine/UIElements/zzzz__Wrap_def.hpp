#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Wrap)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Wrap;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Wrap);
// Type: UnityEngine.UIElements::Wrap
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6890))
// CS Name: ::UnityEngine.UIElements::Wrap
struct CORDL_TYPE Wrap : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Wrap_Unwrapped
enum struct __Wrap_Unwrapped : int32_t {
__E_NoWrap = static_cast<int32_t>(0x0),
__E_Wrap = static_cast<int32_t>(0x1),
__E_WrapReverse = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoWrap value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::Wrap const NoWrap;

/// @brief Field Wrap value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::Wrap const _cordl_Wrap;

/// @brief Field WrapReverse value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::Wrap const WrapReverse;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Wrap_Unwrapped () const noexcept {
return std::bit_cast<__Wrap_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Wrap(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Wrap(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Wrap()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Wrap, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Wrap, "UnityEngine.UIElements", "Wrap");
