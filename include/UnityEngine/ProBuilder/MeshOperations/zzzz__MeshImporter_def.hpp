#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MeshImporter)
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshImporter____c;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImportSettings;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImporter;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __MeshImporter____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c);
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12271))
// CS Name: ::MeshImporter::<>c*
class CORDL_TYPE __MeshImporter____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*  value) ;

static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* getStaticF___9() ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>*  value) ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>* getStaticF___9__9_0() ;

static inline ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c* New_ctor() ;

/// @brief Method .ctor addr 0x2bbb4a8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Import>b__9_0 addr 0x2bbb4b0 size 0x1c virtual false final false
inline ::UnityEngine::Vector3 _Import_b__9_0(::UnityEngine::ProBuilder::Vertex*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__MeshImporter____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MeshImporter____c(__MeshImporter____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MeshImporter____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MeshImporter____c(__MeshImporter____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MeshImporter____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__9_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MeshImporter
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12272))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MeshImporter*
class CORDL_TYPE MeshImporter : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_SourceMesh offset 0x10
 __declspec(property(get=__get_m_SourceMesh, put=__set_m_SourceMesh)) ::UnityEngine::Mesh*  m_SourceMesh;

/// @brief Field m_SourceMaterials offset 0x18
 __declspec(property(get=__get_m_SourceMaterials, put=__set_m_SourceMaterials)) ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  m_SourceMaterials;

/// @brief Field m_Destination offset 0x20
 __declspec(property(get=__get_m_Destination, put=__set_m_Destination)) ::UnityEngine::ProBuilder::ProBuilderMesh*  m_Destination;

/// @brief Field m_Vertices offset 0x28
 __declspec(property(get=__get_m_Vertices, put=__set_m_Vertices)) ::ArrayW<::UnityEngine::ProBuilder::Vertex*,::Array<::UnityEngine::ProBuilder::Vertex*>*>  m_Vertices;

static inline void setStaticF_k_DefaultImportSettings(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*  value) ;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* getStaticF_k_DefaultImportSettings() ;

constexpr void __set_m_SourceMesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get_m_SourceMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get_m_SourceMesh() const;

constexpr void __set_m_SourceMaterials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>& __get_m_SourceMaterials() ;

constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*> const& __get_m_SourceMaterials() const;

constexpr void __set_m_Destination(::UnityEngine::ProBuilder::ProBuilderMesh*  value) ;

constexpr ::UnityEngine::ProBuilder::ProBuilderMesh* __get_m_Destination() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> __get_m_Destination() const;

constexpr void __set_m_Vertices(::ArrayW<::UnityEngine::ProBuilder::Vertex*,::Array<::UnityEngine::ProBuilder::Vertex*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*,::Array<::UnityEngine::ProBuilder::Vertex*>*>& __get_m_Vertices() ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::Vertex*,::Array<::UnityEngine::ProBuilder::Vertex*>*> const& __get_m_Vertices() const;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method .ctor addr 0x2bb9c60 size 0x16c virtual false final false
inline void _ctor(::UnityEngine::GameObject*  gameObject) ;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::Mesh*  sourceMesh, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh*  destination) ;

/// @brief Method .ctor addr 0x2bb9dcc size 0x128 virtual false final false
inline void _ctor(::UnityEngine::Mesh*  sourceMesh, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh*  destination) ;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshImporter* New_ctor(::UnityEngine::ProBuilder::ProBuilderMesh*  destination) ;

/// @brief Method .ctor addr 0x2bb9ef4 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh*  destination) ;

/// @brief Method Import addr 0x2bb9f1c size 0x184 virtual false final false
inline bool Import(::UnityEngine::GameObject*  go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*  importSettings) ;

/// @brief Method Import addr 0x2bba0a0 size 0xab8 virtual false final false
inline void Import(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*  importSettings) ;

// Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshImporter(MeshImporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshImporter(MeshImporter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeshImporter()  = default;
public:


// Fields

// Static field k_DefaultImportSettings


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshImporter, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshImporter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__MeshImporter____c*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter/<>c");
