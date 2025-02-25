// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
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
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: LightSwitchEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LightSwitchEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _lightColor0
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* lightColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor1
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* lightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor0
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSO* highlightColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* highlightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor0Boost
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSO* lightColor0Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor1Boost
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorSO* lightColor1Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor0Boost
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorSO* highlightColor0Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1Boost
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ColorSO* highlightColor1Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private System.Single _offColorIntensity
    // Size: 0x4
    // Offset: 0x58
    float offColorIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _lightOnStart
    // Size: 0x1
    // Offset: 0x5C
    bool lightOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightOnStart and: lightsID
    char __padding9[0x3] = {};
    // private System.Int32 _lightsID
    // Size: 0x4
    // Offset: 0x60
    int lightsID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapEventType _event
    // Size: 0x4
    // Offset: 0x64
    GlobalNamespace::BeatmapEventType event;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // private BeatmapEventType _colorBoostEvent
    // Size: 0x4
    // Offset: 0x68
    GlobalNamespace::BeatmapEventType colorBoostEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: colorBoostEvent and: lightManager
    char __padding12[0x4] = {};
    // [InjectAttribute] Offset: 0xE3DE50
    // private readonly LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightWithIdManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3DE60
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Boolean _lightIsOn
    // Size: 0x1
    // Offset: 0x80
    bool lightIsOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightIsOn and: offColor
    char __padding15[0x3] = {};
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x84
    UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _highlightValue
    // Size: 0x4
    // Offset: 0x94
    float highlightValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _afterHighlightColor
    // Size: 0x10
    // Offset: 0x98
    UnityEngine::Color afterHighlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightColor
    // Size: 0x10
    // Offset: 0xA8
    UnityEngine::Color highlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0xB8
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _colorBoost
    // Size: 0x1
    // Offset: 0xB9
    bool colorBoost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: colorBoost and: prevLightSwitchBeatmapEventDataValue
    char __padding21[0x2] = {};
    // private System.Int32 _prevLightSwitchBeatmapEventDataValue
    // Size: 0x4
    // Offset: 0xBC
    int prevLightSwitchBeatmapEventDataValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LightSwitchEventEffect
    LightSwitchEventEffect(GlobalNamespace::ColorSO* lightColor0_ = {}, GlobalNamespace::ColorSO* lightColor1_ = {}, GlobalNamespace::ColorSO* highlightColor0_ = {}, GlobalNamespace::ColorSO* highlightColor1_ = {}, GlobalNamespace::ColorSO* lightColor0Boost_ = {}, GlobalNamespace::ColorSO* lightColor1Boost_ = {}, GlobalNamespace::ColorSO* highlightColor0Boost_ = {}, GlobalNamespace::ColorSO* highlightColor1Boost_ = {}, float offColorIntensity_ = {}, bool lightOnStart_ = {}, int lightsID_ = {}, GlobalNamespace::BeatmapEventType event_ = {}, GlobalNamespace::BeatmapEventType colorBoostEvent_ = {}, GlobalNamespace::LightWithIdManager* lightManager_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, bool lightIsOn_ = {}, UnityEngine::Color offColor_ = {}, float highlightValue_ = {}, UnityEngine::Color afterHighlightColor_ = {}, UnityEngine::Color highlightColor_ = {}, bool initialized_ = {}, bool colorBoost_ = {}, int prevLightSwitchBeatmapEventDataValue_ = {}) noexcept : lightColor0{lightColor0_}, lightColor1{lightColor1_}, highlightColor0{highlightColor0_}, highlightColor1{highlightColor1_}, lightColor0Boost{lightColor0Boost_}, lightColor1Boost{lightColor1Boost_}, highlightColor0Boost{highlightColor0Boost_}, highlightColor1Boost{highlightColor1Boost_}, offColorIntensity{offColorIntensity_}, lightOnStart{lightOnStart_}, lightsID{lightsID_}, event{event_}, colorBoostEvent{colorBoostEvent_}, lightManager{lightManager_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, lightIsOn{lightIsOn_}, offColor{offColor_}, highlightValue{highlightValue_}, afterHighlightColor{afterHighlightColor_}, highlightColor{highlightColor_}, initialized{initialized_}, colorBoost{colorBoost_}, prevLightSwitchBeatmapEventDataValue{prevLightSwitchBeatmapEventDataValue_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kFadeSpeed
    static constexpr const float kFadeSpeed = 3;
    // Get static field: static private System.Single kFadeSpeed
    static float _get_kFadeSpeed();
    // Set static field: static private System.Single kFadeSpeed
    static void _set_kFadeSpeed(float value);
    // Get instance field reference: private ColorSO _lightColor0
    GlobalNamespace::ColorSO*& dyn__lightColor0();
    // Get instance field reference: private ColorSO _lightColor1
    GlobalNamespace::ColorSO*& dyn__lightColor1();
    // Get instance field reference: private ColorSO _highlightColor0
    GlobalNamespace::ColorSO*& dyn__highlightColor0();
    // Get instance field reference: private ColorSO _highlightColor1
    GlobalNamespace::ColorSO*& dyn__highlightColor1();
    // Get instance field reference: private ColorSO _lightColor0Boost
    GlobalNamespace::ColorSO*& dyn__lightColor0Boost();
    // Get instance field reference: private ColorSO _lightColor1Boost
    GlobalNamespace::ColorSO*& dyn__lightColor1Boost();
    // Get instance field reference: private ColorSO _highlightColor0Boost
    GlobalNamespace::ColorSO*& dyn__highlightColor0Boost();
    // Get instance field reference: private ColorSO _highlightColor1Boost
    GlobalNamespace::ColorSO*& dyn__highlightColor1Boost();
    // Get instance field reference: private System.Single _offColorIntensity
    float& dyn__offColorIntensity();
    // Get instance field reference: private System.Boolean _lightOnStart
    bool& dyn__lightOnStart();
    // Get instance field reference: private System.Int32 _lightsID
    int& dyn__lightsID();
    // Get instance field reference: private BeatmapEventType _event
    GlobalNamespace::BeatmapEventType& dyn__event();
    // Get instance field reference: private BeatmapEventType _colorBoostEvent
    GlobalNamespace::BeatmapEventType& dyn__colorBoostEvent();
    // Get instance field reference: private readonly LightWithIdManager _lightManager
    GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private System.Boolean _lightIsOn
    bool& dyn__lightIsOn();
    // Get instance field reference: private UnityEngine.Color _offColor
    UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private System.Single _highlightValue
    float& dyn__highlightValue();
    // Get instance field reference: private UnityEngine.Color _afterHighlightColor
    UnityEngine::Color& dyn__afterHighlightColor();
    // Get instance field reference: private UnityEngine.Color _highlightColor
    UnityEngine::Color& dyn__highlightColor();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // Get instance field reference: private System.Boolean _colorBoost
    bool& dyn__colorBoost();
    // Get instance field reference: private System.Int32 _prevLightSwitchBeatmapEventDataValue
    int& dyn__prevLightSwitchBeatmapEventDataValue();
    // public System.Int32 get_lightsId()
    // Offset: 0x1206D40
    int get_lightsId();
    // protected System.Void Start()
    // Offset: 0x1206D48
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x1206E38
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1206F38
    void Update();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x12070D4
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void ProcessLightSwitchEvent(System.Int32 beatmapEventDataValue, System.Boolean updateColorsOnly)
    // Offset: 0x120715C
    void ProcessLightSwitchEvent(int beatmapEventDataValue, bool updateColorsOnly);
    // private UnityEngine.Color GetNormalColor(System.Int32 beatmapEventValue)
    // Offset: 0x1207328
    UnityEngine::Color GetNormalColor(int beatmapEventValue);
    // private UnityEngine.Color GetHighlightColor(System.Int32 beatmapEventValue)
    // Offset: 0x1207384
    UnityEngine::Color GetHighlightColor(int beatmapEventValue);
    // private System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x12070B0
    void SetColor(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x12073E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightSwitchEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightSwitchEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightSwitchEventEffect*, creationType>()));
    }
  }; // LightSwitchEventEffect
  #pragma pack(pop)
  static check_size<sizeof(LightSwitchEventEffect), 188 + sizeof(int)> __GlobalNamespace_LightSwitchEventEffectSizeCheck;
  static_assert(sizeof(LightSwitchEventEffect) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightSwitchEventEffect*, "", "LightSwitchEventEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::get_lightsId
// Il2CppName: get_lightsId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::get_lightsId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "get_lightsId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::LightSwitchEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::ProcessLightSwitchEvent
// Il2CppName: ProcessLightSwitchEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(int, bool)>(&GlobalNamespace::LightSwitchEventEffect::ProcessLightSwitchEvent)> {
  static const MethodInfo* get() {
    static auto* beatmapEventDataValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* updateColorsOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "ProcessLightSwitchEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventDataValue, updateColorsOnly});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::GetNormalColor
// Il2CppName: GetNormalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightSwitchEventEffect::*)(int)>(&GlobalNamespace::LightSwitchEventEffect::GetNormalColor)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "GetNormalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::GetHighlightColor
// Il2CppName: GetHighlightColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightSwitchEventEffect::*)(int)>(&GlobalNamespace::LightSwitchEventEffect::GetHighlightColor)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "GetHighlightColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(UnityEngine::Color)>(&GlobalNamespace::LightSwitchEventEffect::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightSwitchEventEffect*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightSwitchEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
