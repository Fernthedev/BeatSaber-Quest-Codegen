#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FalloffType)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::FalloffType);
// Type: UnityEngine.Experimental.GlobalIllumination::FalloffType
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10388))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::FalloffType
struct CORDL_TYPE FalloffType : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __FalloffType_Unwrapped
enum struct __FalloffType_Unwrapped : uint8_t {
__E_InverseSquared = static_cast<uint8_t>(0x0u),
__E_InverseSquaredNoRangeAttenuation = static_cast<uint8_t>(0x1u),
__E_Linear = static_cast<uint8_t>(0x2u),
__E_Legacy = static_cast<uint8_t>(0x3u),
__E_Undefined = static_cast<uint8_t>(0x4u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field InverseSquared value: static_cast<uint8_t>(0x0u)
static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const InverseSquared;

/// @brief Field InverseSquaredNoRangeAttenuation value: static_cast<uint8_t>(0x1u)
static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const InverseSquaredNoRangeAttenuation;

/// @brief Field Linear value: static_cast<uint8_t>(0x2u)
static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const Linear;

/// @brief Field Legacy value: static_cast<uint8_t>(0x3u)
static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const Legacy;

/// @brief Field Undefined value: static_cast<uint8_t>(0x4u)
static ::UnityEngine::Experimental::GlobalIllumination::FalloffType const Undefined;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FalloffType_Unwrapped () const noexcept {
return std::bit_cast<__FalloffType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FalloffType(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FalloffType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FalloffType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::FalloffType, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::FalloffType, "UnityEngine.Experimental.GlobalIllumination", "FalloffType");
