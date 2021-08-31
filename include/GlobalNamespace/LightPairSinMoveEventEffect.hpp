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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: LightPairSinMoveEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LightPairSinMoveEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LightPairSinMoveEventEffect::MovementData
    class MovementData;
    // private BeatmapEventType _eventL
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType eventL;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // private BeatmapEventType _eventR
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::BeatmapEventType eventR;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // private BeatmapEventType _switchOverrideRandomValuesEvent
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType switchOverrideRandomValuesEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0xE37CC4
    // private System.Boolean _overrideRandomValues
    // Size: 0x1
    // Offset: 0x24
    bool overrideRandomValues;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideRandomValues and: startValueOffset
    char __padding3[0x3] = {};
    // [TooltipAttribute] Offset: 0xE37CFC
    // private System.Single _startValueOffset
    // Size: 0x4
    // Offset: 0x28
    float startValueOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _startPositionOffset
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 startPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPositionOffset
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 endPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: endPositionOffset and: transformL
    char __padding6[0x4] = {};
    // [SpaceAttribute] Offset: 0xE37D68
    // private UnityEngine.Transform _transformL
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* transformL;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _transformR
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* transformR;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE37DB0
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private LightPairSinMoveEventEffect/MovementData _movementDataL
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementDataL;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightPairSinMoveEventEffect::MovementData*) == 0x8);
    // private LightPairSinMoveEventEffect/MovementData _movementDataR
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementDataR;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightPairSinMoveEventEffect::MovementData*) == 0x8);
    // private System.Int32 _randomGenerationFrameNum
    // Size: 0x4
    // Offset: 0x70
    int randomGenerationFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _randomStartOffset
    // Size: 0x4
    // Offset: 0x74
    float randomStartOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: LightPairSinMoveEventEffect
    LightPairSinMoveEventEffect(GlobalNamespace::BeatmapEventType eventL_ = {}, GlobalNamespace::BeatmapEventType eventR_ = {}, GlobalNamespace::BeatmapEventType switchOverrideRandomValuesEvent_ = {}, bool overrideRandomValues_ = {}, float startValueOffset_ = {}, UnityEngine::Vector3 startPositionOffset_ = {}, UnityEngine::Vector3 endPositionOffset_ = {}, UnityEngine::Transform* transformL_ = {}, UnityEngine::Transform* transformR_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementDataL_ = {}, GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementDataR_ = {}, int randomGenerationFrameNum_ = {}, float randomStartOffset_ = {}) noexcept : eventL{eventL_}, eventR{eventR_}, switchOverrideRandomValuesEvent{switchOverrideRandomValuesEvent_}, overrideRandomValues{overrideRandomValues_}, startValueOffset{startValueOffset_}, startPositionOffset{startPositionOffset_}, endPositionOffset{endPositionOffset_}, transformL{transformL_}, transformR{transformR_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, movementDataL{movementDataL_}, movementDataR{movementDataR_}, randomGenerationFrameNum{randomGenerationFrameNum_}, randomStartOffset{randomStartOffset_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSpeedMultiplier
    static constexpr const float kSpeedMultiplier = 1;
    // Get static field: static private System.Single kSpeedMultiplier
    static float _get_kSpeedMultiplier();
    // Set static field: static private System.Single kSpeedMultiplier
    static void _set_kSpeedMultiplier(float value);
    // Get instance field: private BeatmapEventType _eventL
    GlobalNamespace::BeatmapEventType _get__eventL();
    // Set instance field: private BeatmapEventType _eventL
    void _set__eventL(GlobalNamespace::BeatmapEventType value);
    // Get instance field: private BeatmapEventType _eventR
    GlobalNamespace::BeatmapEventType _get__eventR();
    // Set instance field: private BeatmapEventType _eventR
    void _set__eventR(GlobalNamespace::BeatmapEventType value);
    // Get instance field: private BeatmapEventType _switchOverrideRandomValuesEvent
    GlobalNamespace::BeatmapEventType _get__switchOverrideRandomValuesEvent();
    // Set instance field: private BeatmapEventType _switchOverrideRandomValuesEvent
    void _set__switchOverrideRandomValuesEvent(GlobalNamespace::BeatmapEventType value);
    // Get instance field: private System.Boolean _overrideRandomValues
    bool _get__overrideRandomValues();
    // Set instance field: private System.Boolean _overrideRandomValues
    void _set__overrideRandomValues(bool value);
    // Get instance field: private System.Single _startValueOffset
    float _get__startValueOffset();
    // Set instance field: private System.Single _startValueOffset
    void _set__startValueOffset(float value);
    // Get instance field: private UnityEngine.Vector3 _startPositionOffset
    UnityEngine::Vector3 _get__startPositionOffset();
    // Set instance field: private UnityEngine.Vector3 _startPositionOffset
    void _set__startPositionOffset(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 _endPositionOffset
    UnityEngine::Vector3 _get__endPositionOffset();
    // Set instance field: private UnityEngine.Vector3 _endPositionOffset
    void _set__endPositionOffset(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Transform _transformL
    UnityEngine::Transform* _get__transformL();
    // Set instance field: private UnityEngine.Transform _transformL
    void _set__transformL(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _transformR
    UnityEngine::Transform* _get__transformR();
    // Set instance field: private UnityEngine.Transform _transformR
    void _set__transformR(UnityEngine::Transform* value);
    // Get instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController* _get__beatmapObjectCallbackController();
    // Set instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    void _set__beatmapObjectCallbackController(GlobalNamespace::IBeatmapObjectCallbackController* value);
    // Get instance field: private LightPairSinMoveEventEffect/MovementData _movementDataL
    GlobalNamespace::LightPairSinMoveEventEffect::MovementData* _get__movementDataL();
    // Set instance field: private LightPairSinMoveEventEffect/MovementData _movementDataL
    void _set__movementDataL(GlobalNamespace::LightPairSinMoveEventEffect::MovementData* value);
    // Get instance field: private LightPairSinMoveEventEffect/MovementData _movementDataR
    GlobalNamespace::LightPairSinMoveEventEffect::MovementData* _get__movementDataR();
    // Set instance field: private LightPairSinMoveEventEffect/MovementData _movementDataR
    void _set__movementDataR(GlobalNamespace::LightPairSinMoveEventEffect::MovementData* value);
    // Get instance field: private System.Int32 _randomGenerationFrameNum
    int _get__randomGenerationFrameNum();
    // Set instance field: private System.Int32 _randomGenerationFrameNum
    void _set__randomGenerationFrameNum(int value);
    // Get instance field: private System.Single _randomStartOffset
    float _get__randomStartOffset();
    // Set instance field: private System.Single _randomStartOffset
    void _set__randomStartOffset(float value);
    // protected System.Void Start()
    // Offset: 0x11FF258
    void Start();
    // protected System.Void Update()
    // Offset: 0x11FF584
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x11FF880
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x11FF980
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void UpdateMovementData(System.Int32 beatmapEventDataValue, LightPairSinMoveEventEffect/MovementData movementData, System.Single movementValueOffset)
    // Offset: 0x11FFB7C
    void UpdateMovementData(int beatmapEventDataValue, GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementData, float movementValueOffset);
    // public System.Void .ctor()
    // Offset: 0x11FFDC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightPairSinMoveEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightPairSinMoveEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightPairSinMoveEventEffect*, creationType>()));
    }
  }; // LightPairSinMoveEventEffect
  #pragma pack(pop)
  static check_size<sizeof(LightPairSinMoveEventEffect), 116 + sizeof(float)> __GlobalNamespace_LightPairSinMoveEventEffectSizeCheck;
  static_assert(sizeof(LightPairSinMoveEventEffect) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairSinMoveEventEffect*, "", "LightPairSinMoveEventEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&GlobalNamespace::LightPairSinMoveEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&GlobalNamespace::LightPairSinMoveEventEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData
// Il2CppName: UpdateMovementData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)(int, GlobalNamespace::LightPairSinMoveEventEffect::MovementData*, float)>(&GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventDataValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* movementData = &::il2cpp_utils::GetClassFromName("", "LightPairSinMoveEventEffect/MovementData")->byval_arg;
    static auto* movementValueOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "UpdateMovementData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventDataValue, movementData, movementValueOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
