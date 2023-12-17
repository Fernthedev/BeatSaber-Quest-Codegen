#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CurveOrders)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveOrders;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CurveOrders);
// Type: HoudiniEngineUnity::HAPI_CurveOrders
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9712))
// CS Name: ::HoudiniEngineUnity::HAPI_CurveOrders
struct CORDL_TYPE HAPI_CurveOrders : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_CurveOrders_Unwrapped
enum struct __HAPI_CurveOrders_Unwrapped : int32_t {
__E_HAPI_CURVE_ORDER_VARYING = static_cast<int32_t>(0x0),
__E_HAPI_CURVE_ORDER_INVALID = static_cast<int32_t>(0x1),
__E_HAPI_CURVE_ORDER_LINEAR = static_cast<int32_t>(0x2),
__E_HAPI_CURVE_ORDER_QUADRATIC = static_cast<int32_t>(0x3),
__E_HAPI_CURVE_ORDER_CUBIC = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_CURVE_ORDER_VARYING value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_VARYING;

/// @brief Field HAPI_CURVE_ORDER_INVALID value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_INVALID;

/// @brief Field HAPI_CURVE_ORDER_LINEAR value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_LINEAR;

/// @brief Field HAPI_CURVE_ORDER_QUADRATIC value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_QUADRATIC;

/// @brief Field HAPI_CURVE_ORDER_CUBIC value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_CUBIC;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_CurveOrders_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_CurveOrders_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CurveOrders(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_CurveOrders(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_CurveOrders()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CurveOrders, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CurveOrders, "HoudiniEngineUnity", "HAPI_CurveOrders");
