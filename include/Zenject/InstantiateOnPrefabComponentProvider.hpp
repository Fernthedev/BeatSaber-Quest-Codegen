// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPrefabInstantiator
  class IPrefabInstantiator;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
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
  // Forward declaring type: InstantiateOnPrefabComponentProvider
  class InstantiateOnPrefabComponentProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InstantiateOnPrefabComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstantiateOnPrefabComponentProvider*, "Zenject", "InstantiateOnPrefabComponentProvider");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InstantiateOnPrefabComponentProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class InstantiateOnPrefabComponentProvider : public ::Il2CppObject/*, public ::Zenject::IProvider*/ {
    public:
    public:
    // private readonly Zenject.IPrefabInstantiator _prefabInstantiator
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::IPrefabInstantiator* prefabInstantiator;
    // Field size check
    static_assert(sizeof(::Zenject::IPrefabInstantiator*) == 0x8);
    // private readonly System.Type _componentType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* componentType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IProvider
    operator ::Zenject::IProvider() noexcept {
      return *reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Creating interface conversion operator: i_IProvider
    inline ::Zenject::IProvider* i_IProvider() noexcept {
      return reinterpret_cast<::Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly Zenject.IPrefabInstantiator _prefabInstantiator
    [[deprecated("Use field access instead!")]] ::Zenject::IPrefabInstantiator*& dyn__prefabInstantiator();
    // Get instance field reference: private readonly System.Type _componentType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__componentType();
    // public System.Boolean get_IsCached()
    // Offset: 0x1C00510
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x1C00518
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(System.Type componentType, Zenject.IPrefabInstantiator prefabInstantiator)
    // Offset: 0x1C004D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstantiateOnPrefabComponentProvider* New_ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstantiateOnPrefabComponentProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstantiateOnPrefabComponentProvider*, creationType>(componentType, prefabInstantiator)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x1C00520
    ::System::Type* GetInstanceType(::Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x1C00528
    void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.InstantiateOnPrefabComponentProvider
  #pragma pack(pop)
  static check_size<sizeof(InstantiateOnPrefabComponentProvider), 24 + sizeof(::System::Type*)> __Zenject_InstantiateOnPrefabComponentProviderSizeCheck;
  static_assert(sizeof(InstantiateOnPrefabComponentProvider) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InstantiateOnPrefabComponentProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InstantiateOnPrefabComponentProvider::*)()>(&Zenject::InstantiateOnPrefabComponentProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstantiateOnPrefabComponentProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstantiateOnPrefabComponentProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InstantiateOnPrefabComponentProvider::*)()>(&Zenject::InstantiateOnPrefabComponentProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstantiateOnPrefabComponentProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstantiateOnPrefabComponentProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InstantiateOnPrefabComponentProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::InstantiateOnPrefabComponentProvider::*)(::Zenject::InjectContext*)>(&Zenject::InstantiateOnPrefabComponentProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstantiateOnPrefabComponentProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::InstantiateOnPrefabComponentProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InstantiateOnPrefabComponentProvider::*)(::Zenject::InjectContext*, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ByRef<::System::Action*>, ::System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::InstantiateOnPrefabComponentProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstantiateOnPrefabComponentProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
