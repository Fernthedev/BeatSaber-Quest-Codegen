#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbeUsage)
// Forward declare root types
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LightProbeUsage);
// Type: UnityEngine.Rendering::LightProbeUsage
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10349))
// CS Name: ::UnityEngine.Rendering::LightProbeUsage
struct CORDL_TYPE LightProbeUsage : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightProbeUsage_Unwrapped
enum struct __LightProbeUsage_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_BlendProbes = static_cast<int32_t>(0x1),
__E_UseProxyVolume = static_cast<int32_t>(0x2),
__E_CustomProvided = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::LightProbeUsage const Off;

/// @brief Field BlendProbes value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::LightProbeUsage const BlendProbes;

/// @brief Field UseProxyVolume value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::LightProbeUsage const UseProxyVolume;

/// @brief Field CustomProvided value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::LightProbeUsage const CustomProvided;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LightProbeUsage_Unwrapped () const noexcept {
return std::bit_cast<__LightProbeUsage_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightProbeUsage(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LightProbeUsage(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LightProbeUsage()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LightProbeUsage, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LightProbeUsage, "UnityEngine.Rendering", "LightProbeUsage");
