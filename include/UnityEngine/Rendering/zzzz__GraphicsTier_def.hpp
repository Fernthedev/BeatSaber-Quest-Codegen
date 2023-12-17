#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsTier)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GraphicsTier);
// Type: UnityEngine.Rendering::GraphicsTier
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10343))
// CS Name: ::UnityEngine.Rendering::GraphicsTier
struct CORDL_TYPE GraphicsTier : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsTier_Unwrapped
enum struct __GraphicsTier_Unwrapped : int32_t {
__E_Tier1 = static_cast<int32_t>(0x0),
__E_Tier2 = static_cast<int32_t>(0x1),
__E_Tier3 = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Tier1 value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::GraphicsTier const Tier1;

/// @brief Field Tier2 value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::GraphicsTier const Tier2;

/// @brief Field Tier3 value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::GraphicsTier const Tier3;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsTier_Unwrapped () const noexcept {
return std::bit_cast<__GraphicsTier_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsTier(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GraphicsTier(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GraphicsTier()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsTier, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsTier, "UnityEngine.Rendering", "GraphicsTier");
