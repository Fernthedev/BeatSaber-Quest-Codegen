#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProviderBehaviourFlags)
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags);
// Type: UnityEngine.ResourceManagement.ResourceProviders::ProviderBehaviourFlags
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14001))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::ProviderBehaviourFlags
struct CORDL_TYPE ProviderBehaviourFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProviderBehaviourFlags_Unwrapped
enum struct __ProviderBehaviourFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CanProvideWithFailedDependencies = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const None;

/// @brief Field CanProvideWithFailedDependencies value: static_cast<int32_t>(0x1)
static ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const CanProvideWithFailedDependencies;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ProviderBehaviourFlags_Unwrapped () const noexcept {
return std::bit_cast<__ProviderBehaviourFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProviderBehaviourFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProviderBehaviourFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProviderBehaviourFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderBehaviourFlags");
