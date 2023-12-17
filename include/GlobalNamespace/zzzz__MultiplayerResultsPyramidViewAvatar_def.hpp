#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerResultsPyramidViewAvatar)
namespace GlobalNamespace {
struct __GhostDuplicationEffect__GhostEffectParams;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace Tweening {
class Vector3Tween;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class Sprite;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __MultiplayerResultsPyramidViewAvatar__Factory;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class __MultiplayerResultsPyramidViewAvatar__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory);
// Type: ::MultiplayerResultsPyramidViewAvatar
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5245))
// CS Name: ::MultiplayerResultsPyramidViewAvatar*
class CORDL_TYPE MultiplayerResultsPyramidViewAvatar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Factory = ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1c8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1c8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _badgeDirector offset 0x18
 __declspec(property(get=__get__badgeDirector, put=__set__badgeDirector)) ::UnityEngine::Playables::PlayableDirector*  _badgeDirector;

/// @brief Field _ghostFirstTrackName offset 0x20
 __declspec(property(get=__get__ghostFirstTrackName, put=__set__ghostFirstTrackName)) ::StringW  _ghostFirstTrackName;

/// @brief Field _ghostSecondTrackName offset 0x28
 __declspec(property(get=__get__ghostSecondTrackName, put=__set__ghostSecondTrackName)) ::StringW  _ghostSecondTrackName;

/// @brief Field _standWithAvatarTransform offset 0x30
 __declspec(property(get=__get__standWithAvatarTransform, put=__set__standWithAvatarTransform)) ::UnityEngine::Transform*  _standWithAvatarTransform;

/// @brief Field _perPositionRotation offset 0x38
 __declspec(property(get=__get__perPositionRotation, put=__set__perPositionRotation)) float_t  _perPositionRotation;

/// @brief Field _localPlayerColor offset 0x3c
 __declspec(property(get=__get__localPlayerColor, put=__set__localPlayerColor)) ::UnityEngine::Color  _localPlayerColor;

/// @brief Field _positionText offset 0x50
 __declspec(property(get=__get__positionText, put=__set__positionText)) ::TMPro::TextMeshProUGUI*  _positionText;

/// @brief Field _nameText offset 0x58
 __declspec(property(get=__get__nameText, put=__set__nameText)) ::TMPro::TextMeshProUGUI*  _nameText;

/// @brief Field _nameBackground offset 0x60
 __declspec(property(get=__get__nameBackground, put=__set__nameBackground)) ::HMUI::ImageView*  _nameBackground;

/// @brief Field _badgeCanvas offset 0x68
 __declspec(property(get=__get__badgeCanvas, put=__set__badgeCanvas)) ::UnityEngine::CanvasGroup*  _badgeCanvas;

/// @brief Field _badgeTitles offset 0x70
 __declspec(property(get=__get__badgeTitles, put=__set__badgeTitles)) ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  _badgeTitles;

/// @brief Field _badgeImages offset 0x78
 __declspec(property(get=__get__badgeImages, put=__set__badgeImages)) ::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*>  _badgeImages;

/// @brief Field _badgeSubtitleText offset 0x80
 __declspec(property(get=__get__badgeSubtitleText, put=__set__badgeSubtitleText)) ::TMPro::TextMeshProUGUI*  _badgeSubtitleText;

/// @brief Field _badgeSubtitleCanvas offset 0x88
 __declspec(property(get=__get__badgeSubtitleCanvas, put=__set__badgeSubtitleCanvas)) ::UnityEngine::CanvasGroup*  _badgeSubtitleCanvas;

/// @brief Field _ghostDuplicationEffect offset 0x90
 __declspec(property(get=__get__ghostDuplicationEffect, put=__set__ghostDuplicationEffect)) ::GlobalNamespace::GhostDuplicationEffect*  _ghostDuplicationEffect;

/// @brief Field _ghostAppear offset 0x98
 __declspec(property(get=__get__ghostAppear, put=__set__ghostAppear)) ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams  _ghostAppear;

/// @brief Field _ghostReceive offset 0xe0
 __declspec(property(get=__get__ghostReceive, put=__set__ghostReceive)) ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams  _ghostReceive;

/// @brief Field _trophyImage offset 0x128
 __declspec(property(get=__get__trophyImage, put=__set__trophyImage)) ::HMUI::ImageView*  _trophyImage;

/// @brief Field _firstPlaceTrophy offset 0x130
 __declspec(property(get=__get__firstPlaceTrophy, put=__set__firstPlaceTrophy)) ::UnityEngine::Sprite*  _firstPlaceTrophy;

/// @brief Field _secondPlaceTrophy offset 0x138
 __declspec(property(get=__get__secondPlaceTrophy, put=__set__secondPlaceTrophy)) ::UnityEngine::Sprite*  _secondPlaceTrophy;

/// @brief Field _thirdPlaceTrophy offset 0x140
 __declspec(property(get=__get__thirdPlaceTrophy, put=__set__thirdPlaceTrophy)) ::UnityEngine::Sprite*  _thirdPlaceTrophy;

/// @brief Field _firstPlaceColor offset 0x148
 __declspec(property(get=__get__firstPlaceColor, put=__set__firstPlaceColor)) ::UnityEngine::Color  _firstPlaceColor;

/// @brief Field _personalBestVisual offset 0x158
 __declspec(property(get=__get__personalBestVisual, put=__set__personalBestVisual)) ::UnityEngine::GameObject*  _personalBestVisual;

/// @brief Field _playerDataModel offset 0x160
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _difficultyBeatmap offset 0x168
 __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  _difficultyBeatmap;

/// @brief Field _riseTween offset 0x170
 __declspec(property(get=__get__riseTween, put=__set__riseTween)) ::Tweening::Vector3Tween*  _riseTween;

/// @brief Field _avatarRiseTween offset 0x178
 __declspec(property(get=__get__avatarRiseTween, put=__set__avatarRiseTween)) ::Tweening::Vector3Tween*  _avatarRiseTween;

/// @brief Field _badgePositionTween offset 0x180
 __declspec(property(get=__get__badgePositionTween, put=__set__badgePositionTween)) ::Tweening::Vector3Tween*  _badgePositionTween;

/// @brief Field _badgeOpacityTween offset 0x188
 __declspec(property(get=__get__badgeOpacityTween, put=__set__badgeOpacityTween)) ::Tweening::FloatTween*  _badgeOpacityTween;

/// @brief Field _nameOpacityTween offset 0x190
 __declspec(property(get=__get__nameOpacityTween, put=__set__nameOpacityTween)) ::Tweening::FloatTween*  _nameOpacityTween;

/// @brief Field _namePositionTween offset 0x198
 __declspec(property(get=__get__namePositionTween, put=__set__namePositionTween)) ::Tweening::Vector3Tween*  _namePositionTween;

/// @brief Field _localGlowTween offset 0x1a0
 __declspec(property(get=__get__localGlowTween, put=__set__localGlowTween)) ::Tweening::ColorTween*  _localGlowTween;

/// @brief Field _titleMakingSpaceForBadgeTween offset 0x1a8
 __declspec(property(get=__get__titleMakingSpaceForBadgeTween, put=__set__titleMakingSpaceForBadgeTween)) ::Tweening::Vector3Tween*  _titleMakingSpaceForBadgeTween;

/// @brief Field _originalBadgeLocalPos offset 0x1b0
 __declspec(property(get=__get__originalBadgeLocalPos, put=__set__originalBadgeLocalPos)) ::UnityEngine::Vector3  _originalBadgeLocalPos;

/// @brief Field _connectedPlayer offset 0x1c0
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

 __declspec(property(get=get_badgeDirector)) ::UnityEngine::Playables::PlayableDirector*  badgeDirector;

constexpr void __set__badgeDirector(::UnityEngine::Playables::PlayableDirector*  value) ;

constexpr ::UnityEngine::Playables::PlayableDirector* __get__badgeDirector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> __get__badgeDirector() const;

constexpr void __set__ghostFirstTrackName(::StringW  value) ;

constexpr ::StringW& __get__ghostFirstTrackName() ;

constexpr ::StringW const& __get__ghostFirstTrackName() const;

constexpr void __set__ghostSecondTrackName(::StringW  value) ;

constexpr ::StringW& __get__ghostSecondTrackName() ;

constexpr ::StringW const& __get__ghostSecondTrackName() const;

constexpr void __set__standWithAvatarTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__standWithAvatarTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__standWithAvatarTransform() const;

constexpr void __set__perPositionRotation(float_t  value) ;

constexpr float_t& __get__perPositionRotation() ;

constexpr float_t const& __get__perPositionRotation() const;

constexpr void __set__localPlayerColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__localPlayerColor() ;

constexpr ::UnityEngine::Color const& __get__localPlayerColor() const;

constexpr void __set__positionText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__positionText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__positionText() const;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__nameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__nameText() const;

constexpr void __set__nameBackground(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__nameBackground() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__nameBackground() const;

constexpr void __set__badgeCanvas(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__badgeCanvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__badgeCanvas() const;

constexpr void __set__badgeTitles(::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  value) ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>& __get__badgeTitles() ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*> const& __get__badgeTitles() const;

constexpr void __set__badgeImages(::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*>  value) ;

constexpr ::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*>& __get__badgeImages() ;

constexpr ::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*> const& __get__badgeImages() const;

constexpr void __set__badgeSubtitleText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__badgeSubtitleText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__badgeSubtitleText() const;

constexpr void __set__badgeSubtitleCanvas(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__badgeSubtitleCanvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__badgeSubtitleCanvas() const;

constexpr void __set__ghostDuplicationEffect(::GlobalNamespace::GhostDuplicationEffect*  value) ;

constexpr ::GlobalNamespace::GhostDuplicationEffect* __get__ghostDuplicationEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostDuplicationEffect*> __get__ghostDuplicationEffect() const;

constexpr void __set__ghostAppear(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams  value) ;

constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __get__ghostAppear() ;

constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __get__ghostAppear() const;

constexpr void __set__ghostReceive(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams  value) ;

constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __get__ghostReceive() ;

constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __get__ghostReceive() const;

constexpr void __set__trophyImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__trophyImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__trophyImage() const;

constexpr void __set__firstPlaceTrophy(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__firstPlaceTrophy() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__firstPlaceTrophy() const;

constexpr void __set__secondPlaceTrophy(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__secondPlaceTrophy() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__secondPlaceTrophy() const;

constexpr void __set__thirdPlaceTrophy(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__thirdPlaceTrophy() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__thirdPlaceTrophy() const;

constexpr void __set__firstPlaceColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__firstPlaceColor() ;

constexpr ::UnityEngine::Color const& __get__firstPlaceColor() const;

constexpr void __set__personalBestVisual(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__personalBestVisual() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__personalBestVisual() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get__difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get__difficultyBeatmap() const;

constexpr void __set__riseTween(::Tweening::Vector3Tween*  value) ;

constexpr ::Tweening::Vector3Tween* __get__riseTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> __get__riseTween() const;

constexpr void __set__avatarRiseTween(::Tweening::Vector3Tween*  value) ;

constexpr ::Tweening::Vector3Tween* __get__avatarRiseTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> __get__avatarRiseTween() const;

constexpr void __set__badgePositionTween(::Tweening::Vector3Tween*  value) ;

constexpr ::Tweening::Vector3Tween* __get__badgePositionTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> __get__badgePositionTween() const;

constexpr void __set__badgeOpacityTween(::Tweening::FloatTween*  value) ;

constexpr ::Tweening::FloatTween* __get__badgeOpacityTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> __get__badgeOpacityTween() const;

constexpr void __set__nameOpacityTween(::Tweening::FloatTween*  value) ;

constexpr ::Tweening::FloatTween* __get__nameOpacityTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> __get__nameOpacityTween() const;

constexpr void __set__namePositionTween(::Tweening::Vector3Tween*  value) ;

constexpr ::Tweening::Vector3Tween* __get__namePositionTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> __get__namePositionTween() const;

constexpr void __set__localGlowTween(::Tweening::ColorTween*  value) ;

constexpr ::Tweening::ColorTween* __get__localGlowTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> __get__localGlowTween() const;

constexpr void __set__titleMakingSpaceForBadgeTween(::Tweening::Vector3Tween*  value) ;

constexpr ::Tweening::Vector3Tween* __get__titleMakingSpaceForBadgeTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> __get__titleMakingSpaceForBadgeTween() const;

constexpr void __set__originalBadgeLocalPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__originalBadgeLocalPos() ;

constexpr ::UnityEngine::Vector3 const& __get__originalBadgeLocalPos() const;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

/// @brief Method get_badgeDirector addr 0x22588a4 size 0x8 virtual false final false
inline ::UnityEngine::Playables::PlayableDirector* get_badgeDirector() ;

/// @brief Method Awake addr 0x22588ac size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method Setup addr 0x22583bc size 0x464 virtual false final false
inline void Setup(::GlobalNamespace::MultiplayerPlayerResultsData*  resultData, int32_t  position, int32_t  playerCount) ;

/// @brief Method SetupBadgeTimeline addr 0x2257e40 size 0x57c virtual false final false
inline void SetupBadgeTimeline(::UnityEngine::Transform*  startTransform, ::UnityEngine::Transform*  midTransform) ;

static inline ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* New_ctor() ;

/// @brief Method .ctor addr 0x22588cc size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerResultsPyramidViewAvatar()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar, 0x1c8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5245)), TypeDefinitionIndex(TypeDefinitionIndex(12778)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11005), inst: 3489 }), TypeDefinitionIndex(TypeDefinitionIndex(11005))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5244))
// CS Name: ::MultiplayerResultsPyramidViewAvatar::Factory*
class CORDL_TYPE __MultiplayerResultsPyramidViewAvatar__Factory : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::IConnectedPlayer*,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::PlaceholderFactory_2<::GlobalNamespace::IConnectedPlayer*,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>)]{};

static inline ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* New_ctor() ;

/// @brief Method .ctor addr 0x22588f8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerResultsPyramidViewAvatar__Factory(__MultiplayerResultsPyramidViewAvatar__Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerResultsPyramidViewAvatar__Factory(__MultiplayerResultsPyramidViewAvatar__Factory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerResultsPyramidViewAvatar__Factory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, "", "MultiplayerResultsPyramidViewAvatar");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*, "", "MultiplayerResultsPyramidViewAvatar/Factory");
