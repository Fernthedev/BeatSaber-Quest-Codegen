// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightRotationGroupEffect
#include "GlobalNamespace/LightRotationGroupEffect.hpp"
// Including type: LightRotationBeatmapEventData/Axis
#include "GlobalNamespace/LightRotationBeatmapEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightRotationGroupEffect::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroupEffect::InitData*, "", "LightRotationGroupEffect/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LightRotationGroupEffect/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightRotationGroupEffect::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 groupId
    // Size: 0x4
    // Offset: 0x10
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 elementId
    // Size: 0x4
    // Offset: 0x14
    int elementId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly LightRotationBeatmapEventData/Axis axis
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::LightRotationBeatmapEventData::Axis axis;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightRotationBeatmapEventData::Axis) == 0x4);
    // public readonly System.Boolean mirrored
    // Size: 0x1
    // Offset: 0x1C
    bool mirrored;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mirrored and: transform
    char __padding3[0x3] = {};
    // public readonly UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 groupId
    [[deprecated("Use field access instead!")]] int& dyn_groupId();
    // Get instance field reference: public readonly System.Int32 elementId
    [[deprecated("Use field access instead!")]] int& dyn_elementId();
    // Get instance field reference: public readonly LightRotationBeatmapEventData/Axis axis
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightRotationBeatmapEventData::Axis& dyn_axis();
    // Get instance field reference: public readonly System.Boolean mirrored
    [[deprecated("Use field access instead!")]] bool& dyn_mirrored();
    // Get instance field reference: public readonly UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // public System.Void .ctor(System.Int32 groupId, System.Int32 elementId, LightRotationBeatmapEventData/Axis axis, System.Boolean mirrored, UnityEngine.Transform transform)
    // Offset: 0x14DCB74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightRotationGroupEffect::InitData* New_ctor(int groupId, int elementId, ::GlobalNamespace::LightRotationBeatmapEventData::Axis axis, bool mirrored, ::UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightRotationGroupEffect::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightRotationGroupEffect::InitData*, creationType>(groupId, elementId, axis, mirrored, transform)));
    }
  }; // LightRotationGroupEffect/InitData
  #pragma pack(pop)
  static check_size<sizeof(LightRotationGroupEffect::InitData), 32 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_LightRotationGroupEffect_InitDataSizeCheck;
  static_assert(sizeof(LightRotationGroupEffect::InitData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightRotationGroupEffect::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
