// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FadeInOutController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOutController*, "", "FadeInOutController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: FadeInOutController
  // [TokenAttribute] Offset: FFFFFFFF
  class FadeInOutController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::FadeInOutController::$Fade$d__15
    class $Fade$d__15;
    public:
    // private FloatSO _easeValue
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FloatSO* easeValue;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSO*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeInCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* fadeInCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeOutCurve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* fadeOutCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _fadeInStartDelay
    // Size: 0x4
    // Offset: 0x30
    float fadeInStartDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _defaultFadeOutDuration
    // Size: 0x4
    // Offset: 0x34
    float defaultFadeOutDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _defaultFadeInDuration
    // Size: 0x4
    // Offset: 0x38
    float defaultFadeInDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FloatSO _easeValue
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSO*& dyn__easeValue();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeInCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__fadeInCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeOutCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__fadeOutCurve();
    // Get instance field reference: private System.Single _fadeInStartDelay
    [[deprecated("Use field access instead!")]] float& dyn__fadeInStartDelay();
    // Get instance field reference: private System.Single _defaultFadeOutDuration
    [[deprecated("Use field access instead!")]] float& dyn__defaultFadeOutDuration();
    // Get instance field reference: private System.Single _defaultFadeInDuration
    [[deprecated("Use field access instead!")]] float& dyn__defaultFadeInDuration();
    // public System.Void .ctor()
    // Offset: 0x15C3C30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeInOutController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FadeInOutController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeInOutController*, creationType>()));
    }
    // public System.Void FadeOutInstant()
    // Offset: 0x15C3974
    void FadeOutInstant();
    // public System.Void FadeIn()
    // Offset: 0x15C3A48
    void FadeIn();
    // public System.Void FadeOut()
    // Offset: 0x15C3B24
    void FadeOut();
    // public System.Void FadeIn(System.Single duration)
    // Offset: 0x15C3B30
    void FadeIn(float duration);
    // public System.Void FadeOut(System.Single duration)
    // Offset: 0x15C3B38
    void FadeOut(float duration);
    // public System.Void FadeIn(System.Action fadeInCallback)
    // Offset: 0x15C3B40
    void FadeIn(::System::Action* fadeInCallback);
    // public System.Void FadeOut(System.Action fadeOutCallback)
    // Offset: 0x15C3B48
    void FadeOut(::System::Action* fadeOutCallback);
    // public System.Void FadeIn(System.Single duration, System.Action fadeInFinishedCallback)
    // Offset: 0x15C3A54
    void FadeIn(float duration, ::System::Action* fadeInFinishedCallback);
    // public System.Void FadeOut(System.Single duration, System.Action fadeOutFinishedCallback)
    // Offset: 0x15C3980
    void FadeOut(float duration, ::System::Action* fadeOutFinishedCallback);
    // private System.Collections.IEnumerator Fade(System.Single fromValue, System.Single toValue, System.Single duration, System.Single startDelay, UnityEngine.AnimationCurve curve, System.Action fadeFinishedCallback)
    // Offset: 0x15C3B50
    ::System::Collections::IEnumerator* Fade(float fromValue, float toValue, float duration, float startDelay, ::UnityEngine::AnimationCurve* curve, ::System::Action* fadeFinishedCallback);
  }; // FadeInOutController
  #pragma pack(pop)
  static check_size<sizeof(FadeInOutController), 56 + sizeof(float)> __GlobalNamespace_FadeInOutControllerSizeCheck;
  static_assert(sizeof(FadeInOutController) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOutInstant
// Il2CppName: FadeOutInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)()>(&GlobalNamespace::FadeInOutController::FadeOutInstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOutInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)()>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)()>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float)>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float)>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(::System::Action*)>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  static const MethodInfo* get() {
    static auto* fadeInCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeInCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(::System::Action*)>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  static const MethodInfo* get() {
    static auto* fadeOutCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeOutCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float, ::System::Action*)>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeInFinishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration, fadeInFinishedCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float, ::System::Action*)>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeOutFinishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration, fadeOutFinishedCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::FadeInOutController::*)(float, float, float, float, ::UnityEngine::AnimationCurve*, ::System::Action*)>(&GlobalNamespace::FadeInOutController::Fade)> {
  static const MethodInfo* get() {
    static auto* fromValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startDelay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* fadeFinishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromValue, toValue, duration, startDelay, curve, fadeFinishedCallback});
  }
};
