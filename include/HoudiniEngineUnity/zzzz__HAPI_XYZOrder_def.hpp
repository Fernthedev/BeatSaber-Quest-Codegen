#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_XYZOrder)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_XYZOrder);
// Type: HoudiniEngineUnity::HAPI_XYZOrder
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9715))
// CS Name: ::HoudiniEngineUnity::HAPI_XYZOrder
struct CORDL_TYPE HAPI_XYZOrder : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_XYZOrder_Unwrapped
enum struct __HAPI_XYZOrder_Unwrapped : int32_t {
__E_HAPI_XYZ = static_cast<int32_t>(0x0),
__E_HAPI_XZY = static_cast<int32_t>(0x1),
__E_HAPI_YXZ = static_cast<int32_t>(0x2),
__E_HAPI_YZX = static_cast<int32_t>(0x3),
__E_HAPI_ZXY = static_cast<int32_t>(0x4),
__E_HAPI_ZYX = static_cast<int32_t>(0x5),
__E_HAPI_XYZORDER_DEFAULT = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_XYZ value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XYZ;

/// @brief Field HAPI_XZY value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XZY;

/// @brief Field HAPI_YXZ value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_YXZ;

/// @brief Field HAPI_YZX value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_YZX;

/// @brief Field HAPI_ZXY value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_ZXY;

/// @brief Field HAPI_ZYX value: static_cast<int32_t>(0x5)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_ZYX;

/// @brief Field HAPI_XYZORDER_DEFAULT value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XYZORDER_DEFAULT;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_XYZOrder_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_XYZOrder_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_XYZOrder(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_XYZOrder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_XYZOrder()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_XYZOrder, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_XYZOrder, "HoudiniEngineUnity", "HAPI_XYZOrder");
