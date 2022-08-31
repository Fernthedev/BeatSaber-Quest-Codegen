// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.AddToGameObjectComponentProviderBase
#include "Zenject/AddToGameObjectComponentProviderBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: AddToExistingGameObjectComponentProvider
  class AddToExistingGameObjectComponentProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::AddToExistingGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToExistingGameObjectComponentProvider*, "Zenject", "AddToExistingGameObjectComponentProvider");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AddToExistingGameObjectComponentProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class AddToExistingGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
    public:
    public:
    // private readonly UnityEngine.GameObject _gameObject
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept {
      return gameObject;
    }
    // Get instance field reference: private readonly UnityEngine.GameObject _gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__gameObject();
    // public System.Void .ctor(UnityEngine.GameObject gameObject, Zenject.DiContainer container, System.Type componentType, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x1770618
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddToExistingGameObjectComponentProvider* New_ctor(::UnityEngine::GameObject* gameObject, ::Zenject::DiContainer* container, ::System::Type* componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::Il2CppObject* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::AddToExistingGameObjectComponentProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddToExistingGameObjectComponentProvider*, creationType>(gameObject, container, componentType, extraArguments, concreteIdentifier, instantiateCallback)));
    }
    // protected override System.Boolean get_ShouldToggleActive()
    // Offset: 0x1770728
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: System.Boolean AddToGameObjectComponentProviderBase::get_ShouldToggleActive()
    bool get_ShouldToggleActive();
    // protected override UnityEngine.GameObject GetGameObject(Zenject.InjectContext context)
    // Offset: 0x1770730
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: UnityEngine.GameObject AddToGameObjectComponentProviderBase::GetGameObject(Zenject.InjectContext context)
    ::UnityEngine::GameObject* GetGameObject(::Zenject::InjectContext* context);
  }; // Zenject.AddToExistingGameObjectComponentProvider
  #pragma pack(pop)
  static check_size<sizeof(AddToExistingGameObjectComponentProvider), 56 + sizeof(::UnityEngine::GameObject*)> __Zenject_AddToExistingGameObjectComponentProviderSizeCheck;
  static_assert(sizeof(AddToExistingGameObjectComponentProvider) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::AddToExistingGameObjectComponentProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::AddToExistingGameObjectComponentProvider::get_ShouldToggleActive
// Il2CppName: get_ShouldToggleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToExistingGameObjectComponentProvider::*)()>(&Zenject::AddToExistingGameObjectComponentProvider::get_ShouldToggleActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToExistingGameObjectComponentProvider*), "get_ShouldToggleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToExistingGameObjectComponentProvider::GetGameObject
// Il2CppName: GetGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Zenject::AddToExistingGameObjectComponentProvider::*)(::Zenject::InjectContext*)>(&Zenject::AddToExistingGameObjectComponentProvider::GetGameObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToExistingGameObjectComponentProvider*), "GetGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
