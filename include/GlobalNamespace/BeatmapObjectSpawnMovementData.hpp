// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnMovementData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectSpawnMovementData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData
    struct ObstacleSpawnData;
    // Nested type: GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData
    struct NoteSpawnData;
    // [HeaderAttribute] Offset: 0xE35DD8
    // private UnityEngine.Vector3 _centerPos
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 centerPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _noteLinesDistance
    // Size: 0x4
    // Offset: 0x1C
    float noteLinesDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE35E34
    // [TooltipAttribute] Offset: 0xE35E34
    // private System.Single _maxHalfJumpDistance
    // Size: 0x4
    // Offset: 0x20
    float maxHalfJumpDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startHalfJumpDurationInBeats
    // Size: 0x4
    // Offset: 0x24
    float startHalfJumpDurationInBeats;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseLinesHighestJumpPosY
    // Size: 0x4
    // Offset: 0x28
    float baseLinesHighestJumpPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _upperLinesHighestJumpPosY
    // Size: 0x4
    // Offset: 0x2C
    float upperLinesHighestJumpPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _topLinesHighestJumpPosY
    // Size: 0x4
    // Offset: 0x30
    float topLinesHighestJumpPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE35EE4
    // private System.Single _moveSpeed
    // Size: 0x4
    // Offset: 0x34
    float moveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveDuration
    // Size: 0x4
    // Offset: 0x38
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseLinesYPos
    // Size: 0x4
    // Offset: 0x3C
    float baseLinesYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _upperLinesYPos
    // Size: 0x4
    // Offset: 0x40
    float upperLinesYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _topLinesYPos
    // Size: 0x4
    // Offset: 0x44
    float topLinesYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE35F70
    // private System.Single _verticalObstaclePosY
    // Size: 0x4
    // Offset: 0x48
    float verticalObstaclePosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _topObstaclePosY
    // Size: 0x4
    // Offset: 0x4C
    float topObstaclePosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _obstacleTopPosY
    // Size: 0x4
    // Offset: 0x50
    float obstacleTopPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _spawnAheadTime
    // Size: 0x4
    // Offset: 0x54
    float spawnAheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpDuration
    // Size: 0x4
    // Offset: 0x58
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startBpm
    // Size: 0x4
    // Offset: 0x5C
    float startBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startNoteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x60
    float startNoteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x64
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x68
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpDistance
    // Size: 0x4
    // Offset: 0x6C
    float jumpDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveDistance
    // Size: 0x4
    // Offset: 0x70
    float moveDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _moveStartPos
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 moveStartPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _moveEndPos
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 moveEndPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _jumpEndPos
    // Size: 0xC
    // Offset: 0x8C
    UnityEngine::Vector3 jumpEndPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _noteLinesCount
    // Size: 0x4
    // Offset: 0x98
    float noteLinesCount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpOffsetY
    // Size: 0x4
    // Offset: 0x9C
    float jumpOffsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _rightVec
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 rightVec;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _forwardVec
    // Size: 0xC
    // Offset: 0xAC
    UnityEngine::Vector3 forwardVec;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: BeatmapObjectSpawnMovementData
    BeatmapObjectSpawnMovementData(UnityEngine::Vector3 centerPos_ = {}, float noteLinesDistance_ = {}, float maxHalfJumpDistance_ = {}, float startHalfJumpDurationInBeats_ = {}, float baseLinesHighestJumpPosY_ = {}, float upperLinesHighestJumpPosY_ = {}, float topLinesHighestJumpPosY_ = {}, float moveSpeed_ = {}, float moveDuration_ = {}, float baseLinesYPos_ = {}, float upperLinesYPos_ = {}, float topLinesYPos_ = {}, float verticalObstaclePosY_ = {}, float topObstaclePosY_ = {}, float obstacleTopPosY_ = {}, float spawnAheadTime_ = {}, float jumpDuration_ = {}, float startBpm_ = {}, float startNoteJumpMovementSpeed_ = {}, float noteJumpStartBeatOffset_ = {}, float noteJumpMovementSpeed_ = {}, float jumpDistance_ = {}, float moveDistance_ = {}, UnityEngine::Vector3 moveStartPos_ = {}, UnityEngine::Vector3 moveEndPos_ = {}, UnityEngine::Vector3 jumpEndPos_ = {}, float noteLinesCount_ = {}, float jumpOffsetY_ = {}, UnityEngine::Vector3 rightVec_ = {}, UnityEngine::Vector3 forwardVec_ = {}) noexcept : centerPos{centerPos_}, noteLinesDistance{noteLinesDistance_}, maxHalfJumpDistance{maxHalfJumpDistance_}, startHalfJumpDurationInBeats{startHalfJumpDurationInBeats_}, baseLinesHighestJumpPosY{baseLinesHighestJumpPosY_}, upperLinesHighestJumpPosY{upperLinesHighestJumpPosY_}, topLinesHighestJumpPosY{topLinesHighestJumpPosY_}, moveSpeed{moveSpeed_}, moveDuration{moveDuration_}, baseLinesYPos{baseLinesYPos_}, upperLinesYPos{upperLinesYPos_}, topLinesYPos{topLinesYPos_}, verticalObstaclePosY{verticalObstaclePosY_}, topObstaclePosY{topObstaclePosY_}, obstacleTopPosY{obstacleTopPosY_}, spawnAheadTime{spawnAheadTime_}, jumpDuration{jumpDuration_}, startBpm{startBpm_}, startNoteJumpMovementSpeed{startNoteJumpMovementSpeed_}, noteJumpStartBeatOffset{noteJumpStartBeatOffset_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, jumpDistance{jumpDistance_}, moveDistance{moveDistance_}, moveStartPos{moveStartPos_}, moveEndPos{moveEndPos_}, jumpEndPos{jumpEndPos_}, noteLinesCount{noteLinesCount_}, jumpOffsetY{jumpOffsetY_}, rightVec{rightVec_}, forwardVec{forwardVec_} {}
    // Get instance field reference: private UnityEngine.Vector3 _centerPos
    UnityEngine::Vector3& dyn__centerPos();
    // Get instance field reference: private System.Single _noteLinesDistance
    float& dyn__noteLinesDistance();
    // Get instance field reference: private System.Single _maxHalfJumpDistance
    float& dyn__maxHalfJumpDistance();
    // Get instance field reference: private System.Single _startHalfJumpDurationInBeats
    float& dyn__startHalfJumpDurationInBeats();
    // Get instance field reference: private System.Single _baseLinesHighestJumpPosY
    float& dyn__baseLinesHighestJumpPosY();
    // Get instance field reference: private System.Single _upperLinesHighestJumpPosY
    float& dyn__upperLinesHighestJumpPosY();
    // Get instance field reference: private System.Single _topLinesHighestJumpPosY
    float& dyn__topLinesHighestJumpPosY();
    // Get instance field reference: private System.Single _moveSpeed
    float& dyn__moveSpeed();
    // Get instance field reference: private System.Single _moveDuration
    float& dyn__moveDuration();
    // Get instance field reference: private System.Single _baseLinesYPos
    float& dyn__baseLinesYPos();
    // Get instance field reference: private System.Single _upperLinesYPos
    float& dyn__upperLinesYPos();
    // Get instance field reference: private System.Single _topLinesYPos
    float& dyn__topLinesYPos();
    // Get instance field reference: private System.Single _verticalObstaclePosY
    float& dyn__verticalObstaclePosY();
    // Get instance field reference: private System.Single _topObstaclePosY
    float& dyn__topObstaclePosY();
    // Get instance field reference: private System.Single _obstacleTopPosY
    float& dyn__obstacleTopPosY();
    // Get instance field reference: private System.Single _spawnAheadTime
    float& dyn__spawnAheadTime();
    // Get instance field reference: private System.Single _jumpDuration
    float& dyn__jumpDuration();
    // Get instance field reference: private System.Single _startBpm
    float& dyn__startBpm();
    // Get instance field reference: private System.Single _startNoteJumpMovementSpeed
    float& dyn__startNoteJumpMovementSpeed();
    // Get instance field reference: private System.Single _noteJumpStartBeatOffset
    float& dyn__noteJumpStartBeatOffset();
    // Get instance field reference: private System.Single _noteJumpMovementSpeed
    float& dyn__noteJumpMovementSpeed();
    // Get instance field reference: private System.Single _jumpDistance
    float& dyn__jumpDistance();
    // Get instance field reference: private System.Single _moveDistance
    float& dyn__moveDistance();
    // Get instance field reference: private UnityEngine.Vector3 _moveStartPos
    UnityEngine::Vector3& dyn__moveStartPos();
    // Get instance field reference: private UnityEngine.Vector3 _moveEndPos
    UnityEngine::Vector3& dyn__moveEndPos();
    // Get instance field reference: private UnityEngine.Vector3 _jumpEndPos
    UnityEngine::Vector3& dyn__jumpEndPos();
    // Get instance field reference: private System.Single _noteLinesCount
    float& dyn__noteLinesCount();
    // Get instance field reference: private System.Single _jumpOffsetY
    float& dyn__jumpOffsetY();
    // Get instance field reference: private UnityEngine.Vector3 _rightVec
    UnityEngine::Vector3& dyn__rightVec();
    // Get instance field reference: private UnityEngine.Vector3 _forwardVec
    UnityEngine::Vector3& dyn__forwardVec();
    // public System.Single get_spawnAheadTime()
    // Offset: 0x10CCE00
    float get_spawnAheadTime();
    // public System.Single get_moveDuration()
    // Offset: 0x10CCE08
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0x10CCE10
    float get_jumpDuration();
    // public System.Single get_noteLinesDistance()
    // Offset: 0x10CCE18
    float get_noteLinesDistance();
    // public System.Single get_verticalLayersDistance()
    // Offset: 0x10CB460
    float get_verticalLayersDistance();
    // public System.Single get_jumpDistance()
    // Offset: 0x10CCE20
    float get_jumpDistance();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x10CCE28
    float get_noteJumpMovementSpeed();
    // public System.Void Init(System.Int32 noteLinesCount, System.Single startNoteJumpMovementSpeed, System.Single startBpm, System.Single noteJumpStartBeatOffset, System.Single jumpOffsetY, UnityEngine.Vector3 rightVec, UnityEngine.Vector3 forwardVec)
    // Offset: 0x10CBBE0
    void Init(int noteLinesCount, float startNoteJumpMovementSpeed, float startBpm, float noteJumpStartBeatOffset, float jumpOffsetY, UnityEngine::Vector3 rightVec, UnityEngine::Vector3 forwardVec);
    // public System.Void Update(System.Single bpm, System.Single jumpOffsetY)
    // Offset: 0x10CC63C
    void Update(float bpm, float jumpOffsetY);
    // public BeatmapObjectSpawnMovementData/ObstacleSpawnData GetObstacleSpawnData(ObstacleData obstacleData)
    // Offset: 0x10CBF70
    GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData GetObstacleSpawnData(GlobalNamespace::ObstacleData* obstacleData);
    // public BeatmapObjectSpawnMovementData/NoteSpawnData GetJumpingNoteSpawnData(NoteData noteData)
    // Offset: 0x10CC254
    GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData GetJumpingNoteSpawnData(GlobalNamespace::NoteData* noteData);
    // public UnityEngine.Vector3 GetNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x10CCE30
    UnityEngine::Vector3 GetNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public UnityEngine.Vector2 Get2DNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x10CC908
    UnityEngine::Vector2 Get2DNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public System.Single JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(NoteLineLayer lineLayer, System.Single distanceFromPlayer)
    // Offset: 0x10CC994
    float JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, float distanceFromPlayer);
    // private System.Single HighestJumpPosYForLineLayer(NoteLineLayer lineLayer)
    // Offset: 0x10CD0D4
    float HighestJumpPosYForLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single HighestJumpPosYForLineLayerWithoutJumpOffset(NoteLineLayer lineLayer)
    // Offset: 0x10CD104
    float HighestJumpPosYForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single LineYPosForLineLayer(NoteLineLayer lineLayer)
    // Offset: 0x10CD040
    float LineYPosForLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single NoteJumpGravityForLineLayer(NoteLineLayer lineLayer, NoteLineLayer beforeJumpLineLayer)
    // Offset: 0x10CCF9C
    float NoteJumpGravityForLineLayer(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer beforeJumpLineLayer);
    // private System.Single NoteJumpGravityForLineLayerWithoutJumpOffset(NoteLineLayer lineLayer, NoteLineLayer beforeJumpLineLayer)
    // Offset: 0x10CD068
    float NoteJumpGravityForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer beforeJumpLineLayer);
    // public System.Void .ctor()
    // Offset: 0x10CCAB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnMovementData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnMovementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnMovementData*, creationType>()));
    }
  }; // BeatmapObjectSpawnMovementData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnMovementData), 172 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_BeatmapObjectSpawnMovementDataSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnMovementData) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnMovementData*, "", "BeatmapObjectSpawnMovementData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime
// Il2CppName: get_spawnAheadTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_spawnAheadTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration
// Il2CppName: get_moveDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_moveDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration
// Il2CppName: get_jumpDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_jumpDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance
// Il2CppName: get_noteLinesDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_noteLinesDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance
// Il2CppName: get_verticalLayersDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_verticalLayersDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDistance
// Il2CppName: get_jumpDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_jumpDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int, float, float, float, float, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::Init)> {
  static const MethodInfo* get() {
    static auto* noteLinesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startNoteJumpMovementSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startBpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteJumpStartBeatOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpOffsetY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* forwardVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteLinesCount, startNoteJumpMovementSpeed, startBpm, noteJumpStartBeatOffset, jumpOffsetY, rightVec, forwardVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(float, float)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::Update)> {
  static const MethodInfo* get() {
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpOffsetY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpm, jumpOffsetY});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData
// Il2CppName: GetObstacleSpawnData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::ObstacleData*)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "GetObstacleSpawnData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData
// Il2CppName: GetJumpingNoteSpawnData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteData*)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "GetJumpingNoteSpawnData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset
// Il2CppName: GetNoteOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset)> {
  static const MethodInfo* get() {
    static auto* noteLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "GetNoteOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteLineIndex, noteLineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset
// Il2CppName: Get2DNoteOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  static const MethodInfo* get() {
    static auto* noteLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "Get2DNoteOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteLineIndex, noteLineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
// Il2CppName: JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteLineLayer, float)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* distanceFromPlayer = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer, distanceFromPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer
// Il2CppName: HighestJumpPosYForLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "HighestJumpPosYForLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset
// Il2CppName: HighestJumpPosYForLineLayerWithoutJumpOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "HighestJumpPosYForLineLayerWithoutJumpOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::LineYPosForLineLayer
// Il2CppName: LineYPosForLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::LineYPosForLineLayer)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "LineYPosForLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer
// Il2CppName: NoteJumpGravityForLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteLineLayer, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* beforeJumpLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "NoteJumpGravityForLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer, beforeJumpLineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayerWithoutJumpOffset
// Il2CppName: NoteJumpGravityForLineLayerWithoutJumpOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnMovementData::*)(GlobalNamespace::NoteLineLayer, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayerWithoutJumpOffset)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* beforeJumpLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnMovementData*), "NoteJumpGravityForLineLayerWithoutJumpOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer, beforeJumpLineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnMovementData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
