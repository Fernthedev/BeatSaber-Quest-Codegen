#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddDuplicateBehavior)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
struct AddDuplicateBehavior;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior);
// Type: UnityEngine.ProBuilder.KdTree::AddDuplicateBehavior
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15914))
// CS Name: ::UnityEngine.ProBuilder.KdTree::AddDuplicateBehavior
struct CORDL_TYPE AddDuplicateBehavior : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AddDuplicateBehavior_Unwrapped
enum struct __AddDuplicateBehavior_Unwrapped : int32_t {
__E_Skip = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Update = static_cast<int32_t>(0x2),
__E_Collect = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Skip value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Skip;

/// @brief Field Error value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Error;

/// @brief Field Update value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Update;

/// @brief Field Collect value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Collect;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AddDuplicateBehavior_Unwrapped () const noexcept {
return std::bit_cast<__AddDuplicateBehavior_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddDuplicateBehavior(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AddDuplicateBehavior(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AddDuplicateBehavior()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, "UnityEngine.ProBuilder.KdTree", "AddDuplicateBehavior");
