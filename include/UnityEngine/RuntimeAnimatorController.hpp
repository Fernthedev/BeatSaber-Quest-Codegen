// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RuntimeAnimatorController
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DCE688
  // [ExcludeFromObjectFactoryAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DCE688
  class RuntimeAnimatorController : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: RuntimeAnimatorController
    RuntimeAnimatorController() noexcept {}
    // public UnityEngine.AnimationClip[] get_animationClips()
    // Offset: 0x238ABF8
    ::Array<UnityEngine::AnimationClip*>* get_animationClips();
    // protected System.Void .ctor()
    // Offset: 0x238942C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeAnimatorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RuntimeAnimatorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeAnimatorController*, creationType>()));
    }
  }; // UnityEngine.RuntimeAnimatorController
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RuntimeAnimatorController*, "UnityEngine", "RuntimeAnimatorController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RuntimeAnimatorController::get_animationClips
// Il2CppName: get_animationClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::AnimationClip*>* (UnityEngine::RuntimeAnimatorController::*)()>(&UnityEngine::RuntimeAnimatorController::get_animationClips)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RuntimeAnimatorController*), "get_animationClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RuntimeAnimatorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
