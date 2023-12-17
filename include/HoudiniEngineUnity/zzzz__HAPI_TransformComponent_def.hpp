#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_TransformComponent)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_TransformComponent;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_TransformComponent);
// Type: HoudiniEngineUnity::HAPI_TransformComponent
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9713))
// CS Name: ::HoudiniEngineUnity::HAPI_TransformComponent
struct CORDL_TYPE HAPI_TransformComponent : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_TransformComponent_Unwrapped
enum struct __HAPI_TransformComponent_Unwrapped : int32_t {
__E_HAPI_TRANSFORM_TX = static_cast<int32_t>(0x0),
__E_HAPI_TRANSFORM_TY = static_cast<int32_t>(0x1),
__E_HAPI_TRANSFORM_TZ = static_cast<int32_t>(0x2),
__E_HAPI_TRANSFORM_RX = static_cast<int32_t>(0x3),
__E_HAPI_TRANSFORM_RY = static_cast<int32_t>(0x4),
__E_HAPI_TRANSFORM_RZ = static_cast<int32_t>(0x5),
__E_HAPI_TRANSFORM_QX = static_cast<int32_t>(0x6),
__E_HAPI_TRANSFORM_QY = static_cast<int32_t>(0x7),
__E_HAPI_TRANSFORM_QZ = static_cast<int32_t>(0x8),
__E_HAPI_TRANSFORM_QW = static_cast<int32_t>(0x9),
__E_HAPI_TRANSFORM_SX = static_cast<int32_t>(0xa),
__E_HAPI_TRANSFORM_SY = static_cast<int32_t>(0xb),
__E_HAPI_TRANSFORM_SZ = static_cast<int32_t>(0xc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_TRANSFORM_TX value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_TX;

/// @brief Field HAPI_TRANSFORM_TY value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_TY;

/// @brief Field HAPI_TRANSFORM_TZ value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_TZ;

/// @brief Field HAPI_TRANSFORM_RX value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_RX;

/// @brief Field HAPI_TRANSFORM_RY value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_RY;

/// @brief Field HAPI_TRANSFORM_RZ value: static_cast<int32_t>(0x5)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_RZ;

/// @brief Field HAPI_TRANSFORM_QX value: static_cast<int32_t>(0x6)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QX;

/// @brief Field HAPI_TRANSFORM_QY value: static_cast<int32_t>(0x7)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QY;

/// @brief Field HAPI_TRANSFORM_QZ value: static_cast<int32_t>(0x8)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QZ;

/// @brief Field HAPI_TRANSFORM_QW value: static_cast<int32_t>(0x9)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QW;

/// @brief Field HAPI_TRANSFORM_SX value: static_cast<int32_t>(0xa)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_SX;

/// @brief Field HAPI_TRANSFORM_SY value: static_cast<int32_t>(0xb)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_SY;

/// @brief Field HAPI_TRANSFORM_SZ value: static_cast<int32_t>(0xc)
static ::HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_SZ;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_TransformComponent_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_TransformComponent_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_TransformComponent(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_TransformComponent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_TransformComponent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_TransformComponent, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_TransformComponent, "HoudiniEngineUnity", "HAPI_TransformComponent");
