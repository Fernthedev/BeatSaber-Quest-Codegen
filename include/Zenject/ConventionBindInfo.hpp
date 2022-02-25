// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::ConventionBindInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo*, "Zenject", "ConventionBindInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionBindInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ConventionBindInfo : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ConventionBindInfo::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::ConventionBindInfo::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.List`1<System.Func`2<System.Type,System.Boolean>> _typeFilters
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>* typeFilters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Func`2<System.Reflection.Assembly,System.Boolean>> _assemblyFilters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>* assemblyFilters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>*) == 0x8);
    public:
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> _assemblyTypeCache
    static System::Collections::Generic::Dictionary_2<System::Reflection::Assembly*, ::ArrayW<System::Type*>>* _get__assemblyTypeCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> _assemblyTypeCache
    static void _set__assemblyTypeCache(System::Collections::Generic::Dictionary_2<System::Reflection::Assembly*, ::ArrayW<System::Type*>>* value);
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Func`2<System.Type,System.Boolean>> _typeFilters
    System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>*& dyn__typeFilters();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Func`2<System.Reflection.Assembly,System.Boolean>> _assemblyFilters
    System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>*& dyn__assemblyFilters();
    // static private System.Void .cctor()
    // Offset: 0x16DF7A4
    static void _cctor();
    // public System.Void AddAssemblyFilter(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x16DEFA0
    void AddAssemblyFilter(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
    // public System.Void AddTypeFilter(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0x16DF488
    void AddTypeFilter(System::Func_2<System::Type*, bool>* predicate);
    // private System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> GetAllAssemblies()
    // Offset: 0x16DF4F0
    System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* GetAllAssemblies();
    // private System.Boolean ShouldIncludeAssembly(System.Reflection.Assembly assembly)
    // Offset: 0x16DF514
    bool ShouldIncludeAssembly(System::Reflection::Assembly* assembly);
    // private System.Boolean ShouldIncludeType(System.Type type)
    // Offset: 0x16DF5DC
    bool ShouldIncludeType(System::Type* type);
    // private System.Type[] GetTypes(System.Reflection.Assembly assembly)
    // Offset: 0x16DF6A4
    ::ArrayW<System::Type*> GetTypes(System::Reflection::Assembly* assembly);
    // public System.Collections.Generic.List`1<System.Type> ResolveTypes()
    // Offset: 0x16DC274
    System::Collections::Generic::List_1<System::Type*>* ResolveTypes();
    // private System.Collections.Generic.IEnumerable`1<System.Type> <ResolveTypes>b__9_0(System.Reflection.Assembly assembly)
    // Offset: 0x16DF818
    System::Collections::Generic::IEnumerable_1<System::Type*>* $ResolveTypes$b__9_0(System::Reflection::Assembly* assembly);
    // public System.Void .ctor()
    // Offset: 0x16DC1B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionBindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionBindInfo*, creationType>()));
    }
  }; // Zenject.ConventionBindInfo
  #pragma pack(pop)
  static check_size<sizeof(ConventionBindInfo), 24 + sizeof(System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>*)> __Zenject_ConventionBindInfoSizeCheck;
  static_assert(sizeof(ConventionBindInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ConventionBindInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::AddAssemblyFilter
// Il2CppName: AddAssemblyFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionBindInfo::*)(System::Func_2<System::Reflection::Assembly*, bool>*)>(&Zenject::ConventionBindInfo::AddAssemblyFilter)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "AddAssemblyFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::AddTypeFilter
// Il2CppName: AddTypeFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ConventionBindInfo::*)(System::Func_2<System::Type*, bool>*)>(&Zenject::ConventionBindInfo::AddTypeFilter)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "AddTypeFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::GetAllAssemblies
// Il2CppName: GetAllAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* (Zenject::ConventionBindInfo::*)()>(&Zenject::ConventionBindInfo::GetAllAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "GetAllAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::ShouldIncludeAssembly
// Il2CppName: ShouldIncludeAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionBindInfo::*)(System::Reflection::Assembly*)>(&Zenject::ConventionBindInfo::ShouldIncludeAssembly)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "ShouldIncludeAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::ShouldIncludeType
// Il2CppName: ShouldIncludeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionBindInfo::*)(System::Type*)>(&Zenject::ConventionBindInfo::ShouldIncludeType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "ShouldIncludeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::GetTypes
// Il2CppName: GetTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type*> (Zenject::ConventionBindInfo::*)(System::Reflection::Assembly*)>(&Zenject::ConventionBindInfo::GetTypes)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "GetTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::ResolveTypes
// Il2CppName: ResolveTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Type*>* (Zenject::ConventionBindInfo::*)()>(&Zenject::ConventionBindInfo::ResolveTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "ResolveTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$ResolveTypes$b__9_0
// Il2CppName: <ResolveTypes>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Type*>* (Zenject::ConventionBindInfo::*)(System::Reflection::Assembly*)>(&Zenject::ConventionBindInfo::$ResolveTypes$b__9_0)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo*), "<ResolveTypes>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
