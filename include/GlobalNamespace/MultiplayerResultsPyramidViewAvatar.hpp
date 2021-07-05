// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: GhostDuplicationEffect/GhostEffectParams
#include "GlobalNamespace/GhostDuplicationEffect_GhostEffectParams.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: GhostDuplicationEffect because it is already included!
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: Vector3Tween
  class Vector3Tween;
  // Forward declaring type: FloatTween
  class FloatTween;
  // Forward declaring type: ColorTween
  class ColorTween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsPyramidViewAvatar
  class MultiplayerResultsPyramidViewAvatar : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Factory
    class Factory;
    // [HeaderAttribute] Offset: 0xE1E920
    // private UnityEngine.Playables.PlayableDirector _badgeDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* badgeDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.String _ghostFirstTrackName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ghostFirstTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _ghostSecondTrackName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* ghostSecondTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1E98C
    // private UnityEngine.Transform _standWithAvatarTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* standWithAvatarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single _perPositionRotation
    // Size: 0x4
    // Offset: 0x38
    float perPositionRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _localPlayerColor
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Color localPlayerColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: localPlayerColor and: positionText
    char __padding5[0x4] = {};
    // [HeaderAttribute] Offset: 0xE1E9F8
    // private TMPro.TextMeshProUGUI _positionText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* positionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x58
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.ImageView _nameBackground
    // Size: 0x8
    // Offset: 0x60
    HMUI::ImageView* nameBackground;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1EA64
    // private UnityEngine.CanvasGroup _badgeCanvas
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::CanvasGroup* badgeCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _badgeTitles
    // Size: 0x8
    // Offset: 0x70
    ::Array<TMPro::TextMeshProUGUI*>* badgeTitles;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private HMUI.ImageView[] _badgeImages
    // Size: 0x8
    // Offset: 0x78
    ::Array<HMUI::ImageView*>* badgeImages;
    // Field size check
    static_assert(sizeof(::Array<HMUI::ImageView*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1EAD0
    // private TMPro.TextMeshProUGUI _badgeSubtitleText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* badgeSubtitleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.CanvasGroup _badgeSubtitleCanvas
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::CanvasGroup* badgeSubtitleCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [HeaderAttribute] Offset: 0xE1EB2C
    // private GhostDuplicationEffect _ghostDuplicationEffect
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::GhostDuplicationEffect* ghostDuplicationEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect*) == 0x8);
    // private GhostDuplicationEffect/GhostEffectParams _ghostAppear
    // Size: 0x45
    // Offset: 0x98
    GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostAppear;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams) == 0x45);
    // Padding between fields: ghostAppear and: ghostReceive
    char __padding15[0x3] = {};
    // private GhostDuplicationEffect/GhostEffectParams _ghostReceive
    // Size: 0x45
    // Offset: 0xE0
    GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostReceive;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GhostDuplicationEffect::GhostEffectParams) == 0x45);
    // Padding between fields: ghostReceive and: trophyImage
    char __padding16[0x3] = {};
    // [HeaderAttribute] Offset: 0xE1EB98
    // private HMUI.ImageView _trophyImage
    // Size: 0x8
    // Offset: 0x128
    HMUI::ImageView* trophyImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.Sprite _firstPlaceTrophy
    // Size: 0x8
    // Offset: 0x130
    UnityEngine::Sprite* firstPlaceTrophy;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _secondPlaceTrophy
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::Sprite* secondPlaceTrophy;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _thirdPlaceTrophy
    // Size: 0x8
    // Offset: 0x140
    UnityEngine::Sprite* thirdPlaceTrophy;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color _firstPlaceColor
    // Size: 0x10
    // Offset: 0x148
    UnityEngine::Color firstPlaceColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.GameObject _personalBestVisual
    // Size: 0x8
    // Offset: 0x158
    UnityEngine::GameObject* personalBestVisual;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xE1EC34
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x160
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE1EC44
    // private readonly IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x168
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private Tweening.Vector3Tween _riseTween
    // Size: 0x8
    // Offset: 0x170
    Tweening::Vector3Tween* riseTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.Vector3Tween _avatarRiseTween
    // Size: 0x8
    // Offset: 0x178
    Tweening::Vector3Tween* avatarRiseTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.Vector3Tween _badgePositionTween
    // Size: 0x8
    // Offset: 0x180
    Tweening::Vector3Tween* badgePositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.FloatTween _badgeOpacityTween
    // Size: 0x8
    // Offset: 0x188
    Tweening::FloatTween* badgeOpacityTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // private Tweening.FloatTween _nameOpacityTween
    // Size: 0x8
    // Offset: 0x190
    Tweening::FloatTween* nameOpacityTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // private Tweening.Vector3Tween _namePositionTween
    // Size: 0x8
    // Offset: 0x198
    Tweening::Vector3Tween* namePositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private Tweening.ColorTween _localGlowTween
    // Size: 0x8
    // Offset: 0x1A0
    Tweening::ColorTween* localGlowTween;
    // Field size check
    static_assert(sizeof(Tweening::ColorTween*) == 0x8);
    // private Tweening.Vector3Tween _titleMakingSpaceForBadgeTween
    // Size: 0x8
    // Offset: 0x1A8
    Tweening::Vector3Tween* titleMakingSpaceForBadgeTween;
    // Field size check
    static_assert(sizeof(Tweening::Vector3Tween*) == 0x8);
    // private UnityEngine.Vector3 _originalBadgeLocalPos
    // Size: 0xC
    // Offset: 0x1B0
    UnityEngine::Vector3 originalBadgeLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: originalBadgeLocalPos and: connectedPlayer
    char __padding33[0x4] = {};
    // [InjectAttribute] Offset: 0xE1EC54
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x1C0
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: MultiplayerResultsPyramidViewAvatar
    MultiplayerResultsPyramidViewAvatar(UnityEngine::Playables::PlayableDirector* badgeDirector_ = {}, ::Il2CppString* ghostFirstTrackName_ = {}, ::Il2CppString* ghostSecondTrackName_ = {}, UnityEngine::Transform* standWithAvatarTransform_ = {}, float perPositionRotation_ = {}, UnityEngine::Color localPlayerColor_ = {}, TMPro::TextMeshProUGUI* positionText_ = {}, TMPro::TextMeshProUGUI* nameText_ = {}, HMUI::ImageView* nameBackground_ = {}, UnityEngine::CanvasGroup* badgeCanvas_ = {}, ::Array<TMPro::TextMeshProUGUI*>* badgeTitles_ = {}, ::Array<HMUI::ImageView*>* badgeImages_ = {}, TMPro::TextMeshProUGUI* badgeSubtitleText_ = {}, UnityEngine::CanvasGroup* badgeSubtitleCanvas_ = {}, GlobalNamespace::GhostDuplicationEffect* ghostDuplicationEffect_ = {}, GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostAppear_ = {}, GlobalNamespace::GhostDuplicationEffect::GhostEffectParams ghostReceive_ = {}, HMUI::ImageView* trophyImage_ = {}, UnityEngine::Sprite* firstPlaceTrophy_ = {}, UnityEngine::Sprite* secondPlaceTrophy_ = {}, UnityEngine::Sprite* thirdPlaceTrophy_ = {}, UnityEngine::Color firstPlaceColor_ = {}, UnityEngine::GameObject* personalBestVisual_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, Tweening::Vector3Tween* riseTween_ = {}, Tweening::Vector3Tween* avatarRiseTween_ = {}, Tweening::Vector3Tween* badgePositionTween_ = {}, Tweening::FloatTween* badgeOpacityTween_ = {}, Tweening::FloatTween* nameOpacityTween_ = {}, Tweening::Vector3Tween* namePositionTween_ = {}, Tweening::ColorTween* localGlowTween_ = {}, Tweening::Vector3Tween* titleMakingSpaceForBadgeTween_ = {}, UnityEngine::Vector3 originalBadgeLocalPos_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : badgeDirector{badgeDirector_}, ghostFirstTrackName{ghostFirstTrackName_}, ghostSecondTrackName{ghostSecondTrackName_}, standWithAvatarTransform{standWithAvatarTransform_}, perPositionRotation{perPositionRotation_}, localPlayerColor{localPlayerColor_}, positionText{positionText_}, nameText{nameText_}, nameBackground{nameBackground_}, badgeCanvas{badgeCanvas_}, badgeTitles{badgeTitles_}, badgeImages{badgeImages_}, badgeSubtitleText{badgeSubtitleText_}, badgeSubtitleCanvas{badgeSubtitleCanvas_}, ghostDuplicationEffect{ghostDuplicationEffect_}, ghostAppear{ghostAppear_}, ghostReceive{ghostReceive_}, trophyImage{trophyImage_}, firstPlaceTrophy{firstPlaceTrophy_}, secondPlaceTrophy{secondPlaceTrophy_}, thirdPlaceTrophy{thirdPlaceTrophy_}, firstPlaceColor{firstPlaceColor_}, personalBestVisual{personalBestVisual_}, playerDataModel{playerDataModel_}, difficultyBeatmap{difficultyBeatmap_}, riseTween{riseTween_}, avatarRiseTween{avatarRiseTween_}, badgePositionTween{badgePositionTween_}, badgeOpacityTween{badgeOpacityTween_}, nameOpacityTween{nameOpacityTween_}, namePositionTween{namePositionTween_}, localGlowTween{localGlowTween_}, titleMakingSpaceForBadgeTween{titleMakingSpaceForBadgeTween_}, originalBadgeLocalPos{originalBadgeLocalPos_}, connectedPlayer{connectedPlayer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Playables.PlayableDirector get_badgeDirector()
    // Offset: 0x100D93C
    UnityEngine::Playables::PlayableDirector* get_badgeDirector();
    // protected System.Void Awake()
    // Offset: 0x100D944
    void Awake();
    // public System.Void Setup(MultiplayerPlayerResultsData resultData, System.Int32 position, System.Int32 playerCount)
    // Offset: 0x100D400
    void Setup(GlobalNamespace::MultiplayerPlayerResultsData* resultData, int position, int playerCount);
    // public System.Void SetupBadgeTimeline(UnityEngine.Transform startTransform, UnityEngine.Transform midTransform)
    // Offset: 0x1009964
    void SetupBadgeTimeline(UnityEngine::Transform* startTransform, UnityEngine::Transform* midTransform);
    // public System.Void .ctor()
    // Offset: 0x100D964
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsPyramidViewAvatar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerResultsPyramidViewAvatar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsPyramidViewAvatar*, creationType>()));
    }
  }; // MultiplayerResultsPyramidViewAvatar
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsPyramidViewAvatar), 448 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerResultsPyramidViewAvatarSizeCheck;
  static_assert(sizeof(MultiplayerResultsPyramidViewAvatar) == 0x1C8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, "", "MultiplayerResultsPyramidViewAvatar");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::get_badgeDirector
// Il2CppName: get_badgeDirector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableDirector* (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)()>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::get_badgeDirector)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "get_badgeDirector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)()>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)(GlobalNamespace::MultiplayerPlayerResultsData*, int, int)>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::Setup)> {
  const MethodInfo* get() {
    static auto* resultData = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultData, position, playerCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::SetupBadgeTimeline
// Il2CppName: SetupBadgeTimeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsPyramidViewAvatar::*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&GlobalNamespace::MultiplayerResultsPyramidViewAvatar::SetupBadgeTimeline)> {
  const MethodInfo* get() {
    static auto* startTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* midTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsPyramidViewAvatar*), "SetupBadgeTimeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTransform, midTransform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsPyramidViewAvatar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
