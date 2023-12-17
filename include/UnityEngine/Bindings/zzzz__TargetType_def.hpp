#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetType)
// Forward declare root types
namespace UnityEngine::Bindings {
struct TargetType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::TargetType);
// Type: UnityEngine.Bindings::TargetType
namespace UnityEngine::Bindings {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16018))
// CS Name: ::UnityEngine.Bindings::TargetType
struct CORDL_TYPE TargetType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TargetType_Unwrapped
enum struct __TargetType_Unwrapped : int32_t {
__E_Function = static_cast<int32_t>(0x0),
__E_Field = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Function value: static_cast<int32_t>(0x0)
static ::UnityEngine::Bindings::TargetType const Function;

/// @brief Field Field value: static_cast<int32_t>(0x1)
static ::UnityEngine::Bindings::TargetType const Field;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TargetType_Unwrapped () const noexcept {
return std::bit_cast<__TargetType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TargetType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TargetType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TargetType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::TargetType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::TargetType, "UnityEngine.Bindings", "TargetType");
