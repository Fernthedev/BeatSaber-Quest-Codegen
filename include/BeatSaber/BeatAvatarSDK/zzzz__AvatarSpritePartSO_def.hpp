#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
CORDL_MODULE_EXPORT(AvatarSpritePartSO)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class AvatarSpritePartSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO);
// Type: BeatSaber.BeatAvatarSDK::AvatarSpritePartSO
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10291)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15687), inst: 777 }), TypeDefinitionIndex(TypeDefinitionIndex(15687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15692))
// CS Name: ::BeatSaber.BeatAvatarSDK::AvatarSpritePartSO*
class CORDL_TYPE AvatarSpritePartSO : public ::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityEngine::Sprite*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::BeatSaber::BeatAvatarSDK::AvatarPartSO_1<::UnityEngine::Sprite*>)]{};

 __declspec(property(get=get_sprite)) ::UnityEngine::Sprite*  sprite;

/// @brief Method get_sprite addr 0xe1afc8 size 0x3c virtual false final false
inline ::UnityEngine::Sprite* get_sprite() ;

static inline ::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO* New_ctor() ;

/// @brief Method .ctor addr 0xe1b004 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSpritePartSO(AvatarSpritePartSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSpritePartSO(AvatarSpritePartSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarSpritePartSO()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::AvatarSpritePartSO*, "BeatSaber.BeatAvatarSDK", "AvatarSpritePartSO");
