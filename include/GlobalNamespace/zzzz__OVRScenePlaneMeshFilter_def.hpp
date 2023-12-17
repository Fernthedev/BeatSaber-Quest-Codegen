#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScenePlaneMeshFilter)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;
}
namespace Unity::Jobs {
class IJob;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlaneMeshFilter;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScenePlaneMeshFilter);
MARK_VAL_T(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob);
MARK_VAL_T(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList);
// Type: ::NList
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7977))
// CS Name: ::OVRScenePlaneMeshFilter::TriangulateBoundaryJob::NList
struct CORDL_TYPE __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <Count>k__BackingField offset 0x0
 __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field _data offset 0x8
 __declspec(property(get=__get__data, put=__set__data)) ::Unity::Collections::NativeArray_1<int32_t>  _data;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) int32_t  Item[];

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__Count_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Count_k__BackingField() ;

constexpr int32_t const& __get__Count_k__BackingField() const;

constexpr void __set__data(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get__data() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get__data() const;

/// @brief Method get_Count addr 0x2789344 size 0x8 virtual false final false
inline int32_t get_Count() ;

/// @brief Method set_Count addr 0x278934c size 0x8 virtual false final false
inline void set_Count(int32_t  value) ;

/// @brief Method .ctor addr 0x2789164 size 0xa4 virtual false final false
inline void _ctor(int32_t  capacity, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method RemoveAt addr 0x2789308 size 0x3c virtual false final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method GetAt addr 0x2789214 size 0x3c virtual false final false
inline int32_t GetAt(int32_t  index) ;

/// @brief Method get_Item addr 0x2789208 size 0xc virtual false final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method Dispose addr 0x2789354 size 0x48 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_data", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(int32_t  _Count_k__BackingField, ::Unity::Collections::NativeArray_1<int32_t>  _data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TriangulateBoundaryJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7978))
// CS Name: ::OVRScenePlaneMeshFilter::TriangulateBoundaryJob
struct CORDL_TYPE __OVRScenePlaneMeshFilter__TriangulateBoundaryJob : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using NList = ::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Boundary offset 0x0
 __declspec(property(get=__get_Boundary, put=__set_Boundary)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary;

/// @brief Field Triangles offset 0x10
 __declspec(property(get=__get_Triangles, put=__set_Triangles)) ::Unity::Collections::NativeArray_1<int32_t>  Triangles;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

constexpr void __set_Boundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get_Boundary() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get_Boundary() const;

constexpr void __set_Triangles(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get_Triangles() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get_Triangles() const;

/// @brief Method Execute addr 0x2788dd0 size 0x394 virtual true final true
inline void Execute() ;

/// @brief Method Cross addr 0x2789250 size 0x10 virtual false final false
static inline float_t Cross(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b) ;

/// @brief Method PointInTriangle addr 0x2789260 size 0xa8 virtual false final false
static inline bool PointInTriangle(::UnityEngine::Vector2  p, ::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c) ;

// Ctor Parameters [CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr __OVRScenePlaneMeshFilter__TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary, ::Unity::Collections::NativeArray_1<int32_t>  Triangles) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRScenePlaneMeshFilter__TriangulateBoundaryJob(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRScenePlaneMeshFilter__TriangulateBoundaryJob()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRScenePlaneMeshFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7979))
// CS Name: ::OVRScenePlaneMeshFilter*
class CORDL_TYPE OVRScenePlaneMeshFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TriangulateBoundaryJob = ::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _meshFilter offset 0x18
 __declspec(property(get=__get__meshFilter, put=__set__meshFilter)) ::UnityEngine::MeshFilter*  _meshFilter;

/// @brief Field _mesh offset 0x20
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

/// @brief Field _jobHandle offset 0x28
 __declspec(property(get=__get__jobHandle, put=__set__jobHandle)) ::System::Nullable_1<::Unity::Jobs::JobHandle>  _jobHandle;

/// @brief Field _meshRequested offset 0x40
 __declspec(property(get=__get__meshRequested, put=__set__meshRequested)) bool  _meshRequested;

/// @brief Field _boundary offset 0x48
 __declspec(property(get=__get__boundary, put=__set__boundary)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  _boundary;

/// @brief Field _triangles offset 0x58
 __declspec(property(get=__get__triangles, put=__set__triangles)) ::Unity::Collections::NativeArray_1<int32_t>  _triangles;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get__meshFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get__meshFilter() const;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

constexpr void __set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle>  value) ;

constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& __get__jobHandle() ;

constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& __get__jobHandle() const;

constexpr void __set__meshRequested(bool  value) ;

constexpr bool& __get__meshRequested() ;

constexpr bool const& __get__meshRequested() const;

constexpr void __set__boundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get__boundary() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get__boundary() const;

constexpr void __set__triangles(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get__triangles() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get__triangles() const;

/// @brief Method Start addr 0x2787e90 size 0x1ac virtual false final false
inline void Start() ;

/// @brief Method ScheduleMeshGeneration addr 0x278803c size 0x5c8 virtual false final false
inline void ScheduleMeshGeneration() ;

/// @brief Method Update addr 0x2788604 size 0x734 virtual false final false
inline void Update() ;

/// @brief Method RequestMeshGeneration addr 0x2787ae0 size 0x30 virtual false final false
inline void RequestMeshGeneration() ;

/// @brief Method OnDisable addr 0x2788d38 size 0x90 virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::OVRScenePlaneMeshFilter* New_ctor() ;

/// @brief Method .ctor addr 0x2788dc8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRScenePlaneMeshFilter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScenePlaneMeshFilter, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScenePlaneMeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScenePlaneMeshFilter*, "", "OVRScenePlaneMeshFilter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList");
