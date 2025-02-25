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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SimpleFileLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleFileLogger : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SimpleFileLogger::MonoLogger
    class MonoLogger;
    // Creating value type constructor for type: SimpleFileLogger
    SimpleFileLogger() noexcept {}
    // static field const value: static private System.String kFilename
    static constexpr const char* kFilename = "SimpleLog.txt";
    // Get static field: static private System.String kFilename
    static ::Il2CppString* _get_kFilename();
    // Set static field: static private System.String kFilename
    static void _set_kFilename(::Il2CppString* value);
    // Get static field: static private SimpleFileLogger/MonoLogger _monoLogger
    static GlobalNamespace::SimpleFileLogger::MonoLogger* _get__monoLogger();
    // Set static field: static private SimpleFileLogger/MonoLogger _monoLogger
    static void _set__monoLogger(GlobalNamespace::SimpleFileLogger::MonoLogger* value);
    // static private SimpleFileLogger/MonoLogger get_monoLogger()
    // Offset: 0x2393F58
    static GlobalNamespace::SimpleFileLogger::MonoLogger* get_monoLogger();
    // static public System.Void Log(System.String text)
    // Offset: 0x2394038
    static void Log(::Il2CppString* text);
    // static public System.Void LogVector(System.String description, UnityEngine.Vector3 vec)
    // Offset: 0x23940CC
    static void LogVector(::Il2CppString* description, UnityEngine::Vector3 vec);
    // static public System.Void Clear()
    // Offset: 0x239433C
    static void Clear();
    // public System.Void .ctor()
    // Offset: 0x23943C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleFileLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleFileLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleFileLogger*, creationType>()));
    }
  }; // SimpleFileLogger
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleFileLogger*, "", "SimpleFileLogger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::get_monoLogger
// Il2CppName: get_monoLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SimpleFileLogger::MonoLogger* (*)()>(&GlobalNamespace::SimpleFileLogger::get_monoLogger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger*), "get_monoLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&GlobalNamespace::SimpleFileLogger::Log)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::LogVector
// Il2CppName: LogVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::Vector3)>(&GlobalNamespace::SimpleFileLogger::LogVector)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* vec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger*), "LogVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description, vec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SimpleFileLogger::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleFileLogger*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleFileLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
