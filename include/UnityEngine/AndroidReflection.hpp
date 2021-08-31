// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidReflection
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidReflection : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AndroidReflection
    AndroidReflection() noexcept {}
    // Get static field: static private readonly UnityEngine.GlobalJavaObjectRef s_ReflectionHelperClass
    static UnityEngine::GlobalJavaObjectRef* _get_s_ReflectionHelperClass();
    // Set static field: static private readonly UnityEngine.GlobalJavaObjectRef s_ReflectionHelperClass
    static void _set_s_ReflectionHelperClass(UnityEngine::GlobalJavaObjectRef* value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetConstructorID
    static System::IntPtr _get_s_ReflectionHelperGetConstructorID();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetConstructorID
    static void _set_s_ReflectionHelperGetConstructorID(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetMethodID
    static System::IntPtr _get_s_ReflectionHelperGetMethodID();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetMethodID
    static void _set_s_ReflectionHelperGetMethodID(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldID
    static System::IntPtr _get_s_ReflectionHelperGetFieldID();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldID
    static void _set_s_ReflectionHelperGetFieldID(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldSignature
    static System::IntPtr _get_s_ReflectionHelperGetFieldSignature();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperGetFieldSignature
    static void _set_s_ReflectionHelperGetFieldSignature(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperNewProxyInstance
    static System::IntPtr _get_s_ReflectionHelperNewProxyInstance();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperNewProxyInstance
    static void _set_s_ReflectionHelperNewProxyInstance(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_ReflectionHelperSetNativeExceptionOnProxy
    static System::IntPtr _get_s_ReflectionHelperSetNativeExceptionOnProxy();
    // Set static field: static private readonly System.IntPtr s_ReflectionHelperSetNativeExceptionOnProxy
    static void _set_s_ReflectionHelperSetNativeExceptionOnProxy(System::IntPtr value);
    // Get static field: static private readonly System.IntPtr s_FieldGetDeclaringClass
    static System::IntPtr _get_s_FieldGetDeclaringClass();
    // Set static field: static private readonly System.IntPtr s_FieldGetDeclaringClass
    static void _set_s_FieldGetDeclaringClass(System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x23B1304
    static void _cctor();
    // static public System.Boolean IsPrimitive(System.Type t)
    // Offset: 0x23B0AC0
    static bool IsPrimitive(System::Type* t);
    // static public System.Boolean IsAssignableFrom(System.Type t, System.Type from)
    // Offset: 0x23B0AD8
    static bool IsAssignableFrom(System::Type* t, System::Type* from);
    // static private System.IntPtr GetStaticMethodID(System.String clazz, System.String methodName, System.String signature)
    // Offset: 0x23B0AF8
    static System::IntPtr GetStaticMethodID(::Il2CppString* clazz, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static private System.IntPtr GetMethodID(System.String clazz, System.String methodName, System.String signature)
    // Offset: 0x23B0B74
    static System::IntPtr GetMethodID(::Il2CppString* clazz, ::Il2CppString* methodName, ::Il2CppString* signature);
    // static public System.IntPtr GetConstructorMember(System.IntPtr jclass, System.String signature)
    // Offset: 0x23B0BF0
    static System::IntPtr GetConstructorMember(System::IntPtr jclass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodMember(System.IntPtr jclass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x23B0D58
    static System::IntPtr GetMethodMember(System::IntPtr jclass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldMember(System.IntPtr jclass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x23B0F2C
    static System::IntPtr GetFieldMember(System::IntPtr jclass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldClass(System.IntPtr field)
    // Offset: 0x23B1100
    static System::IntPtr GetFieldClass(System::IntPtr field);
    // static public System.String GetFieldSignature(System.IntPtr field)
    // Offset: 0x23B1174
    static ::Il2CppString* GetFieldSignature(System::IntPtr field);
    // static public System.IntPtr NewProxyInstance(System.IntPtr delegateHandle, System.IntPtr interfaze)
    // Offset: 0x23B1228
    static System::IntPtr NewProxyInstance(System::IntPtr delegateHandle, System::IntPtr interfaze);
    // static public System.Void SetNativeExceptionOnProxy(System.IntPtr proxy, System.Exception e, System.Boolean methodNotFound)
    // Offset: 0x23AFC14
    static void SetNativeExceptionOnProxy(System::IntPtr proxy, System::Exception* e, bool methodNotFound);
  }; // UnityEngine.AndroidReflection
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidReflection*, "UnityEngine", "AndroidReflection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AndroidReflection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::IsPrimitive
// Il2CppName: IsPrimitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&UnityEngine::AndroidReflection::IsPrimitive)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "IsPrimitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::IsAssignableFrom
// Il2CppName: IsAssignableFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&UnityEngine::AndroidReflection::IsAssignableFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "IsAssignableFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, from});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetStaticMethodID
// Il2CppName: GetStaticMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::AndroidReflection::GetStaticMethodID)> {
  static const MethodInfo* get() {
    static auto* clazz = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetStaticMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clazz, methodName, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::AndroidReflection::GetMethodID)> {
  static const MethodInfo* get() {
    static auto* clazz = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clazz, methodName, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetConstructorMember
// Il2CppName: GetConstructorMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&UnityEngine::AndroidReflection::GetConstructorMember)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetConstructorMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetMethodMember
// Il2CppName: GetMethodMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::AndroidReflection::GetMethodMember)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetMethodMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetFieldMember
// Il2CppName: GetFieldMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::AndroidReflection::GetFieldMember)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetFieldMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, fieldName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetFieldClass
// Il2CppName: GetFieldClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr)>(&UnityEngine::AndroidReflection::GetFieldClass)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetFieldClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::GetFieldSignature
// Il2CppName: GetFieldSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::IntPtr)>(&UnityEngine::AndroidReflection::GetFieldSignature)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "GetFieldSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::NewProxyInstance
// Il2CppName: NewProxyInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, System::IntPtr)>(&UnityEngine::AndroidReflection::NewProxyInstance)> {
  static const MethodInfo* get() {
    static auto* delegateHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* interfaze = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "NewProxyInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateHandle, interfaze});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidReflection::SetNativeExceptionOnProxy
// Il2CppName: SetNativeExceptionOnProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr, System::Exception*, bool)>(&UnityEngine::AndroidReflection::SetNativeExceptionOnProxy)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* methodNotFound = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidReflection*), "SetNativeExceptionOnProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy, e, methodNotFound});
  }
};
