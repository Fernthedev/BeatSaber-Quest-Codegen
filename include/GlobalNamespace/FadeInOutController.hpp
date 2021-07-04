// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: FadeInOutController
  class FadeInOutController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FadeInOutController::$Fade$d__15
    class $Fade$d__15;
    // private FloatSO _easeValue
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FloatSO* easeValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeInCurve
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* fadeInCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeOutCurve
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* fadeOutCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
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
    // Creating value type constructor for type: FadeInOutController
    FadeInOutController(GlobalNamespace::FloatSO* easeValue_ = {}, UnityEngine::AnimationCurve* fadeInCurve_ = {}, UnityEngine::AnimationCurve* fadeOutCurve_ = {}, float fadeInStartDelay_ = {}, float defaultFadeOutDuration_ = {}, float defaultFadeInDuration_ = {}) noexcept : easeValue{easeValue_}, fadeInCurve{fadeInCurve_}, fadeOutCurve{fadeOutCurve_}, fadeInStartDelay{fadeInStartDelay_}, defaultFadeOutDuration{defaultFadeOutDuration_}, defaultFadeInDuration{defaultFadeInDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void FadeOutInstant()
    // Offset: 0x1244AE4
    void FadeOutInstant();
    // public System.Void FadeIn()
    // Offset: 0x1244BB8
    void FadeIn();
    // public System.Void FadeOut()
    // Offset: 0x1244C94
    void FadeOut();
    // public System.Void FadeIn(System.Single duration)
    // Offset: 0x1244CA0
    void FadeIn(float duration);
    // public System.Void FadeOut(System.Single duration)
    // Offset: 0x1244CA8
    void FadeOut(float duration);
    // public System.Void FadeIn(System.Action fadeInCallback)
    // Offset: 0x1244CB0
    void FadeIn(System::Action* fadeInCallback);
    // public System.Void FadeOut(System.Action fadeOutCallback)
    // Offset: 0x1244CB8
    void FadeOut(System::Action* fadeOutCallback);
    // public System.Void FadeIn(System.Single duration, System.Action fadeInFinishedCallback)
    // Offset: 0x1244BC4
    void FadeIn(float duration, System::Action* fadeInFinishedCallback);
    // public System.Void FadeOut(System.Single duration, System.Action fadeOutFinishedCallback)
    // Offset: 0x1244AF0
    void FadeOut(float duration, System::Action* fadeOutFinishedCallback);
    // private System.Collections.IEnumerator Fade(System.Single fromValue, System.Single toValue, System.Single duration, System.Single startDelay, UnityEngine.AnimationCurve curve, System.Action fadeFinishedCallback)
    // Offset: 0x1244CC0
    System::Collections::IEnumerator* Fade(float fromValue, float toValue, float duration, float startDelay, UnityEngine::AnimationCurve* curve, System::Action* fadeFinishedCallback);
    // public System.Void .ctor()
    // Offset: 0x1244DA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeInOutController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeInOutController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeInOutController*, creationType>()));
    }
  }; // FadeInOutController
  #pragma pack(pop)
  static check_size<sizeof(FadeInOutController), 56 + sizeof(float)> __GlobalNamespace_FadeInOutControllerSizeCheck;
  static_assert(sizeof(FadeInOutController) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOutController*, "", "FadeInOutController");
// Writing includes for template specializations
#include "System/Action.hpp"
#include "UnityEngine/AnimationCurve.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOutInstant
// Il2CppName: FadeOutInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)()>(&GlobalNamespace::FadeInOutController::FadeOutInstant)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOutInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)()>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)()>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float)>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float)>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(System::Action*)>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(System::Action*)>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float, System::Action*)>(&GlobalNamespace::FadeInOutController::FadeIn)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOutController::*)(float, System::Action*)>(&GlobalNamespace::FadeInOutController::FadeOut)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::FadeInOutController::*)(float, float, float, float, UnityEngine::AnimationCurve*, System::Action*)>(&GlobalNamespace::FadeInOutController::Fade)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOutController*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimationCurve*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOutController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
