#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticAccessorType)
// Forward declare root types
namespace UnityEngine::Bindings {
struct StaticAccessorType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::StaticAccessorType);
// Type: UnityEngine.Bindings::StaticAccessorType
namespace UnityEngine::Bindings {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16027))
// CS Name: ::UnityEngine.Bindings::StaticAccessorType
struct CORDL_TYPE StaticAccessorType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StaticAccessorType_Unwrapped
enum struct __StaticAccessorType_Unwrapped : int32_t {
__E_Dot = static_cast<int32_t>(0x0),
__E_Arrow = static_cast<int32_t>(0x1),
__E_DoubleColon = static_cast<int32_t>(0x2),
__E_ArrowWithDefaultReturnIfNull = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Dot value: static_cast<int32_t>(0x0)
static ::UnityEngine::Bindings::StaticAccessorType const Dot;

/// @brief Field Arrow value: static_cast<int32_t>(0x1)
static ::UnityEngine::Bindings::StaticAccessorType const Arrow;

/// @brief Field DoubleColon value: static_cast<int32_t>(0x2)
static ::UnityEngine::Bindings::StaticAccessorType const DoubleColon;

/// @brief Field ArrowWithDefaultReturnIfNull value: static_cast<int32_t>(0x3)
static ::UnityEngine::Bindings::StaticAccessorType const ArrowWithDefaultReturnIfNull;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StaticAccessorType_Unwrapped () const noexcept {
return std::bit_cast<__StaticAccessorType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StaticAccessorType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StaticAccessorType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StaticAccessorType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::StaticAccessorType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StaticAccessorType, "UnityEngine.Bindings", "StaticAccessorType");
