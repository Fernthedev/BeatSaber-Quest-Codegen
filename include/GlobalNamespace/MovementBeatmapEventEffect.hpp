// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MovementBeatmapEventEffect
  class MovementBeatmapEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MovementBeatmapEventEffect::MovementData
    class MovementData;
    // private BeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0xE1B330
    // private System.Single _transitionSpeed
    // Size: 0x4
    // Offset: 0x1C
    float transitionSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MovementBeatmapEventEffect/MovementData[] _movementData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MovementBeatmapEventEffect::MovementData*>* movementData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MovementBeatmapEventEffect::MovementData*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1B378
    // private UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Transform*>* transforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B3B0
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Int32 _currentMovementDataIdx
    // Size: 0x4
    // Offset: 0x38
    int currentMovementDataIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 _currentPositionOffset
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 currentPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevPositionOffset
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 prevPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: prevPositionOffset and: startLocalPositions
    char __padding7[0x4] = {};
    // private UnityEngine.Vector3[] _startLocalPositions
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Vector3>* startLocalPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MovementBeatmapEventEffect
    MovementBeatmapEventEffect(GlobalNamespace::BeatmapEventType beatmapEventType_ = {}, float transitionSpeed_ = {}, ::Array<GlobalNamespace::MovementBeatmapEventEffect::MovementData*>* movementData_ = {}, ::Array<UnityEngine::Transform*>* transforms_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, int currentMovementDataIdx_ = {}, UnityEngine::Vector3 currentPositionOffset_ = {}, UnityEngine::Vector3 prevPositionOffset_ = {}, ::Array<UnityEngine::Vector3>* startLocalPositions_ = {}) noexcept : beatmapEventType{beatmapEventType_}, transitionSpeed{transitionSpeed_}, movementData{movementData_}, transforms{transforms_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, currentMovementDataIdx{currentMovementDataIdx_}, currentPositionOffset{currentPositionOffset_}, prevPositionOffset{prevPositionOffset_}, startLocalPositions{startLocalPositions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x114459C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1144898
    void OnDestroy();
    // protected System.Void FixedUpdate()
    // Offset: 0x1144998
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x1144B18
    void LateUpdate();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x1144C04
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void SetLocalPositionOffsetsForAllObjects(UnityEngine.Vector3 localPositionOffset)
    // Offset: 0x1144760
    void SetLocalPositionOffsetsForAllObjects(UnityEngine::Vector3 localPositionOffset);
    // public System.Void .ctor()
    // Offset: 0x1144C5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovementBeatmapEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MovementBeatmapEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovementBeatmapEventEffect*, creationType>()));
    }
  }; // MovementBeatmapEventEffect
  #pragma pack(pop)
  static check_size<sizeof(MovementBeatmapEventEffect), 88 + sizeof(::Array<UnityEngine::Vector3>*)> __GlobalNamespace_MovementBeatmapEventEffectSizeCheck;
  static_assert(sizeof(MovementBeatmapEventEffect) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementBeatmapEventEffect*, "", "MovementBeatmapEventEffect");
// Writing includes for template specializations
#include "GlobalNamespace/BeatmapEventData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::FixedUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::MovementBeatmapEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapEventData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::SetLocalPositionOffsetsForAllObjects
// Il2CppName: SetLocalPositionOffsetsForAllObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)(UnityEngine::Vector3)>(&GlobalNamespace::MovementBeatmapEventEffect::SetLocalPositionOffsetsForAllObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "SetLocalPositionOffsetsForAllObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
