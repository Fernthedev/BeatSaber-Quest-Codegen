#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchCullingContext)
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchCullingContext);
// Type: UnityEngine.Rendering::BatchCullingContext
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10365))
// CS Name: ::UnityEngine.Rendering::BatchCullingContext
struct CORDL_TYPE BatchCullingContext : public ::bs_hook::ValueTypeWrapper<0xa0> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field cullingPlanes offset 0x0
 __declspec(property(get=__get_cullingPlanes, put=__set_cullingPlanes)) ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  cullingPlanes;

/// @brief Field batchVisibility offset 0x10
 __declspec(property(get=__get_batchVisibility, put=__set_batchVisibility)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  batchVisibility;

/// @brief Field visibleIndices offset 0x20
 __declspec(property(get=__get_visibleIndices, put=__set_visibleIndices)) ::Unity::Collections::NativeArray_1<int32_t>  visibleIndices;

/// @brief Field visibleIndicesY offset 0x30
 __declspec(property(get=__get_visibleIndicesY, put=__set_visibleIndicesY)) ::Unity::Collections::NativeArray_1<int32_t>  visibleIndicesY;

/// @brief Field lodParameters offset 0x40
 __declspec(property(get=__get_lodParameters, put=__set_lodParameters)) ::UnityEngine::Rendering::LODParameters  lodParameters;

/// @brief Field cullingMatrix offset 0x5c
 __declspec(property(get=__get_cullingMatrix, put=__set_cullingMatrix)) ::UnityEngine::Matrix4x4  cullingMatrix;

/// @brief Field nearPlane offset 0x9c
 __declspec(property(get=__get_nearPlane, put=__set_nearPlane)) float_t  nearPlane;

constexpr void __set_cullingPlanes(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>& __get_cullingPlanes() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> const& __get_cullingPlanes() const;

constexpr void __set_batchVisibility(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>& __get_batchVisibility() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> const& __get_batchVisibility() const;

constexpr void __set_visibleIndices(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get_visibleIndices() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get_visibleIndices() const;

constexpr void __set_visibleIndicesY(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get_visibleIndicesY() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get_visibleIndicesY() const;

constexpr void __set_lodParameters(::UnityEngine::Rendering::LODParameters  value) ;

constexpr ::UnityEngine::Rendering::LODParameters& __get_lodParameters() ;

constexpr ::UnityEngine::Rendering::LODParameters const& __get_lodParameters() const;

constexpr void __set_cullingMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_cullingMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_cullingMatrix() const;

constexpr void __set_nearPlane(float_t  value) ;

constexpr float_t& __get_nearPlane() ;

constexpr float_t const& __get_nearPlane() const;

/// @brief Method .ctor addr 0x2ceec9c size 0x54 virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  inOutBatchVisibility, ::Unity::Collections::NativeArray_1<int32_t>  outVisibleIndices, ::Unity::Collections::NativeArray_1<int32_t>  outVisibleIndicesY, ::UnityEngine::Rendering::LODParameters  inLodParameters, ::UnityEngine::Matrix4x4  inCullingMatrix, float_t  inNearPlane) ;

// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "batchVisibility", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "visibleIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesY", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lodParameters", ty: "::UnityEngine::Rendering::LODParameters", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }]
constexpr BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  batchVisibility, ::Unity::Collections::NativeArray_1<int32_t>  visibleIndices, ::Unity::Collections::NativeArray_1<int32_t>  visibleIndicesY, ::UnityEngine::Rendering::LODParameters  lodParameters, ::UnityEngine::Matrix4x4  cullingMatrix, float_t  nearPlane) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BatchCullingContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xa0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BatchCullingContext()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchCullingContext, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
