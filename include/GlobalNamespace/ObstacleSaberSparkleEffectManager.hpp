// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSaberSparkleEffect
  class ObstacleSaberSparkleEffect;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleSaberSparkleEffectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleSaberSparkleEffectManager : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleSaberSparkleEffect _obstacleSaberSparkleEffectPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ObstacleSaberSparkleEffect* obstacleSaberSparkleEffectPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleSaberSparkleEffect*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Size: 0x8
    // Offset: 0x20
    Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // Field size check
    static_assert(sizeof(Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE36E64
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE36E74
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE36E84
    // private readonly HapticFeedbackController _hapticFeedbackController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HapticFeedbackController*) == 0x8);
    // [InjectAttribute] Offset: 0xE36E94
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private System.Action`1<SaberType> sparkleEffectDidStartEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::SaberType>* sparkleEffectDidStartEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::SaberType>*) == 0x8);
    // private System.Action`1<SaberType> sparkleEffectDidEndEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::SaberType>* sparkleEffectDidEndEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::SaberType>*) == 0x8);
    // private Saber[] _sabers
    // Size: 0x8
    // Offset: 0x58
    ::Array<GlobalNamespace::Saber*>* sabers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::Saber*>*) == 0x8);
    // private ObstacleSaberSparkleEffect[] _effects
    // Size: 0x8
    // Offset: 0x60
    ::Array<GlobalNamespace::ObstacleSaberSparkleEffect*>* effects;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ObstacleSaberSparkleEffect*>*) == 0x8);
    // private UnityEngine.Transform[] _effectsTransforms
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::Transform*>* effectsTransforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private System.Boolean[] _isSystemActive
    // Size: 0x8
    // Offset: 0x70
    ::Array<bool>* isSystemActive;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private System.Boolean[] _wasSystemActive
    // Size: 0x8
    // Offset: 0x78
    ::Array<bool>* wasSystemActive;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private UnityEngine.Vector3[] _burnMarkPositions
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::Vector3>* burnMarkPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: ObstacleSaberSparkleEffectManager
    ObstacleSaberSparkleEffectManager(GlobalNamespace::ObstacleSaberSparkleEffect* obstacleSaberSparkleEffectPrefab_ = {}, Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::HapticFeedbackController* hapticFeedbackController_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, System::Action_1<GlobalNamespace::SaberType>* sparkleEffectDidStartEvent_ = {}, System::Action_1<GlobalNamespace::SaberType>* sparkleEffectDidEndEvent_ = {}, ::Array<GlobalNamespace::Saber*>* sabers_ = {}, ::Array<GlobalNamespace::ObstacleSaberSparkleEffect*>* effects_ = {}, ::Array<UnityEngine::Transform*>* effectsTransforms_ = {}, ::Array<bool>* isSystemActive_ = {}, ::Array<bool>* wasSystemActive_ = {}, ::Array<UnityEngine::Vector3>* burnMarkPositions_ = {}) noexcept : obstacleSaberSparkleEffectPrefab{obstacleSaberSparkleEffectPrefab_}, rumblePreset{rumblePreset_}, beatmapObjectManager{beatmapObjectManager_}, saberManager{saberManager_}, hapticFeedbackController{hapticFeedbackController_}, colorManager{colorManager_}, sparkleEffectDidStartEvent{sparkleEffectDidStartEvent_}, sparkleEffectDidEndEvent{sparkleEffectDidEndEvent_}, sabers{sabers_}, effects{effects_}, effectsTransforms{effectsTransforms_}, isSystemActive{isSystemActive_}, wasSystemActive{wasSystemActive_}, burnMarkPositions{burnMarkPositions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private ObstacleSaberSparkleEffect _obstacleSaberSparkleEffectPrefab
    GlobalNamespace::ObstacleSaberSparkleEffect* _get__obstacleSaberSparkleEffectPrefab();
    // Set instance field: private ObstacleSaberSparkleEffect _obstacleSaberSparkleEffectPrefab
    void _set__obstacleSaberSparkleEffectPrefab(GlobalNamespace::ObstacleSaberSparkleEffect* value);
    // Get instance field: private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    Libraries::HM::HMLib::VR::HapticPresetSO* _get__rumblePreset();
    // Set instance field: private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    void _set__rumblePreset(Libraries::HM::HMLib::VR::HapticPresetSO* value);
    // Get instance field: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager* _get__beatmapObjectManager();
    // Set instance field: private readonly BeatmapObjectManager _beatmapObjectManager
    void _set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager* value);
    // Get instance field: private readonly SaberManager _saberManager
    GlobalNamespace::SaberManager* _get__saberManager();
    // Set instance field: private readonly SaberManager _saberManager
    void _set__saberManager(GlobalNamespace::SaberManager* value);
    // Get instance field: private readonly HapticFeedbackController _hapticFeedbackController
    GlobalNamespace::HapticFeedbackController* _get__hapticFeedbackController();
    // Set instance field: private readonly HapticFeedbackController _hapticFeedbackController
    void _set__hapticFeedbackController(GlobalNamespace::HapticFeedbackController* value);
    // Get instance field: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager* _get__colorManager();
    // Set instance field: private readonly ColorManager _colorManager
    void _set__colorManager(GlobalNamespace::ColorManager* value);
    // Get instance field: private System.Action`1<SaberType> sparkleEffectDidStartEvent
    System::Action_1<GlobalNamespace::SaberType>* _get_sparkleEffectDidStartEvent();
    // Set instance field: private System.Action`1<SaberType> sparkleEffectDidStartEvent
    void _set_sparkleEffectDidStartEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // Get instance field: private System.Action`1<SaberType> sparkleEffectDidEndEvent
    System::Action_1<GlobalNamespace::SaberType>* _get_sparkleEffectDidEndEvent();
    // Set instance field: private System.Action`1<SaberType> sparkleEffectDidEndEvent
    void _set_sparkleEffectDidEndEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // Get instance field: private Saber[] _sabers
    ::Array<GlobalNamespace::Saber*>* _get__sabers();
    // Set instance field: private Saber[] _sabers
    void _set__sabers(::Array<GlobalNamespace::Saber*>* value);
    // Get instance field: private ObstacleSaberSparkleEffect[] _effects
    ::Array<GlobalNamespace::ObstacleSaberSparkleEffect*>* _get__effects();
    // Set instance field: private ObstacleSaberSparkleEffect[] _effects
    void _set__effects(::Array<GlobalNamespace::ObstacleSaberSparkleEffect*>* value);
    // Get instance field: private UnityEngine.Transform[] _effectsTransforms
    ::Array<UnityEngine::Transform*>* _get__effectsTransforms();
    // Set instance field: private UnityEngine.Transform[] _effectsTransforms
    void _set__effectsTransforms(::Array<UnityEngine::Transform*>* value);
    // Get instance field: private System.Boolean[] _isSystemActive
    ::Array<bool>* _get__isSystemActive();
    // Set instance field: private System.Boolean[] _isSystemActive
    void _set__isSystemActive(::Array<bool>* value);
    // Get instance field: private System.Boolean[] _wasSystemActive
    ::Array<bool>* _get__wasSystemActive();
    // Set instance field: private System.Boolean[] _wasSystemActive
    void _set__wasSystemActive(::Array<bool>* value);
    // Get instance field: private UnityEngine.Vector3[] _burnMarkPositions
    ::Array<UnityEngine::Vector3>* _get__burnMarkPositions();
    // Set instance field: private UnityEngine.Vector3[] _burnMarkPositions
    void _set__burnMarkPositions(::Array<UnityEngine::Vector3>* value);
    // public System.Void add_sparkleEffectDidStartEvent(System.Action`1<SaberType> value)
    // Offset: 0x1232DD4
    void add_sparkleEffectDidStartEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // public System.Void remove_sparkleEffectDidStartEvent(System.Action`1<SaberType> value)
    // Offset: 0x1233038
    void remove_sparkleEffectDidStartEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // public System.Void add_sparkleEffectDidEndEvent(System.Action`1<SaberType> value)
    // Offset: 0x1232E78
    void add_sparkleEffectDidEndEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // public System.Void remove_sparkleEffectDidEndEvent(System.Action`1<SaberType> value)
    // Offset: 0x12330DC
    void remove_sparkleEffectDidEndEvent(System::Action_1<GlobalNamespace::SaberType>* value);
    // protected System.Void Start()
    // Offset: 0x123376C
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x12339F8
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x1233AB4
    void Update();
    // private UnityEngine.Quaternion GetEffectRotation(UnityEngine.Vector3 pos, UnityEngine.Transform transform, UnityEngine.Bounds bounds)
    // Offset: 0x123436C
    UnityEngine::Quaternion GetEffectRotation(UnityEngine::Vector3 pos, UnityEngine::Transform* transform, UnityEngine::Bounds bounds);
    // public UnityEngine.Vector3 BurnMarkPosForSaberType(SaberType saberType)
    // Offset: 0x12332C4
    UnityEngine::Vector3 BurnMarkPosForSaberType(GlobalNamespace::SaberType saberType);
    // private System.Boolean GetBurnMarkPos(UnityEngine.Bounds bounds, UnityEngine.Transform transform, UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, out UnityEngine.Vector3 burnMarkPos)
    // Offset: 0x1234114
    bool GetBurnMarkPos(UnityEngine::Bounds bounds, UnityEngine::Transform* transform, UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, ByRef<UnityEngine::Vector3> burnMarkPos);
    // public System.Void .ctor()
    // Offset: 0x1234524
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleSaberSparkleEffectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObstacleSaberSparkleEffectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleSaberSparkleEffectManager*, creationType>()));
    }
  }; // ObstacleSaberSparkleEffectManager
  #pragma pack(pop)
  static check_size<sizeof(ObstacleSaberSparkleEffectManager), 128 + sizeof(::Array<UnityEngine::Vector3>*)> __GlobalNamespace_ObstacleSaberSparkleEffectManagerSizeCheck;
  static_assert(sizeof(ObstacleSaberSparkleEffectManager) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSparkleEffectManager*, "", "ObstacleSaberSparkleEffectManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidStartEvent
// Il2CppName: add_sparkleEffectDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(System::Action_1<GlobalNamespace::SaberType>*)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SaberType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "add_sparkleEffectDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidStartEvent
// Il2CppName: remove_sparkleEffectDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(System::Action_1<GlobalNamespace::SaberType>*)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SaberType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "remove_sparkleEffectDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidEndEvent
// Il2CppName: add_sparkleEffectDidEndEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(System::Action_1<GlobalNamespace::SaberType>*)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidEndEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SaberType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "add_sparkleEffectDidEndEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidEndEvent
// Il2CppName: remove_sparkleEffectDidEndEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(System::Action_1<GlobalNamespace::SaberType>*)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidEndEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SaberType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "remove_sparkleEffectDidEndEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)()>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)()>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)()>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::GetEffectRotation
// Il2CppName: GetEffectRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(UnityEngine::Vector3, UnityEngine::Transform*, UnityEngine::Bounds)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::GetEffectRotation)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "GetEffectRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, transform, bounds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::BurnMarkPosForSaberType
// Il2CppName: BurnMarkPosForSaberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::BurnMarkPosForSaberType)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "BurnMarkPosForSaberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::GetBurnMarkPos
// Il2CppName: GetBurnMarkPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(UnityEngine::Bounds, UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::ObstacleSaberSparkleEffectManager::GetBurnMarkPos)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bladeBottomPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bladeTopPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* burnMarkPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleSaberSparkleEffectManager*), "GetBurnMarkPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds, transform, bladeBottomPos, bladeTopPos, burnMarkPos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleSaberSparkleEffectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
