#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshSyncState)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct MeshSyncState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshSyncState);
// Type: UnityEngine.ProBuilder::MeshSyncState
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12165))
// CS Name: ::UnityEngine.ProBuilder::MeshSyncState
struct CORDL_TYPE MeshSyncState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshSyncState_Unwrapped
enum struct __MeshSyncState_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_InstanceIDMismatch = static_cast<int32_t>(0x1),
__E_Lightmap = static_cast<int32_t>(0x2),
__E_InSync = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Null value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::MeshSyncState const Null;

/// @brief Field InstanceIDMismatch value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::MeshSyncState const InstanceIDMismatch;

/// @brief Field Lightmap value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::MeshSyncState const Lightmap;

/// @brief Field InSync value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::MeshSyncState const InSync;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshSyncState_Unwrapped () const noexcept {
return std::bit_cast<__MeshSyncState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshSyncState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MeshSyncState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MeshSyncState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshSyncState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshSyncState, "UnityEngine.ProBuilder", "MeshSyncState");
