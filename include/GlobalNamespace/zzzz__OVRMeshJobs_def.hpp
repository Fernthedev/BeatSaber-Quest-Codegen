#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshJobs)
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformTrianglesJob;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRMeshJobs__NativeArrayHelper_1;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2f;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4s;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMeshJobs;
}
namespace GlobalNamespace {
template<typename T>
struct __OVRMeshJobs__NativeArrayHelper_1;
}
namespace GlobalNamespace {
template<>
struct __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector2f>;
}
namespace GlobalNamespace {
template<>
struct __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector3f>;
}
namespace GlobalNamespace {
template<>
struct __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector4f>;
}
namespace GlobalNamespace {
template<>
struct __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector4s>;
}
namespace GlobalNamespace {
template<>
struct __OVRMeshJobs__NativeArrayHelper_1<int16_t>;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace GlobalNamespace {
struct __OVRMeshJobs__TransformTrianglesJob;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMeshJobs);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1);
MARK_VAL_T(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob);
MARK_VAL_T(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob);
// Type: ::TransformToUnitySpaceJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8124))
// CS Name: ::OVRMeshJobs::TransformToUnitySpaceJob
struct CORDL_TYPE __OVRMeshJobs__TransformToUnitySpaceJob : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field Vertices offset 0x0
 __declspec(property(get=__get_Vertices, put=__set_Vertices)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices;

/// @brief Field Normals offset 0x10
 __declspec(property(get=__get_Normals, put=__set_Normals)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Normals;

/// @brief Field UV offset 0x20
 __declspec(property(get=__get_UV, put=__set_UV)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  UV;

/// @brief Field BoneWeights offset 0x30
 __declspec(property(get=__get_BoneWeights, put=__set_BoneWeights)) ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  BoneWeights;

/// @brief Field MeshVerticesPosition offset 0x40
 __declspec(property(get=__get_MeshVerticesPosition, put=__set_MeshVerticesPosition)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  MeshVerticesPosition;

/// @brief Field MeshNormals offset 0x50
 __declspec(property(get=__get_MeshNormals, put=__set_MeshNormals)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  MeshNormals;

/// @brief Field MeshUV offset 0x60
 __declspec(property(get=__get_MeshUV, put=__set_MeshUV)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  MeshUV;

/// @brief Field MeshBoneWeights offset 0x70
 __declspec(property(get=__get_MeshBoneWeights, put=__set_MeshBoneWeights)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  MeshBoneWeights;

/// @brief Field MeshBoneIndices offset 0x80
 __declspec(property(get=__get_MeshBoneIndices, put=__set_MeshBoneIndices)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  MeshBoneIndices;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

constexpr void __set_Vertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __get_Vertices() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __get_Vertices() const;

constexpr void __set_Normals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __get_Normals() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __get_Normals() const;

constexpr void __set_UV(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get_UV() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get_UV() const;

constexpr void __set_BoneWeights(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>& __get_BoneWeights() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> const& __get_BoneWeights() const;

constexpr void __set_MeshVerticesPosition(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>& __get_MeshVerticesPosition() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> const& __get_MeshVerticesPosition() const;

constexpr void __set_MeshNormals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>& __get_MeshNormals() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> const& __get_MeshNormals() const;

constexpr void __set_MeshUV(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>& __get_MeshUV() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> const& __get_MeshUV() const;

constexpr void __set_MeshBoneWeights(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>& __get_MeshBoneWeights() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> const& __get_MeshBoneWeights() const;

constexpr void __set_MeshBoneIndices(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>& __get_MeshBoneIndices() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> const& __get_MeshBoneIndices() const;

/// @brief Method Execute addr 0x27b13d0 size 0x180 virtual true final true
inline void Execute(int32_t  index) ;

// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: None }, CppParam { name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "MeshNormals", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "MeshUV", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "MeshBoneWeights", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "MeshBoneIndices", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__TransformToUnitySpaceJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  BoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  MeshNormals, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  MeshBoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  MeshBoneIndices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__TransformToUnitySpaceJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__TransformToUnitySpaceJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TransformTrianglesJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8125))
// CS Name: ::OVRMeshJobs::TransformTrianglesJob
struct CORDL_TYPE __OVRMeshJobs__TransformTrianglesJob : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Triangles offset 0x0
 __declspec(property(get=__get_Triangles, put=__set_Triangles)) ::Unity::Collections::NativeArray_1<uint32_t>  Triangles;

/// @brief Field MeshIndices offset 0x10
 __declspec(property(get=__get_MeshIndices, put=__set_MeshIndices)) ::Unity::Collections::NativeArray_1<int16_t>  MeshIndices;

/// @brief Field NumIndices offset 0x20
 __declspec(property(get=__get_NumIndices, put=__set_NumIndices)) int32_t  NumIndices;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

constexpr void __set_Triangles(::Unity::Collections::NativeArray_1<uint32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __get_Triangles() ;

constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __get_Triangles() const;

constexpr void __set_MeshIndices(::Unity::Collections::NativeArray_1<int16_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int16_t>& __get_MeshIndices() ;

constexpr ::Unity::Collections::NativeArray_1<int16_t> const& __get_MeshIndices() const;

constexpr void __set_NumIndices(int32_t  value) ;

constexpr int32_t& __get_NumIndices() ;

constexpr int32_t const& __get_NumIndices() const;

/// @brief Method Execute addr 0x27b1550 size 0x20 virtual true final true
inline void Execute(int32_t  index) ;

// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "MeshIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t>  Triangles, ::Unity::Collections::NativeArray_1<int16_t>  MeshIndices, int32_t  NumIndices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__TransformTrianglesJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__TransformTrianglesJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
// Type: ::OVRMeshJobs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8127))
// CS Name: ::OVRMeshJobs*
class CORDL_TYPE OVRMeshJobs : public ::System::Object {
public:
// Declarations
template<typename T>
using NativeArrayHelper_1 = ::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1<T>;

using TransformTrianglesJob = ::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob;

using TransformToUnitySpaceJob = ::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::GlobalNamespace::OVRMeshJobs* New_ctor() ;

/// @brief Method .ctor addr 0x27b13c8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMeshJobs(OVRMeshJobs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMeshJobs(OVRMeshJobs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRMeshJobs()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshJobs, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8126))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8126), inst: 762 })
// CS Name: ::OVRMeshJobs::NativeArrayHelper`1<T>
struct CORDL_TYPE __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector4s> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UnityNativeArray offset 0x0
 __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  UnityNativeArray;

/// @brief Field _handle offset 0x10
 __declspec(property(get=__get__handle, put=__set__handle)) ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>& __get_UnityNativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> const& __get_UnityNativeArray() const;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get__handle() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get__handle() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  ovrArray, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__NativeArrayHelper_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8126))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8126), inst: 761 })
// CS Name: ::OVRMeshJobs::NativeArrayHelper`1<T>
struct CORDL_TYPE __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector4f> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UnityNativeArray offset 0x0
 __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  UnityNativeArray;

/// @brief Field _handle offset 0x10
 __declspec(property(get=__get__handle, put=__set__handle)) ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>& __get_UnityNativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> const& __get_UnityNativeArray() const;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get__handle() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get__handle() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  ovrArray, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__NativeArrayHelper_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8126))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8126), inst: 760 })
// CS Name: ::OVRMeshJobs::NativeArrayHelper`1<T>
struct CORDL_TYPE __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector3f> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UnityNativeArray offset 0x0
 __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  UnityNativeArray;

/// @brief Field _handle offset 0x10
 __declspec(property(get=__get__handle, put=__set__handle)) ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>& __get_UnityNativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> const& __get_UnityNativeArray() const;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get__handle() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get__handle() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  ovrArray, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__NativeArrayHelper_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8126))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8126), inst: 759 })
// CS Name: ::OVRMeshJobs::NativeArrayHelper`1<T>
struct CORDL_TYPE __OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::__OVRPlugin__Vector2f> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UnityNativeArray offset 0x0
 __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  UnityNativeArray;

/// @brief Field _handle offset 0x10
 __declspec(property(get=__get__handle, put=__set__handle)) ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>& __get_UnityNativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> const& __get_UnityNativeArray() const;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get__handle() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get__handle() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  ovrArray, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__NativeArrayHelper_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8126))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8126), inst: 745 })
// CS Name: ::OVRMeshJobs::NativeArrayHelper`1<T>
struct CORDL_TYPE __OVRMeshJobs__NativeArrayHelper_1<int16_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UnityNativeArray offset 0x0
 __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray)) ::Unity::Collections::NativeArray_1<int16_t>  UnityNativeArray;

/// @brief Field _handle offset 0x10
 __declspec(property(get=__get__handle, put=__set__handle)) ::System::Runtime::InteropServices::GCHandle  _handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<int16_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int16_t>& __get_UnityNativeArray() ;

constexpr ::Unity::Collections::NativeArray_1<int16_t> const& __get_UnityNativeArray() const;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr ::System::Runtime::InteropServices::GCHandle& __get__handle() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __get__handle() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<int16_t,::Array<int16_t>*>  ovrArray, int32_t  length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr __OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<int16_t>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMeshJobs__NativeArrayHelper_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMeshJobs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshJobs*, "", "OVRMeshJobs");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRMeshJobs__NativeArrayHelper_1, "", "OVRMeshJobs/NativeArrayHelper`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob, "", "OVRMeshJobs/TransformToUnitySpaceJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob, "", "OVRMeshJobs/TransformTrianglesJob");
