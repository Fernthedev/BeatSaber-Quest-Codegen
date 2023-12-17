#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferMesh)
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferMesh);
// Type: HoudiniEngineUnity::HEU_LoadBufferMesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9805))
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferMesh*
class CORDL_TYPE HEU_LoadBufferMesh : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::HoudiniEngineUnity::HEU_LoadBufferBase)]{};

/// @brief Field _geoCache offset 0x30
 __declspec(property(get=__get__geoCache, put=__set__geoCache)) ::HoudiniEngineUnity::HEU_GenerateGeoCache*  _geoCache;

/// @brief Field _LODGroupMeshes offset 0x38
 __declspec(property(get=__get__LODGroupMeshes, put=__set__LODGroupMeshes)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*  _LODGroupMeshes;

/// @brief Field _defaultMaterialKey offset 0x40
 __declspec(property(get=__get__defaultMaterialKey, put=__set__defaultMaterialKey)) int32_t  _defaultMaterialKey;

/// @brief Field _bGenerateUVs offset 0x44
 __declspec(property(get=__get__bGenerateUVs, put=__set__bGenerateUVs)) bool  _bGenerateUVs;

/// @brief Field _bGenerateTangents offset 0x45
 __declspec(property(get=__get__bGenerateTangents, put=__set__bGenerateTangents)) bool  _bGenerateTangents;

/// @brief Field _bGenerateNormals offset 0x46
 __declspec(property(get=__get__bGenerateNormals, put=__set__bGenerateNormals)) bool  _bGenerateNormals;

/// @brief Field _bPartInstanced offset 0x47
 __declspec(property(get=__get__bPartInstanced, put=__set__bPartInstanced)) bool  _bPartInstanced;

constexpr void __set__geoCache(::HoudiniEngineUnity::HEU_GenerateGeoCache*  value) ;

constexpr ::HoudiniEngineUnity::HEU_GenerateGeoCache* __get__geoCache() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GenerateGeoCache*> __get__geoCache() const;

constexpr void __set__LODGroupMeshes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* __get__LODGroupMeshes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> __get__LODGroupMeshes() const;

constexpr void __set__defaultMaterialKey(int32_t  value) ;

constexpr int32_t& __get__defaultMaterialKey() ;

constexpr int32_t const& __get__defaultMaterialKey() const;

constexpr void __set__bGenerateUVs(bool  value) ;

constexpr bool& __get__bGenerateUVs() ;

constexpr bool const& __get__bGenerateUVs() const;

constexpr void __set__bGenerateTangents(bool  value) ;

constexpr bool& __get__bGenerateTangents() ;

constexpr bool const& __get__bGenerateTangents() const;

constexpr void __set__bGenerateNormals(bool  value) ;

constexpr bool& __get__bGenerateNormals() ;

constexpr bool const& __get__bGenerateNormals() const;

constexpr void __set__bPartInstanced(bool  value) ;

constexpr bool& __get__bPartInstanced() ;

constexpr bool const& __get__bPartInstanced() const;

static inline ::HoudiniEngineUnity::HEU_LoadBufferMesh* New_ctor() ;

/// @brief Method .ctor addr 0x21abc0c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_LoadBufferMesh(HEU_LoadBufferMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_LoadBufferMesh(HEU_LoadBufferMesh const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_LoadBufferMesh()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferMesh, 0x48>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferMesh*, "HoudiniEngineUnity", "HEU_LoadBufferMesh");
