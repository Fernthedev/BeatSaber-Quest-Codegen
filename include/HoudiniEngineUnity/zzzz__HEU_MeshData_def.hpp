#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MeshData)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct MeshTopology;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MeshData);
// Type: HoudiniEngineUnity::HEU_MeshData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9851))
// CS Name: ::HoudiniEngineUnity::HEU_MeshData*
class CORDL_TYPE HEU_MeshData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field _indices offset 0x10
 __declspec(property(get=__get__indices, put=__set__indices)) ::System::Collections::Generic::List_1<int32_t>*  _indices;

/// @brief Field _vertices offset 0x18
 __declspec(property(get=__get__vertices, put=__set__vertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _vertices;

/// @brief Field _colors offset 0x20
 __declspec(property(get=__get__colors, put=__set__colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  _colors;

/// @brief Field _normals offset 0x28
 __declspec(property(get=__get__normals, put=__set__normals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _normals;

/// @brief Field _tangents offset 0x30
 __declspec(property(get=__get__tangents, put=__set__tangents)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  _tangents;

/// @brief Field _uvs offset 0x38
 __declspec(property(get=__get__uvs, put=__set__uvs)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>  _uvs;

/// @brief Field _triangleNormals offset 0x40
 __declspec(property(get=__get__triangleNormals, put=__set__triangleNormals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _triangleNormals;

/// @brief Field _pointIndexToMeshIndexMap offset 0x48
 __declspec(property(get=__get__pointIndexToMeshIndexMap, put=__set__pointIndexToMeshIndexMap)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _pointIndexToMeshIndexMap;

/// @brief Field _meshTopology offset 0x50
 __declspec(property(get=__get__meshTopology, put=__set__meshTopology)) ::UnityEngine::MeshTopology  _meshTopology;

constexpr void __set__indices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get__indices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get__indices() const;

constexpr void __set__vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get__vertices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get__vertices() const;

constexpr void __set__colors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>* __get__colors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color32>*> __get__colors() const;

constexpr void __set__normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get__normals() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get__normals() const;

constexpr void __set__tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* __get__tangents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> __get__tangents() const;

constexpr void __set__uvs(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*>& __get__uvs() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>*> const& __get__uvs() const;

constexpr void __set__triangleNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get__triangleNormals() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get__triangleNormals() const;

constexpr void __set__pointIndexToMeshIndexMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* __get__pointIndexToMeshIndexMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*> __get__pointIndexToMeshIndexMap() const;

constexpr void __set__meshTopology(::UnityEngine::MeshTopology  value) ;

constexpr ::UnityEngine::MeshTopology& __get__meshTopology() ;

constexpr ::UnityEngine::MeshTopology const& __get__meshTopology() const;

static inline ::HoudiniEngineUnity::HEU_MeshData* New_ctor() ;

/// @brief Method .ctor addr 0x21cffb8 size 0x1f0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_MeshData(HEU_MeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_MeshData(HEU_MeshData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_MeshData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MeshData, 0x58>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshData*, "HoudiniEngineUnity", "HEU_MeshData");
