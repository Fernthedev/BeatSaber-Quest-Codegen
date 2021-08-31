// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.EventInfo
#include "System/Reflection/EventInfo.hpp"
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeEventInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeEventInfo : public System::Reflection::EventInfo/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: RuntimeEventInfo
    RuntimeEventInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x147CDB4
    System::Reflection::BindingFlags get_BindingFlags();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x147CE6C
    System::RuntimeType* get_ReflectedTypeInternal();
    // System.RuntimeType GetDeclaringTypeInternal()
    // Offset: 0x147CDE0
    System::RuntimeType* GetDeclaringTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x147CDC0
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147CEF8
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Reflection.Module get_Module()
    // Offset: 0x147CDBC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // protected System.Void .ctor()
    // Offset: 0x147CFB8
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Void EventInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeEventInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RuntimeEventInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeEventInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimeEventInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeEventInfo*, "System.Reflection", "RuntimeEventInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::get_BindingFlags
// Il2CppName: get_BindingFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::BindingFlags (System::Reflection::RuntimeEventInfo::*)()>(&System::Reflection::RuntimeEventInfo::get_BindingFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeEventInfo*), "get_BindingFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::get_ReflectedTypeInternal
// Il2CppName: get_ReflectedTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType* (System::Reflection::RuntimeEventInfo::*)()>(&System::Reflection::RuntimeEventInfo::get_ReflectedTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeEventInfo*), "get_ReflectedTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::GetDeclaringTypeInternal
// Il2CppName: GetDeclaringTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeType* (System::Reflection::RuntimeEventInfo::*)()>(&System::Reflection::RuntimeEventInfo::GetDeclaringTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeEventInfo*), "GetDeclaringTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::GetRuntimeModule
// Il2CppName: GetRuntimeModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeModule* (System::Reflection::RuntimeEventInfo::*)()>(&System::Reflection::RuntimeEventInfo::GetRuntimeModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeEventInfo*), "GetRuntimeModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeEventInfo::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeEventInfo::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeEventInfo*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module* (System::Reflection::RuntimeEventInfo::*)()>(&System::Reflection::RuntimeEventInfo::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeEventInfo*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeEventInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
