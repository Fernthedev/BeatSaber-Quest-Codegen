#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchTargetFields)
// Forward declare root types
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::MatchTargetFields);
// Type: UnityEngine.Timeline::MatchTargetFields
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13837))
// CS Name: ::UnityEngine.Timeline::MatchTargetFields
struct CORDL_TYPE MatchTargetFields : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MatchTargetFields_Unwrapped
enum struct __MatchTargetFields_Unwrapped : int32_t {
__E_PositionX = static_cast<int32_t>(0x1),
__E_PositionY = static_cast<int32_t>(0x2),
__E_PositionZ = static_cast<int32_t>(0x4),
__E_RotationX = static_cast<int32_t>(0x8),
__E_RotationY = static_cast<int32_t>(0x10),
__E_RotationZ = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field PositionX value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::MatchTargetFields const PositionX;

/// @brief Field PositionY value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::MatchTargetFields const PositionY;

/// @brief Field PositionZ value: static_cast<int32_t>(0x4)
static ::UnityEngine::Timeline::MatchTargetFields const PositionZ;

/// @brief Field RotationX value: static_cast<int32_t>(0x8)
static ::UnityEngine::Timeline::MatchTargetFields const RotationX;

/// @brief Field RotationY value: static_cast<int32_t>(0x10)
static ::UnityEngine::Timeline::MatchTargetFields const RotationY;

/// @brief Field RotationZ value: static_cast<int32_t>(0x20)
static ::UnityEngine::Timeline::MatchTargetFields const RotationZ;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchTargetFields_Unwrapped () const noexcept {
return std::bit_cast<__MatchTargetFields_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchTargetFields(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MatchTargetFields(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MatchTargetFields()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MatchTargetFields, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MatchTargetFields, "UnityEngine.Timeline", "MatchTargetFields");
