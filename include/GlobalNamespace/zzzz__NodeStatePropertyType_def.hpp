#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodeStatePropertyType)
// Forward declare root types
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NodeStatePropertyType);
// Type: ::NodeStatePropertyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7533))
// CS Name: ::NodeStatePropertyType
struct CORDL_TYPE NodeStatePropertyType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NodeStatePropertyType_Unwrapped
enum struct __NodeStatePropertyType_Unwrapped : int32_t {
__E_Acceleration = static_cast<int32_t>(0x0),
__E_AngularAcceleration = static_cast<int32_t>(0x1),
__E_Velocity = static_cast<int32_t>(0x2),
__E_AngularVelocity = static_cast<int32_t>(0x3),
__E_Position = static_cast<int32_t>(0x4),
__E_Orientation = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Acceleration value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::NodeStatePropertyType const Acceleration;

/// @brief Field AngularAcceleration value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::NodeStatePropertyType const AngularAcceleration;

/// @brief Field Velocity value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::NodeStatePropertyType const Velocity;

/// @brief Field AngularVelocity value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::NodeStatePropertyType const AngularVelocity;

/// @brief Field Position value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::NodeStatePropertyType const Position;

/// @brief Field Orientation value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::NodeStatePropertyType const Orientation;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NodeStatePropertyType_Unwrapped () const noexcept {
return std::bit_cast<__NodeStatePropertyType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NodeStatePropertyType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NodeStatePropertyType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NodeStatePropertyType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodeStatePropertyType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodeStatePropertyType, "", "NodeStatePropertyType");
