#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshHandles)
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace UnityEngine::ProBuilder {
class __MeshHandles____c;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshHandles;
}
namespace UnityEngine::ProBuilder {
class __MeshHandles____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshHandles);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__MeshHandles____c);
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12141))
// CS Name: ::MeshHandles::<>c*
class CORDL_TYPE __MeshHandles____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::ProBuilder::__MeshHandles____c*  value) ;

static inline ::UnityEngine::ProBuilder::__MeshHandles____c* getStaticF___9() ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__9_0() ;

static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__10_0() ;

static inline ::UnityEngine::ProBuilder::__MeshHandles____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b509c4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CreateFaceMesh>b__9_0 addr 0x2b509cc size 0x18 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _CreateFaceMesh_b__9_0(::UnityEngine::ProBuilder::Face*  x) ;

/// @brief Method <CreateFaceMeshFromFaces>b__10_0 addr 0x2b509e4 size 0x18 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _CreateFaceMeshFromFaces_b__10_0(::UnityEngine::ProBuilder::Face*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__MeshHandles____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MeshHandles____c(__MeshHandles____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MeshHandles____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MeshHandles____c(__MeshHandles____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MeshHandles____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__9_0

// Static field <>9__10_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__MeshHandles____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::MeshHandles
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12142))
// CS Name: ::UnityEngine.ProBuilder::MeshHandles*
class CORDL_TYPE MeshHandles : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::__MeshHandles____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Vector2List(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_s_Vector2List() ;

static inline void setStaticF_s_Vector3List(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_s_Vector3List() ;

static inline void setStaticF_s_Vector4List(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* getStaticF_s_Vector4List() ;

static inline void setStaticF_s_IndexList(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_IndexList() ;

static inline void setStaticF_s_SharedVertexIndexList(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_SharedVertexIndexList() ;

static inline void setStaticF_k_Billboard0(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_k_Billboard0() ;

static inline void setStaticF_k_Billboard1(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_k_Billboard1() ;

static inline void setStaticF_k_Billboard2(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_k_Billboard2() ;

static inline void setStaticF_k_Billboard3(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_k_Billboard3() ;

/// @brief Method CreateFaceMesh addr 0x2b4c260 size 0x164 virtual false final false
static inline void CreateFaceMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreateFaceMeshFromFaces addr 0x2b4c3c4 size 0x150 virtual false final false
static inline void CreateFaceMeshFromFaces(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*  faces, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreateEdgeMesh addr 0x2b4c514 size 0x3fc virtual false final false
static inline void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreateEdgeMesh addr 0x2b4c910 size 0x2d4 virtual false final false
static inline void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target, ::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  edges) ;

/// @brief Method CreateVertexMesh addr 0x2b4cbe4 size 0x19c virtual false final false
static inline void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreateVertexMesh addr 0x2b4cd80 size 0xb8 virtual false final false
static inline void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target, ::System::Collections::Generic::IList_1<int32_t>*  indexes) ;

/// @brief Method CreatePointMesh addr 0x2b4ce38 size 0x1b8 virtual false final false
static inline void CreatePointMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, ::System::Collections::Generic::IList_1<int32_t>*  indexes, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreatePointBillboardMesh addr 0x2b4d99c size 0x914 virtual false final false
static inline void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  positions, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreatePointBillboardMesh addr 0x2b4cff0 size 0x9ac virtual false final false
static inline void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  positions, ::System::Collections::Generic::IList_1<int32_t>*  indexes, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreateEdgeBillboardMesh addr 0x2b4e2b0 size 0x8c0 virtual false final false
static inline void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target) ;

/// @brief Method CreateEdgeBillboardMesh addr 0x2b4eb70 size 0xc48 virtual false final false
static inline void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Mesh*  target, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>*  edges) ;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandles", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshHandles(MeshHandles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandles", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshHandles(MeshHandles const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeshHandles()  = default;
public:


// Fields

// Static field s_Vector2List

// Static field s_Vector3List

// Static field s_Vector4List

// Static field s_IndexList

// Static field s_SharedVertexIndexList

// Static field k_Billboard0

// Static field k_Billboard1

// Static field k_Billboard2

// Static field k_Billboard3


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshHandles, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshHandles);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshHandles*, "UnityEngine.ProBuilder", "MeshHandles");
NEED_NO_BOX(::UnityEngine::ProBuilder::__MeshHandles____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__MeshHandles____c*, "UnityEngine.ProBuilder", "MeshHandles/<>c");
