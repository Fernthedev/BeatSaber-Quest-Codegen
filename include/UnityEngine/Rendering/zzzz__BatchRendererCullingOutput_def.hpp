#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererCullingOutput)
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchRendererCullingOutput);
// Type: UnityEngine.Rendering::BatchRendererCullingOutput
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10366))
// CS Name: ::UnityEngine.Rendering::BatchRendererCullingOutput
struct CORDL_TYPE BatchRendererCullingOutput : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field cullingJobsFence offset 0x0
 __declspec(property(get=__get_cullingJobsFence, put=__set_cullingJobsFence)) ::Unity::Jobs::JobHandle  cullingJobsFence;

/// @brief Field cullingMatrix offset 0x10
 __declspec(property(get=__get_cullingMatrix, put=__set_cullingMatrix)) ::UnityEngine::Matrix4x4  cullingMatrix;

/// @brief Field cullingPlanes offset 0x50
 __declspec(property(get=__get_cullingPlanes, put=__set_cullingPlanes)) ::cordl_internals::Ptr<::UnityEngine::Plane>  cullingPlanes;

/// @brief Field batchVisibility offset 0x58
 __declspec(property(get=__get_batchVisibility, put=__set_batchVisibility)) ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>  batchVisibility;

/// @brief Field visibleIndices offset 0x60
 __declspec(property(get=__get_visibleIndices, put=__set_visibleIndices)) ::cordl_internals::Ptr<int32_t>  visibleIndices;

/// @brief Field visibleIndicesY offset 0x68
 __declspec(property(get=__get_visibleIndicesY, put=__set_visibleIndicesY)) ::cordl_internals::Ptr<int32_t>  visibleIndicesY;

/// @brief Field cullingPlanesCount offset 0x70
 __declspec(property(get=__get_cullingPlanesCount, put=__set_cullingPlanesCount)) int32_t  cullingPlanesCount;

/// @brief Field batchVisibilityCount offset 0x74
 __declspec(property(get=__get_batchVisibilityCount, put=__set_batchVisibilityCount)) int32_t  batchVisibilityCount;

/// @brief Field visibleIndicesCount offset 0x78
 __declspec(property(get=__get_visibleIndicesCount, put=__set_visibleIndicesCount)) int32_t  visibleIndicesCount;

/// @brief Field nearPlane offset 0x7c
 __declspec(property(get=__get_nearPlane, put=__set_nearPlane)) float_t  nearPlane;

constexpr void __set_cullingJobsFence(::Unity::Jobs::JobHandle  value) ;

constexpr ::Unity::Jobs::JobHandle& __get_cullingJobsFence() ;

constexpr ::Unity::Jobs::JobHandle const& __get_cullingJobsFence() const;

constexpr void __set_cullingMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_cullingMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_cullingMatrix() const;

constexpr void __set_cullingPlanes(::cordl_internals::Ptr<::UnityEngine::Plane>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::Plane>& __get_cullingPlanes() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::Plane> const& __get_cullingPlanes() const;

constexpr void __set_batchVisibility(::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>  value) ;

constexpr ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>& __get_batchVisibility() ;

constexpr ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility> const& __get_batchVisibility() const;

constexpr void __set_visibleIndices(::cordl_internals::Ptr<int32_t>  value) ;

constexpr ::cordl_internals::Ptr<int32_t>& __get_visibleIndices() ;

constexpr ::cordl_internals::Ptr<int32_t> const& __get_visibleIndices() const;

constexpr void __set_visibleIndicesY(::cordl_internals::Ptr<int32_t>  value) ;

constexpr ::cordl_internals::Ptr<int32_t>& __get_visibleIndicesY() ;

constexpr ::cordl_internals::Ptr<int32_t> const& __get_visibleIndicesY() const;

constexpr void __set_cullingPlanesCount(int32_t  value) ;

constexpr int32_t& __get_cullingPlanesCount() ;

constexpr int32_t const& __get_cullingPlanesCount() const;

constexpr void __set_batchVisibilityCount(int32_t  value) ;

constexpr int32_t& __get_batchVisibilityCount() ;

constexpr int32_t const& __get_batchVisibilityCount() const;

constexpr void __set_visibleIndicesCount(int32_t  value) ;

constexpr int32_t& __get_visibleIndicesCount() ;

constexpr int32_t const& __get_visibleIndicesCount() const;

constexpr void __set_nearPlane(float_t  value) ;

constexpr float_t& __get_nearPlane() ;

constexpr float_t const& __get_nearPlane() const;

// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "cullingPlanes", ty: "::cordl_internals::Ptr<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "batchVisibility", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "visibleIndices", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesY", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cullingPlanesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "batchVisibilityCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }]
constexpr BatchRendererCullingOutput(::Unity::Jobs::JobHandle  cullingJobsFence, ::UnityEngine::Matrix4x4  cullingMatrix, ::cordl_internals::Ptr<::UnityEngine::Plane>  cullingPlanes, ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>  batchVisibility, ::cordl_internals::Ptr<int32_t>  visibleIndices, ::cordl_internals::Ptr<int32_t>  visibleIndicesY, int32_t  cullingPlanesCount, int32_t  batchVisibilityCount, int32_t  visibleIndicesCount, float_t  nearPlane) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BatchRendererCullingOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BatchRendererCullingOutput()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererCullingOutput, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererCullingOutput, "UnityEngine.Rendering", "BatchRendererCullingOutput");
