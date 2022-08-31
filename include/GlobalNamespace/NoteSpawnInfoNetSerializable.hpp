// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: NoteData/GameplayType
#include "GlobalNamespace/NoteData.hpp"
// Including type: NoteData/ScoringType
// Already included the same include: GlobalNamespace/NoteData.hpp
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteSpawnInfoNetSerializable
  class NoteSpawnInfoNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteSpawnInfoNetSerializable*, "", "NoteSpawnInfoNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: NoteSpawnInfoNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteSpawnInfoNetSerializable : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable*/ {
    public:
    public:
    // public System.Single time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer noteLineLayer
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public NoteLineLayer beforeJumpNoteLineLayer
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public NoteData/GameplayType gameplayType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::NoteData::GameplayType gameplayType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData::GameplayType) == 0x4);
    // public NoteData/ScoringType scoringType
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::NoteData::ScoringType scoringType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData::ScoringType) == 0x4);
    // public ColorType colorType
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    // public NoteCutDirection cutDirection
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::NoteCutDirection cutDirection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // public System.Single timeToNextColorNote
    // Size: 0x4
    // Offset: 0x30
    float timeToNextColorNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single timeToPrevColorNote
    // Size: 0x4
    // Offset: 0x34
    float timeToPrevColorNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 flipLineIndex
    // Size: 0x4
    // Offset: 0x38
    int flipLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single flipYSide
    // Size: 0x4
    // Offset: 0x3C
    float flipYSide;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Vector3Serializable moveStartPos
    // Size: 0xC
    // Offset: 0x40
    ::GlobalNamespace::Vector3Serializable moveStartPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable moveEndPos
    // Size: 0xC
    // Offset: 0x4C
    ::GlobalNamespace::Vector3Serializable moveEndPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable jumpEndPos
    // Size: 0xC
    // Offset: 0x58
    ::GlobalNamespace::Vector3Serializable jumpEndPos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public System.Single jumpGravity
    // Size: 0x4
    // Offset: 0x64
    float jumpGravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single moveDuration
    // Size: 0x4
    // Offset: 0x68
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single jumpDuration
    // Size: 0x4
    // Offset: 0x6C
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotation
    // Size: 0x4
    // Offset: 0x70
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single cutDirectionAngleOffset
    // Size: 0x4
    // Offset: 0x74
    float cutDirectionAngleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single cutSfxVolumeMultiplier
    // Size: 0x4
    // Offset: 0x78
    float cutSfxVolumeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: i_INetSerializable
    inline ::LiteNetLib::Utils::INetSerializable* i_INetSerializable() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // Get instance field reference: public System.Int32 lineIndex
    [[deprecated("Use field access instead!")]] int& dyn_lineIndex();
    // Get instance field reference: public NoteLineLayer noteLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_noteLineLayer();
    // Get instance field reference: public NoteLineLayer beforeJumpNoteLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_beforeJumpNoteLineLayer();
    // Get instance field reference: public NoteData/GameplayType gameplayType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteData::GameplayType& dyn_gameplayType();
    // Get instance field reference: public NoteData/ScoringType scoringType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteData::ScoringType& dyn_scoringType();
    // Get instance field reference: public ColorType colorType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorType& dyn_colorType();
    // Get instance field reference: public NoteCutDirection cutDirection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutDirection& dyn_cutDirection();
    // Get instance field reference: public System.Single timeToNextColorNote
    [[deprecated("Use field access instead!")]] float& dyn_timeToNextColorNote();
    // Get instance field reference: public System.Single timeToPrevColorNote
    [[deprecated("Use field access instead!")]] float& dyn_timeToPrevColorNote();
    // Get instance field reference: public System.Int32 flipLineIndex
    [[deprecated("Use field access instead!")]] int& dyn_flipLineIndex();
    // Get instance field reference: public System.Single flipYSide
    [[deprecated("Use field access instead!")]] float& dyn_flipYSide();
    // Get instance field reference: public Vector3Serializable moveStartPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_moveStartPos();
    // Get instance field reference: public Vector3Serializable moveEndPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_moveEndPos();
    // Get instance field reference: public Vector3Serializable jumpEndPos
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_jumpEndPos();
    // Get instance field reference: public System.Single jumpGravity
    [[deprecated("Use field access instead!")]] float& dyn_jumpGravity();
    // Get instance field reference: public System.Single moveDuration
    [[deprecated("Use field access instead!")]] float& dyn_moveDuration();
    // Get instance field reference: public System.Single jumpDuration
    [[deprecated("Use field access instead!")]] float& dyn_jumpDuration();
    // Get instance field reference: public System.Single rotation
    [[deprecated("Use field access instead!")]] float& dyn_rotation();
    // Get instance field reference: public System.Single cutDirectionAngleOffset
    [[deprecated("Use field access instead!")]] float& dyn_cutDirectionAngleOffset();
    // Get instance field reference: public System.Single cutSfxVolumeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_cutSfxVolumeMultiplier();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer noteLineLayer, NoteLineLayer beforeJumpNoteLineLayer, NoteData/GameplayType gameplayType, NoteData/ScoringType scoringType, ColorType colorType, NoteCutDirection cutDirection, System.Single timeToNextColorNote, System.Single timeToPrevColorNote, System.Int32 flipLineIndex, System.Single flipYSide, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single jumpGravity, System.Single moveDuration, System.Single jumpDuration, System.Single rotation, System.Single cutDirectionAngleOffset, System.Single cutSfxVolumeMultiplier)
    // Offset: 0x2A3EC70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteSpawnInfoNetSerializable* New_ctor(float time, int lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::NoteData::GameplayType gameplayType, ::GlobalNamespace::NoteData::ScoringType scoringType, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection, float timeToNextColorNote, float timeToPrevColorNote, int flipLineIndex, float flipYSide, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float jumpGravity, float moveDuration, float jumpDuration, float rotation, float cutDirectionAngleOffset, float cutSfxVolumeMultiplier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteSpawnInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteSpawnInfoNetSerializable*, creationType>(time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, moveStartPos, moveEndPos, jumpEndPos, jumpGravity, moveDuration, jumpDuration, rotation, cutDirectionAngleOffset, cutSfxVolumeMultiplier)));
    }
    // public System.Void .ctor()
    // Offset: 0x2A3EE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteSpawnInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteSpawnInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteSpawnInfoNetSerializable*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2A3EE38
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A3F058
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // NoteSpawnInfoNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(NoteSpawnInfoNetSerializable), 120 + sizeof(float)> __GlobalNamespace_NoteSpawnInfoNetSerializableSizeCheck;
  static_assert(sizeof(NoteSpawnInfoNetSerializable) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteSpawnInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteSpawnInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteSpawnInfoNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteSpawnInfoNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::NoteSpawnInfoNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteSpawnInfoNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
