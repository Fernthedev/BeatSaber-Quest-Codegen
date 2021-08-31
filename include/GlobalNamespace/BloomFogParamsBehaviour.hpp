// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogParamsBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomFogParamsBehaviour : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private BloomFogEnvironmentParams _bloomFogParams
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BloomFogEnvironmentParams* bloomFogParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // public System.Single _blend
    // Size: 0x4
    // Offset: 0x18
    float blend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: blend and: editorBloomFogSO
    char __padding1[0x4] = {};
    // public BloomFogSO _editorBloomFogSO
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomFogSO* editorBloomFogSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x28
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: originalBloomFogParams
    char __padding3[0x7] = {};
    // private BloomFogEnvironmentParams _originalBloomFogParams
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BloomFogEnvironmentParams* originalBloomFogParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // private System.Boolean _finished
    // Size: 0x1
    // Offset: 0x38
    bool finished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BloomFogParamsBehaviour
    BloomFogParamsBehaviour(GlobalNamespace::BloomFogEnvironmentParams* bloomFogParams_ = {}, float blend_ = {}, GlobalNamespace::BloomFogSO* editorBloomFogSO_ = {}, bool initialized_ = {}, GlobalNamespace::BloomFogEnvironmentParams* originalBloomFogParams_ = {}, bool finished_ = {}) noexcept : bloomFogParams{bloomFogParams_}, blend{blend_}, editorBloomFogSO{editorBloomFogSO_}, initialized{initialized_}, originalBloomFogParams{originalBloomFogParams_}, finished{finished_} {}
    // Get instance field: private BloomFogEnvironmentParams _bloomFogParams
    GlobalNamespace::BloomFogEnvironmentParams* _get__bloomFogParams();
    // Set instance field: private BloomFogEnvironmentParams _bloomFogParams
    void _set__bloomFogParams(GlobalNamespace::BloomFogEnvironmentParams* value);
    // Get instance field: public System.Single _blend
    float _get__blend();
    // Set instance field: public System.Single _blend
    void _set__blend(float value);
    // Get instance field: public BloomFogSO _editorBloomFogSO
    GlobalNamespace::BloomFogSO* _get__editorBloomFogSO();
    // Set instance field: public BloomFogSO _editorBloomFogSO
    void _set__editorBloomFogSO(GlobalNamespace::BloomFogSO* value);
    // Get instance field: private System.Boolean _initialized
    bool _get__initialized();
    // Set instance field: private System.Boolean _initialized
    void _set__initialized(bool value);
    // Get instance field: private BloomFogEnvironmentParams _originalBloomFogParams
    GlobalNamespace::BloomFogEnvironmentParams* _get__originalBloomFogParams();
    // Set instance field: private BloomFogEnvironmentParams _originalBloomFogParams
    void _set__originalBloomFogParams(GlobalNamespace::BloomFogEnvironmentParams* value);
    // Get instance field: private System.Boolean _finished
    bool _get__finished();
    // Set instance field: private System.Boolean _finished
    void _set__finished(bool value);
    // public System.Void .ctor()
    // Offset: 0x10D18B8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogParamsBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFogParamsBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogParamsBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x10D170C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x10D1860
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
  }; // BloomFogParamsBehaviour
  #pragma pack(pop)
  static check_size<sizeof(BloomFogParamsBehaviour), 56 + sizeof(bool)> __GlobalNamespace_BloomFogParamsBehaviourSizeCheck;
  static_assert(sizeof(BloomFogParamsBehaviour) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogParamsBehaviour*, "", "BloomFogParamsBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
