// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerCenterTextAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerCenterTextAnimator : public UnityEngine::MonoBehaviour {
    public:
    // [SpaceAttribute] Offset: 0xE3A8B4
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Transform _scalingTarget
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* scalingTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A8FC
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeInTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::Tween_1<float>* fadeInTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeOutTween
    // Size: 0x8
    // Offset: 0x38
    Tweening::Tween_1<float>* fadeOutTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fontSizeTween
    // Size: 0x8
    // Offset: 0x40
    Tweening::Tween_1<float>* fontSizeTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _colorTween
    // Size: 0x8
    // Offset: 0x48
    Tweening::Tween_1<UnityEngine::Color>* colorTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Color>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    // Size: 0x8
    // Offset: 0x50
    Tweening::Tween_1<UnityEngine::Vector3>* offsetTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MultiplayerCenterTextAnimator
    MultiplayerCenterTextAnimator(TMPro::TextMeshPro* text_ = {}, UnityEngine::Transform* scalingTarget_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* fadeInTween_ = {}, Tweening::Tween_1<float>* fadeOutTween_ = {}, Tweening::Tween_1<float>* fontSizeTween_ = {}, Tweening::Tween_1<UnityEngine::Color>* colorTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* offsetTween_ = {}) noexcept : text{text_}, scalingTarget{scalingTarget_}, tweeningManager{tweeningManager_}, fadeInTween{fadeInTween_}, fadeOutTween{fadeOutTween_}, fontSizeTween{fontSizeTween_}, colorTween{colorTween_}, offsetTween{offsetTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private TMPro.TextMeshPro _text
    TMPro::TextMeshPro* _get__text();
    // Set instance field: private TMPro.TextMeshPro _text
    void _set__text(TMPro::TextMeshPro* value);
    // Get instance field: private UnityEngine.Transform _scalingTarget
    UnityEngine::Transform* _get__scalingTarget();
    // Set instance field: private UnityEngine.Transform _scalingTarget
    void _set__scalingTarget(UnityEngine::Transform* value);
    // Get instance field: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager* _get__tweeningManager();
    // Set instance field: private readonly Tweening.TweeningManager _tweeningManager
    void _set__tweeningManager(Tweening::TweeningManager* value);
    // Get instance field: private Tweening.Tween`1<System.Single> _fadeInTween
    Tweening::Tween_1<float>* _get__fadeInTween();
    // Set instance field: private Tweening.Tween`1<System.Single> _fadeInTween
    void _set__fadeInTween(Tweening::Tween_1<float>* value);
    // Get instance field: private Tweening.Tween`1<System.Single> _fadeOutTween
    Tweening::Tween_1<float>* _get__fadeOutTween();
    // Set instance field: private Tweening.Tween`1<System.Single> _fadeOutTween
    void _set__fadeOutTween(Tweening::Tween_1<float>* value);
    // Get instance field: private Tweening.Tween`1<System.Single> _fontSizeTween
    Tweening::Tween_1<float>* _get__fontSizeTween();
    // Set instance field: private Tweening.Tween`1<System.Single> _fontSizeTween
    void _set__fontSizeTween(Tweening::Tween_1<float>* value);
    // Get instance field: private Tweening.Tween`1<UnityEngine.Color> _colorTween
    Tweening::Tween_1<UnityEngine::Color>* _get__colorTween();
    // Set instance field: private Tweening.Tween`1<UnityEngine.Color> _colorTween
    void _set__colorTween(Tweening::Tween_1<UnityEngine::Color>* value);
    // Get instance field: private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    Tweening::Tween_1<UnityEngine::Vector3>* _get__offsetTween();
    // Set instance field: private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    void _set__offsetTween(Tweening::Tween_1<UnityEngine::Vector3>* value);
    // protected System.Void Awake()
    // Offset: 0x11A4660
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11A49F0
    void OnDestroy();
    // public System.Void AnimateTextColor(UnityEngine.Color color, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11A4A88
    void AnimateTextColor(UnityEngine::Color color, float duration, Tweening::EaseType easeType);
    // public System.Void AnimateFontSize(System.Single fontSize, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11A4B38
    void AnimateFontSize(float fontSize, float duration, Tweening::EaseType easeType);
    // public System.Void AnimatePositionOffsetSize(UnityEngine.Vector3 offset, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11A4B9C
    void AnimatePositionOffsetSize(UnityEngine::Vector3 offset, float duration, Tweening::EaseType easeType);
    // public System.Void AnimateEnabled(System.Boolean isEnabled, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11A4C40
    void AnimateEnabled(bool isEnabled, float duration, Tweening::EaseType easeType);
    // public System.Void SetText(System.String text)
    // Offset: 0x11A4DBC
    void SetText(::Il2CppString* text);
    // private System.Void <Awake>b__8_0(System.Single val)
    // Offset: 0x11A4DE0
    void $Awake$b__8_0(float val);
    // private System.Void <Awake>b__8_1(System.Single val)
    // Offset: 0x11A4E74
    void $Awake$b__8_1(float val);
    // private System.Void <Awake>b__8_5()
    // Offset: 0x11A4F08
    void $Awake$b__8_5();
    // private System.Void <Awake>b__8_2(System.Single val)
    // Offset: 0x11A4F38
    void $Awake$b__8_2(float val);
    // private System.Void <Awake>b__8_3(UnityEngine.Color val)
    // Offset: 0x11A4F54
    void $Awake$b__8_3(UnityEngine::Color val);
    // private System.Void <Awake>b__8_4(UnityEngine.Vector3 val)
    // Offset: 0x11A4F78
    void $Awake$b__8_4(UnityEngine::Vector3 val);
    // public System.Void .ctor()
    // Offset: 0x11A4DD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCenterTextAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerCenterTextAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCenterTextAnimator*, creationType>()));
    }
  }; // MultiplayerCenterTextAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerCenterTextAnimator), 80 + sizeof(Tweening::Tween_1<UnityEngine::Vector3>*)> __GlobalNamespace_MultiplayerCenterTextAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerCenterTextAnimator) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCenterTextAnimator*, "", "MultiplayerCenterTextAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&GlobalNamespace::MultiplayerCenterTextAnimator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&GlobalNamespace::MultiplayerCenterTextAnimator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimateTextColor
// Il2CppName: AnimateTextColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(UnityEngine::Color, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimateTextColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimateTextColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimateFontSize
// Il2CppName: AnimateFontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimateFontSize)> {
  static const MethodInfo* get() {
    static auto* fontSize = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimateFontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fontSize, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimatePositionOffsetSize
// Il2CppName: AnimatePositionOffsetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(UnityEngine::Vector3, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimatePositionOffsetSize)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimatePositionOffsetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::AnimateEnabled
// Il2CppName: AnimateEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(bool, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerCenterTextAnimator::AnimateEnabled)> {
  static const MethodInfo* get() {
    static auto* isEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("Tweening", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "AnimateEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isEnabled, duration, easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerCenterTextAnimator::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_0
// Il2CppName: <Awake>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_1
// Il2CppName: <Awake>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_5
// Il2CppName: <Awake>b__8_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_2
// Il2CppName: <Awake>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(float)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_2)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_3
// Il2CppName: <Awake>b__8_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(UnityEngine::Color)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_3)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_4
// Il2CppName: <Awake>b__8_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCenterTextAnimator::*)(UnityEngine::Vector3)>(&GlobalNamespace::MultiplayerCenterTextAnimator::$Awake$b__8_4)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCenterTextAnimator*), "<Awake>b__8_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCenterTextAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
