#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshPathStatus)
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshPathStatus);
// Type: UnityEngine.AI::NavMeshPathStatus
namespace UnityEngine::AI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16114))
// CS Name: ::UnityEngine.AI::NavMeshPathStatus
struct CORDL_TYPE NavMeshPathStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavMeshPathStatus_Unwrapped
enum struct __NavMeshPathStatus_Unwrapped : int32_t {
__E_PathComplete = static_cast<int32_t>(0x0),
__E_PathPartial = static_cast<int32_t>(0x1),
__E_PathInvalid = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field PathComplete value: static_cast<int32_t>(0x0)
static ::UnityEngine::AI::NavMeshPathStatus const PathComplete;

/// @brief Field PathPartial value: static_cast<int32_t>(0x1)
static ::UnityEngine::AI::NavMeshPathStatus const PathPartial;

/// @brief Field PathInvalid value: static_cast<int32_t>(0x2)
static ::UnityEngine::AI::NavMeshPathStatus const PathInvalid;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NavMeshPathStatus_Unwrapped () const noexcept {
return std::bit_cast<__NavMeshPathStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NavMeshPathStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NavMeshPathStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NavMeshPathStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMeshPathStatus, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::AI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshPathStatus, "UnityEngine.AI", "NavMeshPathStatus");
