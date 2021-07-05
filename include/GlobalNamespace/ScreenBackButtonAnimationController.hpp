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
  // Skipping declaration: AnimationType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ScreenBackButtonAnimationController
  class ScreenBackButtonAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScreenBackButtonAnimationController::AnimationType
    struct AnimationType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: ScreenBackButtonAnimationController/AnimationType
    struct AnimationType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: AnimationType
      constexpr AnimationType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public ScreenBackButtonAnimationController/AnimationType FadeIn
      static constexpr const int FadeIn = 0;
      // Get static field: static public ScreenBackButtonAnimationController/AnimationType FadeIn
      static GlobalNamespace::ScreenBackButtonAnimationController::AnimationType _get_FadeIn();
      // Set static field: static public ScreenBackButtonAnimationController/AnimationType FadeIn
      static void _set_FadeIn(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType value);
      // static field const value: static public ScreenBackButtonAnimationController/AnimationType FadeOut
      static constexpr const int FadeOut = 1;
      // Get static field: static public ScreenBackButtonAnimationController/AnimationType FadeOut
      static GlobalNamespace::ScreenBackButtonAnimationController::AnimationType _get_FadeOut();
      // Set static field: static public ScreenBackButtonAnimationController/AnimationType FadeOut
      static void _set_FadeOut(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType value);
      // static field const value: static public ScreenBackButtonAnimationController/AnimationType MoveIn
      static constexpr const int MoveIn = 2;
      // Get static field: static public ScreenBackButtonAnimationController/AnimationType MoveIn
      static GlobalNamespace::ScreenBackButtonAnimationController::AnimationType _get_MoveIn();
      // Set static field: static public ScreenBackButtonAnimationController/AnimationType MoveIn
      static void _set_MoveIn(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType value);
      // static field const value: static public ScreenBackButtonAnimationController/AnimationType MoveOut
      static constexpr const int MoveOut = 3;
      // Get static field: static public ScreenBackButtonAnimationController/AnimationType MoveOut
      static GlobalNamespace::ScreenBackButtonAnimationController::AnimationType _get_MoveOut();
      // Set static field: static public ScreenBackButtonAnimationController/AnimationType MoveOut
      static void _set_MoveOut(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType value);
      // static field const value: static public ScreenBackButtonAnimationController/AnimationType MoveIn2
      static constexpr const int MoveIn2 = 4;
      // Get static field: static public ScreenBackButtonAnimationController/AnimationType MoveIn2
      static GlobalNamespace::ScreenBackButtonAnimationController::AnimationType _get_MoveIn2();
      // Set static field: static public ScreenBackButtonAnimationController/AnimationType MoveIn2
      static void _set_MoveIn2(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType value);
      // static field const value: static public ScreenBackButtonAnimationController/AnimationType MoveOut2
      static constexpr const int MoveOut2 = 5;
      // Get static field: static public ScreenBackButtonAnimationController/AnimationType MoveOut2
      static GlobalNamespace::ScreenBackButtonAnimationController::AnimationType _get_MoveOut2();
      // Set static field: static public ScreenBackButtonAnimationController/AnimationType MoveOut2
      static void _set_MoveOut2(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType value);
    }; // ScreenBackButtonAnimationController/AnimationType
    #pragma pack(pop)
    static check_size<sizeof(ScreenBackButtonAnimationController::AnimationType), 0 + sizeof(int)> __GlobalNamespace_ScreenBackButtonAnimationController_AnimationTypeSizeCheck;
    static_assert(sizeof(ScreenBackButtonAnimationController::AnimationType) == 0x4);
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<ScreenBackButtonAnimationController/AnimationType,System.Int32> _animationHashes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenBackButtonAnimationController::AnimationType, int>* animationHashes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenBackButtonAnimationController::AnimationType, int>*) == 0x8);
    // Creating value type constructor for type: ScreenBackButtonAnimationController
    ScreenBackButtonAnimationController(UnityEngine::Animator* animator_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenBackButtonAnimationController::AnimationType, int>* animationHashes_ = {}) noexcept : animator{animator_}, animationHashes{animationHashes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x2388294
    void Awake();
    // public System.Void StartAnimation(ScreenBackButtonAnimationController/AnimationType animationType)
    // Offset: 0x23882B4
    void StartAnimation(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType animationType);
    // public System.Void .ctor()
    // Offset: 0x2388334
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenBackButtonAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScreenBackButtonAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenBackButtonAnimationController*, creationType>()));
    }
  }; // ScreenBackButtonAnimationController
  #pragma pack(pop)
  static check_size<sizeof(ScreenBackButtonAnimationController), 32 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenBackButtonAnimationController::AnimationType, int>*)> __GlobalNamespace_ScreenBackButtonAnimationControllerSizeCheck;
  static_assert(sizeof(ScreenBackButtonAnimationController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenBackButtonAnimationController*, "", "ScreenBackButtonAnimationController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType, "", "ScreenBackButtonAnimationController/AnimationType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScreenBackButtonAnimationController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenBackButtonAnimationController::*)()>(&GlobalNamespace::ScreenBackButtonAnimationController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenBackButtonAnimationController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation
// Il2CppName: StartAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScreenBackButtonAnimationController::*)(GlobalNamespace::ScreenBackButtonAnimationController::AnimationType)>(&GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation)> {
  const MethodInfo* get() {
    static auto* animationType = &::il2cpp_utils::GetClassFromName("", "ScreenBackButtonAnimationController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenBackButtonAnimationController*), "StartAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animationType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenBackButtonAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
