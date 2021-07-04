// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IPrefabInstantiator
#include "Zenject/IPrefabInstantiator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabInstantiatorCached
  // [NoReflectionBakingAttribute] Offset: DDD144
  class PrefabInstantiatorCached : public ::Il2CppObject/*, public Zenject::IPrefabInstantiator*/ {
    public:
    // private readonly Zenject.IPrefabInstantiator _subInstantiator
    // Size: 0x8
    // Offset: 0x10
    Zenject::IPrefabInstantiator* subInstantiator;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabInstantiator*) == 0x8);
    // private UnityEngine.GameObject _gameObject
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: PrefabInstantiatorCached
    PrefabInstantiatorCached(Zenject::IPrefabInstantiator* subInstantiator_ = {}, UnityEngine::GameObject* gameObject_ = {}) noexcept : subInstantiator{subInstantiator_}, gameObject{gameObject_} {}
    // Creating interface conversion operator: operator Zenject::IPrefabInstantiator
    operator Zenject::IPrefabInstantiator() noexcept {
      return *reinterpret_cast<Zenject::IPrefabInstantiator*>(this);
    }
    // public System.Void .ctor(Zenject.IPrefabInstantiator subInstantiator)
    // Offset: 0x16DF000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabInstantiatorCached* New_ctor(Zenject::IPrefabInstantiator* subInstantiator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabInstantiatorCached::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabInstantiatorCached*, creationType>(subInstantiator)));
    }
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0x16DFE18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public System.Type get_ArgumentTarget()
    // Offset: 0x16DFECC
    System::Type* get_ArgumentTarget();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0x16DFF7C
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public UnityEngine.Object GetPrefab()
    // Offset: 0x16E0030
    UnityEngine::Object* GetPrefab();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    // Offset: 0x16E00E4
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction);
  }; // Zenject.PrefabInstantiatorCached
  #pragma pack(pop)
  static check_size<sizeof(PrefabInstantiatorCached), 24 + sizeof(UnityEngine::GameObject*)> __Zenject_PrefabInstantiatorCachedSizeCheck;
  static_assert(sizeof(PrefabInstantiatorCached) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiatorCached*, "Zenject", "PrefabInstantiatorCached");
// Writing includes for template specializations
#include "Zenject/InjectContext.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Action.hpp"
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::get_ExtraArguments
// Il2CppName: get_ExtraArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::TypeValuePair>* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::get_ExtraArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "get_ExtraArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::get_ArgumentTarget
// Il2CppName: get_ArgumentTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::get_ArgumentTarget)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "get_ArgumentTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters
// Il2CppName: get_GameObjectCreationParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::GameObjectCreationParameters* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::get_GameObjectCreationParameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "get_GameObjectCreationParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::GetPrefab
// Il2CppName: GetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (Zenject::PrefabInstantiatorCached::*)()>(&Zenject::PrefabInstantiatorCached::GetPrefab)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "GetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiatorCached::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::PrefabInstantiatorCached::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Action*&)>(&Zenject::PrefabInstantiatorCached::Instantiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiatorCached*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*&>()});
  }
};
