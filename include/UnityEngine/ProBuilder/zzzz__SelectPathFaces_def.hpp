#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectPathFaces)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectPathFaces;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectPathFaces);
// Type: UnityEngine.ProBuilder::SelectPathFaces
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12193))
// CS Name: ::UnityEngine.ProBuilder::SelectPathFaces*
class CORDL_TYPE SelectPathFaces : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_cachedPredecessors(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_s_cachedPredecessors() ;

static inline void setStaticF_s_cachedStart(int32_t  value) ;

static inline int32_t getStaticF_s_cachedStart() ;

static inline void setStaticF_s_cachedMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  value) ;

static inline ::UnityEngine::ProBuilder::ProBuilderMesh* getStaticF_s_cachedMesh() ;

static inline void setStaticF_s_cachedFacesCount(int32_t  value) ;

static inline int32_t getStaticF_s_cachedFacesCount() ;

static inline void setStaticF_s_cachedWings(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* getStaticF_s_cachedWings() ;

static inline void setStaticF_s_cachedFacesIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*,int32_t>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*,int32_t>* getStaticF_s_cachedFacesIndex() ;

/// @brief Method GetPath addr 0x2b6b4a8 size 0x2b0 virtual false final false
static inline ::System::Collections::Generic::List_1<int32_t>* GetPath(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, int32_t  start, int32_t  end) ;

/// @brief Method Dijkstra addr 0x2b6b874 size 0x6cc virtual false final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> Dijkstra(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, int32_t  start) ;

/// @brief Method GetWeight addr 0x2b6bf40 size 0x494 virtual false final false
static inline float_t GetWeight(int32_t  face1, int32_t  face2, ::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// @brief Method GetMinimalPath addr 0x2b6b758 size 0x11c virtual false final false
static inline ::System::Collections::Generic::List_1<int32_t>* GetMinimalPath(::ArrayW<int32_t,::Array<int32_t>*>  predecessors, int32_t  start, int32_t  end) ;

// Ctor Parameters [CppParam { name: "", ty: "SelectPathFaces", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectPathFaces(SelectPathFaces && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectPathFaces", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectPathFaces(SelectPathFaces const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectPathFaces()  = default;
public:


// Fields

// Static field s_cachedPredecessors

// Static field s_cachedStart

// Static field s_cachedMesh

// Static field s_cachedFacesCount

// Static field s_cachedWings

// Static field s_cachedFacesIndex


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectPathFaces, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectPathFaces);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectPathFaces*, "UnityEngine.ProBuilder", "SelectPathFaces");
