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
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: DEB1C0
  class InjectTypeInfo : public ::Il2CppObject {
    public:
    // Nested type: Zenject::InjectTypeInfo::InjectMemberInfo
    class InjectMemberInfo;
    // Nested type: Zenject::InjectTypeInfo::InjectConstructorInfo
    class InjectConstructorInfo;
    // Nested type: Zenject::InjectTypeInfo::InjectMethodInfo
    class InjectMethodInfo;
    // public readonly System.Type Type
    // Size: 0x8
    // Offset: 0x10
    System::Type* Type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly Zenject.InjectTypeInfo/Zenject.InjectMethodInfo[] InjectMethods
    // Size: 0x8
    // Offset: 0x18
    ::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* InjectMethods;
    // Field size check
    static_assert(sizeof(::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>*) == 0x8);
    // public readonly Zenject.InjectTypeInfo/Zenject.InjectMemberInfo[] InjectMembers
    // Size: 0x8
    // Offset: 0x20
    ::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* InjectMembers;
    // Field size check
    static_assert(sizeof(::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>*) == 0x8);
    // public readonly Zenject.InjectTypeInfo/Zenject.InjectConstructorInfo InjectConstructor
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectTypeInfo::InjectConstructorInfo* InjectConstructor;
    // Field size check
    static_assert(sizeof(Zenject::InjectTypeInfo::InjectConstructorInfo*) == 0x8);
    // private Zenject.InjectTypeInfo <BaseTypeInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    Zenject::InjectTypeInfo* BaseTypeInfo;
    // Field size check
    static_assert(sizeof(Zenject::InjectTypeInfo*) == 0x8);
    // Creating value type constructor for type: InjectTypeInfo
    InjectTypeInfo(System::Type* Type_ = {}, ::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* InjectMethods_ = {}, ::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* InjectMembers_ = {}, Zenject::InjectTypeInfo::InjectConstructorInfo* InjectConstructor_ = {}, Zenject::InjectTypeInfo* BaseTypeInfo_ = {}) noexcept : Type{Type_}, InjectMethods{InjectMethods_}, InjectMembers{InjectMembers_}, InjectConstructor{InjectConstructor_}, BaseTypeInfo{BaseTypeInfo_} {}
    // Get static field: static private System.Func`2<Zenject.InjectTypeInfo/Zenject.InjectMemberInfo,Zenject.InjectableInfo> CS$<>9__CachedAnonymousMethodDelegate2
    static System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>* _get_CS$$$9__CachedAnonymousMethodDelegate2();
    // Set static field: static private System.Func`2<Zenject.InjectTypeInfo/Zenject.InjectMemberInfo,Zenject.InjectableInfo> CS$<>9__CachedAnonymousMethodDelegate2
    static void _set_CS$$$9__CachedAnonymousMethodDelegate2(System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>* value);
    // Get static field: static private System.Func`2<Zenject.InjectTypeInfo/Zenject.InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> CS$<>9__CachedAnonymousMethodDelegate3
    static System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>* _get_CS$$$9__CachedAnonymousMethodDelegate3();
    // Set static field: static private System.Func`2<Zenject.InjectTypeInfo/Zenject.InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> CS$<>9__CachedAnonymousMethodDelegate3
    static void _set_CS$$$9__CachedAnonymousMethodDelegate3(System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>* value);
    // Get instance field: public readonly System.Type Type
    System::Type* _get_Type();
    // Set instance field: public readonly System.Type Type
    void _set_Type(System::Type* value);
    // Get instance field: public readonly Zenject.InjectTypeInfo/Zenject.InjectMethodInfo[] InjectMethods
    ::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* _get_InjectMethods();
    // Set instance field: public readonly Zenject.InjectTypeInfo/Zenject.InjectMethodInfo[] InjectMethods
    void _set_InjectMethods(::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* value);
    // Get instance field: public readonly Zenject.InjectTypeInfo/Zenject.InjectMemberInfo[] InjectMembers
    ::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* _get_InjectMembers();
    // Set instance field: public readonly Zenject.InjectTypeInfo/Zenject.InjectMemberInfo[] InjectMembers
    void _set_InjectMembers(::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* value);
    // Get instance field: public readonly Zenject.InjectTypeInfo/Zenject.InjectConstructorInfo InjectConstructor
    Zenject::InjectTypeInfo::InjectConstructorInfo* _get_InjectConstructor();
    // Set instance field: public readonly Zenject.InjectTypeInfo/Zenject.InjectConstructorInfo InjectConstructor
    void _set_InjectConstructor(Zenject::InjectTypeInfo::InjectConstructorInfo* value);
    // Get instance field: private Zenject.InjectTypeInfo <BaseTypeInfo>k__BackingField
    Zenject::InjectTypeInfo* _get_$BaseTypeInfo$k__BackingField();
    // Set instance field: private Zenject.InjectTypeInfo <BaseTypeInfo>k__BackingField
    void _set_$BaseTypeInfo$k__BackingField(Zenject::InjectTypeInfo* value);
    // public Zenject.InjectTypeInfo get_BaseTypeInfo()
    // Offset: 0x2408BA0
    Zenject::InjectTypeInfo* get_BaseTypeInfo();
    // public System.Void set_BaseTypeInfo(Zenject.InjectTypeInfo value)
    // Offset: 0x2408BA8
    void set_BaseTypeInfo(Zenject::InjectTypeInfo* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> get_AllInjectables()
    // Offset: 0x2408BB0
    System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* get_AllInjectables();
    // public System.Void .ctor(System.Type type, Zenject.InjectTypeInfo/Zenject.InjectConstructorInfo injectConstructor, Zenject.InjectTypeInfo/Zenject.InjectMethodInfo[] injectMethods, Zenject.InjectTypeInfo/Zenject.InjectMemberInfo[] injectMembers)
    // Offset: 0x2408B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectTypeInfo* New_ctor(System::Type* type, Zenject::InjectTypeInfo::InjectConstructorInfo* injectConstructor, ::Array<Zenject::InjectTypeInfo::InjectMethodInfo*>* injectMethods, ::Array<Zenject::InjectTypeInfo::InjectMemberInfo*>* injectMembers) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectTypeInfo*, creationType>(type, injectConstructor, injectMethods, injectMembers)));
    }
    // static private Zenject.InjectableInfo <get_AllInjectables>b__0(Zenject.InjectTypeInfo/Zenject.InjectMemberInfo x)
    // Offset: 0x2408D2C
    static Zenject::InjectableInfo* $get_AllInjectables$b__0(Zenject::InjectTypeInfo::InjectMemberInfo* x);
    // static private System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> <get_AllInjectables>b__1(Zenject.InjectTypeInfo/Zenject.InjectMethodInfo x)
    // Offset: 0x2408D44
    static System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* $get_AllInjectables$b__1(Zenject::InjectTypeInfo::InjectMethodInfo* x);
  }; // Zenject.InjectTypeInfo
  #pragma pack(pop)
  static check_size<sizeof(InjectTypeInfo), 48 + sizeof(Zenject::InjectTypeInfo*)> __Zenject_InjectTypeInfoSizeCheck;
  static_assert(sizeof(InjectTypeInfo) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo*, "Zenject", "InjectTypeInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::get_BaseTypeInfo
// Il2CppName: get_BaseTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (Zenject::InjectTypeInfo::*)()>(&Zenject::InjectTypeInfo::get_BaseTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectTypeInfo*), "get_BaseTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::set_BaseTypeInfo
// Il2CppName: set_BaseTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectTypeInfo::*)(Zenject::InjectTypeInfo*)>(&Zenject::InjectTypeInfo::set_BaseTypeInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "InjectTypeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectTypeInfo*), "set_BaseTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::get_AllInjectables
// Il2CppName: get_AllInjectables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* (Zenject::InjectTypeInfo::*)()>(&Zenject::InjectTypeInfo::get_AllInjectables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectTypeInfo*), "get_AllInjectables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::$get_AllInjectables$b__0
// Il2CppName: <get_AllInjectables>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectableInfo* (*)(Zenject::InjectTypeInfo::InjectMemberInfo*)>(&Zenject::InjectTypeInfo::$get_AllInjectables$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "InjectTypeInfo/InjectMemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectTypeInfo*), "<get_AllInjectables>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::$get_AllInjectables$b__1
// Il2CppName: <get_AllInjectables>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* (*)(Zenject::InjectTypeInfo::InjectMethodInfo*)>(&Zenject::InjectTypeInfo::$get_AllInjectables$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "InjectTypeInfo/InjectMethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectTypeInfo*), "<get_AllInjectables>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
