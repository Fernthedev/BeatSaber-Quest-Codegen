// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.jvalue
#include "UnityEngine/jvalue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJNIHelper
  // [StaticAccessorAttribute] Offset: DB86EC
  // [NativeHeaderAttribute] Offset: DB86EC
  // [UsedByNativeCodeAttribute] Offset: DB86EC
  // [NativeConditionalAttribute] Offset: DB86EC
  class AndroidJNIHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AndroidJNIHelper
    AndroidJNIHelper() noexcept {}
    // static public System.Boolean get_debug()
    // Offset: 0x236D9F0
    static bool get_debug();
    // static public System.Void set_debug(System.Boolean value)
    // Offset: 0x236DA24
    static void set_debug(bool value);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass)
    // Offset: 0x236DA64
    static System::IntPtr GetConstructorID(System::IntPtr javaClass);
    // static public System.IntPtr GetConstructorID(System.IntPtr javaClass, System.String signature)
    // Offset: 0x236DAB4
    static System::IntPtr GetConstructorID(System::IntPtr javaClass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName)
    // Offset: 0x236DC68
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature)
    // Offset: 0x236DCD4
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr javaClass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x236DCCC
    static System::IntPtr GetMethodID(System::IntPtr javaClass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName)
    // Offset: 0x236DEA0
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature)
    // Offset: 0x236DF0C
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature);
    // static public System.IntPtr GetFieldID(System.IntPtr javaClass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x236DF04
    static System::IntPtr GetFieldID(System::IntPtr javaClass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr CreateJavaRunnable(UnityEngine.AndroidJavaRunnable jrunnable)
    // Offset: 0x236E1C4
    static System::IntPtr CreateJavaRunnable(UnityEngine::AndroidJavaRunnable* jrunnable);
    // static public System.IntPtr CreateJavaProxy(UnityEngine.AndroidJavaProxy proxy)
    // Offset: 0x236E228
    static System::IntPtr CreateJavaProxy(UnityEngine::AndroidJavaProxy* proxy);
    // static public System.IntPtr ConvertToJNIArray(System.Array array)
    // Offset: 0x236E3B4
    static System::IntPtr ConvertToJNIArray(System::Array* array);
    // static public UnityEngine.jvalue[] CreateJNIArgArray(System.Object[] args)
    // Offset: 0x236EBF0
    static ::Array<UnityEngine::jvalue>* CreateJNIArgArray(::Array<::Il2CppObject*>* args);
    // static public System.Void DeleteJNIArgArray(System.Object[] args, UnityEngine.jvalue[] jniArgs)
    // Offset: 0x236F0C8
    static void DeleteJNIArgArray(::Array<::Il2CppObject*>* args, ::Array<UnityEngine::jvalue>* jniArgs);
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.Object[] args)
    // Offset: 0x236F1EC
    static System::IntPtr GetConstructorID(System::IntPtr jclass, ::Array<::Il2CppObject*>* args);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x236F244
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic);
    // static public System.String GetSignature(System.Object obj)
    // Offset: 0x236F2CC
    static ::Il2CppString* GetSignature(::Il2CppObject* obj);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0x236FE6C
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args);
    // static public ArrayType ConvertFromJNIArray(System.IntPtr array)
    // Offset: 0xFFFFFFFF
    template<class ArrayType>
    static ArrayType ConvertFromJNIArray(System::IntPtr array) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::ConvertFromJNIArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "ConvertFromJNIArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ArrayType, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array);
    }
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::GetMethodID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "GetMethodID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jclass), ::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(isStatic)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, jclass, methodName, args, isStatic);
    }
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    static System::IntPtr GetFieldID(System::IntPtr jclass, ::Il2CppString* fieldName, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::GetFieldID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "GetFieldID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jclass), ::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(isStatic)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, jclass, fieldName, isStatic);
    }
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJNIHelper::GetSignature");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "AndroidJNIHelper", "GetSignature", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, args);
    }
  }; // UnityEngine.AndroidJNIHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNIHelper*, "UnityEngine", "AndroidJNIHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::get_debug
// Il2CppName: get_debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::AndroidJNIHelper::get_debug)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "get_debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::set_debug
// Il2CppName: set_debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::AndroidJNIHelper::set_debug)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "set_debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr)>(&UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&UnityEngine::AndroidJNIHelper::GetMethodID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, methodName});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::AndroidJNIHelper::GetMethodID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, methodName, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::AndroidJNIHelper::GetMethodID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, methodName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&UnityEngine::AndroidJNIHelper::GetFieldID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetFieldID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, fieldName});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::AndroidJNIHelper::GetFieldID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetFieldID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, fieldName, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::AndroidJNIHelper::GetFieldID)> {
  const MethodInfo* get() {
    static auto* javaClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetFieldID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{javaClass, fieldName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::CreateJavaRunnable
// Il2CppName: CreateJavaRunnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::AndroidJavaRunnable*)>(&UnityEngine::AndroidJNIHelper::CreateJavaRunnable)> {
  const MethodInfo* get() {
    static auto* jrunnable = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaRunnable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "CreateJavaRunnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jrunnable});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::CreateJavaProxy
// Il2CppName: CreateJavaProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::AndroidJavaProxy*)>(&UnityEngine::AndroidJNIHelper::CreateJavaProxy)> {
  const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "CreateJavaProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::ConvertToJNIArray
// Il2CppName: ConvertToJNIArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::Array*)>(&UnityEngine::AndroidJNIHelper::ConvertToJNIArray)> {
  const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "ConvertToJNIArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::CreateJNIArgArray
// Il2CppName: CreateJNIArgArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::jvalue>* (*)(::Array<::Il2CppObject*>*)>(&UnityEngine::AndroidJNIHelper::CreateJNIArgArray)> {
  const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "CreateJNIArgArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::DeleteJNIArgArray
// Il2CppName: DeleteJNIArgArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<::Il2CppObject*>*, ::Array<UnityEngine::jvalue>*)>(&UnityEngine::AndroidJNIHelper::DeleteJNIArgArray)> {
  const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* jniArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "jvalue"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "DeleteJNIArgArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, jniArgs});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Array<::Il2CppObject*>*)>(&UnityEngine::AndroidJNIHelper::GetConstructorID)> {
  const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Array<::Il2CppObject*>*, bool)>(&UnityEngine::AndroidJNIHelper::GetMethodID)> {
  const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, args, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*)>(&UnityEngine::AndroidJNIHelper::GetSignature)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<::Il2CppObject*>*)>(&UnityEngine::AndroidJNIHelper::GetSignature)> {
  const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJNIHelper*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::ConvertFromJNIArray
// Il2CppName: ConvertFromJNIArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
// Cannot write MetadataGetter for generic methods!
