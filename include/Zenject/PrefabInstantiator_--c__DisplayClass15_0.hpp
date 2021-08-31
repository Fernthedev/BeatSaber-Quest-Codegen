// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PrefabInstantiator
#include "Zenject/PrefabInstantiator.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabInstantiator/Zenject.<>c__DisplayClass15_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PrefabInstantiator::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiator <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabInstantiator* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::PrefabInstantiator*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // public System.Boolean shouldMakeActive
    // Size: 0x1
    // Offset: 0x30
    bool shouldMakeActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass15_0
    $$c__DisplayClass15_0(Zenject::PrefabInstantiator* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}, UnityEngine::GameObject* gameObject_ = {}, Zenject::InjectContext* context_ = {}, bool shouldMakeActive_ = {}) noexcept : $$4__this{$$4__this_}, args{args_}, gameObject{gameObject_}, context{context_}, shouldMakeActive{shouldMakeActive_} {}
    // Get instance field: public Zenject.PrefabInstantiator <>4__this
    Zenject::PrefabInstantiator* _get_$$4__this();
    // Set instance field: public Zenject.PrefabInstantiator <>4__this
    void _set_$$4__this(Zenject::PrefabInstantiator* value);
    // Get instance field: public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* _get_args();
    // Set instance field: public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    void _set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
    // Get instance field: public UnityEngine.GameObject gameObject
    UnityEngine::GameObject* _get_gameObject();
    // Set instance field: public UnityEngine.GameObject gameObject
    void _set_gameObject(UnityEngine::GameObject* value);
    // Get instance field: public Zenject.InjectContext context
    Zenject::InjectContext* _get_context();
    // Set instance field: public Zenject.InjectContext context
    void _set_context(Zenject::InjectContext* value);
    // Get instance field: public System.Boolean shouldMakeActive
    bool _get_shouldMakeActive();
    // Set instance field: public System.Boolean shouldMakeActive
    void _set_shouldMakeActive(bool value);
    // System.Void <Instantiate>b__0()
    // Offset: 0x17163CC
    void $Instantiate$b__0();
    // public System.Void .ctor()
    // Offset: 0x17163C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabInstantiator::$$c__DisplayClass15_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabInstantiator::$$c__DisplayClass15_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabInstantiator::$$c__DisplayClass15_0*, creationType>()));
    }
  }; // Zenject.PrefabInstantiator/Zenject.<>c__DisplayClass15_0
  #pragma pack(pop)
  static check_size<sizeof(PrefabInstantiator::$$c__DisplayClass15_0), 48 + sizeof(bool)> __Zenject_PrefabInstantiator_$$c__DisplayClass15_0SizeCheck;
  static_assert(sizeof(PrefabInstantiator::$$c__DisplayClass15_0) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiator::$$c__DisplayClass15_0*, "Zenject", "PrefabInstantiator/<>c__DisplayClass15_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::$$c__DisplayClass15_0::$Instantiate$b__0
// Il2CppName: <Instantiate>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabInstantiator::$$c__DisplayClass15_0::*)()>(&Zenject::PrefabInstantiator::$$c__DisplayClass15_0::$Instantiate$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabInstantiator::$$c__DisplayClass15_0*), "<Instantiate>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabInstantiator::$$c__DisplayClass15_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
