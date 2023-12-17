#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAnchor)
// Forward declare root types
namespace UnityEngine {
struct TextAnchor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextAnchor);
// Type: UnityEngine::TextAnchor
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15901))
// CS Name: ::UnityEngine::TextAnchor
struct CORDL_TYPE TextAnchor : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextAnchor_Unwrapped
enum struct __TextAnchor_Unwrapped : int32_t {
__E_UpperLeft = static_cast<int32_t>(0x0),
__E_UpperCenter = static_cast<int32_t>(0x1),
__E_UpperRight = static_cast<int32_t>(0x2),
__E_MiddleLeft = static_cast<int32_t>(0x3),
__E_MiddleCenter = static_cast<int32_t>(0x4),
__E_MiddleRight = static_cast<int32_t>(0x5),
__E_LowerLeft = static_cast<int32_t>(0x6),
__E_LowerCenter = static_cast<int32_t>(0x7),
__E_LowerRight = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UpperLeft value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextAnchor const UpperLeft;

/// @brief Field UpperCenter value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextAnchor const UpperCenter;

/// @brief Field UpperRight value: static_cast<int32_t>(0x2)
static ::UnityEngine::TextAnchor const UpperRight;

/// @brief Field MiddleLeft value: static_cast<int32_t>(0x3)
static ::UnityEngine::TextAnchor const MiddleLeft;

/// @brief Field MiddleCenter value: static_cast<int32_t>(0x4)
static ::UnityEngine::TextAnchor const MiddleCenter;

/// @brief Field MiddleRight value: static_cast<int32_t>(0x5)
static ::UnityEngine::TextAnchor const MiddleRight;

/// @brief Field LowerLeft value: static_cast<int32_t>(0x6)
static ::UnityEngine::TextAnchor const LowerLeft;

/// @brief Field LowerCenter value: static_cast<int32_t>(0x7)
static ::UnityEngine::TextAnchor const LowerCenter;

/// @brief Field LowerRight value: static_cast<int32_t>(0x8)
static ::UnityEngine::TextAnchor const LowerRight;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextAnchor_Unwrapped () const noexcept {
return std::bit_cast<__TextAnchor_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextAnchor(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextAnchor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextAnchor()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAnchor, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAnchor, "UnityEngine", "TextAnchor");
