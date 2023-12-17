#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
CORDL_MODULE_EXPORT(AvatarMeshPartSO)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarMeshPartSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO);
// Type: BeatSaber.BeatAvatarSDK::AvatarMeshPartSO
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10070)), TypeDefinitionIndex(TypeDefinitionIndex(15687)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15687), inst: 913 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15682))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarMeshPartSO*
class CORDL_TYPE AvatarMeshPartSO : public ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityEngine::Mesh*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityEngine::Mesh*>)]{};

 __declspec(property(get=get_mesh)) ::UnityEngine::Mesh*  mesh;

/// @brief Method get_mesh addr 0xe19f1c size 0x3c virtual false final false
inline ::UnityEngine::Mesh* get_mesh() ;

static inline ::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO* New_ctor() ;

/// @brief Method .ctor addr 0xe19f58 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarMeshPartSO(AvatarMeshPartSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarMeshPartSO(AvatarMeshPartSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarMeshPartSO()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarMeshPartSO*, "BeatSaber.BeatAvatarSDK", "AvatarMeshPartSO");
