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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Animation
  class Animation;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEffectController
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSStarTextEffectController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSStarTextEffectController::Pool
    class Pool;
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private System.Single _currentAnimationDuration
    // Size: 0x4
    // Offset: 0x30
    float currentAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BTSStarTextEffectController
    BTSStarTextEffectController(UnityEngine::Transform* transform_ = {}, UnityEngine::SpriteRenderer* spriteRenderer_ = {}, UnityEngine::Animation* animation_ = {}, float currentAnimationDuration_ = {}) noexcept : transform{transform_}, spriteRenderer{spriteRenderer_}, animation{animation_}, currentAnimationDuration{currentAnimationDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kAnimationName
    static constexpr const char* kAnimationName = "StarTextShort";
    // Get static field: static private System.String kAnimationName
    static ::Il2CppString* _get_kAnimationName();
    // Set static field: static private System.String kAnimationName
    static void _set_kAnimationName(::Il2CppString* value);
    // Get instance field: private UnityEngine.Transform _transform
    UnityEngine::Transform* _get__transform();
    // Set instance field: private UnityEngine.Transform _transform
    void _set__transform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.SpriteRenderer _spriteRenderer
    UnityEngine::SpriteRenderer* _get__spriteRenderer();
    // Set instance field: private UnityEngine.SpriteRenderer _spriteRenderer
    void _set__spriteRenderer(UnityEngine::SpriteRenderer* value);
    // Get instance field: private UnityEngine.Animation _animation
    UnityEngine::Animation* _get__animation();
    // Set instance field: private UnityEngine.Animation _animation
    void _set__animation(UnityEngine::Animation* value);
    // Get instance field: private System.Single _currentAnimationDuration
    float _get__currentAnimationDuration();
    // Set instance field: private System.Single _currentAnimationDuration
    void _set__currentAnimationDuration(float value);
    // public System.Single get_animationDuration()
    // Offset: 0x1188B90
    float get_animationDuration();
    // private System.Void Reinitialize(UnityEngine.Sprite sprite, UnityEngine.Transform parentTransform, System.Single desiredAnimationLength)
    // Offset: 0x1188B98
    void Reinitialize(UnityEngine::Sprite* sprite, UnityEngine::Transform* parentTransform, float desiredAnimationLength);
    // public System.Void .ctor()
    // Offset: 0x1188CA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEffectController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEffectController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEffectController*, creationType>()));
    }
  }; // BTSStarTextEffectController
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEffectController), 48 + sizeof(float)> __GlobalNamespace_BTSStarTextEffectControllerSizeCheck;
  static_assert(sizeof(BTSStarTextEffectController) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectController*, "", "BTSStarTextEffectController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::get_animationDuration
// Il2CppName: get_animationDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BTSStarTextEffectController::*)()>(&GlobalNamespace::BTSStarTextEffectController::get_animationDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectController*), "get_animationDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::Reinitialize
// Il2CppName: Reinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEffectController::*)(UnityEngine::Sprite*, UnityEngine::Transform*, float)>(&GlobalNamespace::BTSStarTextEffectController::Reinitialize)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* parentTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* desiredAnimationLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectController*), "Reinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, parentTransform, desiredAnimationLength});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
