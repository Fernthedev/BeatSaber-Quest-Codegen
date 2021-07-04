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
  // Forward declaring type: HologramRays
  class HologramRays;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
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
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBigAvatarAnimator
  class MultiplayerBigAvatarAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _displayedScale
    // Size: 0x4
    // Offset: 0x18
    float displayedScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: displayedScale and: hologramRays
    char __padding0[0x4] = {};
    // private HologramRays _hologramRays
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HologramRays* hologramRays;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HologramRays*) == 0x8);
    // private UnityEngine.Transform _avatarTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* avatarTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE1DBD4
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x30
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _scaleUpTween
    // Size: 0x8
    // Offset: 0x38
    Tweening::Tween_1<float>* scaleUpTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _scaleDownTween
    // Size: 0x8
    // Offset: 0x40
    Tweening::Tween_1<float>* scaleDownTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x48
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerBigAvatarAnimator
    MultiplayerBigAvatarAnimator(float displayedScale_ = {}, GlobalNamespace::HologramRays* hologramRays_ = {}, UnityEngine::Transform* avatarTransform_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* scaleUpTween_ = {}, Tweening::Tween_1<float>* scaleDownTween_ = {}, bool initialized_ = {}) noexcept : displayedScale{displayedScale_}, hologramRays{hologramRays_}, avatarTransform{avatarTransform_}, tweeningManager{tweeningManager_}, scaleUpTween{scaleUpTween_}, scaleDownTween{scaleDownTween_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0x1148DA0
    void OnDestroy();
    // private System.Void InitIfNeeded()
    // Offset: 0x1148E38
    void InitIfNeeded();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1148FCC
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void HideInstant()
    // Offset: 0x1149048
    void HideInstant();
    // public System.Void Animate(System.Boolean show, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x114910C
    void Animate(bool show, float duration, Tweening::EaseType easeType);
    // private System.Void <InitIfNeeded>b__8_0(System.Single val)
    // Offset: 0x1149308
    void $InitIfNeeded$b__8_0(float val);
    // private System.Void <InitIfNeeded>b__8_1(System.Single val)
    // Offset: 0x114939C
    void $InitIfNeeded$b__8_1(float val);
    // private System.Void <InitIfNeeded>b__8_2()
    // Offset: 0x1149430
    void $InitIfNeeded$b__8_2();
    // public System.Void .ctor()
    // Offset: 0x11492F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBigAvatarAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBigAvatarAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBigAvatarAnimator*, creationType>()));
    }
  }; // MultiplayerBigAvatarAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBigAvatarAnimator), 72 + sizeof(bool)> __GlobalNamespace_MultiplayerBigAvatarAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerBigAvatarAnimator) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBigAvatarAnimator*, "", "MultiplayerBigAvatarAnimator");
// Writing includes for template specializations
#include "Tweening/EaseType.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)()>(&GlobalNamespace::MultiplayerBigAvatarAnimator::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)()>(&GlobalNamespace::MultiplayerBigAvatarAnimator::InitIfNeeded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::SetPositionAndRotation
// Il2CppName: SetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&GlobalNamespace::MultiplayerBigAvatarAnimator::SetPositionAndRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "SetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::HideInstant
// Il2CppName: HideInstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)()>(&GlobalNamespace::MultiplayerBigAvatarAnimator::HideInstant)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "HideInstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::Animate
// Il2CppName: Animate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)(bool, float, Tweening::EaseType)>(&GlobalNamespace::MultiplayerBigAvatarAnimator::Animate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "Animate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<Tweening::EaseType>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::$InitIfNeeded$b__8_0
// Il2CppName: <InitIfNeeded>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)(float)>(&GlobalNamespace::MultiplayerBigAvatarAnimator::$InitIfNeeded$b__8_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "<InitIfNeeded>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::$InitIfNeeded$b__8_1
// Il2CppName: <InitIfNeeded>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)(float)>(&GlobalNamespace::MultiplayerBigAvatarAnimator::$InitIfNeeded$b__8_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "<InitIfNeeded>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::$InitIfNeeded$b__8_2
// Il2CppName: <InitIfNeeded>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarAnimator::*)()>(&GlobalNamespace::MultiplayerBigAvatarAnimator::$InitIfNeeded$b__8_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarAnimator*), "<InitIfNeeded>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
