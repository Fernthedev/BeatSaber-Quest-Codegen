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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
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
  // Forward declaring type: ReflectionDelegateFactory
  class ReflectionDelegateFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Newtonsoft::Json::Utilities::ReflectionDelegateFactory);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::ReflectionDelegateFactory*, "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 1202258
  // [NullableContextAttribute] Offset: 1202258
  class ReflectionDelegateFactory : public ::Il2CppObject {
    public:
    // public System.Func`2<T,System.Object> CreateGet(System.Reflection.MemberInfo memberInfo)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Func_2<T, ::Il2CppObject*>* CreateGet(System::Reflection::MemberInfo* memberInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(memberInfo)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Func_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, memberInfo);
    }
    // public System.Action`2<T,System.Object> CreateSet(System.Reflection.MemberInfo memberInfo)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Action_2<T, ::Il2CppObject*>* CreateSet(System::Reflection::MemberInfo* memberInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(memberInfo)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Action_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, memberInfo);
    }
    // public Newtonsoft.Json.Utilities.MethodCall`2<T,System.Object> CreateMethodCall(System.Reflection.MethodBase method)
    // Offset: 0xFFFFFFFF
    template<class T>
    Newtonsoft::Json::Utilities::MethodCall_2<T, ::Il2CppObject*>* CreateMethodCall(System::Reflection::MethodBase* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateMethodCall");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateMethodCall", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<Newtonsoft::Json::Utilities::MethodCall_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, method);
    }
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> CreateParameterizedConstructor(System.Reflection.MethodBase method)
    // Offset: 0xFFFFFFFF
    Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* CreateParameterizedConstructor(System::Reflection::MethodBase* method);
    // public System.Func`1<T> CreateDefaultConstructor(System.Type type)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Func_1<T>* CreateDefaultConstructor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateDefaultConstructor");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateDefaultConstructor", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Func_1<T>*, false>(this, ___generic__method, type);
    }
    // public System.Func`2<T,System.Object> CreateGet(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Func_2<T, ::Il2CppObject*>* CreateGet(System::Reflection::PropertyInfo* propertyInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propertyInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Func_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, propertyInfo);
    }
    // public System.Func`2<T,System.Object> CreateGet(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Func_2<T, ::Il2CppObject*>* CreateGet(System::Reflection::FieldInfo* fieldInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateGet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Func_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, fieldInfo);
    }
    // public System.Action`2<T,System.Object> CreateSet(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Action_2<T, ::Il2CppObject*>* CreateSet(System::Reflection::FieldInfo* fieldInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fieldInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Action_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, fieldInfo);
    }
    // public System.Action`2<T,System.Object> CreateSet(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Action_2<T, ::Il2CppObject*>* CreateSet(System::Reflection::PropertyInfo* propertyInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSet", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(propertyInfo)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Action_2<T, ::Il2CppObject*>*, false>(this, ___generic__method, propertyInfo);
    }
    // protected System.Void .ctor()
    // Offset: 0x29F1D44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionDelegateFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Newtonsoft::Json::Utilities::ReflectionDelegateFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionDelegateFactory*, creationType>()));
    }
  }; // Newtonsoft.Json.Utilities.ReflectionDelegateFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet
// Il2CppName: CreateGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet
// Il2CppName: CreateSet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateMethodCall
// Il2CppName: CreateMethodCall
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor
// Il2CppName: CreateParameterizedConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Utilities::ReflectionDelegateFactory::*)(System::Reflection::MethodBase*)>(&Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateParameterizedConstructor)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionDelegateFactory*), "CreateParameterizedConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateDefaultConstructor
// Il2CppName: CreateDefaultConstructor
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet
// Il2CppName: CreateGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateGet
// Il2CppName: CreateGet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet
// Il2CppName: CreateSet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::CreateSet
// Il2CppName: CreateSet
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionDelegateFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
