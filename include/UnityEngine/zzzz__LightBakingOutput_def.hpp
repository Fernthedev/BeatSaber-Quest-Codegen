#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightBakingOutput)
namespace UnityEngine {
struct LightmapBakeType;
}
namespace UnityEngine {
struct MixedLightingMode;
}
// Forward declare root types
namespace UnityEngine {
struct LightBakingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightBakingOutput);
// Type: UnityEngine::LightBakingOutput
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10080))
// CS Name: ::UnityEngine::LightBakingOutput
struct CORDL_TYPE LightBakingOutput : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field probeOcclusionLightIndex offset 0x0
 __declspec(property(get=__get_probeOcclusionLightIndex, put=__set_probeOcclusionLightIndex)) int32_t  probeOcclusionLightIndex;

/// @brief Field occlusionMaskChannel offset 0x4
 __declspec(property(get=__get_occlusionMaskChannel, put=__set_occlusionMaskChannel)) int32_t  occlusionMaskChannel;

/// @brief Field lightmapBakeType offset 0x8
 __declspec(property(get=__get_lightmapBakeType, put=__set_lightmapBakeType)) ::UnityEngine::LightmapBakeType  lightmapBakeType;

/// @brief Field mixedLightingMode offset 0xc
 __declspec(property(get=__get_mixedLightingMode, put=__set_mixedLightingMode)) ::UnityEngine::MixedLightingMode  mixedLightingMode;

/// @brief Field isBaked offset 0x10
 __declspec(property(get=__get_isBaked, put=__set_isBaked)) bool  isBaked;

constexpr void __set_probeOcclusionLightIndex(int32_t  value) ;

constexpr int32_t& __get_probeOcclusionLightIndex() ;

constexpr int32_t const& __get_probeOcclusionLightIndex() const;

constexpr void __set_occlusionMaskChannel(int32_t  value) ;

constexpr int32_t& __get_occlusionMaskChannel() ;

constexpr int32_t const& __get_occlusionMaskChannel() const;

constexpr void __set_lightmapBakeType(::UnityEngine::LightmapBakeType  value) ;

constexpr ::UnityEngine::LightmapBakeType& __get_lightmapBakeType() ;

constexpr ::UnityEngine::LightmapBakeType const& __get_lightmapBakeType() const;

constexpr void __set_mixedLightingMode(::UnityEngine::MixedLightingMode  value) ;

constexpr ::UnityEngine::MixedLightingMode& __get_mixedLightingMode() ;

constexpr ::UnityEngine::MixedLightingMode const& __get_mixedLightingMode() const;

constexpr void __set_isBaked(bool  value) ;

constexpr bool& __get_isBaked() ;

constexpr bool const& __get_isBaked() const;

// Ctor Parameters [CppParam { name: "probeOcclusionLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occlusionMaskChannel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightmapBakeType", ty: "::UnityEngine::LightmapBakeType", modifiers: "", def_value: None }, CppParam { name: "mixedLightingMode", ty: "::UnityEngine::MixedLightingMode", modifiers: "", def_value: None }, CppParam { name: "isBaked", ty: "bool", modifiers: "", def_value: None }]
constexpr LightBakingOutput(int32_t  probeOcclusionLightIndex, int32_t  occlusionMaskChannel, ::UnityEngine::LightmapBakeType  lightmapBakeType, ::UnityEngine::MixedLightingMode  mixedLightingMode, bool  isBaked) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LightBakingOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LightBakingOutput()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightBakingOutput, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightBakingOutput, "UnityEngine", "LightBakingOutput");
