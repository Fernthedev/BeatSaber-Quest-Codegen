#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PassType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct PassType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PassType);
// Type: UnityEngine.Rendering::PassType
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10340))
// CS Name: ::UnityEngine.Rendering::PassType
struct CORDL_TYPE PassType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PassType_Unwrapped
enum struct __PassType_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Vertex = static_cast<int32_t>(0x1),
__E_VertexLM = static_cast<int32_t>(0x2),
__E_VertexLMRGBM = static_cast<int32_t>(0x3),
__E_ForwardBase = static_cast<int32_t>(0x4),
__E_ForwardAdd = static_cast<int32_t>(0x5),
__E_LightPrePassBase = static_cast<int32_t>(0x6),
__E_LightPrePassFinal = static_cast<int32_t>(0x7),
__E_ShadowCaster = static_cast<int32_t>(0x8),
__E_Deferred = static_cast<int32_t>(0xa),
__E_Meta = static_cast<int32_t>(0xb),
__E_MotionVectors = static_cast<int32_t>(0xc),
__E_ScriptableRenderPipeline = static_cast<int32_t>(0xd),
__E_ScriptableRenderPipelineDefaultUnlit = static_cast<int32_t>(0xe),
__E_GrabPass = static_cast<int32_t>(0xf),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::PassType const Normal;

/// @brief Field Vertex value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::PassType const Vertex;

/// @brief Field VertexLM value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::PassType const VertexLM;

/// @brief Field VertexLMRGBM value: static_cast<int32_t>(0x3)
static ::UnityEngine::Rendering::PassType const VertexLMRGBM;

/// @brief Field ForwardBase value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::PassType const ForwardBase;

/// @brief Field ForwardAdd value: static_cast<int32_t>(0x5)
static ::UnityEngine::Rendering::PassType const ForwardAdd;

/// @brief Field LightPrePassBase value: static_cast<int32_t>(0x6)
static ::UnityEngine::Rendering::PassType const LightPrePassBase;

/// @brief Field LightPrePassFinal value: static_cast<int32_t>(0x7)
static ::UnityEngine::Rendering::PassType const LightPrePassFinal;

/// @brief Field ShadowCaster value: static_cast<int32_t>(0x8)
static ::UnityEngine::Rendering::PassType const ShadowCaster;

/// @brief Field Deferred value: static_cast<int32_t>(0xa)
static ::UnityEngine::Rendering::PassType const Deferred;

/// @brief Field Meta value: static_cast<int32_t>(0xb)
static ::UnityEngine::Rendering::PassType const Meta;

/// @brief Field MotionVectors value: static_cast<int32_t>(0xc)
static ::UnityEngine::Rendering::PassType const MotionVectors;

/// @brief Field ScriptableRenderPipeline value: static_cast<int32_t>(0xd)
static ::UnityEngine::Rendering::PassType const ScriptableRenderPipeline;

/// @brief Field ScriptableRenderPipelineDefaultUnlit value: static_cast<int32_t>(0xe)
static ::UnityEngine::Rendering::PassType const ScriptableRenderPipelineDefaultUnlit;

/// @brief Field GrabPass value: static_cast<int32_t>(0xf)
static ::UnityEngine::Rendering::PassType const GrabPass;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PassType_Unwrapped () const noexcept {
return std::bit_cast<__PassType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PassType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PassType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PassType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PassType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PassType, "UnityEngine.Rendering", "PassType");
