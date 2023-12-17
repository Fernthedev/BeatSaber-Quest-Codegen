#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Avatar)
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace UnityEngine {
struct Color;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseDataProvider;
}
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class Avatar;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::Avatar);
// Type: BeatSaber.AvatarCore::Avatar
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15166))
// CS Name: ::BeatSaber.AvatarCore::Avatar*
class CORDL_TYPE Avatar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field visualDataProvider offset 0x18
 __declspec(property(get=__get_visualDataProvider, put=__set_visualDataProvider)) ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*  visualDataProvider;

/// @brief Field poseDataProvider offset 0x20
 __declspec(property(get=__get_poseDataProvider, put=__set_poseDataProvider)) ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*  poseDataProvider;

/// @brief Field optionalDataProvider offset 0x28
 __declspec(property(get=__get_optionalDataProvider, put=__set_optionalDataProvider)) ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*  optionalDataProvider;

 __declspec(property(get=get_bodyCenterWorldPosition)) ::UnityEngine::Vector3  bodyCenterWorldPosition;

constexpr void __set_visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*  value) ;

constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* __get_visualDataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*> __get_visualDataProvider() const;

constexpr void __set_poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*  value) ;

constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* __get_poseDataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*> __get_poseDataProvider() const;

constexpr void __set_optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*  value) ;

constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* __get_optionalDataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> __get_optionalDataProvider() const;

/// @brief Method get_bodyCenterWorldPosition addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector3 get_bodyCenterWorldPosition() ;

/// @brief Method SetPoseDataProvider addr 0xe0a674 size 0x220 virtual false final false
inline void SetPoseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*  poseDataProvider) ;

/// @brief Method SetVisualDataProvider addr 0xe0a894 size 0xe4 virtual false final false
inline void SetVisualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*  visualDataProvider) ;

/// @brief Method SetOptionalDataProvider addr 0xe0a978 size 0x1f0 virtual false final false
inline void SetOptionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*  optionalDataProvider) ;

/// @brief Method UpdateAvatarFromOptionalDataList addr 0xe0ab68 size 0x158 virtual false final false
inline void UpdateAvatarFromOptionalDataList(::System::Collections::Generic::Dictionary_2<uint32_t,::BeatSaber::AvatarCore::OptionalAvatarData>*  optionalData) ;

/// @brief Method UpdateAvatarFromOptionalData addr 0xe0acc0 size 0xcc virtual false final false
inline void UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData  data) ;

/// @brief Method SetLightColor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetLightColor(::UnityEngine::Color  lightColor) ;

/// @brief Method UpdateAvatarFromPose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData  currentPose) ;

/// @brief Method UpdateAvatarFromVisualData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData  visualData) ;

/// @brief Method UpdateAvatarFromOptionalData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData  data, float_t  playbackDelaySeconds) ;

static inline ::BeatSaber::AvatarCore::Avatar* New_ctor() ;

/// @brief Method .ctor addr 0xe0ad8c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Avatar(Avatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Avatar(Avatar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Avatar()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::Avatar, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::Avatar*, "BeatSaber.AvatarCore", "Avatar");
