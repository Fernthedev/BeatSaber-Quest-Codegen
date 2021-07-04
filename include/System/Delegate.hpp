// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DelegateData
  class DelegateData;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x61
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Delegate
  // [ComVisibleAttribute] Offset: D7B20C
  // [ClassInterfaceAttribute] Offset: D7B20C
  class Delegate : public ::Il2CppObject/*, public System::ICloneable, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.IntPtr method_ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr method_ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr invoke_impl
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr invoke_impl;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Object m_target
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.IntPtr method
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr method;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr delegate_trampoline
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr delegate_trampoline;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr extra_arg
    // Size: 0x8
    // Offset: 0x38
    System::IntPtr extra_arg;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr method_code
    // Size: 0x8
    // Offset: 0x40
    System::IntPtr method_code;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Reflection.MethodInfo method_info
    // Size: 0x8
    // Offset: 0x48
    System::Reflection::MethodInfo* method_info;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo original_method_info
    // Size: 0x8
    // Offset: 0x50
    System::Reflection::MethodInfo* original_method_info;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.DelegateData data
    // Size: 0x8
    // Offset: 0x58
    System::DelegateData* data;
    // Field size check
    static_assert(sizeof(System::DelegateData*) == 0x8);
    // private System.Boolean method_is_virtual
    // Size: 0x1
    // Offset: 0x60
    bool method_is_virtual;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Delegate
    Delegate(System::IntPtr method_ptr_ = {}, System::IntPtr invoke_impl_ = {}, ::Il2CppObject* m_target_ = {}, System::IntPtr method_ = {}, System::IntPtr delegate_trampoline_ = {}, System::IntPtr extra_arg_ = {}, System::IntPtr method_code_ = {}, System::Reflection::MethodInfo* method_info_ = {}, System::Reflection::MethodInfo* original_method_info_ = {}, System::DelegateData* data_ = {}, bool method_is_virtual_ = {}) noexcept : method_ptr{method_ptr_}, invoke_impl{invoke_impl_}, m_target{m_target_}, method{method_}, delegate_trampoline{delegate_trampoline_}, extra_arg{extra_arg_}, method_code{method_code_}, method_info{method_info_}, original_method_info{original_method_info_}, data{data_}, method_is_virtual{method_is_virtual_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Reflection.MethodInfo get_Method()
    // Offset: 0x1B09D94
    System::Reflection::MethodInfo* get_Method();
    // private System.Reflection.MethodInfo GetVirtualMethod_internal()
    // Offset: 0x1B09DA0
    System::Reflection::MethodInfo* GetVirtualMethod_internal();
    // public System.Object get_Target()
    // Offset: 0x1B09DA4
    ::Il2CppObject* get_Target();
    // static System.Delegate CreateDelegate_internal(System.Type type, System.Object target, System.Reflection.MethodInfo info, System.Boolean throwOnBindFailure)
    // Offset: 0x1B09DAC
    static System::Delegate* CreateDelegate_internal(System::Type* type, ::Il2CppObject* target, System::Reflection::MethodInfo* info, bool throwOnBindFailure);
    // static private System.Boolean arg_type_match(System.Type delArgType, System.Type argType)
    // Offset: 0x1B09DB4
    static bool arg_type_match(System::Type* delArgType, System::Type* argType);
    // static private System.Boolean arg_type_match_this(System.Type delArgType, System.Type argType, System.Boolean boxedThis)
    // Offset: 0x1B09F70
    static bool arg_type_match_this(System::Type* delArgType, System::Type* argType, bool boxedThis);
    // static private System.Boolean return_type_match(System.Type delReturnType, System.Type returnType)
    // Offset: 0x1B0A0EC
    static bool return_type_match(System::Type* delReturnType, System::Type* returnType);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0x1B0A1B4
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static private System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure, System.Boolean allowClosed)
    // Offset: 0x1B0A1C0
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0x1B0A9AC
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0x1B0A9B8
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0x1B0A9D0
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method)
    // Offset: 0x1B0A9E4
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method);
    // static private System.Reflection.MethodInfo GetCandidateMethod(System.Type type, System.Type target, System.String method, System.Reflection.BindingFlags bflags, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x1B0A9FC
    static System::Reflection::MethodInfo* GetCandidateMethod(System::Type* type, System::Type* target, ::Il2CppString* method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x1B0ADF4
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method)
    // Offset: 0x1B0AF14
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x1B0AF20
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase)
    // Offset: 0x1B0A9F0
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase);
    // public System.Object DynamicInvoke(params System.Object[] args)
    // Offset: 0x1B0B01C
    ::Il2CppObject* DynamicInvoke(::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object DynamicInvoke(params System.Object[] args)
    ::Il2CppObject* DynamicInvoke(std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object DynamicInvoke(params System.Object[] args)
    template<class ...TParams>
    ::Il2CppObject* DynamicInvoke(TParams&&... args) {
      return DynamicInvoke({args...});
    }
    // private System.Void InitializeDelegateData()
    // Offset: 0x1B0B028
    void InitializeDelegateData();
    // protected System.Object DynamicInvokeImpl(System.Object[] args)
    // Offset: 0x1B0B120
    ::Il2CppObject* DynamicInvokeImpl(::Array<::Il2CppObject*>* args);
    // public System.Object Clone()
    // Offset: 0x1B0B3FC
    ::Il2CppObject* Clone();
    // protected System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0x1B0B64C
    System::Reflection::MethodInfo* GetMethodImpl();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B0B718
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Delegate[] GetInvocationList()
    // Offset: 0x1B0B944
    ::Array<System::Delegate*>* GetInvocationList();
    // static public System.Delegate Combine(System.Delegate a, System.Delegate b)
    // Offset: 0x1B0B9E4
    static System::Delegate* Combine(System::Delegate* a, System::Delegate* b);
    // static public System.Delegate Combine(params System.Delegate[] delegates)
    // Offset: 0x1B0BBD8
    static System::Delegate* Combine(::Array<System::Delegate*>* delegates);
    // Creating initializer_list -> params proxy for: System.Delegate Combine(params System.Delegate[] delegates)
    static System::Delegate* Combine(std::initializer_list<System::Delegate*> delegates);
    // Creating TArgs -> initializer_list proxy for: System.Delegate Combine(params System.Delegate[] delegates)
    template<class ...TParams>
    static System::Delegate* Combine(TParams&&... delegates) {
      return Combine({delegates...});
    }
    // protected System.Delegate CombineImpl(System.Delegate d)
    // Offset: 0x1B0BC50
    System::Delegate* CombineImpl(System::Delegate* d);
    // static public System.Delegate Remove(System.Delegate source, System.Delegate value)
    // Offset: 0x1B0BCC8
    static System::Delegate* Remove(System::Delegate* source, System::Delegate* value);
    // protected System.Delegate RemoveImpl(System.Delegate d)
    // Offset: 0x1B0BEB4
    System::Delegate* RemoveImpl(System::Delegate* d);
    // static System.Delegate CreateDelegateNoSecurityCheck(System.RuntimeType type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0x1B0BF0C
    static System::Delegate* CreateDelegateNoSecurityCheck(System::RuntimeType* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static System.MulticastDelegate AllocDelegateLike_internal(System.Delegate d)
    // Offset: 0x1B0BF14
    static System::MulticastDelegate* AllocDelegateLike_internal(System::Delegate* d);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B0B404
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B0B5CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Delegate
  #pragma pack(pop)
  static check_size<sizeof(Delegate), 96 + sizeof(bool)> __System_DelegateSizeCheck;
  static_assert(sizeof(Delegate) == 0x61);
  // static public System.Boolean op_Equality(System.Delegate d1, System.Delegate d2)
  // Offset: 0x1B0BEE4
  bool operator ==(System::Delegate* d1, System::Delegate& d2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Delegate*, "System", "Delegate");
// Writing includes for template specializations
#include "System/Type.hpp"
#include "System/Reflection/MethodInfo.hpp"
#include "System/Reflection/BindingFlags.hpp"
#include "System/Runtime/Serialization/SerializationInfo.hpp"
#include "System/RuntimeType.hpp"
// Writing MetadataGetter for method: System::Delegate::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Delegate::*)()>(&System::Delegate::get_Method)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetVirtualMethod_internal
// Il2CppName: GetVirtualMethod_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Delegate::*)()>(&System::Delegate::GetVirtualMethod_internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetVirtualMethod_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)()>(&System::Delegate::get_Target)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate_internal
// Il2CppName: CreateDelegate_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*, bool)>(&System::Delegate::CreateDelegate_internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::arg_type_match
// Il2CppName: arg_type_match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&System::Delegate::arg_type_match)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "arg_type_match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::arg_type_match_this
// Il2CppName: arg_type_match_this
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*, bool)>(&System::Delegate::arg_type_match_this)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "arg_type_match_this", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::return_type_match
// Il2CppName: return_type_match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, System::Type*)>(&System::Delegate::return_type_match)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "return_type_match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*, bool)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*, bool, bool)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, System::Reflection::MethodInfo*)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Reflection::MethodInfo*, bool)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Reflection::MethodInfo*)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, ::Il2CppString*)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetCandidateMethod
// Il2CppName: GetCandidateMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (*)(System::Type*, System::Type*, ::Il2CppString*, System::Reflection::BindingFlags, bool, bool)>(&System::Delegate::GetCandidateMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetCandidateMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::BindingFlags>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Type*, ::Il2CppString*, bool, bool)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, System::Type*, ::Il2CppString*)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, ::Il2CppString*, bool, bool)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegate
// Il2CppName: CreateDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Type*, ::Il2CppObject*, ::Il2CppString*, bool)>(&System::Delegate::CreateDelegate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::DynamicInvoke
// Il2CppName: DynamicInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)(::Array<::Il2CppObject*>*)>(&System::Delegate::DynamicInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "DynamicInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::InitializeDelegateData
// Il2CppName: InitializeDelegateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Delegate::*)()>(&System::Delegate::InitializeDelegateData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "InitializeDelegateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::DynamicInvokeImpl
// Il2CppName: DynamicInvokeImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)(::Array<::Il2CppObject*>*)>(&System::Delegate::DynamicInvokeImpl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "DynamicInvokeImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Delegate::*)()>(&System::Delegate::Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetMethodImpl
// Il2CppName: GetMethodImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo* (System::Delegate::*)()>(&System::Delegate::GetMethodImpl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetMethodImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Delegate::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Delegate::GetObjectData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetInvocationList
// Il2CppName: GetInvocationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Delegate*>* (System::Delegate::*)()>(&System::Delegate::GetInvocationList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetInvocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Delegate*, System::Delegate*)>(&System::Delegate::Combine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>(), ::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(::Array<System::Delegate*>*)>(&System::Delegate::Combine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<System::Delegate*>*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CombineImpl
// Il2CppName: CombineImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (System::Delegate::*)(System::Delegate*)>(&System::Delegate::CombineImpl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CombineImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::Delegate*, System::Delegate*)>(&System::Delegate::Remove)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>(), ::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::RemoveImpl
// Il2CppName: RemoveImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (System::Delegate::*)(System::Delegate*)>(&System::Delegate::RemoveImpl)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "RemoveImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::CreateDelegateNoSecurityCheck
// Il2CppName: CreateDelegateNoSecurityCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Delegate* (*)(System::RuntimeType*, ::Il2CppObject*, System::Reflection::MethodInfo*)>(&System::Delegate::CreateDelegateNoSecurityCheck)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "CreateDelegateNoSecurityCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::RuntimeType*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Reflection::MethodInfo*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::AllocDelegateLike_internal
// Il2CppName: AllocDelegateLike_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MulticastDelegate* (*)(System::Delegate*)>(&System::Delegate::AllocDelegateLike_internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "AllocDelegateLike_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Delegate*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Delegate::*)(::Il2CppObject*)>(&System::Delegate::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Delegate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Delegate::*)()>(&System::Delegate::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Delegate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Delegate::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
