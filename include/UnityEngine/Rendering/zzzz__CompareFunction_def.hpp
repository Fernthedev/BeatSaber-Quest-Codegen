#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompareFunction)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CompareFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CompareFunction);
// Type: UnityEngine.Rendering::CompareFunction
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10334))
// CS Name: ::UnityEngine.Rendering::CompareFunction
struct CORDL_TYPE CompareFunction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompareFunction_Unwrapped
enum struct __CompareFunction_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_Never = static_cast<int32_t>(0x1),
__E_Less = static_cast<int32_t>(0x2),
__E_Equal = static_cast<int32_t>(0x3),
__E_LessEqual = static_cast<int32_t>(0x4),
__E_Greater = static_cast<int32_t>(0x5),
__E_NotEqual = static_cast<int32_t>(0x6),
__E_GreaterEqual = static_cast<int32_t>(0x7),
__E_Always = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Disabled value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::CompareFunction const Disabled;

/// @brief Field Never value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::CompareFunction const Never;

/// @brief Field Less value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::CompareFunction const Less;

/// @brief Field Equal value: static_cast<int32_t>(0x3)
static ::UnityEngine::Rendering::CompareFunction const Equal;

/// @brief Field LessEqual value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::CompareFunction const LessEqual;

/// @brief Field Greater value: static_cast<int32_t>(0x5)
static ::UnityEngine::Rendering::CompareFunction const Greater;

/// @brief Field NotEqual value: static_cast<int32_t>(0x6)
static ::UnityEngine::Rendering::CompareFunction const NotEqual;

/// @brief Field GreaterEqual value: static_cast<int32_t>(0x7)
static ::UnityEngine::Rendering::CompareFunction const GreaterEqual;

/// @brief Field Always value: static_cast<int32_t>(0x8)
static ::UnityEngine::Rendering::CompareFunction const Always;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CompareFunction_Unwrapped () const noexcept {
return std::bit_cast<__CompareFunction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompareFunction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CompareFunction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CompareFunction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CompareFunction, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CompareFunction, "UnityEngine.Rendering", "CompareFunction");
