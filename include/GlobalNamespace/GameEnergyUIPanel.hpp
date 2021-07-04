// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IGameEnergyCounter
  class IGameEnergyCounter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GameEnergyUIPanel
  class GameEnergyUIPanel : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _energyBar
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Image* energyBar;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Playables.PlayableDirector _playableDirector
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Playables::PlayableDirector* playableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1B8F4
    // private UnityEngine.UI.Image _batteryLifeSegmentPrefab
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Image* batteryLifeSegmentPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1B92C
    // private System.Single _batterySegmentSeparatorWidth
    // Size: 0x4
    // Offset: 0x30
    float batterySegmentSeparatorWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _batterySegmentHorizontalPadding
    // Size: 0x4
    // Offset: 0x34
    float batterySegmentHorizontalPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xE1B974
    // private readonly IGameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IGameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameEnergyCounter*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UI.Image> _batteryLifeSegments
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::UI::Image*>* batteryLifeSegments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Image*>*) == 0x8);
    // private System.Int32 _activeBatteryLifeSegmentsCount
    // Size: 0x4
    // Offset: 0x48
    int activeBatteryLifeSegmentsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: activeBatteryLifeSegmentsCount and: energyBarRectTransform
    char __padding7[0x4] = {};
    // private UnityEngine.RectTransform _energyBarRectTransform
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::RectTransform* energyBarRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // Creating value type constructor for type: GameEnergyUIPanel
    GameEnergyUIPanel(UnityEngine::UI::Image* energyBar_ = {}, UnityEngine::Playables::PlayableDirector* playableDirector_ = {}, UnityEngine::UI::Image* batteryLifeSegmentPrefab_ = {}, float batterySegmentSeparatorWidth_ = {}, float batterySegmentHorizontalPadding_ = {}, GlobalNamespace::IGameEnergyCounter* gameEnergyCounter_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::Image*>* batteryLifeSegments_ = {}, int activeBatteryLifeSegmentsCount_ = {}, UnityEngine::RectTransform* energyBarRectTransform_ = {}) noexcept : energyBar{energyBar_}, playableDirector{playableDirector_}, batteryLifeSegmentPrefab{batteryLifeSegmentPrefab_}, batterySegmentSeparatorWidth{batterySegmentSeparatorWidth_}, batterySegmentHorizontalPadding{batterySegmentHorizontalPadding_}, gameEnergyCounter{gameEnergyCounter_}, batteryLifeSegments{batteryLifeSegments_}, activeBatteryLifeSegmentsCount{activeBatteryLifeSegmentsCount_}, energyBarRectTransform{energyBarRectTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x107ED98
    void Start();
    // private System.Void Init()
    // Offset: 0x107EF18
    void Init();
    // protected System.Void OnDestroy()
    // Offset: 0x107F8D4
    void OnDestroy();
    // private System.Void CreateUIForBatteryEnergyType(System.Int32 batteryLives)
    // Offset: 0x107F2C0
    void CreateUIForBatteryEnergyType(int batteryLives);
    // private System.Void RefreshEnergyUI(System.Single energy)
    // Offset: 0x107F5B0
    void RefreshEnergyUI(float energy);
    // private System.Void HandleGameEnergyCounterDidInit()
    // Offset: 0x107FA74
    void HandleGameEnergyCounterDidInit();
    // private System.Void HandleGameEnergyDidChange(System.Single energy)
    // Offset: 0x107FA78
    void HandleGameEnergyDidChange(float energy);
    // public System.Void .ctor()
    // Offset: 0x107FA7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameEnergyUIPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameEnergyUIPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameEnergyUIPanel*, creationType>()));
    }
  }; // GameEnergyUIPanel
  #pragma pack(pop)
  static check_size<sizeof(GameEnergyUIPanel), 80 + sizeof(UnityEngine::RectTransform*)> __GlobalNamespace_GameEnergyUIPanelSizeCheck;
  static_assert(sizeof(GameEnergyUIPanel) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameEnergyUIPanel*, "", "GameEnergyUIPanel");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)()>(&GlobalNamespace::GameEnergyUIPanel::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)()>(&GlobalNamespace::GameEnergyUIPanel::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)()>(&GlobalNamespace::GameEnergyUIPanel::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::CreateUIForBatteryEnergyType
// Il2CppName: CreateUIForBatteryEnergyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)(int)>(&GlobalNamespace::GameEnergyUIPanel::CreateUIForBatteryEnergyType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "CreateUIForBatteryEnergyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::RefreshEnergyUI
// Il2CppName: RefreshEnergyUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)(float)>(&GlobalNamespace::GameEnergyUIPanel::RefreshEnergyUI)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "RefreshEnergyUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::HandleGameEnergyCounterDidInit
// Il2CppName: HandleGameEnergyCounterDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)()>(&GlobalNamespace::GameEnergyUIPanel::HandleGameEnergyCounterDidInit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "HandleGameEnergyCounterDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::HandleGameEnergyDidChange
// Il2CppName: HandleGameEnergyDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyUIPanel::*)(float)>(&GlobalNamespace::GameEnergyUIPanel::HandleGameEnergyDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyUIPanel*), "HandleGameEnergyDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyUIPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
