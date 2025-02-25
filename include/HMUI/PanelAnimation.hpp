// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.PanelAnimation
  // [TokenAttribute] Offset: FFFFFFFF
  class PanelAnimation : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::PanelAnimation::$AnimationCoroutine$d__1
    class $AnimationCoroutine$d__1;
    // Creating value type constructor for type: PanelAnimation
    PanelAnimation() noexcept {}
    // public System.Void StartAnimation(UnityEngine.CanvasGroup canvasGroup, UnityEngine.CanvasGroup parentCanvasGroup, System.Single duration, UnityEngine.AnimationCurve scaleXAnimationCurve, UnityEngine.AnimationCurve scaleYAnimationCurve, UnityEngine.AnimationCurve alphaAnimationCurve, UnityEngine.AnimationCurve parentAlphaAnimationCurve, System.Action finishedCallback)
    // Offset: 0x1311464
    void StartAnimation(UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, float duration, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback);
    // public System.Collections.IEnumerator AnimationCoroutine(System.Single duration, UnityEngine.CanvasGroup canvasGroup, UnityEngine.CanvasGroup parentCanvasGroup, UnityEngine.AnimationCurve scaleXAnimationCurve, UnityEngine.AnimationCurve scaleYAnimationCurve, UnityEngine.AnimationCurve alphaAnimationCurve, UnityEngine.AnimationCurve parentAlphaAnimationCurve, System.Action finishedCallback)
    // Offset: 0x13115D4
    System::Collections::IEnumerator* AnimationCoroutine(float duration, UnityEngine::CanvasGroup* canvasGroup, UnityEngine::CanvasGroup* parentCanvasGroup, UnityEngine::AnimationCurve* scaleXAnimationCurve, UnityEngine::AnimationCurve* scaleYAnimationCurve, UnityEngine::AnimationCurve* alphaAnimationCurve, UnityEngine::AnimationCurve* parentAlphaAnimationCurve, System::Action* finishedCallback);
    // public System.Void .ctor()
    // Offset: 0x13116CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PanelAnimation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::PanelAnimation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PanelAnimation*, creationType>()));
    }
  }; // HMUI.PanelAnimation
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimation*, "HMUI", "PanelAnimation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::PanelAnimation::StartAnimation
// Il2CppName: StartAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::PanelAnimation::*)(UnityEngine::CanvasGroup*, UnityEngine::CanvasGroup*, float, UnityEngine::AnimationCurve*, UnityEngine::AnimationCurve*, UnityEngine::AnimationCurve*, UnityEngine::AnimationCurve*, System::Action*)>(&HMUI::PanelAnimation::StartAnimation)> {
  static const MethodInfo* get() {
    static auto* canvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* parentCanvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* scaleXAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* scaleYAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* alphaAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* parentAlphaAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PanelAnimation*), "StartAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvasGroup, parentCanvasGroup, duration, scaleXAnimationCurve, scaleYAnimationCurve, alphaAnimationCurve, parentAlphaAnimationCurve, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::PanelAnimation::AnimationCoroutine
// Il2CppName: AnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::PanelAnimation::*)(float, UnityEngine::CanvasGroup*, UnityEngine::CanvasGroup*, UnityEngine::AnimationCurve*, UnityEngine::AnimationCurve*, UnityEngine::AnimationCurve*, UnityEngine::AnimationCurve*, System::Action*)>(&HMUI::PanelAnimation::AnimationCoroutine)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* canvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* parentCanvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* scaleXAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* scaleYAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* alphaAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* parentAlphaAnimationCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::PanelAnimation*), "AnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration, canvasGroup, parentCanvasGroup, scaleXAnimationCurve, scaleYAnimationCurve, alphaAnimationCurve, parentAlphaAnimationCurve, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::PanelAnimation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
