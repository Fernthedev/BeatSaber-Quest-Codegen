#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ItemPriority_2)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
struct ItemPriority_2;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::KdTree::ItemPriority_2);
// Type: UnityEngine.ProBuilder.KdTree::ItemPriority`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename TItem,typename TPriority>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15923))
// CS Name: ::UnityEngine.ProBuilder.KdTree::ItemPriority`2<TItem,TPriority>
struct CORDL_TYPE ItemPriority_2 : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item offset 0x0
 __declspec(property(get=__get_Item, put=__set_Item)) TItem  Item;

/// @brief Field Priority offset 0x8
 __declspec(property(get=__get_Priority, put=__set_Priority)) TPriority  Priority;

constexpr void __set_Item(TItem  value) ;

constexpr TItem& __get_Item() ;

constexpr TItem const& __get_Item() const;

constexpr void __set_Priority(TPriority  value) ;

constexpr TPriority& __get_Priority() ;

constexpr TPriority const& __get_Priority() const;

// Ctor Parameters [CppParam { name: "Item", ty: "TItem", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "TPriority", modifiers: "", def_value: None }]
constexpr ItemPriority_2(TItem  Item, TPriority  Priority) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ItemPriority_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ItemPriority_2()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::KdTree::ItemPriority_2, "UnityEngine.ProBuilder.KdTree", "ItemPriority`2");
