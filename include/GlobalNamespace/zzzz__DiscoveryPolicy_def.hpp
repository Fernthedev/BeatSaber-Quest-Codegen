#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscoveryPolicy)
// Forward declare root types
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DiscoveryPolicy);
// Type: ::DiscoveryPolicy
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12721))
// CS Name: ::DiscoveryPolicy
struct CORDL_TYPE DiscoveryPolicy : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DiscoveryPolicy_Unwrapped
enum struct __DiscoveryPolicy_Unwrapped : uint8_t {
__E_Hidden = static_cast<uint8_t>(0x0u),
__E_WithCode = static_cast<uint8_t>(0x1u),
__E_Public = static_cast<uint8_t>(0x2u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Hidden value: static_cast<uint8_t>(0x0u)
static ::GlobalNamespace::DiscoveryPolicy const Hidden;

/// @brief Field WithCode value: static_cast<uint8_t>(0x1u)
static ::GlobalNamespace::DiscoveryPolicy const WithCode;

/// @brief Field Public value: static_cast<uint8_t>(0x2u)
static ::GlobalNamespace::DiscoveryPolicy const Public;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DiscoveryPolicy_Unwrapped () const noexcept {
return std::bit_cast<__DiscoveryPolicy_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DiscoveryPolicy(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DiscoveryPolicy(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DiscoveryPolicy()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DiscoveryPolicy, 0x1>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DiscoveryPolicy, "", "DiscoveryPolicy");
