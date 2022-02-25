// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactorySubContainerBinderBase`1
#include "Zenject/FactorySubContainerBinderBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: IInstaller
  class IInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactorySubContainerBinderWithParams`1<TContract>
  template<typename TContract>
  class FactorySubContainerBinderWithParams_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinderWithParams_1, "Zenject", "FactorySubContainerBinderWithParams`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class FactorySubContainerBinderWithParams_1 : public Zenject::FactorySubContainerBinderBase_1<TContract> {
    public:
    // Nested type: Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0<TContract>
    template<typename TContract>
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0<TContract>
    template<typename TContract>
    class $$c__DisplayClass8_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass4_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    template<typename TContract>
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderWithParams_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass4_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderWithParams_1<TContract>*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // public UnityEngine.Object prefab
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // Field size check
      static_assert(sizeof(UnityEngine::Object*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      Zenject::FactorySubContainerBinderWithParams_1<TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinderWithParams_1<TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Type installerType
      System::Type*& dyn_installerType() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_installerType");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerType"))->offset;
        return *reinterpret_cast<System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.Object prefab
      UnityEngine::Object*& dyn_prefab() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_prefab");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prefab"))->offset;
        return *reinterpret_cast<UnityEngine::Object**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewContextPrefab>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewContextPrefab$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::<ByNewContextPrefab>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewContextPrefab>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFF
      static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass4_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass8_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    template<typename TContract>
    class $$c__DisplayClass8_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderWithParams_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass8_0";
      static constexpr bool IS_VALUE_TYPE = false;
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderWithParams_1<TContract>*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // public System.String resourcePath
      // Size: 0x8
      // Offset: 0x0
      ::StringW resourcePath;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      Zenject::FactorySubContainerBinderWithParams_1<TContract>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<Zenject::FactorySubContainerBinderWithParams_1<TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Type installerType
      System::Type*& dyn_installerType() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_installerType");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "installerType"))->offset;
        return *reinterpret_cast<System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.String resourcePath
      ::StringW& dyn_resourcePath() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_resourcePath");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resourcePath"))->offset;
        return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Zenject.GameObjectCreationParameters gameObjectInfo
      Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::dyn_gameObjectInfo");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "gameObjectInfo"))->offset;
        return *reinterpret_cast<Zenject::GameObjectCreationParameters**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <ByNewContextPrefabResource>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewContextPrefabResource$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::<ByNewContextPrefabResource>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewContextPrefabResource>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // static private System.Object __zenCreate(System.Object[] P_0)
      // Offset: 0xFFFFFFFF
      static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::__zenCreate");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
      }
      // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
      // Offset: 0xFFFFFFFF
      static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::__zenCreateInjectTypeInfo");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass8_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1/Zenject.<>c__DisplayClass8_0 is generic, or has no fields that are valid for size checks!
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(System.Type installerType, UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(System::Type* installerType, UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefab", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(prefab)})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(UnityEngine::Object* prefab) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TInstaller>, Zenject::IInstaller>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefab", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(UnityEngine::Object* prefab) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TInstaller>, Zenject::IInstaller>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefab", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(prefab)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(System.Type installerType, UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(System::Type* installerType, UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefab");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefab", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(prefab)})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TInstaller>, Zenject::IInstaller>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResource", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.Type installerType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(System::Type* installerType, ::StringW resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewPrefabResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(resourcePath)})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TInstaller>, Zenject::IInstaller>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefabResource", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.Type installerType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(System::Type* installerType, ::StringW resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefabResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ByNewContextPrefabResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(installerType), ::il2cpp_utils::ExtractType(resourcePath)})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, resourcePath);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactorySubContainerBinderBase`1
    // Base method: System.Void FactorySubContainerBinderBase_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactorySubContainerBinderWithParams_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactorySubContainerBinderWithParams_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, subIdentifier)));
    }
  }; // Zenject.FactorySubContainerBinderWithParams`1
  // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
