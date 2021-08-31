// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarVisualController
  class AvatarVisualController;
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
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: AvatarColorBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarColorBehaviour : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // public UnityEngine.Color _startColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color startColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _endColor
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color endColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public Tweening.EaseType _easeType
    // Size: 0x4
    // Offset: 0x30
    Tweening::EaseType easeType;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // Padding between fields: easeType and: avatarVisualController
    char __padding2[0x4] = {};
    // private AvatarVisualController _avatarVisualController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AvatarVisualController* avatarVisualController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarVisualController*) == 0x8);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x40
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: AvatarColorBehaviour
    AvatarColorBehaviour(UnityEngine::Color startColor_ = {}, UnityEngine::Color endColor_ = {}, Tweening::EaseType easeType_ = {}, GlobalNamespace::AvatarVisualController* avatarVisualController_ = {}, float duration_ = {}) noexcept : startColor{startColor_}, endColor{endColor_}, easeType{easeType_}, avatarVisualController{avatarVisualController_}, duration{duration_} {}
    // Get instance field reference: public UnityEngine.Color _startColor
    UnityEngine::Color& dyn__startColor();
    // Get instance field reference: public UnityEngine.Color _endColor
    UnityEngine::Color& dyn__endColor();
    // Get instance field reference: public Tweening.EaseType _easeType
    Tweening::EaseType& dyn__easeType();
    // Get instance field reference: private AvatarVisualController _avatarVisualController
    GlobalNamespace::AvatarVisualController*& dyn__avatarVisualController();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // public System.Void .ctor()
    // Offset: 0x117FBEC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarColorBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarColorBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarColorBehaviour*, creationType>()));
    }
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x117F8EC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x117F968
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x117FB54
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
  }; // AvatarColorBehaviour
  #pragma pack(pop)
  static check_size<sizeof(AvatarColorBehaviour), 64 + sizeof(float)> __GlobalNamespace_AvatarColorBehaviourSizeCheck;
  static_assert(sizeof(AvatarColorBehaviour) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarColorBehaviour*, "", "AvatarColorBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarColorBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::AvatarColorBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarColorBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarColorBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::AvatarColorBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarColorBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarColorBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::AvatarColorBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarColorBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
