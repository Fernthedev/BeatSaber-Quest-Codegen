#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputInterfaceMesh)
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMeshes;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_InputData;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMesh;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceMesh;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMesh;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceMesh__HEU_InputDataMeshes;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceMesh);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes);
// Type: ::HEU_InputDataMeshes
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9840))
// CS Name: ::HEU_InputInterfaceMesh::HEU_InputDataMeshes*
class CORDL_TYPE __HEU_InputInterfaceMesh__HEU_InputDataMeshes : public ::HoudiniEngineUnity::HEU_InputData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::HoudiniEngineUnity::HEU_InputData)]{};

/// @brief Field _inputMeshes offset 0x18
 __declspec(property(get=__get__inputMeshes, put=__set__inputMeshes)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*  _inputMeshes;

/// @brief Field _hasLOD offset 0x20
 __declspec(property(get=__get__hasLOD, put=__set__hasLOD)) bool  _hasLOD;

constexpr void __set__inputMeshes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>* __get__inputMeshes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*>*> __get__inputMeshes() const;

constexpr void __set__hasLOD(bool  value) ;

constexpr bool& __get__hasLOD() ;

constexpr bool const& __get__hasLOD() const;

static inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* New_ctor() ;

/// @brief Method .ctor addr 0x21c8f0c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMeshes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_InputInterfaceMesh__HEU_InputDataMeshes(__HEU_InputInterfaceMesh__HEU_InputDataMeshes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMeshes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_InputInterfaceMesh__HEU_InputDataMeshes(__HEU_InputInterfaceMesh__HEU_InputDataMeshes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_InputInterfaceMesh__HEU_InputDataMeshes()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::HEU_InputDataMesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9841))
// CS Name: ::HEU_InputInterfaceMesh::HEU_InputDataMesh*
class CORDL_TYPE __HEU_InputInterfaceMesh__HEU_InputDataMesh : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field _mesh offset 0x10
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

/// @brief Field _materials offset 0x18
 __declspec(property(get=__get__materials, put=__set__materials)) ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  _materials;

/// @brief Field _meshPath offset 0x20
 __declspec(property(get=__get__meshPath, put=__set__meshPath)) ::StringW  _meshPath;

/// @brief Field _meshName offset 0x28
 __declspec(property(get=__get__meshName, put=__set__meshName)) ::StringW  _meshName;

/// @brief Field _numVertices offset 0x30
 __declspec(property(get=__get__numVertices, put=__set__numVertices)) int32_t  _numVertices;

/// @brief Field _numSubMeshes offset 0x34
 __declspec(property(get=__get__numSubMeshes, put=__set__numSubMeshes)) int32_t  _numSubMeshes;

/// @brief Field _indexStart offset 0x38
 __declspec(property(get=__get__indexStart, put=__set__indexStart)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _indexStart;

/// @brief Field _indexCount offset 0x40
 __declspec(property(get=__get__indexCount, put=__set__indexCount)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _indexCount;

/// @brief Field _LODScreenTransition offset 0x48
 __declspec(property(get=__get__LODScreenTransition, put=__set__LODScreenTransition)) float_t  _LODScreenTransition;

/// @brief Field _transform offset 0x50
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

constexpr void __set__materials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>& __get__materials() ;

constexpr ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*> const& __get__materials() const;

constexpr void __set__meshPath(::StringW  value) ;

constexpr ::StringW& __get__meshPath() ;

constexpr ::StringW const& __get__meshPath() const;

constexpr void __set__meshName(::StringW  value) ;

constexpr ::StringW& __get__meshName() ;

constexpr ::StringW const& __get__meshName() const;

constexpr void __set__numVertices(int32_t  value) ;

constexpr int32_t& __get__numVertices() ;

constexpr int32_t const& __get__numVertices() const;

constexpr void __set__numSubMeshes(int32_t  value) ;

constexpr int32_t& __get__numSubMeshes() ;

constexpr int32_t const& __get__numSubMeshes() const;

constexpr void __set__indexStart(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__indexStart() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__indexStart() const;

constexpr void __set__indexCount(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__indexCount() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__indexCount() const;

constexpr void __set__LODScreenTransition(float_t  value) ;

constexpr float_t& __get__LODScreenTransition() ;

constexpr float_t const& __get__LODScreenTransition() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

static inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* New_ctor() ;

/// @brief Method .ctor addr 0x21c8f88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_InputInterfaceMesh__HEU_InputDataMesh(__HEU_InputInterfaceMesh__HEU_InputDataMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceMesh__HEU_InputDataMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_InputInterfaceMesh__HEU_InputDataMesh(__HEU_InputInterfaceMesh__HEU_InputDataMesh const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_InputInterfaceMesh__HEU_InputDataMesh()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh, 0x58>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceMesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9842))
// CS Name: ::HoudiniEngineUnity::HEU_InputInterfaceMesh*
class CORDL_TYPE HEU_InputInterfaceMesh : public ::HoudiniEngineUnity::HEU_InputInterface {
public:
// Declarations
using HEU_InputDataMesh = ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh;

using HEU_InputDataMeshes = ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::HoudiniEngineUnity::HEU_InputInterface)]{};

static inline ::HoudiniEngineUnity::HEU_InputInterfaceMesh* New_ctor() ;

/// @brief Method .ctor addr 0x21c5304 size 0x20 virtual false final false
inline void _ctor() ;

/// @brief Method CreateInputNodeWithDataUpload addr 0x21c5324 size 0x188 virtual true final false
inline bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  connectNodeID, ::UnityEngine::GameObject*  inputObject, ByRef<int32_t>  inputNodeID) ;

/// @brief Method IsThisInputObjectSupported addr 0x21c7a0c size 0x164 virtual true final false
inline bool IsThisInputObjectSupported(::UnityEngine::GameObject*  inputObject) ;

/// @brief Method GetUVsFromMesh addr 0x21c7b70 size 0x90 virtual false final false
static inline void GetUVsFromMesh(::UnityEngine::Mesh*  mesh, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  srcUVs, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  destUVs, int32_t  index) ;

/// @brief Method UploadData addr 0x21c581c size 0x21f0 virtual false final false
inline bool UploadData(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  inputNodeID, ::HoudiniEngineUnity::HEU_InputData*  inputData) ;

/// @brief Method GenerateMeshDatasFromGameObject addr 0x21c54ac size 0x370 virtual false final false
inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes* GenerateMeshDatasFromGameObject(::UnityEngine::GameObject*  inputObject) ;

/// @brief Method CreateSingleMeshData addr 0x21c7c00 size 0x1d4 virtual false final false
static inline ::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh* CreateSingleMeshData(::UnityEngine::GameObject*  meshGameObject) ;

/// @brief Method GetMeshFromObject addr 0x21c7dd4 size 0x1138 virtual false final false
static inline ::UnityEngine::Mesh* GetMeshFromObject(::UnityEngine::GameObject*  meshGameObject) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_InputInterfaceMesh(HEU_InputInterfaceMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_InputInterfaceMesh(HEU_InputInterfaceMesh const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_InputInterfaceMesh()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceMesh, 0x18>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceMesh*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMesh*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMesh");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputInterfaceMesh__HEU_InputDataMeshes*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMeshes");
