#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationOrder)
// Forward declare root types
namespace UnityEngine {
struct RotationOrder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RotationOrder);
// Type: UnityEngine::RotationOrder
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10274))
// CS Name: ::UnityEngine::RotationOrder
struct CORDL_TYPE RotationOrder : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotationOrder_Unwrapped
enum struct __RotationOrder_Unwrapped : int32_t {
__E_OrderXYZ = static_cast<int32_t>(0x0),
__E_OrderXZY = static_cast<int32_t>(0x1),
__E_OrderYZX = static_cast<int32_t>(0x2),
__E_OrderYXZ = static_cast<int32_t>(0x3),
__E_OrderZXY = static_cast<int32_t>(0x4),
__E_OrderZYX = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OrderXYZ value: static_cast<int32_t>(0x0)
static ::UnityEngine::RotationOrder const OrderXYZ;

/// @brief Field OrderXZY value: static_cast<int32_t>(0x1)
static ::UnityEngine::RotationOrder const OrderXZY;

/// @brief Field OrderYZX value: static_cast<int32_t>(0x2)
static ::UnityEngine::RotationOrder const OrderYZX;

/// @brief Field OrderYXZ value: static_cast<int32_t>(0x3)
static ::UnityEngine::RotationOrder const OrderYXZ;

/// @brief Field OrderZXY value: static_cast<int32_t>(0x4)
static ::UnityEngine::RotationOrder const OrderZXY;

/// @brief Field OrderZYX value: static_cast<int32_t>(0x5)
static ::UnityEngine::RotationOrder const OrderZYX;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationOrder_Unwrapped () const noexcept {
return std::bit_cast<__RotationOrder_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotationOrder(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RotationOrder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RotationOrder()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RotationOrder, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RotationOrder, "UnityEngine", "RotationOrder");
