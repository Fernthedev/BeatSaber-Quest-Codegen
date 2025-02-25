// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ConstructorInfo
#include "System/Reflection/ConstructorInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeConstructorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeConstructorInfo : public System::Reflection::ConstructorInfo/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: RuntimeConstructorInfo
    RuntimeConstructorInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x1D2484C
    System::Reflection::BindingFlags get_BindingFlags();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x1D24854
    System::RuntimeType* get_ReflectedTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x1D247BC
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D248E0
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.String SerializationToString()
    // Offset: 0x1D1D74C
    ::Il2CppString* SerializationToString();
    // System.Void SerializationInvoke(System.Object target, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D249DC
    void SerializationInvoke(::Il2CppObject* target, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1D247B8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // protected System.Void .ctor()
    // Offset: 0x1D1FB00
    // Implemented from: System.Reflection.ConstructorInfo
    // Base method: System.Void ConstructorInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeConstructorInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RuntimeConstructorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeConstructorInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimeConstructorInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeConstructorInfo*, "System.Reflection", "RuntimeConstructorInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::get_BindingFlags
// Il2CppName: get_BindingFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::BindingFlags (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_BindingFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "get_BindingFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal
// Il2CppName: get_ReflectedTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType* (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "get_ReflectedTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::GetRuntimeModule
// Il2CppName: GetRuntimeModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule* (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::GetRuntimeModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "GetRuntimeModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeConstructorInfo::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeConstructorInfo::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::SerializationToString
// Il2CppName: SerializationToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::SerializationToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "SerializationToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::SerializationInvoke
// Il2CppName: SerializationInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeConstructorInfo::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeConstructorInfo::SerializationInvoke)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "SerializationInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module* (System::Reflection::RuntimeConstructorInfo::*)()>(&System::Reflection::RuntimeConstructorInfo::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeConstructorInfo*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeConstructorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
