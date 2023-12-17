#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Triangulation)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass8_0;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __Triangulation____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::Triangulation);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass7_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12283))
// CS Name: ::Triangulation::<>c__DisplayClass7_0*
class CORDL_TYPE __Triangulation____c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

static inline ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0* New_ctor() ;

/// @brief Method .ctor addr 0x2bc3158 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Triangulate>b__0 addr 0x2bc3168 size 0x88 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Triangulate_b__0(::UnityEngine::Vector2  x) ;

/// @brief Method <Triangulate>b__1 addr 0x2bc31f0 size 0x88 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Triangulation____c__DisplayClass7_0(__Triangulation____c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Triangulation____c__DisplayClass7_0(__Triangulation____c__DisplayClass7_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Triangulation____c__DisplayClass7_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass8_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12284))
// CS Name: ::Triangulation::<>c__DisplayClass8_0*
class CORDL_TYPE __Triangulation____c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field <>9__1 offset 0x18
 __declspec(property(get=__get___9__1, put=__set___9__1)) ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  __9__1;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set___9__1(::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  value) ;

constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* __get___9__1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*> __get___9__1() const;

static inline ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0* New_ctor() ;

/// @brief Method .ctor addr 0x2bc3160 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Triangulate>b__0 addr 0x2bc3278 size 0x88 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__0(::UnityEngine::Vector2  x) ;

/// @brief Method <Triangulate>b__1 addr 0x2bc3300 size 0x88 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Triangulation____c__DisplayClass8_0(__Triangulation____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Triangulation____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Triangulation____c__DisplayClass8_0(__Triangulation____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Triangulation____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::Triangulation
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12285))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::Triangulation*
class CORDL_TYPE Triangulation : public ::System::Object {
public:
// Declarations
using __c__DisplayClass8_0 = ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0;

using __c__DisplayClass7_0 = ::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_TriangulationContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*  value) ;

static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* getStaticF_s_TriangulationContext() ;

/// @brief Method get_triangulationContext addr 0x2bc1024 size 0x94 virtual false final false
static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* get_triangulationContext() ;

/// @brief Method SortAndTriangulate addr 0x2bc10b8 size 0x314 virtual false final false
static inline bool SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ByRef<::System::Collections::Generic::List_1<int32_t>*>  indexes, bool  convex) ;

/// @brief Method TriangulateVertices addr 0x2bc1f60 size 0x20c virtual false final false
static inline bool TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*  vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*>  triangles, bool  unordered, bool  convex) ;

/// @brief Method TriangulateVertices addr 0x2bc2390 size 0x1ac virtual false final false
static inline bool TriangulateVertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*>  triangles, ::ArrayW<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>,::Array<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>*>  holes) ;

/// @brief Method TriangulateVertices addr 0x2bc216c size 0x224 virtual false final false
static inline bool TriangulateVertices(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  vertices, ByRef<::System::Collections::Generic::List_1<int32_t>*>  triangles, bool  unordered, bool  convex) ;

/// @brief Method Triangulate addr 0x2bc13cc size 0xb94 virtual false final false
static inline bool Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ByRef<::System::Collections::Generic::List_1<int32_t>*>  indexes, bool  convex) ;

/// @brief Method Triangulate addr 0x2bc253c size 0xc1c virtual false final false
static inline bool Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*  holes, ByRef<::System::Collections::Generic::List_1<int32_t>*>  indexes) ;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangulation(Triangulation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulation(Triangulation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Triangulation()  = default;
public:


// Fields

// Static field s_TriangulationContext


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::Triangulation, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Triangulation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Triangulation*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass7_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__Triangulation____c__DisplayClass8_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass8_0");
