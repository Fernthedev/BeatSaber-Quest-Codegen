#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyChangeType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::HierarchyChangeType);
// Type: UnityEngine.UIElements::HierarchyChangeType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6785))
// CS Name: ::UnityEngine.UIElements::HierarchyChangeType
struct CORDL_TYPE HierarchyChangeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HierarchyChangeType_Unwrapped
enum struct __HierarchyChangeType_Unwrapped : int32_t {
__E_Add = static_cast<int32_t>(0x0),
__E_Remove = static_cast<int32_t>(0x1),
__E_Move = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Add value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::HierarchyChangeType const Add;

/// @brief Field Remove value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::HierarchyChangeType const Remove;

/// @brief Field Move value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::HierarchyChangeType const Move;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HierarchyChangeType_Unwrapped () const noexcept {
return std::bit_cast<__HierarchyChangeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HierarchyChangeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HierarchyChangeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HierarchyChangeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HierarchyChangeType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HierarchyChangeType, "UnityEngine.UIElements", "HierarchyChangeType");
