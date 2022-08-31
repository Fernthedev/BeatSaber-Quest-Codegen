// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightPairSinMoveEventEffect
  class LightPairSinMoveEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightPairSinMoveEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairSinMoveEventEffect*, "", "LightPairSinMoveEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: LightPairSinMoveEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class LightPairSinMoveEventEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData
    class MovementData;
    public:
    // private BasicBeatmapEventType _eventL
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BasicBeatmapEventType eventL;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // private BasicBeatmapEventType _eventR
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::BasicBeatmapEventType eventR;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // private BasicBeatmapEventType _switchOverrideRandomValuesEvent
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BasicBeatmapEventType switchOverrideRandomValuesEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0x10E82A8
    // private System.Boolean _overrideRandomValues
    // Size: 0x1
    // Offset: 0x24
    bool overrideRandomValues;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideRandomValues and: startValueOffset
    char __padding3[0x3] = {};
    // [TooltipAttribute] Offset: 0x10E82E0
    // private System.Single _startValueOffset
    // Size: 0x4
    // Offset: 0x28
    float startValueOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _startPositionOffset
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 startPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPositionOffset
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 endPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: endPositionOffset and: transformL
    char __padding6[0x4] = {};
    // [SpaceAttribute] Offset: 0x10E834C
    // private UnityEngine.Transform _transformL
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* transformL;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _transformR
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* transformR;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0x10E8394
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x10E83A4
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private LightPairSinMoveEventEffect/MovementData _movementDataL
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementDataL;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightPairSinMoveEventEffect::MovementData*) == 0x8);
    // private LightPairSinMoveEventEffect/MovementData _movementDataR
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementDataR;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightPairSinMoveEventEffect::MovementData*) == 0x8);
    // private System.Int32 _randomGenerationFrameNum
    // Size: 0x4
    // Offset: 0x78
    int randomGenerationFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _randomStartOffset
    // Size: 0x4
    // Offset: 0x7C
    float randomStartOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSpeedMultiplier
    static constexpr const float kSpeedMultiplier = 1;
    // Get static field: static private System.Single kSpeedMultiplier
    static float _get_kSpeedMultiplier();
    // Set static field: static private System.Single kSpeedMultiplier
    static void _set_kSpeedMultiplier(float value);
    // Get instance field reference: private BasicBeatmapEventType _eventL
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__eventL();
    // Get instance field reference: private BasicBeatmapEventType _eventR
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__eventR();
    // Get instance field reference: private BasicBeatmapEventType _switchOverrideRandomValuesEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__switchOverrideRandomValuesEvent();
    // Get instance field reference: private System.Boolean _overrideRandomValues
    [[deprecated("Use field access instead!")]] bool& dyn__overrideRandomValues();
    // Get instance field reference: private System.Single _startValueOffset
    [[deprecated("Use field access instead!")]] float& dyn__startValueOffset();
    // Get instance field reference: private UnityEngine.Vector3 _startPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startPositionOffset();
    // Get instance field reference: private UnityEngine.Vector3 _endPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__endPositionOffset();
    // Get instance field reference: private UnityEngine.Transform _transformL
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transformL();
    // Get instance field reference: private UnityEngine.Transform _transformR
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transformR();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private LightPairSinMoveEventEffect/MovementData _movementDataL
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData*& dyn__movementDataL();
    // Get instance field reference: private LightPairSinMoveEventEffect/MovementData _movementDataR
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData*& dyn__movementDataR();
    // Get instance field reference: private System.Int32 _randomGenerationFrameNum
    [[deprecated("Use field access instead!")]] int& dyn__randomGenerationFrameNum();
    // Get instance field reference: private System.Single _randomStartOffset
    [[deprecated("Use field access instead!")]] float& dyn__randomStartOffset();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // public System.Void .ctor()
    // Offset: 0x14DB854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightPairSinMoveEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightPairSinMoveEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightPairSinMoveEventEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14DADAC
    void Start();
    // protected System.Void Update()
    // Offset: 0x14DB134
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x14DB410
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x14DB42C
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // private System.Void UpdateMovementData(System.Int32 beatmapEventDataValue, LightPairSinMoveEventEffect/MovementData movementData, System.Single movementValueOffset)
    // Offset: 0x14DB610
    void UpdateMovementData(int beatmapEventDataValue, ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData* movementData, float movementValueOffset);
  }; // LightPairSinMoveEventEffect
  #pragma pack(pop)
  static check_size<sizeof(LightPairSinMoveEventEffect), 128 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_LightPairSinMoveEventEffectSizeCheck;
  static_assert(sizeof(LightPairSinMoveEventEffect) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
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
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData
// Il2CppName: UpdateMovementData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightPairSinMoveEventEffect::*)(int, ::GlobalNamespace::LightPairSinMoveEventEffect::MovementData*, float)>(&GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventDataValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* movementData = &::il2cpp_utils::GetClassFromName("", "LightPairSinMoveEventEffect/MovementData")->byval_arg;
    static auto* movementValueOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightPairSinMoveEventEffect*), "UpdateMovementData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventDataValue, movementData, movementValueOffset});
  }
};
