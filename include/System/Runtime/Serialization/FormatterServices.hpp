// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: MemberHolder
  class MemberHolder;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConcurrentDictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: FormatterServices
  class FormatterServices;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::Serialization::FormatterServices);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterServices*, "System.Runtime.Serialization", "FormatterServices");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.FormatterServices
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 118A4E4
  class FormatterServices : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Get static field: static System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]> m_MemberInfoTable
    static System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder*, ::ArrayW<System::Reflection::MemberInfo*>>* _get_m_MemberInfoTable();
    // Set static field: static System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]> m_MemberInfoTable
    static void _set_m_MemberInfoTable(System::Collections::Concurrent::ConcurrentDictionary_2<System::Runtime::Serialization::MemberHolder*, ::ArrayW<System::Reflection::MemberInfo*>>* value);
    // Get static field: static private System.Boolean unsafeTypeForwardersIsEnabled
    static bool _get_unsafeTypeForwardersIsEnabled();
    // Set static field: static private System.Boolean unsafeTypeForwardersIsEnabled
    static void _set_unsafeTypeForwardersIsEnabled(bool value);
    // Get static field: static private System.Boolean unsafeTypeForwardersIsEnabledInitialized
    static bool _get_unsafeTypeForwardersIsEnabledInitialized();
    // Set static field: static private System.Boolean unsafeTypeForwardersIsEnabledInitialized
    static void _set_unsafeTypeForwardersIsEnabledInitialized(bool value);
    // Get static field: static private readonly System.Type[] advancedTypes
    static ::ArrayW<System::Type*> _get_advancedTypes();
    // Set static field: static private readonly System.Type[] advancedTypes
    static void _set_advancedTypes(::ArrayW<System::Type*> value);
    // Get static field: static private System.Reflection.Binder s_binder
    static System::Reflection::Binder* _get_s_binder();
    // Set static field: static private System.Reflection.Binder s_binder
    static void _set_s_binder(System::Reflection::Binder* value);
    // static private System.Void .cctor()
    // Offset: 0x180CDC4
    static void _cctor();
    // static private System.Reflection.MemberInfo[] GetSerializableMembers(System.RuntimeType type)
    // Offset: 0x180CF18
    static ::ArrayW<System::Reflection::MemberInfo*> GetSerializableMembers(System::RuntimeType* type);
    // static private System.Boolean CheckSerializable(System.RuntimeType type)
    // Offset: 0x180D0C0
    static bool CheckSerializable(System::RuntimeType* type);
    // static private System.Reflection.MemberInfo[] InternalGetSerializableMembers(System.RuntimeType type)
    // Offset: 0x180D0E0
    static ::ArrayW<System::Reflection::MemberInfo*> InternalGetSerializableMembers(System::RuntimeType* type);
    // static private System.Boolean GetParentTypes(System.RuntimeType parentType, out System.RuntimeType[] parentTypes, out System.Int32 parentTypeCount)
    // Offset: 0x180D760
    static bool GetParentTypes(System::RuntimeType* parentType, ByRef<::ArrayW<System::RuntimeType*>> parentTypes, ByRef<int> parentTypeCount);
    // static public System.Reflection.MemberInfo[] GetSerializableMembers(System.Type type, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x180DA9C
    static ::ArrayW<System::Reflection::MemberInfo*> GetSerializableMembers(System::Type* type, System::Runtime::Serialization::StreamingContext context);
    // static public System.Object GetUninitializedObject(System.Type type)
    // Offset: 0x180DCF4
    static ::Il2CppObject* GetUninitializedObject(System::Type* type);
    // static private System.Object nativeGetUninitializedObject(System.RuntimeType type)
    // Offset: 0x180DEB0
    static ::Il2CppObject* nativeGetUninitializedObject(System::RuntimeType* type);
    // static private System.Boolean GetEnableUnsafeTypeForwarders()
    // Offset: 0x180DEB8
    static bool GetEnableUnsafeTypeForwarders();
    // static System.Boolean UnsafeTypeForwardersIsEnabled()
    // Offset: 0x180DEC0
    static bool UnsafeTypeForwardersIsEnabled();
    // static System.Void SerializationSetValue(System.Reflection.MemberInfo fi, System.Object target, System.Object value)
    // Offset: 0x180DF88
    static void SerializationSetValue(System::Reflection::MemberInfo* fi, ::Il2CppObject* target, ::Il2CppObject* value);
    // static public System.Object PopulateObjectMembers(System.Object obj, System.Reflection.MemberInfo[] members, System.Object[] data)
    // Offset: 0x180E160
    static ::Il2CppObject* PopulateObjectMembers(::Il2CppObject* obj, ::ArrayW<System::Reflection::MemberInfo*> members, ::ArrayW<::Il2CppObject*> data);
    // static public System.Object[] GetObjectData(System.Object obj, System.Reflection.MemberInfo[] members)
    // Offset: 0x180E45C
    static ::ArrayW<::Il2CppObject*> GetObjectData(::Il2CppObject* obj, ::ArrayW<System::Reflection::MemberInfo*> members);
    // static public System.Type GetTypeFromAssembly(System.Reflection.Assembly assem, System.String name)
    // Offset: 0x180E794
    static System::Type* GetTypeFromAssembly(System::Reflection::Assembly* assem, ::StringW name);
    // static System.Reflection.Assembly LoadAssemblyFromString(System.String assemblyName)
    // Offset: 0x180E854
    static System::Reflection::Assembly* LoadAssemblyFromString(::StringW assemblyName);
    // static System.Reflection.Assembly LoadAssemblyFromStringNoThrow(System.String assemblyName)
    // Offset: 0x180E85C
    static System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::StringW assemblyName);
    // static System.String GetClrAssemblyName(System.Type type, out System.Boolean hasTypeForwardedFrom)
    // Offset: 0x180E940
    static ::StringW GetClrAssemblyName(System::Type* type, ByRef<bool> hasTypeForwardedFrom);
    // static System.String GetClrTypeFullName(System.Type type)
    // Offset: 0x180EAA4
    static ::StringW GetClrTypeFullName(System::Type* type);
    // static private System.String GetClrTypeFullNameForArray(System.Type type)
    // Offset: 0x180EB48
    static ::StringW GetClrTypeFullNameForArray(System::Type* type);
    // static private System.String GetClrTypeFullNameForNonArrayTypes(System.Type type)
    // Offset: 0x180ED40
    static ::StringW GetClrTypeFullNameForNonArrayTypes(System::Type* type);
  }; // System.Runtime.Serialization.FormatterServices
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::FormatterServices::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetSerializableMembers
// Il2CppName: GetSerializableMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo*> (*)(System::RuntimeType*)>(&System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetSerializableMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::CheckSerializable
// Il2CppName: CheckSerializable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType*)>(&System::Runtime::Serialization::FormatterServices::CheckSerializable)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "CheckSerializable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers
// Il2CppName: InternalGetSerializableMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo*> (*)(System::RuntimeType*)>(&System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "InternalGetSerializableMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetParentTypes
// Il2CppName: GetParentTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::RuntimeType*, ByRef<::ArrayW<System::RuntimeType*>>, ByRef<int>)>(&System::Runtime::Serialization::FormatterServices::GetParentTypes)> {
  static const MethodInfo* get() {
    static auto* parentType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* parentTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "RuntimeType"), 1)->this_arg;
    static auto* parentTypeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetParentTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentType, parentTypes, parentTypeCount});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetSerializableMembers
// Il2CppName: GetSerializableMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo*> (*)(System::Type*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetSerializableMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetUninitializedObject
// Il2CppName: GetUninitializedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::Type*)>(&System::Runtime::Serialization::FormatterServices::GetUninitializedObject)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetUninitializedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject
// Il2CppName: nativeGetUninitializedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(System::RuntimeType*)>(&System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "nativeGetUninitializedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders
// Il2CppName: GetEnableUnsafeTypeForwarders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetEnableUnsafeTypeForwarders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled
// Il2CppName: UnsafeTypeForwardersIsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "UnsafeTypeForwardersIsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::SerializationSetValue
// Il2CppName: SerializationSetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::MemberInfo*, ::Il2CppObject*, ::Il2CppObject*)>(&System::Runtime::Serialization::FormatterServices::SerializationSetValue)> {
  static const MethodInfo* get() {
    static auto* fi = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "SerializationSetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fi, target, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::PopulateObjectMembers
// Il2CppName: PopulateObjectMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::ArrayW<System::Reflection::MemberInfo*>, ::ArrayW<::Il2CppObject*>)>(&System::Runtime::Serialization::FormatterServices::PopulateObjectMembers)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* members = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo"), 1)->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "PopulateObjectMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, members, data});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (*)(::Il2CppObject*, ::ArrayW<System::Reflection::MemberInfo*>)>(&System::Runtime::Serialization::FormatterServices::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* members = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, members});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly
// Il2CppName: GetTypeFromAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(System::Reflection::Assembly*, ::StringW)>(&System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly)> {
  static const MethodInfo* get() {
    static auto* assem = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetTypeFromAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assem, name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString
// Il2CppName: LoadAssemblyFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (*)(::StringW)>(&System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "LoadAssemblyFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow
// Il2CppName: LoadAssemblyFromStringNoThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly* (*)(::StringW)>(&System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "LoadAssemblyFromStringNoThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetClrAssemblyName
// Il2CppName: GetClrAssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type*, ByRef<bool>)>(&System::Runtime::Serialization::FormatterServices::GetClrAssemblyName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* hasTypeForwardedFrom = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetClrAssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, hasTypeForwardedFrom});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetClrTypeFullName
// Il2CppName: GetClrTypeFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type*)>(&System::Runtime::Serialization::FormatterServices::GetClrTypeFullName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetClrTypeFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray
// Il2CppName: GetClrTypeFullNameForArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type*)>(&System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetClrTypeFullNameForArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes
// Il2CppName: GetClrTypeFullNameForNonArrayTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type*)>(&System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices*), "GetClrTypeFullNameForNonArrayTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
