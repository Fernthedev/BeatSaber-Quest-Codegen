#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexSortingOrder)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct VertexSortingOrder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::VertexSortingOrder);
// Type: UnityEngine.TextCore.Text::VertexSortingOrder
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13729))
// CS Name: ::UnityEngine.TextCore.Text::VertexSortingOrder
struct CORDL_TYPE VertexSortingOrder : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VertexSortingOrder_Unwrapped
enum struct __VertexSortingOrder_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Reverse = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::Text::VertexSortingOrder const Normal;

/// @brief Field Reverse value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextCore::Text::VertexSortingOrder const Reverse;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexSortingOrder_Unwrapped () const noexcept {
return std::bit_cast<__VertexSortingOrder_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexSortingOrder(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VertexSortingOrder(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VertexSortingOrder()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::VertexSortingOrder, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::VertexSortingOrder, "UnityEngine.TextCore.Text", "VertexSortingOrder");
