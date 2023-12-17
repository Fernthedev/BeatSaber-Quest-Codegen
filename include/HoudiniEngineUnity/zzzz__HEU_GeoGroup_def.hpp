#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GeoGroup)
namespace HoudiniEngineUnity {
class HEU_VertexEntry;
}
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeoGroup);
// Type: HoudiniEngineUnity::HEU_GeoGroup
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9835))
// CS Name: ::HoudiniEngineUnity::HEU_GeoGroup*
class CORDL_TYPE HEU_GeoGroup : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _groupName offset 0x10
 __declspec(property(get=__get__groupName, put=__set__groupName)) ::StringW  _groupName;

/// @brief Field _subMeshesMap offset 0x18
 __declspec(property(get=__get__subMeshesMap, put=__set__subMeshesMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*  _subMeshesMap;

/// @brief Field _sharedNormalIndices offset 0x20
 __declspec(property(get=__get__sharedNormalIndices, put=__set__sharedNormalIndices)) ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*,::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>  _sharedNormalIndices;

/// @brief Convert operator to "::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>"
constexpr operator  ::System::IComparable_1<::HoudiniEngineUnity::HEU_GeoGroup*>*() noexcept;

constexpr void __set__groupName(::StringW  value) ;

constexpr ::StringW& __get__groupName() ;

constexpr ::StringW const& __get__groupName() const;

constexpr void __set__subMeshesMap(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>* __get__subMeshesMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_MeshData*>*> __get__subMeshesMap() const;

constexpr void __set__sharedNormalIndices(::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*,::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*,::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*>& __get__sharedNormalIndices() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*,::Array<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VertexEntry*>*>*> const& __get__sharedNormalIndices() const;

/// @brief Method CompareTo addr 0x21c4644 size 0x30 virtual true final true
inline int32_t CompareTo(::HoudiniEngineUnity::HEU_GeoGroup*  other) ;

/// @brief Method SetupNormalIndices addr 0x21c2198 size 0x120 virtual false final false
inline void SetupNormalIndices(int32_t  indicesCount) ;

static inline ::HoudiniEngineUnity::HEU_GeoGroup* New_ctor() ;

/// @brief Method .ctor addr 0x21c211c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_GeoGroup(HEU_GeoGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_GeoGroup(HEU_GeoGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_GeoGroup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoGroup, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoGroup);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoGroup*, "HoudiniEngineUnity", "HEU_GeoGroup");
