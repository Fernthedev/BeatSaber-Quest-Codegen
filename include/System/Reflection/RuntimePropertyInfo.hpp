// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
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
  // Autogenerated type: System.Reflection.RuntimePropertyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimePropertyInfo : public System::Reflection::PropertyInfo/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: RuntimePropertyInfo
    RuntimePropertyInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x1485718
    System::Reflection::BindingFlags get_BindingFlags();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x14857D0
    System::RuntimeType* get_ReflectedTypeInternal();
    // System.RuntimeType GetDeclaringTypeInternal()
    // Offset: 0x1485744
    System::RuntimeType* GetDeclaringTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x1485724
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // private System.String FormatNameAndSig(System.Boolean serialization)
    // Offset: 0x1485864
    ::Il2CppString* FormatNameAndSig(bool serialization);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14859BC
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.String SerializationToString()
    // Offset: 0x1485AB0
    ::Il2CppString* SerializationToString();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1485720
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // protected System.Void .ctor()
    // Offset: 0x1485AB8
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Void PropertyInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimePropertyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RuntimePropertyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimePropertyInfo*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x148585C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Reflection.RuntimePropertyInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimePropertyInfo*, "System.Reflection", "RuntimePropertyInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::get_BindingFlags
// Il2CppName: get_BindingFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::BindingFlags (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::get_BindingFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "get_BindingFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::get_ReflectedTypeInternal
// Il2CppName: get_ReflectedTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType* (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::get_ReflectedTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "get_ReflectedTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::GetDeclaringTypeInternal
// Il2CppName: GetDeclaringTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType* (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::GetDeclaringTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "GetDeclaringTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::GetRuntimeModule
// Il2CppName: GetRuntimeModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule* (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::GetRuntimeModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "GetRuntimeModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::FormatNameAndSig
// Il2CppName: FormatNameAndSig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::RuntimePropertyInfo::*)(bool)>(&System::Reflection::RuntimePropertyInfo::FormatNameAndSig)> {
  static const MethodInfo* get() {
    static auto* serialization = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "FormatNameAndSig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serialization});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimePropertyInfo::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimePropertyInfo::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::SerializationToString
// Il2CppName: SerializationToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::SerializationToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "SerializationToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module* (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::RuntimePropertyInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::RuntimePropertyInfo::*)()>(&System::Reflection::RuntimePropertyInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimePropertyInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
