#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AvatarHeadOffset)
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarPoseController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarHeadOffset;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarHeadOffset);
// Type: BeatSaber.AvatarCore::AvatarHeadOffset
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15173))
// CS Name: ::BeatSaber.AvatarCore::AvatarHeadOffset*
class CORDL_TYPE AvatarHeadOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _positionOffset offset 0x18
 __declspec(property(get=__get__positionOffset, put=__set__positionOffset)) ::UnityEngine::Vector3  _positionOffset;

/// @brief Field _avatarPoseController offset 0x28
 __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController)) ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*  _avatarPoseController;

constexpr void __set__positionOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__positionOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

constexpr void __set__avatarPoseController(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*  value) ;

constexpr ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController* __get__avatarPoseController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*> __get__avatarPoseController() const;

/// @brief Method Start addr 0xe0ba48 size 0x88 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0xe0bb80 size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleMultiplayerAvatarPoseControllerDidUpdatePose addr 0xe0bd00 size 0x54 virtual false final false
inline void HandleMultiplayerAvatarPoseControllerDidUpdatePose(::UnityEngine::Vector3  headLocalPosition) ;

static inline ::BeatSaber::AvatarCore::AvatarHeadOffset* New_ctor() ;

/// @brief Method .ctor addr 0xe0bd54 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarHeadOffset(AvatarHeadOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarHeadOffset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarHeadOffset(AvatarHeadOffset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarHeadOffset()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarHeadOffset, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarHeadOffset);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarHeadOffset*, "BeatSaber.AvatarCore", "AvatarHeadOffset");
