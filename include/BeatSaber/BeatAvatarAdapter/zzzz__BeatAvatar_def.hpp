#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatAvatar)
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarPoseController;
}
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarVisualController;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatar;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatar);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatar
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15257))
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatar*
class CORDL_TYPE BeatAvatar : public ::BeatSaber::AvatarCore::Avatar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::BeatSaber::AvatarCore::Avatar)]{};

/// @brief Field _avatarVisualController offset 0x30
 __declspec(property(get=__get__avatarVisualController, put=__set__avatarVisualController)) ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*  _avatarVisualController;

/// @brief Field _avatarPoseController offset 0x38
 __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController)) ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*  _avatarPoseController;

 __declspec(property(get=get_bodyCenterWorldPosition)) ::UnityEngine::Vector3  bodyCenterWorldPosition;

constexpr void __set__avatarVisualController(::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController* __get__avatarVisualController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController*> __get__avatarVisualController() const;

constexpr void __set__avatarPoseController(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* __get__avatarPoseController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*> __get__avatarPoseController() const;

/// @brief Method get_bodyCenterWorldPosition addr 0xe1421c size 0x1c virtual true final false
inline ::UnityEngine::Vector3 get_bodyCenterWorldPosition() ;

/// @brief Method SetLightColor addr 0xe14238 size 0x1c virtual true final false
inline void SetLightColor(::UnityEngine::Color  lightColor) ;

/// @brief Method UpdateAvatarFromPose addr 0xe14254 size 0x78 virtual true final false
inline void UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData  currentPose) ;

/// @brief Method UpdateAvatarFromVisualData addr 0xe142cc size 0x1ac virtual true final false
inline void UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData  visualData) ;

/// @brief Method UpdateAvatarFromOptionalData addr 0xe14478 size 0x4 virtual true final false
inline void UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData  data, float_t  playbackDelaySeconds) ;

static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatar* New_ctor() ;

/// @brief Method .ctor addr 0xe1447c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatAvatar(BeatAvatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatAvatar(BeatAvatar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatAvatar()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatar, 0x40>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatar);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatar*, "BeatSaber.BeatAvatarAdapter", "BeatAvatar");
