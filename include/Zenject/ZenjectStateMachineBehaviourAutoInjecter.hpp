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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectStateMachineBehaviourAutoInjecter
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenjectStateMachineBehaviourAutoInjecter : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // Creating value type constructor for type: ZenjectStateMachineBehaviourAutoInjecter
    ZenjectStateMachineBehaviourAutoInjecter(Zenject::DiContainer* container_ = {}, UnityEngine::Animator* animator_ = {}) noexcept : container{container_}, animator{animator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private Zenject.DiContainer _container
    Zenject::DiContainer* _get__container();
    // Set instance field: private Zenject.DiContainer _container
    void _set__container(Zenject::DiContainer* value);
    // Get instance field: private UnityEngine.Animator _animator
    UnityEngine::Animator* _get__animator();
    // Set instance field: private UnityEngine.Animator _animator
    void _set__animator(UnityEngine::Animator* value);
    // public System.Void Construct(Zenject.DiContainer container)
    // Offset: 0x23E8094
    void Construct(Zenject::DiContainer* container);
    // public System.Void Start()
    // Offset: 0x23E8100
    void Start();
    // public System.Void .ctor()
    // Offset: 0x23E81F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectStateMachineBehaviourAutoInjecter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectStateMachineBehaviourAutoInjecter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectStateMachineBehaviourAutoInjecter*, creationType>()));
    }
  }; // Zenject.ZenjectStateMachineBehaviourAutoInjecter
  #pragma pack(pop)
  static check_size<sizeof(ZenjectStateMachineBehaviourAutoInjecter), 32 + sizeof(UnityEngine::Animator*)> __Zenject_ZenjectStateMachineBehaviourAutoInjecterSizeCheck;
  static_assert(sizeof(ZenjectStateMachineBehaviourAutoInjecter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectStateMachineBehaviourAutoInjecter*, "Zenject", "ZenjectStateMachineBehaviourAutoInjecter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectStateMachineBehaviourAutoInjecter::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectStateMachineBehaviourAutoInjecter::*)(Zenject::DiContainer*)>(&Zenject::ZenjectStateMachineBehaviourAutoInjecter::Construct)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectStateMachineBehaviourAutoInjecter*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectStateMachineBehaviourAutoInjecter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectStateMachineBehaviourAutoInjecter::*)()>(&Zenject::ZenjectStateMachineBehaviourAutoInjecter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectStateMachineBehaviourAutoInjecter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectStateMachineBehaviourAutoInjecter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
