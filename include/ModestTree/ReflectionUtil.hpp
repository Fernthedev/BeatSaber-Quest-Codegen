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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
  // Forward declaring type: Action`6<T1, T2, T3, T4, T5, T6>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.ReflectionUtil
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ReflectionUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ReflectionUtil
    ReflectionUtil() noexcept {}
    // static public System.Array CreateArray(System.Type elementType, System.Collections.Generic.List`1<System.Object> instances)
    // Offset: 0x13DBF28
    static System::Array* CreateArray(System::Type* elementType, System::Collections::Generic::List_1<::Il2CppObject*>* instances);
    // static public System.Collections.IList CreateGenericList(System.Type elementType, System.Collections.Generic.List`1<System.Object> instances)
    // Offset: 0x13DC198
    static System::Collections::IList* CreateGenericList(System::Type* elementType, System::Collections::Generic::List_1<::Il2CppObject*>* instances);
    // static public System.String ToDebugString(System.Reflection.MethodInfo method)
    // Offset: 0x13DC538
    static ::Il2CppString* ToDebugString(System::Reflection::MethodInfo* method);
    // static public System.String ToDebugString(System.Action action)
    // Offset: 0x13DC670
    static ::Il2CppString* ToDebugString(System::Action* action);
    // static public System.String ToDebugString(System.Action`1<TParam1> action)
    // Offset: 0xFFFFFFFF
    template<class TParam1>
    static ::Il2CppString* ToDebugString(System::Action_1<TParam1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, action);
    }
    // static public System.String ToDebugString(System.Action`2<TParam1,TParam2> action)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2>
    static ::Il2CppString* ToDebugString(System::Action_2<TParam1, TParam2>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, action);
    }
    // static public System.String ToDebugString(System.Action`3<TParam1,TParam2,TParam3> action)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3>
    static ::Il2CppString* ToDebugString(System::Action_3<TParam1, TParam2, TParam3>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, action);
    }
    // static public System.String ToDebugString(System.Action`4<TParam1,TParam2,TParam3,TParam4> action)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    static ::Il2CppString* ToDebugString(System::Action_4<TParam1, TParam2, TParam3, TParam4>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, action);
    }
    // static public System.String ToDebugString(System.Action`5<TParam1,TParam2,TParam3,TParam4,TParam5> action)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    static ::Il2CppString* ToDebugString(System::Action_5<TParam1, TParam2, TParam3, TParam4, TParam5>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, action);
    }
    // static public System.String ToDebugString(System.Action`6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> action)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    static ::Il2CppString* ToDebugString(System::Action_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, action);
    }
    // static public System.String ToDebugString(System.Func`1<TParam1> func)
    // Offset: 0xFFFFFFFF
    template<class TParam1>
    static ::Il2CppString* ToDebugString(System::Func_1<TParam1>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, func);
    }
    // static public System.String ToDebugString(System.Func`2<TParam1,TParam2> func)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2>
    static ::Il2CppString* ToDebugString(System::Func_2<TParam1, TParam2>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, func);
    }
    // static public System.String ToDebugString(System.Func`3<TParam1,TParam2,TParam3> func)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3>
    static ::Il2CppString* ToDebugString(System::Func_3<TParam1, TParam2, TParam3>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, func);
    }
    // static public System.String ToDebugString(System.Func`4<TParam1,TParam2,TParam3,TParam4> func)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    static ::Il2CppString* ToDebugString(System::Func_4<TParam1, TParam2, TParam3, TParam4>* func) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::ReflectionUtil::ToDebugString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ModestTree", "ReflectionUtil", "ToDebugString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(func)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, func);
    }
  }; // ModestTree.ReflectionUtil
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::ReflectionUtil*, "ModestTree", "ReflectionUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::CreateArray
// Il2CppName: CreateArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array* (*)(System::Type*, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&ModestTree::ReflectionUtil::CreateArray)> {
  static const MethodInfo* get() {
    static auto* elementType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instances = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::ReflectionUtil*), "CreateArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementType, instances});
  }
};
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::CreateGenericList
// Il2CppName: CreateGenericList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList* (*)(System::Type*, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&ModestTree::ReflectionUtil::CreateGenericList)> {
  static const MethodInfo* get() {
    static auto* elementType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instances = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::ReflectionUtil*), "CreateGenericList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementType, instances});
  }
};
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Reflection::MethodInfo*)>(&ModestTree::ReflectionUtil::ToDebugString)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::ReflectionUtil*), "ToDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Action*)>(&ModestTree::ReflectionUtil::ToDebugString)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::ReflectionUtil*), "ToDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ModestTree::ReflectionUtil::ToDebugString
// Il2CppName: ToDebugString
// Cannot write MetadataGetter for generic methods!
