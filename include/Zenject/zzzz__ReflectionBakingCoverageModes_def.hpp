#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionBakingCoverageModes)
// Forward declare root types
namespace Zenject {
struct ReflectionBakingCoverageModes;
}
// Write type traits
MARK_VAL_T(::Zenject::ReflectionBakingCoverageModes);
// Type: Zenject::ReflectionBakingCoverageModes
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11354))
// CS Name: ::Zenject::ReflectionBakingCoverageModes
struct CORDL_TYPE ReflectionBakingCoverageModes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReflectionBakingCoverageModes_Unwrapped
enum struct __ReflectionBakingCoverageModes_Unwrapped : int32_t {
__E_FallbackToDirectReflection = static_cast<int32_t>(0x0),
__E_NoCheckAssumeFullCoverage = static_cast<int32_t>(0x1),
__E_FallbackToDirectReflectionWithWarning = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FallbackToDirectReflection value: static_cast<int32_t>(0x0)
static ::Zenject::ReflectionBakingCoverageModes const FallbackToDirectReflection;

/// @brief Field NoCheckAssumeFullCoverage value: static_cast<int32_t>(0x1)
static ::Zenject::ReflectionBakingCoverageModes const NoCheckAssumeFullCoverage;

/// @brief Field FallbackToDirectReflectionWithWarning value: static_cast<int32_t>(0x2)
static ::Zenject::ReflectionBakingCoverageModes const FallbackToDirectReflectionWithWarning;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionBakingCoverageModes_Unwrapped () const noexcept {
return std::bit_cast<__ReflectionBakingCoverageModes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionBakingCoverageModes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReflectionBakingCoverageModes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReflectionBakingCoverageModes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ReflectionBakingCoverageModes, 0x4>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ReflectionBakingCoverageModes, "Zenject", "ReflectionBakingCoverageModes");
