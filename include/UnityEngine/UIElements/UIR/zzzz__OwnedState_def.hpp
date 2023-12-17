#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnedState)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct OwnedState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::OwnedState);
// Type: UnityEngine.UIElements.UIR::OwnedState
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7373))
// CS Name: ::UnityEngine.UIElements.UIR::OwnedState
struct CORDL_TYPE OwnedState : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __OwnedState_Unwrapped
enum struct __OwnedState_Unwrapped : uint8_t {
__E_Inherited = static_cast<uint8_t>(0x0u),
__E_Owned = static_cast<uint8_t>(0x1u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Inherited value: static_cast<uint8_t>(0x0u)
static ::UnityEngine::UIElements::UIR::OwnedState const Inherited;

/// @brief Field Owned value: static_cast<uint8_t>(0x1u)
static ::UnityEngine::UIElements::UIR::OwnedState const Owned;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __OwnedState_Unwrapped () const noexcept {
return std::bit_cast<__OwnedState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr OwnedState(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OwnedState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OwnedState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::OwnedState, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OwnedState, "UnityEngine.UIElements.UIR", "OwnedState");
