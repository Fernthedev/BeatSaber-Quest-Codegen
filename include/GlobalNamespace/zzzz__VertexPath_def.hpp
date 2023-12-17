#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexPath)
namespace GlobalNamespace {
class BezierPath;
}
namespace GlobalNamespace {
struct __VertexPath__Vertex;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VertexPath;
}
namespace GlobalNamespace {
struct __VertexPath__Vertex;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VertexPath);
MARK_VAL_T(::GlobalNamespace::__VertexPath__Vertex);
// Type: ::Vertex
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5973))
// CS Name: ::VertexPath::Vertex
struct CORDL_TYPE __VertexPath__Vertex : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field tangent offset 0xc
 __declspec(property(get=__get_tangent, put=__set_tangent)) ::UnityEngine::Vector3  tangent;

/// @brief Field normal offset 0x18
 __declspec(property(get=__get_normal, put=__set_normal)) ::UnityEngine::Vector3  normal;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_tangent(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_tangent() ;

constexpr ::UnityEngine::Vector3 const& __get_tangent() const;

constexpr void __set_normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_normal() ;

constexpr ::UnityEngine::Vector3 const& __get_normal() const;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr __VertexPath__Vertex(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangent, ::UnityEngine::Vector3  normal) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __VertexPath__Vertex(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __VertexPath__Vertex()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VertexPath__Vertex, 0x24>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::VertexPath
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5974))
// CS Name: ::VertexPath*
class CORDL_TYPE VertexPath : public ::System::Object {
public:
// Declarations
using Vertex = ::GlobalNamespace::__VertexPath__Vertex;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field vertexCount offset 0x10
 __declspec(property(get=__get_vertexCount, put=__set_vertexCount)) int32_t  vertexCount;

/// @brief Field _localVertices offset 0x18
 __declspec(property(get=__get__localVertices, put=__set__localVertices)) ::ArrayW<::GlobalNamespace::__VertexPath__Vertex,::Array<::GlobalNamespace::__VertexPath__Vertex>*>  _localVertices;

/// @brief Field _length offset 0x20
 __declspec(property(get=__get__length, put=__set__length)) float_t  _length;

/// @brief Field _cumulativeLengthAtEachVertex offset 0x28
 __declspec(property(get=__get__cumulativeLengthAtEachVertex, put=__set__cumulativeLengthAtEachVertex)) ::ArrayW<float_t,::Array<float_t>*>  _cumulativeLengthAtEachVertex;

/// @brief Field _anchorVertexMap offset 0x30
 __declspec(property(get=__get__anchorVertexMap, put=__set__anchorVertexMap)) ::ArrayW<int32_t,::Array<int32_t>*>  _anchorVertexMap;

 __declspec(property(get=get_length)) float_t  length;

constexpr void __set_vertexCount(int32_t  value) ;

constexpr int32_t& __get_vertexCount() ;

constexpr int32_t const& __get_vertexCount() const;

constexpr void __set__localVertices(::ArrayW<::GlobalNamespace::__VertexPath__Vertex,::Array<::GlobalNamespace::__VertexPath__Vertex>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__VertexPath__Vertex,::Array<::GlobalNamespace::__VertexPath__Vertex>*>& __get__localVertices() ;

constexpr ::ArrayW<::GlobalNamespace::__VertexPath__Vertex,::Array<::GlobalNamespace::__VertexPath__Vertex>*> const& __get__localVertices() const;

constexpr void __set__length(float_t  value) ;

constexpr float_t& __get__length() ;

constexpr float_t const& __get__length() const;

constexpr void __set__cumulativeLengthAtEachVertex(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__cumulativeLengthAtEachVertex() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__cumulativeLengthAtEachVertex() const;

static inline void setStaticF__back(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF__back() ;

constexpr void __set__anchorVertexMap(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__anchorVertexMap() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__anchorVertexMap() const;

/// @brief Method get_length addr 0x230c4fc size 0x8 virtual false final false
inline float_t get_length() ;

static inline ::GlobalNamespace::VertexPath* New_ctor(int32_t  numberOfPathSegments) ;

/// @brief Method .ctor addr 0x230bf8c size 0xe4 virtual false final false
inline void _ctor(int32_t  numberOfPathSegments) ;

/// @brief Method UpdateByBezierPath addr 0x230c070 size 0x46c virtual false final false
inline void UpdateByBezierPath(::GlobalNamespace::BezierPath*  bezierPath) ;

/// @brief Method TimeAtPoint addr 0x230ca68 size 0x38 virtual false final false
inline float_t TimeAtPoint(int32_t  pointIndex) ;

/// @brief Method GetVertex addr 0x230caa0 size 0x60 virtual false final false
inline void GetVertex(int32_t  index, ByRef<::UnityEngine::Vector3>  position, ByRef<::UnityEngine::Vector3>  tangent, ByRef<::UnityEngine::Vector3>  normal) ;

/// @brief Method GetPoint addr 0x230cb00 size 0x38 virtual false final false
inline ::UnityEngine::Vector3 GetPoint(int32_t  index) ;

/// @brief Method SplitBezierPathIntoFixNumberOfSegments addr 0x230c504 size 0x564 virtual false final false
inline void SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath*  bezierPath, int32_t  numberOfVertexSegments) ;

/// @brief Method AddVertex addr 0x230cb38 size 0x40c virtual false final false
inline void AddVertex(ByRef<::UnityEngine::Vector3>  p0, ByRef<::UnityEngine::Vector3>  p1, ByRef<::UnityEngine::Vector3>  p2, ByRef<::UnityEngine::Vector3>  p3, float_t  t, ByRef<::UnityEngine::Vector3>  lastRotationAxis, ByRef<float_t>  currentPathLength, ByRef<::GlobalNamespace::__VertexPath__Vertex>  lastVertex, ByRef<int32_t>  vertCount) ;

// Ctor Parameters [CppParam { name: "", ty: "VertexPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexPath(VertexPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexPath(VertexPath const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VertexPath()  = default;
public:


// Fields

// Static field _back


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VertexPath, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VertexPath);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexPath*, "", "VertexPath");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VertexPath__Vertex, "", "VertexPath/Vertex");
