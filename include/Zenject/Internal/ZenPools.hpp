// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`1<TValue>
  template<typename TValue>
  class StaticMemoryPool_1;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindingId
  struct BindingId;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
  // Forward declaring type: LookupId
  class LookupId;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenPools
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenPools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ZenPools
    ZenPools() noexcept {}
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.InjectContext> _contextPool
    static Zenject::StaticMemoryPool_1<Zenject::InjectContext*>* _get__contextPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.InjectContext> _contextPool
    static void _set__contextPool(Zenject::StaticMemoryPool_1<Zenject::InjectContext*>* value);
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.Internal.LookupId> _lookupIdPool
    static Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>* _get__lookupIdPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.Internal.LookupId> _lookupIdPool
    static void _set__lookupIdPool(Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>* value);
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindInfo> _bindInfoPool
    static Zenject::StaticMemoryPool_1<Zenject::BindInfo*>* _get__bindInfoPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindInfo> _bindInfoPool
    static void _set__bindInfoPool(Zenject::StaticMemoryPool_1<Zenject::BindInfo*>* value);
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindStatement> _bindStatementPool
    static Zenject::StaticMemoryPool_1<Zenject::BindStatement*>* _get__bindStatementPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindStatement> _bindStatementPool
    static void _set__bindStatementPool(Zenject::StaticMemoryPool_1<Zenject::BindStatement*>* value);
    // static private System.Void .cctor()
    // Offset: 0x166E27C
    static void _cctor();
    // static public System.Collections.Generic.HashSet`1<T> SpawnHashSet()
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::HashSet_1<T>* SpawnHashSet() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnHashSet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnHashSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::HashSet_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public System.Collections.Generic.Dictionary`2<TKey,TValue> SpawnDictionary()
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static System::Collections::Generic::Dictionary_2<TKey, TValue>* SpawnDictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnDictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnDictionary", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public Zenject.BindStatement SpawnStatement()
    // Offset: 0x166DDC4
    static Zenject::BindStatement* SpawnStatement();
    // static public System.Void DespawnStatement(Zenject.BindStatement statement)
    // Offset: 0x166DE40
    static void DespawnStatement(Zenject::BindStatement* statement);
    // static public Zenject.BindInfo SpawnBindInfo()
    // Offset: 0x166DED4
    static Zenject::BindInfo* SpawnBindInfo();
    // static public System.Void DespawnBindInfo(Zenject.BindInfo bindInfo)
    // Offset: 0x166DF50
    static void DespawnBindInfo(Zenject::BindInfo* bindInfo);
    // static public System.Void DespawnDictionary(System.Collections.Generic.Dictionary`2<TKey,TValue> dictionary)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static void DespawnDictionary(System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnDictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnDictionary", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dictionary)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary);
    }
    // static public System.Void DespawnHashSet(System.Collections.Generic.HashSet`1<T> set)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DespawnHashSet(System::Collections::Generic::HashSet_1<T>* set) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnHashSet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnHashSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(set)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, set);
    }
    // static public Zenject.Internal.LookupId SpawnLookupId(Zenject.IProvider provider, Zenject.BindingId bindingId)
    // Offset: 0x166DFE4
    static Zenject::Internal::LookupId* SpawnLookupId(Zenject::IProvider* provider, Zenject::BindingId bindingId);
    // static public System.Void DespawnLookupId(Zenject.Internal.LookupId lookupId)
    // Offset: 0x166E084
    static void DespawnLookupId(Zenject::Internal::LookupId* lookupId);
    // static public System.Collections.Generic.List`1<T> SpawnList()
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* SpawnList() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public System.Void DespawnList(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DespawnList(System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnList", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list);
    }
    // static public System.Void DespawnArray(T[] arr)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DespawnArray(::Array<T>* arr) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arr)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr);
    }
    // static public T[] SpawnArray(System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* SpawnArray(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(length)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, length);
    }
    // static public Zenject.InjectContext SpawnInjectContext(Zenject.DiContainer container, System.Type memberType)
    // Offset: 0x166E108
    static Zenject::InjectContext* SpawnInjectContext(Zenject::DiContainer* container, System::Type* memberType);
    // static public System.Void DespawnInjectContext(Zenject.InjectContext context)
    // Offset: 0x1669024
    static void DespawnInjectContext(Zenject::InjectContext* context);
    // static public Zenject.InjectContext SpawnInjectContext(Zenject.DiContainer container, Zenject.InjectableInfo injectableInfo, Zenject.InjectContext currentContext, System.Object targetInstance, System.Type targetType, System.Object concreteIdentifier)
    // Offset: 0x166E1A4
    static Zenject::InjectContext* SpawnInjectContext(Zenject::DiContainer* container, Zenject::InjectableInfo* injectableInfo, Zenject::InjectContext* currentContext, ::Il2CppObject* targetInstance, System::Type* targetType, ::Il2CppObject* concreteIdentifier);
  }; // Zenject.Internal.ZenPools
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenPools*, "Zenject.Internal", "ZenPools");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::Internal::ZenPools::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnHashSet
// Il2CppName: SpawnHashSet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnDictionary
// Il2CppName: SpawnDictionary
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnStatement
// Il2CppName: SpawnStatement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindStatement* (*)()>(&Zenject::Internal::ZenPools::SpawnStatement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "SpawnStatement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnStatement
// Il2CppName: DespawnStatement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::BindStatement*)>(&Zenject::Internal::ZenPools::DespawnStatement)> {
  static const MethodInfo* get() {
    static auto* statement = &::il2cpp_utils::GetClassFromName("Zenject", "BindStatement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "DespawnStatement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statement});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnBindInfo
// Il2CppName: SpawnBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindInfo* (*)()>(&Zenject::Internal::ZenPools::SpawnBindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "SpawnBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnBindInfo
// Il2CppName: DespawnBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::BindInfo*)>(&Zenject::Internal::ZenPools::DespawnBindInfo)> {
  static const MethodInfo* get() {
    static auto* bindInfo = &::il2cpp_utils::GetClassFromName("Zenject", "BindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "DespawnBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindInfo});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnDictionary
// Il2CppName: DespawnDictionary
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnHashSet
// Il2CppName: DespawnHashSet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnLookupId
// Il2CppName: SpawnLookupId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Internal::LookupId* (*)(Zenject::IProvider*, Zenject::BindingId)>(&Zenject::Internal::ZenPools::SpawnLookupId)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("Zenject", "IProvider")->byval_arg;
    static auto* bindingId = &::il2cpp_utils::GetClassFromName("Zenject", "BindingId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "SpawnLookupId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, bindingId});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnLookupId
// Il2CppName: DespawnLookupId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::Internal::LookupId*)>(&Zenject::Internal::ZenPools::DespawnLookupId)> {
  static const MethodInfo* get() {
    static auto* lookupId = &::il2cpp_utils::GetClassFromName("Zenject.Internal", "LookupId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "DespawnLookupId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookupId});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnList
// Il2CppName: SpawnList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnList
// Il2CppName: DespawnList
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnArray
// Il2CppName: DespawnArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnArray
// Il2CppName: SpawnArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnInjectContext
// Il2CppName: SpawnInjectContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (*)(Zenject::DiContainer*, System::Type*)>(&Zenject::Internal::ZenPools::SpawnInjectContext)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* memberType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "SpawnInjectContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, memberType});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::DespawnInjectContext
// Il2CppName: DespawnInjectContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::InjectContext*)>(&Zenject::Internal::ZenPools::DespawnInjectContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "DespawnInjectContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenPools::SpawnInjectContext
// Il2CppName: SpawnInjectContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext* (*)(Zenject::DiContainer*, Zenject::InjectableInfo*, Zenject::InjectContext*, ::Il2CppObject*, System::Type*, ::Il2CppObject*)>(&Zenject::Internal::ZenPools::SpawnInjectContext)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* injectableInfo = &::il2cpp_utils::GetClassFromName("Zenject", "InjectableInfo")->byval_arg;
    static auto* currentContext = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* targetInstance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* concreteIdentifier = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenPools*), "SpawnInjectContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, injectableInfo, currentContext, targetInstance, targetType, concreteIdentifier});
  }
};
