#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh)
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__NegateXJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__Triangle);
// Type: ::GetMeshJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7521))
// CS Name: ::OVRTriangleMesh::GetMeshJob
struct CORDL_TYPE __OVRTriangleMesh__GetMeshJob : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Space offset 0x0
 __declspec(property(get=__get_Space, put=__set_Space)) uint64_t  Space;

/// @brief Field Positions offset 0x8
 __declspec(property(get=__get_Positions, put=__set_Positions)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions;

/// @brief Field Indices offset 0x18
 __declspec(property(get=__get_Indices, put=__set_Indices)) ::Unity::Collections::NativeArray_1<int32_t>  Indices;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

constexpr void __set_Space(uint64_t  value) ;

constexpr uint64_t& __get_Space() ;

constexpr uint64_t const& __get_Space() const;

constexpr void __set_Positions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __get_Positions() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __get_Positions() const;

constexpr void __set_Indices(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get_Indices() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get_Indices() const;

/// @brief Method Execute addr 0x2715440 size 0xd4 virtual true final true
inline void Execute() ;

// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__GetMeshJob(uint64_t  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTriangleMesh__GetMeshJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTriangleMesh__GetMeshJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Triangle
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7522))
// CS Name: ::OVRTriangleMesh::Triangle
struct CORDL_TYPE __OVRTriangleMesh__Triangle : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field A offset 0x0
 __declspec(property(get=__get_A, put=__set_A)) int32_t  A;

/// @brief Field B offset 0x4
 __declspec(property(get=__get_B, put=__set_B)) int32_t  B;

/// @brief Field C offset 0x8
 __declspec(property(get=__get_C, put=__set_C)) int32_t  C;

constexpr void __set_A(int32_t  value) ;

constexpr int32_t& __get_A() ;

constexpr int32_t const& __get_A() const;

constexpr void __set_B(int32_t  value) ;

constexpr int32_t& __get_B() ;

constexpr int32_t const& __get_B() const;

constexpr void __set_C(int32_t  value) ;

constexpr int32_t& __get_C() ;

constexpr int32_t const& __get_C() const;

// Ctor Parameters [CppParam { name: "A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "C", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__Triangle(int32_t  A, int32_t  B, int32_t  C) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTriangleMesh__Triangle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTriangleMesh__Triangle()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__Triangle, 0xc>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FlipTriangleWindingJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7523))
// CS Name: ::OVRTriangleMesh::FlipTriangleWindingJob
struct CORDL_TYPE __OVRTriangleMesh__FlipTriangleWindingJob : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Triangles offset 0x0
 __declspec(property(get=__get_Triangles, put=__set_Triangles)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  Triangles;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

constexpr void __set_Triangles(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>& __get_Triangles() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle> const& __get_Triangles() const;

/// @brief Method Execute addr 0x2715514 size 0x1c virtual true final true
inline void Execute(int32_t  index) ;

// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__FlipTriangleWindingJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  Triangles) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTriangleMesh__FlipTriangleWindingJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTriangleMesh__FlipTriangleWindingJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NegateXJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7524))
// CS Name: ::OVRTriangleMesh::NegateXJob
struct CORDL_TYPE __OVRTriangleMesh__NegateXJob : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Positions offset 0x0
 __declspec(property(get=__get_Positions, put=__set_Positions)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

constexpr void __set_Positions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __get_Positions() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __get_Positions() const;

/// @brief Method Execute addr 0x2715530 size 0x1c virtual true final true
inline void Execute(int32_t  index) ;

// Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTriangleMesh__NegateXJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTriangleMesh__NegateXJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__NegateXJob, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRTriangleMesh
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7525))
// CS Name: ::OVRTriangleMesh
struct CORDL_TYPE OVRTriangleMesh : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using NegateXJob = ::GlobalNamespace::__OVRTriangleMesh__NegateXJob;

using FlipTriangleWindingJob = ::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob;

using Triangle = ::GlobalNamespace::__OVRTriangleMesh__Triangle;

using GetMeshJob = ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Handle>k__BackingField offset 0x0
 __declspec(property(get=__get__Handle_k__BackingField, put=__set__Handle_k__BackingField)) uint64_t  _Handle_k__BackingField;

 __declspec(property(get=IOVRAnchorComponent_OVRTriangleMesh__get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  IOVRAnchorComponent_OVRTriangleMesh__Type;

 __declspec(property(get=IOVRAnchorComponent_OVRTriangleMesh__get_Handle)) uint64_t  IOVRAnchorComponent_OVRTriangleMesh__Handle;

 __declspec(property(get=get_IsNull)) bool  IsNull;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  Type;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*() ;

static inline void setStaticF_Null(::GlobalNamespace::OVRTriangleMesh  value) ;

static inline ::GlobalNamespace::OVRTriangleMesh getStaticF_Null() ;

constexpr void __set__Handle_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__Handle_k__BackingField() ;

constexpr uint64_t const& __get__Handle_k__BackingField() const;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Type addr 0x2714e38 size 0xc virtual true final true
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__get_Type() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Handle addr 0x2714e50 size 0x8 virtual true final true
inline uint64_t IOVRAnchorComponent_OVRTriangleMesh__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor addr 0x2714e58 size 0x8 virtual true final true
inline ::GlobalNamespace::OVRTriangleMesh IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method get_IsNull addr 0x2714e6c size 0x10 virtual true final true
inline bool get_IsNull() ;

/// @brief Method get_IsEnabled addr 0x2714e7c size 0xac virtual true final true
inline bool get_IsEnabled() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync addr 0x2714f28 size 0x50 virtual true final true
inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// @brief Method Equals addr 0x2714f78 size 0x10 virtual true final true
inline bool Equals(::GlobalNamespace::OVRTriangleMesh  other) ;

/// @brief Method op_Equality addr 0x2714f88 size 0xc virtual false final false
static inline bool op_Equality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs) ;

/// @brief Method op_Inequality addr 0x2714f94 size 0xc virtual false final false
static inline bool op_Inequality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs) ;

/// @brief Method Equals addr 0x2714fa0 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2715018 size 0x50 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2715068 size 0x84 virtual true final false
inline ::StringW ToString() ;

/// @brief Method get_Type addr 0x2714e44 size 0xc virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type() ;

/// @brief Method get_Handle addr 0x27150ec size 0x8 virtual false final false
inline uint64_t get_Handle() ;

/// @brief Method .ctor addr 0x2714e60 size 0xc virtual false final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method TryGetCounts addr 0x27150f4 size 0x74 virtual false final false
inline bool TryGetCounts(ByRef<int32_t>  vertexCount, ByRef<int32_t>  triangleCount) ;

/// @brief Method TryGetMeshRawUntransformed addr 0x2715168 size 0x8c virtual false final false
inline bool TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method TryGetMesh addr 0x27151f4 size 0xe8 virtual false final false
inline bool TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method ScheduleGetMeshJob addr 0x27152dc size 0x160 virtual false final false
inline ::Unity::Jobs::JobHandle ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Jobs::JobHandle  dependencies) ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr OVRTriangleMesh(uint64_t  _Handle_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRTriangleMesh(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRTriangleMesh()  = default;


// Fields

// Static field Null


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh, "", "OVRTriangleMesh");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, "", "OVRTriangleMesh/FlipTriangleWindingJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, "", "OVRTriangleMesh/GetMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__NegateXJob, "", "OVRTriangleMesh/NegateXJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__Triangle, "", "OVRTriangleMesh/Triangle");
