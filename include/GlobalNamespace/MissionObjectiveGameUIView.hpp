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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveChecker
  class MissionObjectiveChecker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite _notFailedIcon
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* notFailedIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _failedIcon
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* failedIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _notClearedIcon
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* notClearedIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _clearedIcon
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* clearedIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.UI.Image _resultIcon
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Image* resultIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Color _finalClearIconColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color finalClearIconColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _finalFailIconColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color finalFailIconColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _nonFinalIconColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color nonFinalIconColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.ParticleSystem _clearedPS
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::ParticleSystem* clearedPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private System.Int32 _numberOfParticles
    // Size: 0x4
    // Offset: 0x78
    int numberOfParticles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfParticles and: nameText
    char __padding9[0x4] = {};
    // [SpaceAttribute] Offset: 0xE1BA54
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _conditionText
    // Size: 0x8
    // Offset: 0x90
    TMPro::TextMeshProUGUI* conditionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private MissionObjectiveChecker _missionObjectiveChecker
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveChecker*) == 0x8);
    // Creating value type constructor for type: MissionObjectiveGameUIView
    MissionObjectiveGameUIView(UnityEngine::Sprite* notFailedIcon_ = {}, UnityEngine::Sprite* failedIcon_ = {}, UnityEngine::Sprite* notClearedIcon_ = {}, UnityEngine::Sprite* clearedIcon_ = {}, UnityEngine::UI::Image* resultIcon_ = {}, UnityEngine::Color finalClearIconColor_ = {}, UnityEngine::Color finalFailIconColor_ = {}, UnityEngine::Color nonFinalIconColor_ = {}, UnityEngine::ParticleSystem* clearedPS_ = {}, int numberOfParticles_ = {}, TMPro::TextMeshProUGUI* nameText_ = {}, TMPro::TextMeshProUGUI* valueText_ = {}, TMPro::TextMeshProUGUI* conditionText_ = {}, GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker_ = {}) noexcept : notFailedIcon{notFailedIcon_}, failedIcon{failedIcon_}, notClearedIcon{notClearedIcon_}, clearedIcon{clearedIcon_}, resultIcon{resultIcon_}, finalClearIconColor{finalClearIconColor_}, finalFailIconColor{finalFailIconColor_}, nonFinalIconColor{nonFinalIconColor_}, clearedPS{clearedPS_}, numberOfParticles{numberOfParticles_}, nameText{nameText_}, valueText{valueText_}, conditionText{conditionText_}, missionObjectiveChecker{missionObjectiveChecker_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetMissionObjectiveChecker(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x109AE44
    void SetMissionObjectiveChecker(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void HandleMissionObjectiveStatusDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x109B1F0
    void HandleMissionObjectiveStatusDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void HandleMissionObjectiveCheckedValueDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x109B1F4
    void HandleMissionObjectiveCheckedValueDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void RefreshIcon()
    // Offset: 0x109B080
    void RefreshIcon();
    // private System.Void RefreshValue()
    // Offset: 0x109B194
    void RefreshValue();
    // public System.Void .ctor()
    // Offset: 0x109B1F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveGameUIView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveGameUIView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveGameUIView*, creationType>()));
    }
  }; // MissionObjectiveGameUIView
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveGameUIView), 152 + sizeof(GlobalNamespace::MissionObjectiveChecker*)> __GlobalNamespace_MissionObjectiveGameUIViewSizeCheck;
  static_assert(sizeof(MissionObjectiveGameUIView) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveGameUIView*, "", "MissionObjectiveGameUIView");
// Writing includes for template specializations
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::SetMissionObjectiveChecker
// Il2CppName: SetMissionObjectiveChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)(GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveGameUIView::SetMissionObjectiveChecker)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "SetMissionObjectiveChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionObjectiveChecker*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveStatusDidChange
// Il2CppName: HandleMissionObjectiveStatusDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)(GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveStatusDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "HandleMissionObjectiveStatusDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionObjectiveChecker*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveCheckedValueDidChange
// Il2CppName: HandleMissionObjectiveCheckedValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)(GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveCheckedValueDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "HandleMissionObjectiveCheckedValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionObjectiveChecker*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::RefreshIcon
// Il2CppName: RefreshIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)()>(&GlobalNamespace::MissionObjectiveGameUIView::RefreshIcon)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "RefreshIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::RefreshValue
// Il2CppName: RefreshValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)()>(&GlobalNamespace::MissionObjectiveGameUIView::RefreshValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "RefreshValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
