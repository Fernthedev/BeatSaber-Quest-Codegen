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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterMaterialSwitcher
  class BTSCharacterMaterialSwitcher;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacter
  // [RequireComponent] Offset: E10B8C
  // [RequireComponent] Offset: E10B8C
  class BTSCharacter : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _characterName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* characterName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xE12C78
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private BTSCharacterMaterialSwitcher _btsCharacterMaterialSwitcher
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BTSCharacterMaterialSwitcher* btsCharacterMaterialSwitcher;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterMaterialSwitcher*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: BTSCharacter
    BTSCharacter(::Il2CppString* characterName_ = {}, UnityEngine::Animator* animator_ = {}, GlobalNamespace::BTSCharacterMaterialSwitcher* btsCharacterMaterialSwitcher_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, UnityEngine::Transform* headTransform_ = {}) noexcept : characterName{characterName_}, animator{animator_}, btsCharacterMaterialSwitcher{btsCharacterMaterialSwitcher_}, materialPropertyBlockController{materialPropertyBlockController_}, headTransform{headTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_characterName()
    // Offset: 0x113A338
    ::Il2CppString* get_characterName();
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x113A340
    GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public UnityEngine.Animator get_animator()
    // Offset: 0x113A348
    UnityEngine::Animator* get_animator();
    // public UnityEngine.Transform get_headTransform()
    // Offset: 0x113A350
    UnityEngine::Transform* get_headTransform();
    // public System.Void SetAlternativeAnimationAndMaterial(UnityEngine.AnimationClip animation, System.Boolean alternativeMaterialOn)
    // Offset: 0x113A358
    void SetAlternativeAnimationAndMaterial(UnityEngine::AnimationClip* animation, bool alternativeMaterialOn);
    // public System.Void .ctor()
    // Offset: 0x113A724
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacter*, creationType>()));
    }
  }; // BTSCharacter
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacter), 56 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BTSCharacterSizeCheck;
  static_assert(sizeof(BTSCharacter) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacter*, "", "BTSCharacter");
// Writing includes for template specializations
#include "UnityEngine/AnimationClip.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_characterName
// Il2CppName: get_characterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_characterName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_characterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_materialPropertyBlockController
// Il2CppName: get_materialPropertyBlockController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MaterialPropertyBlockController* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_materialPropertyBlockController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_materialPropertyBlockController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_animator
// Il2CppName: get_animator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Animator* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_animator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_animator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::get_headTransform
// Il2CppName: get_headTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_headTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "get_headTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial
// Il2CppName: SetAlternativeAnimationAndMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacter::*)(UnityEngine::AnimationClip*, bool)>(&GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacter*), "SetAlternativeAnimationAndMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimationClip*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
