// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultObjectiveListItemsList
  class ResultObjectiveListItemsList;
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: MissionResultsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionResultsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28
    class $StartFireworksAfterDelay$d__28;
    // Nested type: GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // private UnityEngine.GameObject _failedBannerGo
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::GameObject* failedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _clearedBannerGo
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* clearedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _missionNameText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* missionNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _songNameText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* songNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Sprite _successIcon
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Sprite* successIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _successIconGlow
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Sprite* successIconGlow;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color _successColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color successColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Sprite _failIcon
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Sprite* failIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _failIconGlow
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Sprite* failIconGlow;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color _failColor
    // Size: 0x10
    // Offset: 0xC0
    UnityEngine::Color failColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private ResultObjectiveListItemsList _resultObjectiveListItemList
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::ResultObjectiveListItemsList* resultObjectiveListItemList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultObjectiveListItemsList*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _retryButton
    // Size: 0x8
    // Offset: 0xE0
    UnityEngine::UI::Button* retryButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xE423D4
    // private UnityEngine.AudioClip _levelClearedAudioClip
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::AudioClip* levelClearedAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0xE4240C
    // private readonly FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworksController*) == 0x8);
    // [InjectAttribute] Offset: 0xE4241C
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // private System.Action`1<MissionResultsViewController> continueButtonPressedEvent
    // Size: 0x8
    // Offset: 0x100
    System::Action_1<GlobalNamespace::MissionResultsViewController*>* continueButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionResultsViewController*>*) == 0x8);
    // private System.Action`1<MissionResultsViewController> retryButtonPressedEvent
    // Size: 0x8
    // Offset: 0x108
    System::Action_1<GlobalNamespace::MissionResultsViewController*>* retryButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionResultsViewController*>*) == 0x8);
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // private MissionCompletionResults _missionCompletionResults
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MissionCompletionResults* missionCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionCompletionResults*) == 0x8);
    // private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    // Size: 0x8
    // Offset: 0x120
    UnityEngine::Coroutine* startFireworksAfterDelayCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // Creating value type constructor for type: MissionResultsViewController
    MissionResultsViewController(UnityEngine::GameObject* failedBannerGo_ = {}, UnityEngine::GameObject* clearedBannerGo_ = {}, TMPro::TextMeshProUGUI* missionNameText_ = {}, TMPro::TextMeshProUGUI* songNameText_ = {}, UnityEngine::Sprite* successIcon_ = {}, UnityEngine::Sprite* successIconGlow_ = {}, UnityEngine::Color successColor_ = {}, UnityEngine::Sprite* failIcon_ = {}, UnityEngine::Sprite* failIconGlow_ = {}, UnityEngine::Color failColor_ = {}, GlobalNamespace::ResultObjectiveListItemsList* resultObjectiveListItemList_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::UI::Button* retryButton_ = {}, UnityEngine::AudioClip* levelClearedAudioClip_ = {}, GlobalNamespace::FireworksController* fireworksController_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, System::Action_1<GlobalNamespace::MissionResultsViewController*>* continueButtonPressedEvent_ = {}, System::Action_1<GlobalNamespace::MissionResultsViewController*>* retryButtonPressedEvent_ = {}, GlobalNamespace::MissionNode* missionNode_ = {}, GlobalNamespace::MissionCompletionResults* missionCompletionResults_ = {}, UnityEngine::Coroutine* startFireworksAfterDelayCoroutine_ = {}) noexcept : failedBannerGo{failedBannerGo_}, clearedBannerGo{clearedBannerGo_}, missionNameText{missionNameText_}, songNameText{songNameText_}, successIcon{successIcon_}, successIconGlow{successIconGlow_}, successColor{successColor_}, failIcon{failIcon_}, failIconGlow{failIconGlow_}, failColor{failColor_}, resultObjectiveListItemList{resultObjectiveListItemList_}, continueButton{continueButton_}, retryButton{retryButton_}, levelClearedAudioClip{levelClearedAudioClip_}, fireworksController{fireworksController_}, songPreviewPlayer{songPreviewPlayer_}, continueButtonPressedEvent{continueButtonPressedEvent_}, retryButtonPressedEvent{retryButtonPressedEvent_}, missionNode{missionNode_}, missionCompletionResults{missionCompletionResults_}, startFireworksAfterDelayCoroutine{startFireworksAfterDelayCoroutine_} {}
    // Get instance field reference: private UnityEngine.GameObject _failedBannerGo
    UnityEngine::GameObject*& dyn__failedBannerGo();
    // Get instance field reference: private UnityEngine.GameObject _clearedBannerGo
    UnityEngine::GameObject*& dyn__clearedBannerGo();
    // Get instance field reference: private TMPro.TextMeshProUGUI _missionNameText
    TMPro::TextMeshProUGUI*& dyn__missionNameText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _songNameText
    TMPro::TextMeshProUGUI*& dyn__songNameText();
    // Get instance field reference: private UnityEngine.Sprite _successIcon
    UnityEngine::Sprite*& dyn__successIcon();
    // Get instance field reference: private UnityEngine.Sprite _successIconGlow
    UnityEngine::Sprite*& dyn__successIconGlow();
    // Get instance field reference: private UnityEngine.Color _successColor
    UnityEngine::Color& dyn__successColor();
    // Get instance field reference: private UnityEngine.Sprite _failIcon
    UnityEngine::Sprite*& dyn__failIcon();
    // Get instance field reference: private UnityEngine.Sprite _failIconGlow
    UnityEngine::Sprite*& dyn__failIconGlow();
    // Get instance field reference: private UnityEngine.Color _failColor
    UnityEngine::Color& dyn__failColor();
    // Get instance field reference: private ResultObjectiveListItemsList _resultObjectiveListItemList
    GlobalNamespace::ResultObjectiveListItemsList*& dyn__resultObjectiveListItemList();
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private UnityEngine.UI.Button _retryButton
    UnityEngine::UI::Button*& dyn__retryButton();
    // Get instance field reference: private UnityEngine.AudioClip _levelClearedAudioClip
    UnityEngine::AudioClip*& dyn__levelClearedAudioClip();
    // Get instance field reference: private readonly FireworksController _fireworksController
    GlobalNamespace::FireworksController*& dyn__fireworksController();
    // Get instance field reference: private readonly SongPreviewPlayer _songPreviewPlayer
    GlobalNamespace::SongPreviewPlayer*& dyn__songPreviewPlayer();
    // Get instance field reference: private System.Action`1<MissionResultsViewController> continueButtonPressedEvent
    System::Action_1<GlobalNamespace::MissionResultsViewController*>*& dyn_continueButtonPressedEvent();
    // Get instance field reference: private System.Action`1<MissionResultsViewController> retryButtonPressedEvent
    System::Action_1<GlobalNamespace::MissionResultsViewController*>*& dyn_retryButtonPressedEvent();
    // Get instance field reference: private MissionNode _missionNode
    GlobalNamespace::MissionNode*& dyn__missionNode();
    // Get instance field reference: private MissionCompletionResults _missionCompletionResults
    GlobalNamespace::MissionCompletionResults*& dyn__missionCompletionResults();
    // Get instance field reference: private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    UnityEngine::Coroutine*& dyn__startFireworksAfterDelayCoroutine();
    // public System.Void add_continueButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x11D8BD0
    void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void remove_continueButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x11D8C78
    void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void add_retryButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x11D8D20
    void add_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void remove_retryButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x11D8DC8
    void remove_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void Init(MissionNode missionNode, MissionCompletionResults missionCompletionResults)
    // Offset: 0x11D8E70
    void Init(GlobalNamespace::MissionNode* missionNode, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Collections.IEnumerator StartFireworksAfterDelay(System.Single delay)
    // Offset: 0x11D9230
    System::Collections::IEnumerator* StartFireworksAfterDelay(float delay);
    // private System.Void SetDataToUI()
    // Offset: 0x11D8FF0
    void SetDataToUI();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x11D932C
    void ContinueButtonPressed();
    // private System.Void RetryButtonPressed()
    // Offset: 0x11D9390
    void RetryButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x11D93F4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionResultsViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11D8E78
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x11D92B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // MissionResultsViewController
  #pragma pack(pop)
  static check_size<sizeof(MissionResultsViewController), 288 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_MissionResultsViewControllerSizeCheck;
  static_assert(sizeof(MissionResultsViewController) == 0x128);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController*, "", "MissionResultsViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::add_continueButtonPressedEvent
// Il2CppName: add_continueButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(System::Action_1<GlobalNamespace::MissionResultsViewController*>*)>(&GlobalNamespace::MissionResultsViewController::add_continueButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "add_continueButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::remove_continueButtonPressedEvent
// Il2CppName: remove_continueButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(System::Action_1<GlobalNamespace::MissionResultsViewController*>*)>(&GlobalNamespace::MissionResultsViewController::remove_continueButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "remove_continueButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::add_retryButtonPressedEvent
// Il2CppName: add_retryButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(System::Action_1<GlobalNamespace::MissionResultsViewController*>*)>(&GlobalNamespace::MissionResultsViewController::add_retryButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "add_retryButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::remove_retryButtonPressedEvent
// Il2CppName: remove_retryButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(System::Action_1<GlobalNamespace::MissionResultsViewController*>*)>(&GlobalNamespace::MissionResultsViewController::remove_retryButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "remove_retryButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(GlobalNamespace::MissionNode*, GlobalNamespace::MissionCompletionResults*)>(&GlobalNamespace::MissionResultsViewController::Init)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* missionCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode, missionCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::StartFireworksAfterDelay
// Il2CppName: StartFireworksAfterDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MissionResultsViewController::*)(float)>(&GlobalNamespace::MissionResultsViewController::StartFireworksAfterDelay)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "StartFireworksAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::SetDataToUI
// Il2CppName: SetDataToUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)()>(&GlobalNamespace::MissionResultsViewController::SetDataToUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "SetDataToUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::ContinueButtonPressed
// Il2CppName: ContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)()>(&GlobalNamespace::MissionResultsViewController::ContinueButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "ContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::RetryButtonPressed
// Il2CppName: RetryButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)()>(&GlobalNamespace::MissionResultsViewController::RetryButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "RetryButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionResultsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::*)(bool, bool)>(&GlobalNamespace::MissionResultsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
