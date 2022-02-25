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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: FSharpUtils
  class FSharpUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Newtonsoft::Json::Utilities::FSharpUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::FSharpUtils*, "Newtonsoft.Json.Utilities", "FSharpUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.FSharpUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 1201FF4
  // [NullableAttribute] Offset: 1201FF4
  class FSharpUtils : public ::Il2CppObject {
    public:
    // Nested type: Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass52_0
    class $$c__DisplayClass52_0;
    // Nested type: Newtonsoft::Json::Utilities::FSharpUtils::$$c__DisplayClass55_0_2<TKey, TValue>
    template<typename TKey, typename TValue>
    class $$c__DisplayClass55_0_2;
    // Nested type: Newtonsoft::Json::Utilities::FSharpUtils::$$c__55_2<TKey, TValue>
    template<typename TKey, typename TValue>
    class $$c__55_2;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Reflection.MethodInfo _ofSeq
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MethodInfo* ofSeq;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.Type _mapType
    // Size: 0x8
    // Offset: 0x18
    System::Type* mapType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Reflection.Assembly <FSharpCoreAssembly>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Reflection::Assembly* FSharpCoreAssembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // [NullableAttribute] Offset: 0x1204930
    // private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <IsUnion>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* IsUnion;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x12049B4
    // private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <GetUnionCases>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* GetUnionCases;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x1204A38
    // private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <PreComputeUnionTagReader>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* PreComputeUnionTagReader;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x1204ABC
    // private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <PreComputeUnionReader>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* PreComputeUnionReader;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x1204B40
    // private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <PreComputeUnionConstructor>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* PreComputeUnionConstructor;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // private System.Func`2<System.Object,System.Object> <GetUnionCaseInfoDeclaringType>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>* GetUnionCaseInfoDeclaringType;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // private System.Func`2<System.Object,System.Object> <GetUnionCaseInfoName>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>* GetUnionCaseInfoName;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // private System.Func`2<System.Object,System.Object> <GetUnionCaseInfoTag>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>* GetUnionCaseInfoTag;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x1204BF4
    // private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <GetUnionCaseInfoFields>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* GetUnionCaseInfoFields;
    // Field size check
    static_assert(sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    public:
    // Get static field: static private readonly System.Object Lock
    static ::Il2CppObject* _get_Lock();
    // Set static field: static private readonly System.Object Lock
    static void _set_Lock(::Il2CppObject* value);
    // [NullableAttribute] Offset: 0x120490C
    // Get static field: static private Newtonsoft.Json.Utilities.FSharpUtils _instance
    static Newtonsoft::Json::Utilities::FSharpUtils* _get__instance();
    // Set static field: static private Newtonsoft.Json.Utilities.FSharpUtils _instance
    static void _set__instance(Newtonsoft::Json::Utilities::FSharpUtils* value);
    // Get instance field reference: private System.Reflection.MethodInfo _ofSeq
    System::Reflection::MethodInfo*& dyn__ofSeq();
    // Get instance field reference: private System.Type _mapType
    System::Type*& dyn__mapType();
    // Get instance field reference: private System.Reflection.Assembly <FSharpCoreAssembly>k__BackingField
    System::Reflection::Assembly*& dyn_$FSharpCoreAssembly$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <IsUnion>k__BackingField
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$IsUnion$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <GetUnionCases>k__BackingField
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$GetUnionCases$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <PreComputeUnionTagReader>k__BackingField
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$PreComputeUnionTagReader$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <PreComputeUnionReader>k__BackingField
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$PreComputeUnionReader$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <PreComputeUnionConstructor>k__BackingField
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$PreComputeUnionConstructor$k__BackingField();
    // Get instance field reference: private System.Func`2<System.Object,System.Object> <GetUnionCaseInfoDeclaringType>k__BackingField
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$GetUnionCaseInfoDeclaringType$k__BackingField();
    // Get instance field reference: private System.Func`2<System.Object,System.Object> <GetUnionCaseInfoName>k__BackingField
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$GetUnionCaseInfoName$k__BackingField();
    // Get instance field reference: private System.Func`2<System.Object,System.Object> <GetUnionCaseInfoTag>k__BackingField
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$GetUnionCaseInfoTag$k__BackingField();
    // Get instance field reference: private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> <GetUnionCaseInfoFields>k__BackingField
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_$GetUnionCaseInfoFields$k__BackingField();
    // static public Newtonsoft.Json.Utilities.FSharpUtils get_Instance()
    // Offset: 0x19E4C2C
    static Newtonsoft::Json::Utilities::FSharpUtils* get_Instance();
    // private System.Void set_FSharpCoreAssembly(System.Reflection.Assembly value)
    // Offset: 0x19E4C94
    void set_FSharpCoreAssembly(System::Reflection::Assembly* value);
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> get_IsUnion()
    // Offset: 0x19E4C9C
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* get_IsUnion();
    // private System.Void set_IsUnion(Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> value)
    // Offset: 0x19E4CA4
    void set_IsUnion(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> get_GetUnionCases()
    // Offset: 0x19E4CAC
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* get_GetUnionCases();
    // private System.Void set_GetUnionCases(Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> value)
    // Offset: 0x19E4CB4
    void set_GetUnionCases(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> get_PreComputeUnionTagReader()
    // Offset: 0x19E4CBC
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* get_PreComputeUnionTagReader();
    // private System.Void set_PreComputeUnionTagReader(Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> value)
    // Offset: 0x19E4CC4
    void set_PreComputeUnionTagReader(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> get_PreComputeUnionReader()
    // Offset: 0x19E4CCC
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* get_PreComputeUnionReader();
    // private System.Void set_PreComputeUnionReader(Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> value)
    // Offset: 0x19E4CD4
    void set_PreComputeUnionReader(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> get_PreComputeUnionConstructor()
    // Offset: 0x19E4CDC
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* get_PreComputeUnionConstructor();
    // private System.Void set_PreComputeUnionConstructor(Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> value)
    // Offset: 0x19E4CE4
    void set_PreComputeUnionConstructor(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public System.Func`2<System.Object,System.Object> get_GetUnionCaseInfoDeclaringType()
    // Offset: 0x19E4CEC
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>* get_GetUnionCaseInfoDeclaringType();
    // private System.Void set_GetUnionCaseInfoDeclaringType(System.Func`2<System.Object,System.Object> value)
    // Offset: 0x19E4CF4
    void set_GetUnionCaseInfoDeclaringType(System::Func_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public System.Func`2<System.Object,System.Object> get_GetUnionCaseInfoName()
    // Offset: 0x19E4CFC
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>* get_GetUnionCaseInfoName();
    // private System.Void set_GetUnionCaseInfoName(System.Func`2<System.Object,System.Object> value)
    // Offset: 0x19E4D04
    void set_GetUnionCaseInfoName(System::Func_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public System.Func`2<System.Object,System.Object> get_GetUnionCaseInfoTag()
    // Offset: 0x19E4D0C
    System::Func_2<::Il2CppObject*, ::Il2CppObject*>* get_GetUnionCaseInfoTag();
    // private System.Void set_GetUnionCaseInfoTag(System.Func`2<System.Object,System.Object> value)
    // Offset: 0x19E4D14
    void set_GetUnionCaseInfoTag(System::Func_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> get_GetUnionCaseInfoFields()
    // Offset: 0x19E4D1C
    Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* get_GetUnionCaseInfoFields();
    // private System.Void set_GetUnionCaseInfoFields(Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> value)
    // Offset: 0x19E4D24
    void set_GetUnionCaseInfoFields(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* value);
    // private System.Void .ctor(System.Reflection.Assembly fsharpCoreAssembly)
    // Offset: 0x19E4608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FSharpUtils* New_ctor(System::Reflection::Assembly* fsharpCoreAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::FSharpUtils::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FSharpUtils*, creationType>(fsharpCoreAssembly)));
    }
    // static private System.Void .cctor()
    // Offset: 0x19E5120
    static void _cctor();
    // static public System.Void EnsureInitialized(System.Reflection.Assembly fsharpCoreAssembly)
    // Offset: 0x19E4D2C
    static void EnsureInitialized(System::Reflection::Assembly* fsharpCoreAssembly);
    // static private System.Reflection.MethodInfo GetMethodWithNonPublicFallback(System.Type type, System.String methodName, System.Reflection.BindingFlags bindingFlags)
    // Offset: 0x19E49F8
    static System::Reflection::MethodInfo* GetMethodWithNonPublicFallback(System::Type* type, ::StringW methodName, System::Reflection::BindingFlags bindingFlags);
    // static private Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> CreateFSharpFuncCall(System.Type type, System.String methodName)
    // Offset: 0x19E4A70
    static Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* CreateFSharpFuncCall(System::Type* type, ::StringW methodName);
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> CreateSeq(System.Type t)
    // Offset: 0x19E4E98
    Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* CreateSeq(System::Type* t);
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> CreateMap(System.Type keyType, System.Type valueType)
    // Offset: 0x19E4F9C
    Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* CreateMap(System::Type* keyType, System::Type* valueType);
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> BuildMapCreator()
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* BuildMapCreator() {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::FSharpUtils::BuildMapCreator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BuildMapCreator", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*, false>(this, ___generic__method);
    }
  }; // Newtonsoft.Json.Utilities.FSharpUtils
  #pragma pack(pop)
  static check_size<sizeof(FSharpUtils), 104 + sizeof(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)> __Newtonsoft_Json_Utilities_FSharpUtilsSizeCheck;
  static_assert(sizeof(FSharpUtils) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::FSharpUtils* (*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_FSharpCoreAssembly
// Il2CppName: set_FSharpCoreAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(System::Reflection::Assembly*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_FSharpCoreAssembly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_FSharpCoreAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_IsUnion
// Il2CppName: get_IsUnion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_IsUnion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_IsUnion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_IsUnion
// Il2CppName: set_IsUnion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_IsUnion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "MethodCall`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_IsUnion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCases
// Il2CppName: get_GetUnionCases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_GetUnionCases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCases
// Il2CppName: set_GetUnionCases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "MethodCall`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_GetUnionCases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_PreComputeUnionTagReader
// Il2CppName: get_PreComputeUnionTagReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_PreComputeUnionTagReader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_PreComputeUnionTagReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_PreComputeUnionTagReader
// Il2CppName: set_PreComputeUnionTagReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_PreComputeUnionTagReader)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "MethodCall`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_PreComputeUnionTagReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_PreComputeUnionReader
// Il2CppName: get_PreComputeUnionReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_PreComputeUnionReader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_PreComputeUnionReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_PreComputeUnionReader
// Il2CppName: set_PreComputeUnionReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_PreComputeUnionReader)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "MethodCall`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_PreComputeUnionReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_PreComputeUnionConstructor
// Il2CppName: get_PreComputeUnionConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_PreComputeUnionConstructor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_PreComputeUnionConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_PreComputeUnionConstructor
// Il2CppName: set_PreComputeUnionConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_PreComputeUnionConstructor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "MethodCall`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_PreComputeUnionConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoDeclaringType
// Il2CppName: get_GetUnionCaseInfoDeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoDeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_GetUnionCaseInfoDeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoDeclaringType
// Il2CppName: set_GetUnionCaseInfoDeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(System::Func_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoDeclaringType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_GetUnionCaseInfoDeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoName
// Il2CppName: get_GetUnionCaseInfoName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_GetUnionCaseInfoName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoName
// Il2CppName: set_GetUnionCaseInfoName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(System::Func_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_GetUnionCaseInfoName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoTag
// Il2CppName: get_GetUnionCaseInfoTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoTag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_GetUnionCaseInfoTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoTag
// Il2CppName: set_GetUnionCaseInfoTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(System::Func_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoTag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_GetUnionCaseInfoTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoFields
// Il2CppName: get_GetUnionCaseInfoFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::get_GetUnionCaseInfoFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "get_GetUnionCaseInfoFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoFields
// Il2CppName: set_GetUnionCaseInfoFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::FSharpUtils::*)(Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)>(&Newtonsoft::Json::Utilities::FSharpUtils::set_GetUnionCaseInfoFields)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "MethodCall`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "set_GetUnionCaseInfoFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::FSharpUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::EnsureInitialized
// Il2CppName: EnsureInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::Assembly*)>(&Newtonsoft::Json::Utilities::FSharpUtils::EnsureInitialized)> {
  static const MethodInfo* get() {
    static auto* fsharpCoreAssembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "EnsureInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fsharpCoreAssembly});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::GetMethodWithNonPublicFallback
// Il2CppName: GetMethodWithNonPublicFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(System::Type*, ::StringW, System::Reflection::BindingFlags)>(&Newtonsoft::Json::Utilities::FSharpUtils::GetMethodWithNonPublicFallback)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingFlags = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "GetMethodWithNonPublicFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, methodName, bindingFlags});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::CreateFSharpFuncCall
// Il2CppName: CreateFSharpFuncCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* (*)(System::Type*, ::StringW)>(&Newtonsoft::Json::Utilities::FSharpUtils::CreateFSharpFuncCall)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "CreateFSharpFuncCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, methodName});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::CreateSeq
// Il2CppName: CreateSeq
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)(System::Type*)>(&Newtonsoft::Json::Utilities::FSharpUtils::CreateSeq)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "CreateSeq", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::CreateMap
// Il2CppName: CreateMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Utilities::FSharpUtils::*)(System::Type*, System::Type*)>(&Newtonsoft::Json::Utilities::FSharpUtils::CreateMap)> {
  static const MethodInfo* get() {
    static auto* keyType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* valueType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::FSharpUtils*), "CreateMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyType, valueType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::FSharpUtils::BuildMapCreator
// Il2CppName: BuildMapCreator
// Cannot write MetadataGetter for generic methods!
