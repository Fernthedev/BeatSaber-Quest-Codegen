// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::DiContainer::$$c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer::$$c*, "Zenject", "DiContainer/<>c");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/Zenject.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiContainer::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.DiContainer/Zenject.<>c <>9
    static Zenject::DiContainer::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.DiContainer/Zenject.<>c <>9
    static void _set_$$9(Zenject::DiContainer::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.List`1<Zenject.DiContainer/Zenject.ProviderInfo>,System.Collections.Generic.IEnumerable`1<Zenject.DiContainer/Zenject.ProviderInfo>> <>9__33_0
    static System::Func_2<System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>*, System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>*>* _get_$$9__33_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.List`1<Zenject.DiContainer/Zenject.ProviderInfo>,System.Collections.Generic.IEnumerable`1<Zenject.DiContainer/Zenject.ProviderInfo>> <>9__33_0
    static void _set_$$9__33_0(System::Func_2<System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>*, System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>*>* value);
    // Get static field: static public System.Func`2<Zenject.DiContainer/Zenject.ProviderInfo,Zenject.IProvider> <>9__33_1
    static System::Func_2<Zenject::DiContainer::ProviderInfo*, Zenject::IProvider*>* _get_$$9__33_1();
    // Set static field: static public System.Func`2<Zenject.DiContainer/Zenject.ProviderInfo,Zenject.IProvider> <>9__33_1
    static void _set_$$9__33_1(System::Func_2<Zenject::DiContainer::ProviderInfo*, Zenject::IProvider*>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__86_1
    static System::Func_2<System::Type*, bool>* _get_$$9__86_1();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__86_1
    static void _set_$$9__86_1(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__97_0
    static System::Func_2<Zenject::TypeValuePair, ::StringW>* _get_$$9__97_0();
    // Set static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__97_0
    static void _set_$$9__97_0(System::Func_2<Zenject::TypeValuePair, ::StringW>* value);
    // Get static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__102_0
    static System::Func_2<Zenject::TypeValuePair, ::StringW>* _get_$$9__102_0();
    // Set static field: static public System.Func`2<Zenject.TypeValuePair,System.String> <>9__102_0
    static void _set_$$9__102_0(System::Func_2<Zenject::TypeValuePair, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__197_0
    static System::Func_2<System::Type*, bool>* _get_$$9__197_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__197_0
    static void _set_$$9__197_0(System::Func_2<System::Type*, bool>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__198_0
    static System::Func_2<System::Type*, bool>* _get_$$9__198_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__198_0
    static void _set_$$9__198_0(System::Func_2<System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x1D26760
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<Zenject.DiContainer/Zenject.ProviderInfo> <get_AllProviders>b__33_0(System.Collections.Generic.List`1<Zenject.DiContainer/Zenject.ProviderInfo> x)
    // Offset: 0x1D267CC
    System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>* $get_AllProviders$b__33_0(System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>* x);
    // Zenject.IProvider <get_AllProviders>b__33_1(Zenject.DiContainer/Zenject.ProviderInfo x)
    // Offset: 0x1D267D4
    Zenject::IProvider* $get_AllProviders$b__33_1(Zenject::DiContainer::ProviderInfo* x);
    // System.Boolean <ResolveTypeAll>b__86_1(System.Type x)
    // Offset: 0x1D267EC
    bool $ResolveTypeAll$b__86_1(System::Type* x);
    // System.String <InstantiateInternal>b__97_0(Zenject.TypeValuePair x)
    // Offset: 0x1D26858
    ::StringW $InstantiateInternal$b__97_0(Zenject::TypeValuePair x);
    // System.String <InjectExplicitInternal>b__102_0(Zenject.TypeValuePair x)
    // Offset: 0x1D268C0
    ::StringW $InjectExplicitInternal$b__102_0(Zenject::TypeValuePair x);
    // System.Boolean <BindInternal>b__197_0(System.Type x)
    // Offset: 0x1D26928
    bool $BindInternal$b__197_0(System::Type* x);
    // System.Boolean <Bind>b__198_0(System.Type x)
    // Offset: 0x1D269A4
    bool $Bind$b__198_0(System::Type* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D26A20
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D26A7C
    static Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1D267C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$$c*, creationType>()));
    }
  }; // Zenject.DiContainer/Zenject.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::DiContainer::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$get_AllProviders$b__33_0
// Il2CppName: <get_AllProviders>b__33_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::DiContainer::ProviderInfo*>* (Zenject::DiContainer::$$c::*)(System::Collections::Generic::List_1<Zenject::DiContainer::ProviderInfo*>*)>(&Zenject::DiContainer::$$c::$get_AllProviders$b__33_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer/ProviderInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<get_AllProviders>b__33_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$get_AllProviders$b__33_1
// Il2CppName: <get_AllProviders>b__33_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::DiContainer::$$c::*)(Zenject::DiContainer::ProviderInfo*)>(&Zenject::DiContainer::$$c::$get_AllProviders$b__33_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer/ProviderInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<get_AllProviders>b__33_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$ResolveTypeAll$b__86_1
// Il2CppName: <ResolveTypeAll>b__86_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DiContainer::$$c::*)(System::Type*)>(&Zenject::DiContainer::$$c::$ResolveTypeAll$b__86_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<ResolveTypeAll>b__86_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$InstantiateInternal$b__97_0
// Il2CppName: <InstantiateInternal>b__97_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::DiContainer::$$c::*)(Zenject::TypeValuePair)>(&Zenject::DiContainer::$$c::$InstantiateInternal$b__97_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<InstantiateInternal>b__97_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$InjectExplicitInternal$b__102_0
// Il2CppName: <InjectExplicitInternal>b__102_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::DiContainer::$$c::*)(Zenject::TypeValuePair)>(&Zenject::DiContainer::$$c::$InjectExplicitInternal$b__102_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<InjectExplicitInternal>b__102_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$BindInternal$b__197_0
// Il2CppName: <BindInternal>b__197_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DiContainer::$$c::*)(System::Type*)>(&Zenject::DiContainer::$$c::$BindInternal$b__197_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<BindInternal>b__197_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::$Bind$b__198_0
// Il2CppName: <Bind>b__198_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DiContainer::$$c::*)(System::Type*)>(&Zenject::DiContainer::$$c::$Bind$b__198_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "<Bind>b__198_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DiContainer::$$c::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (*)()>(&Zenject::DiContainer::$$c::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
