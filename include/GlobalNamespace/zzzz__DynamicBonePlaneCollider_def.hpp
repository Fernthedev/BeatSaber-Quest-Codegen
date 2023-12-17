#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicBonePlaneCollider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicBonePlaneCollider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DynamicBonePlaneCollider);
// Type: ::DynamicBonePlaneCollider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16049))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16050))
// CS Name: ::DynamicBonePlaneCollider*
class CORDL_TYPE DynamicBonePlaneCollider : public ::GlobalNamespace::DynamicBoneColliderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::DynamicBoneColliderBase)]{};

/// @brief Method OnValidate addr 0x12308e8 size 0x4 virtual false final false
inline void OnValidate() ;

/// @brief Method Collide addr 0x12308ec size 0x188 virtual true final false
inline void Collide(ByRef<::UnityEngine::Vector3>  particlePosition, float_t  particleRadius) ;

/// @brief Method OnDrawGizmosSelected addr 0x1230a74 size 0x160 virtual false final false
inline void OnDrawGizmosSelected() ;

static inline ::GlobalNamespace::DynamicBonePlaneCollider* New_ctor() ;

/// @brief Method .ctor addr 0x1230bd4 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBonePlaneCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicBonePlaneCollider(DynamicBonePlaneCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBonePlaneCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicBonePlaneCollider(DynamicBonePlaneCollider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DynamicBonePlaneCollider()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicBonePlaneCollider, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DynamicBonePlaneCollider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBonePlaneCollider*, "", "DynamicBonePlaneCollider");
