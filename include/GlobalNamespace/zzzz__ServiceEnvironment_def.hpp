#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServiceEnvironment)
// Forward declare root types
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServiceEnvironment);
// Type: ::ServiceEnvironment
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12740))
// CS Name: ::ServiceEnvironment
struct CORDL_TYPE ServiceEnvironment : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ServiceEnvironment_Unwrapped
enum struct __ServiceEnvironment_Unwrapped : int32_t {
__E_Production = static_cast<int32_t>(0x0),
__E_ReleaseCandidate = static_cast<int32_t>(0x1),
__E_InternalPlayTest = static_cast<int32_t>(0x2),
__E_QATesting = static_cast<int32_t>(0x3),
__E_Development = static_cast<int32_t>(0x4),
__E_ProductionA = static_cast<int32_t>(0x5),
__E_ProductionB = static_cast<int32_t>(0x6),
__E_DevelopmentA = static_cast<int32_t>(0x7),
__E_DevelopmentB = static_cast<int32_t>(0x8),
__E_ProductionC = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Production value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::ServiceEnvironment const Production;

/// @brief Field ReleaseCandidate value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::ServiceEnvironment const ReleaseCandidate;

/// @brief Field InternalPlayTest value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::ServiceEnvironment const InternalPlayTest;

/// @brief Field QATesting value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::ServiceEnvironment const QATesting;

/// @brief Field Development value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::ServiceEnvironment const Development;

/// @brief Field ProductionA value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::ServiceEnvironment const ProductionA;

/// @brief Field ProductionB value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::ServiceEnvironment const ProductionB;

/// @brief Field DevelopmentA value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::ServiceEnvironment const DevelopmentA;

/// @brief Field DevelopmentB value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::ServiceEnvironment const DevelopmentB;

/// @brief Field ProductionC value: static_cast<int32_t>(0x9)
static ::GlobalNamespace::ServiceEnvironment const ProductionC;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ServiceEnvironment_Unwrapped () const noexcept {
return std::bit_cast<__ServiceEnvironment_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ServiceEnvironment(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ServiceEnvironment(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ServiceEnvironment()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServiceEnvironment, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServiceEnvironment, "", "ServiceEnvironment");
