// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::FromBinder::$$c__DisplayClass66_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FromBinder::$$c__DisplayClass66_1*, "Zenject", "FromBinder/<>c__DisplayClass66_1");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass66_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass66_1 : public ::Il2CppObject {
    public:
    public:
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* concreteType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public Zenject.FromBinder/Zenject.<>c__DisplayClass66_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x20
    ::Zenject::FromBinder::$$c__DisplayClass66_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::Zenject::FromBinder::$$c__DisplayClass66_0*) == 0x8);
    // public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<UnityEngine.Component>> <>9__2
    // Size: 0x8
    // Offset: 0x28
    ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>*>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>*>*) == 0x8);
    public:
    // Get instance field reference: public Zenject.DiContainer container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn_container();
    // Get instance field reference: public System.Type concreteType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_concreteType();
    // Get instance field reference: public Zenject.FromBinder/Zenject.<>c__DisplayClass66_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::Zenject::FromBinder::$$c__DisplayClass66_0*& dyn_CS$$$8__locals1();
    // Get instance field reference: public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<UnityEngine.Component>> <>9__2
    [[deprecated("Use field access instead!")]] ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>*>*& dyn_$$9__2();
    // public System.Void .ctor()
    // Offset: 0x1E18950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass66_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FromBinder::$$c__DisplayClass66_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass66_1*, creationType>()));
    }
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentsInHierarchyBase>b__1(Zenject.InjectContext ctx)
    // Offset: 0x1E18B14
    ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentsInHierarchyBase$b__1(::Zenject::InjectContext* ctx);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.Component> <FromComponentsInHierarchyBase>b__2(UnityEngine.GameObject x)
    // Offset: 0x1E18C8C
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>* $FromComponentsInHierarchyBase$b__2(::UnityEngine::GameObject* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1E18CC0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1E18D1C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass66_1
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass66_1), 40 + sizeof(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>*>*)> __Zenject_FromBinder_$$c__DisplayClass66_1SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass66_1) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass66_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass66_1::$FromComponentsInHierarchyBase$b__1
// Il2CppName: <FromComponentsInHierarchyBase>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::FromBinder::$$c__DisplayClass66_1::*)(::Zenject::InjectContext*)>(&Zenject::FromBinder::$$c__DisplayClass66_1::$FromComponentsInHierarchyBase$b__1)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass66_1*), "<FromComponentsInHierarchyBase>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass66_1::$FromComponentsInHierarchyBase$b__2
// Il2CppName: <FromComponentsInHierarchyBase>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Component*>* (Zenject::FromBinder::$$c__DisplayClass66_1::*)(::UnityEngine::GameObject*)>(&Zenject::FromBinder::$$c__DisplayClass66_1::$FromComponentsInHierarchyBase$b__2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass66_1*), "<FromComponentsInHierarchyBase>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass66_1::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::FromBinder::$$c__DisplayClass66_1::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass66_1*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass66_1::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::FromBinder::$$c__DisplayClass66_1::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass66_1*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
