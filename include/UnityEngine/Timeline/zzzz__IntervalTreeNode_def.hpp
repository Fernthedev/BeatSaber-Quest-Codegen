#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTreeNode)
// Forward declare root types
namespace UnityEngine::Timeline {
struct IntervalTreeNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::IntervalTreeNode);
// Type: UnityEngine.Timeline::IntervalTreeNode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13879))
// CS Name: ::UnityEngine.Timeline::IntervalTreeNode
struct CORDL_TYPE IntervalTreeNode : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field center offset 0x0
 __declspec(property(get=__get_center, put=__set_center)) int64_t  center;

/// @brief Field first offset 0x8
 __declspec(property(get=__get_first, put=__set_first)) int32_t  first;

/// @brief Field last offset 0xc
 __declspec(property(get=__get_last, put=__set_last)) int32_t  last;

/// @brief Field left offset 0x10
 __declspec(property(get=__get_left, put=__set_left)) int32_t  left;

/// @brief Field right offset 0x14
 __declspec(property(get=__get_right, put=__set_right)) int32_t  right;

constexpr void __set_center(int64_t  value) ;

constexpr int64_t& __get_center() ;

constexpr int64_t const& __get_center() const;

constexpr void __set_first(int32_t  value) ;

constexpr int32_t& __get_first() ;

constexpr int32_t const& __get_first() const;

constexpr void __set_last(int32_t  value) ;

constexpr int32_t& __get_last() ;

constexpr int32_t const& __get_last() const;

constexpr void __set_left(int32_t  value) ;

constexpr int32_t& __get_left() ;

constexpr int32_t const& __get_left() const;

constexpr void __set_right(int32_t  value) ;

constexpr int32_t& __get_right() ;

constexpr int32_t const& __get_right() const;

// Ctor Parameters [CppParam { name: "center", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IntervalTreeNode(int64_t  center, int32_t  first, int32_t  last, int32_t  left, int32_t  right) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IntervalTreeNode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IntervalTreeNode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::IntervalTreeNode, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IntervalTreeNode, "UnityEngine.Timeline", "IntervalTreeNode");
