// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
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
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
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
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: TubeLightBehaviour
  class TubeLightBehaviour : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: GlobalNamespace::TubeLightBehaviour::ParameterType
    struct ParameterType;
    // public System.Boolean _noPredefinedStartValue
    // Size: 0x1
    // Offset: 0x10
    bool noPredefinedStartValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noPredefinedStartValue and: startColor
    char __padding0[0x7] = {};
    // [DrawIfAttribute] Offset: 0xE28CC8
    // public ColorSO startColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* startColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // public ColorSO endColor
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* endColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // public System.Single blend
    // Size: 0x4
    // Offset: 0x28
    float blend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x2C
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: originalColor
    char __padding4[0x3] = {};
    // private UnityEngine.Color _originalColor
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color originalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private TubeBloomPrePassLight[] _tubeLights
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* tubeLights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*) == 0x8);
    // private DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::DirectionalLight*>* directionalLights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DirectionalLight*>*) == 0x8);
    // private System.Boolean started
    // Size: 0x1
    // Offset: 0x50
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: firstFrameColor
    char __padding8[0x3] = {};
    // private UnityEngine.Color _firstFrameColor
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Color firstFrameColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: TubeLightBehaviour
    TubeLightBehaviour(bool noPredefinedStartValue_ = {}, GlobalNamespace::ColorSO* startColor_ = {}, GlobalNamespace::ColorSO* endColor_ = {}, float blend_ = {}, bool initialized_ = {}, UnityEngine::Color originalColor_ = {}, ::Array<GlobalNamespace::TubeBloomPrePassLight*>* tubeLights_ = {}, ::Array<GlobalNamespace::DirectionalLight*>* directionalLights_ = {}, bool started_ = {}, UnityEngine::Color firstFrameColor_ = {}) noexcept : noPredefinedStartValue{noPredefinedStartValue_}, startColor{startColor_}, endColor{endColor_}, blend{blend_}, initialized{initialized_}, originalColor{originalColor_}, tubeLights{tubeLights_}, directionalLights{directionalLights_}, started{started_}, firstFrameColor{firstFrameColor_} {}
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x111B2C8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x111B66C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void .ctor()
    // Offset: 0x111B74C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeLightBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TubeLightBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeLightBehaviour*, creationType>()));
    }
  }; // TubeLightBehaviour
  #pragma pack(pop)
  static check_size<sizeof(TubeLightBehaviour), 84 + sizeof(UnityEngine::Color)> __GlobalNamespace_TubeLightBehaviourSizeCheck;
  static_assert(sizeof(TubeLightBehaviour) == 0x64);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightBehaviour*, "", "TubeLightBehaviour");
// Writing includes for template specializations
#include "UnityEngine/Playables/Playable.hpp"
#include "UnityEngine/Playables/FrameData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeLightBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeLightBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::Playable>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::FrameData>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeLightBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::Playable>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeLightBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
