#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshTransform)
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshTransform;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::MeshTransform);
// Type: UnityEngine.ProBuilder.MeshOperations::MeshTransform
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12273))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::MeshTransform*
class CORDL_TYPE MeshTransform : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetPivot addr 0x2bbb4cc size 0xc0 virtual false final false
static inline void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::PivotLocation  pivotLocation) ;

/// @brief Method CenterPivot addr 0x2bb6cac size 0x2f8 virtual false final false
static inline void CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::ArrayW<int32_t,::Array<int32_t>*>  indexes) ;

/// @brief Method SetPivot addr 0x2bbb58c size 0x1a4 virtual false final false
static inline void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  worldPosition) ;

/// @brief Method FreezeScaleTransform addr 0x2bbb730 size 0x164 virtual false final false
static inline void FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

// Ctor Parameters [CppParam { name: "", ty: "MeshTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshTransform(MeshTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshTransform(MeshTransform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MeshTransform()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::MeshTransform, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshTransform*, "UnityEngine.ProBuilder.MeshOperations", "MeshTransform");
