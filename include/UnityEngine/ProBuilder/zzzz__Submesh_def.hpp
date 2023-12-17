#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Submesh)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Submesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Submesh);
// Type: UnityEngine.ProBuilder::Submesh
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12206))
// CS Name: ::UnityEngine.ProBuilder::Submesh*
class CORDL_TYPE Submesh : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Indexes offset 0x10
 __declspec(property(get=__get_m_Indexes, put=__set_m_Indexes)) ::ArrayW<int32_t,::Array<int32_t>*>  m_Indexes;

/// @brief Field m_Topology offset 0x18
 __declspec(property(get=__get_m_Topology, put=__set_m_Topology)) ::UnityEngine::MeshTopology  m_Topology;

/// @brief Field m_SubmeshIndex offset 0x1c
 __declspec(property(get=__get_m_SubmeshIndex, put=__set_m_SubmeshIndex)) int32_t  m_SubmeshIndex;

 __declspec(property(get=get_indexes, put=set_indexes)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  indexes;

 __declspec(property(get=get_topology, put=set_topology)) ::UnityEngine::MeshTopology  topology;

 __declspec(property(get=get_submeshIndex, put=set_submeshIndex)) int32_t  submeshIndex;

constexpr void __set_m_Indexes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_m_Indexes() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_m_Indexes() const;

constexpr void __set_m_Topology(::UnityEngine::MeshTopology  value) ;

constexpr ::UnityEngine::MeshTopology& __get_m_Topology() ;

constexpr ::UnityEngine::MeshTopology const& __get_m_Topology() const;

constexpr void __set_m_SubmeshIndex(int32_t  value) ;

constexpr int32_t& __get_m_SubmeshIndex() ;

constexpr int32_t const& __get_m_SubmeshIndex() const;

/// @brief Method get_indexes addr 0x2b7b184 size 0x7c virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_indexes() ;

/// @brief Method set_indexes addr 0x2b7b200 size 0x5c virtual false final false
inline void set_indexes(::System::Collections::Generic::IEnumerable_1<int32_t>*  value) ;

/// @brief Method get_topology addr 0x2b7b25c size 0x8 virtual false final false
inline ::UnityEngine::MeshTopology get_topology() ;

/// @brief Method set_topology addr 0x2b7b264 size 0x8 virtual false final false
inline void set_topology(::UnityEngine::MeshTopology  value) ;

/// @brief Method get_submeshIndex addr 0x2b7b26c size 0x8 virtual false final false
inline int32_t get_submeshIndex() ;

/// @brief Method set_submeshIndex addr 0x2b7b274 size 0x8 virtual false final false
inline void set_submeshIndex(int32_t  value) ;

static inline ::UnityEngine::ProBuilder::Submesh* New_ctor(int32_t  submeshIndex, ::UnityEngine::MeshTopology  topology, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indexes) ;

/// @brief Method .ctor addr 0x2b7b27c size 0xc4 virtual false final false
inline void _ctor(int32_t  submeshIndex, ::UnityEngine::MeshTopology  topology, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indexes) ;

static inline ::UnityEngine::ProBuilder::Submesh* New_ctor(::UnityEngine::Mesh*  mesh, int32_t  subMeshIndex) ;

/// @brief Method .ctor addr 0x2b7b340 size 0xfc virtual false final false
inline void _ctor(::UnityEngine::Mesh*  mesh, int32_t  subMeshIndex) ;

/// @brief Method ToString addr 0x2b7b43c size 0x108 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetSubmeshCount addr 0x2b7b544 size 0x60 virtual false final false
static inline int32_t GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// @brief Method GetSubmeshes addr 0x2b7b5a4 size 0x96c virtual false final false
static inline ::ArrayW<::UnityEngine::ProBuilder::Submesh*,::Array<::UnityEngine::ProBuilder::Submesh*>*> GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*  faces, int32_t  submeshCount, ::UnityEngine::MeshTopology  preferredTopology) ;

/// @brief Method MapFaceMaterialsToSubmeshIndex addr 0x2b7bf10 size 0x12c virtual false final false
static inline void MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

// Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Submesh(Submesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Submesh(Submesh const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Submesh()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Submesh, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Submesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Submesh*, "UnityEngine.ProBuilder", "Submesh");
