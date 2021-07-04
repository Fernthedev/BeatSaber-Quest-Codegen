// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AddToGameObjectComponentProviderBase
#include "Zenject/AddToGameObjectComponentProviderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AddToExistingGameObjectComponentProviderGetter
  // [NoReflectionBakingAttribute] Offset: DDCEB4
  class AddToExistingGameObjectComponentProviderGetter : public Zenject::AddToGameObjectComponentProviderBase {
    public:
    // private readonly System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> _gameObjectGetter
    // Size: 0x8
    // Offset: 0x38
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*) == 0x8);
    // Creating value type constructor for type: AddToExistingGameObjectComponentProviderGetter
    AddToExistingGameObjectComponentProviderGetter(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter_ = {}) noexcept : gameObjectGetter{gameObjectGetter_} {}
    // Creating conversion operator: operator System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*
    constexpr operator System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*() const noexcept {
      return gameObjectGetter;
    }
    // public System.Void .ctor(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter, Zenject.DiContainer container, System.Type componentType, System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArguments, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x1387A64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddToExistingGameObjectComponentProviderGetter* New_ctor(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter, Zenject::DiContainer* container, System::Type* componentType, System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AddToExistingGameObjectComponentProviderGetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddToExistingGameObjectComponentProviderGetter*, creationType>(gameObjectGetter, container, componentType, extraArguments, concreteIdentifier, instantiateCallback)));
    }
    // protected override System.Boolean get_ShouldToggleActive()
    // Offset: 0x1387AA0
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: System.Boolean AddToGameObjectComponentProviderBase::get_ShouldToggleActive()
    bool get_ShouldToggleActive();
    // protected override UnityEngine.GameObject GetGameObject(Zenject.InjectContext context)
    // Offset: 0x1387AA8
    // Implemented from: Zenject.AddToGameObjectComponentProviderBase
    // Base method: UnityEngine.GameObject AddToGameObjectComponentProviderBase::GetGameObject(Zenject.InjectContext context)
    UnityEngine::GameObject* GetGameObject(Zenject::InjectContext* context);
  }; // Zenject.AddToExistingGameObjectComponentProviderGetter
  #pragma pack(pop)
  static check_size<sizeof(AddToExistingGameObjectComponentProviderGetter), 56 + sizeof(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*)> __Zenject_AddToExistingGameObjectComponentProviderGetterSizeCheck;
  static_assert(sizeof(AddToExistingGameObjectComponentProviderGetter) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToExistingGameObjectComponentProviderGetter*, "Zenject", "AddToExistingGameObjectComponentProviderGetter");
// Writing includes for template specializations
#include "System/Func_2.hpp"
#include "Zenject/DiContainer.hpp"
#include "System/Type.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Action_2.hpp"
#include "Zenject/InjectContext.hpp"
// Writing MetadataGetter for method: Zenject::AddToExistingGameObjectComponentProviderGetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive
// Il2CppName: get_ShouldToggleActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::AddToExistingGameObjectComponentProviderGetter::*)()>(&Zenject::AddToExistingGameObjectComponentProviderGetter::get_ShouldToggleActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToExistingGameObjectComponentProviderGetter*), "get_ShouldToggleActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject
// Il2CppName: GetGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::AddToExistingGameObjectComponentProviderGetter::*)(Zenject::InjectContext*)>(&Zenject::AddToExistingGameObjectComponentProviderGetter::GetGameObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::AddToExistingGameObjectComponentProviderGetter*), "GetGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
