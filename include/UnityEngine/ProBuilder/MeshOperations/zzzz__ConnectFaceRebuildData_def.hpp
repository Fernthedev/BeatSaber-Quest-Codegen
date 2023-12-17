#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectFaceRebuildData)
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectFaceRebuildData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData);
// Type: UnityEngine.ProBuilder.MeshOperations::ConnectFaceRebuildData
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12250))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::ConnectFaceRebuildData*
class CORDL_TYPE ConnectFaceRebuildData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field faceRebuildData offset 0x10
 __declspec(property(get=__get_faceRebuildData, put=__set_faceRebuildData)) ::UnityEngine::ProBuilder::FaceRebuildData*  faceRebuildData;

/// @brief Field newVertexIndexes offset 0x18
 __declspec(property(get=__get_newVertexIndexes, put=__set_newVertexIndexes)) ::System::Collections::Generic::List_1<int32_t>*  newVertexIndexes;

constexpr void __set_faceRebuildData(::UnityEngine::ProBuilder::FaceRebuildData*  value) ;

constexpr ::UnityEngine::ProBuilder::FaceRebuildData* __get_faceRebuildData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::FaceRebuildData*> __get_faceRebuildData() const;

constexpr void __set_newVertexIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get_newVertexIndexes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get_newVertexIndexes() const;

static inline ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* New_ctor(::UnityEngine::ProBuilder::FaceRebuildData*  faceRebuildData, ::System::Collections::Generic::List_1<int32_t>*  newVertexIndexes) ;

/// @brief Method .ctor addr 0x2ba43e0 size 0x2c virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::FaceRebuildData*  faceRebuildData, ::System::Collections::Generic::List_1<int32_t>*  newVertexIndexes) ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectFaceRebuildData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectFaceRebuildData(ConnectFaceRebuildData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectFaceRebuildData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectFaceRebuildData(ConnectFaceRebuildData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectFaceRebuildData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, "UnityEngine.ProBuilder.MeshOperations", "ConnectFaceRebuildData");
