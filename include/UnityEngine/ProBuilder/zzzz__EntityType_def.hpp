#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntityType)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct EntityType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::EntityType);
// Type: UnityEngine.ProBuilder::EntityType
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12156))
// CS Name: ::UnityEngine.ProBuilder::EntityType
struct CORDL_TYPE EntityType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EntityType_Unwrapped
enum struct __EntityType_Unwrapped : int32_t {
__E_Detail = static_cast<int32_t>(0x0),
__E_Occluder = static_cast<int32_t>(0x1),
__E_Trigger = static_cast<int32_t>(0x2),
__E_Collider = static_cast<int32_t>(0x3),
__E_Mover = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Detail value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::EntityType const Detail;

/// @brief Field Occluder value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::EntityType const Occluder;

/// @brief Field Trigger value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::EntityType const Trigger;

/// @brief Field Collider value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::EntityType const Collider;

/// @brief Field Mover value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::EntityType const Mover;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EntityType_Unwrapped () const noexcept {
return std::bit_cast<__EntityType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EntityType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EntityType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EntityType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EntityType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EntityType, "UnityEngine.ProBuilder", "EntityType");
