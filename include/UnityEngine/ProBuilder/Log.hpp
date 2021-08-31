// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.LogLevel
#include "UnityEngine/ProBuilder/LogLevel.hpp"
// Including type: UnityEngine.ProBuilder.LogOutput
#include "UnityEngine/ProBuilder/LogOutput.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Log
  // [TokenAttribute] Offset: FFFFFFFF
  class Log : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Log
    Log() noexcept {}
    // static field const value: static public System.String k_ProBuilderLogFileName
    static constexpr const char* k_ProBuilderLogFileName = "ProBuilderLog.txt";
    // Get static field: static public System.String k_ProBuilderLogFileName
    static ::Il2CppString* _get_k_ProBuilderLogFileName();
    // Set static field: static public System.String k_ProBuilderLogFileName
    static void _set_k_ProBuilderLogFileName(::Il2CppString* value);
    // Get static field: static private System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.LogLevel> s_logStack
    static System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel>* _get_s_logStack();
    // Set static field: static private System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.LogLevel> s_logStack
    static void _set_s_logStack(System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::LogLevel>* value);
    // Get static field: static private UnityEngine.ProBuilder.LogLevel s_LogLevel
    static UnityEngine::ProBuilder::LogLevel _get_s_LogLevel();
    // Set static field: static private UnityEngine.ProBuilder.LogLevel s_LogLevel
    static void _set_s_LogLevel(UnityEngine::ProBuilder::LogLevel value);
    // Get static field: static private UnityEngine.ProBuilder.LogOutput s_Output
    static UnityEngine::ProBuilder::LogOutput _get_s_Output();
    // Set static field: static private UnityEngine.ProBuilder.LogOutput s_Output
    static void _set_s_Output(UnityEngine::ProBuilder::LogOutput value);
    // Get static field: static private System.String s_LogFilePath
    static ::Il2CppString* _get_s_LogFilePath();
    // Set static field: static private System.String s_LogFilePath
    static void _set_s_LogFilePath(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x1AF6FA8
    static void _cctor();
    // static public System.Void PushLogLevel(UnityEngine.ProBuilder.LogLevel level)
    // Offset: 0x1AF639C
    static void PushLogLevel(UnityEngine::ProBuilder::LogLevel level);
    // static public System.Void PopLogLevel()
    // Offset: 0x1AF6430
    static void PopLogLevel();
    // static public System.Void SetLogLevel(UnityEngine.ProBuilder.LogLevel level)
    // Offset: 0x1AF64BC
    static void SetLogLevel(UnityEngine::ProBuilder::LogLevel level);
    // static public System.Void SetOutput(UnityEngine.ProBuilder.LogOutput output)
    // Offset: 0x1AF6528
    static void SetOutput(UnityEngine::ProBuilder::LogOutput output);
    // static public System.Void SetLogFile(System.String path)
    // Offset: 0x1AF6594
    static void SetLogFile(::Il2CppString* path);
    // static public System.Void Debug(T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Debug(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Log::Debug");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Log", "Debug", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, value);
    }
    // static public System.Void Debug(System.String message)
    // Offset: 0x1AF6600
    static void Debug(::Il2CppString* message);
    // static public System.Void Debug(System.String format, params System.Object[] values)
    // Offset: 0x1AF6760
    static void Debug(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Debug(System.String format, params System.Object[] values)
    static void Debug(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Debug(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Debug(::Il2CppString* format, TParams&&... values) {
      Debug(format, {values...});
    }
    // static public System.Void Info(System.String format, params System.Object[] values)
    // Offset: 0x1AF6764
    static void Info(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Info(System.String format, params System.Object[] values)
    static void Info(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Info(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Info(::Il2CppString* format, TParams&&... values) {
      Info(format, {values...});
    }
    // static public System.Void Info(System.String message)
    // Offset: 0x1AF67EC
    static void Info(::Il2CppString* message);
    // static public System.Void Warning(System.String format, params System.Object[] values)
    // Offset: 0x1AF6884
    static void Warning(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Warning(System.String format, params System.Object[] values)
    static void Warning(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Warning(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Warning(::Il2CppString* format, TParams&&... values) {
      Warning(format, {values...});
    }
    // static public System.Void Warning(System.String message)
    // Offset: 0x1AF690C
    static void Warning(::Il2CppString* message);
    // static public System.Void Error(System.String format, params System.Object[] values)
    // Offset: 0x1AF69A4
    static void Error(::Il2CppString* format, ::Array<::Il2CppObject*>* values);
    // Creating initializer_list -> params proxy for: System.Void Error(System.String format, params System.Object[] values)
    static void Error(::Il2CppString* format, std::initializer_list<::Il2CppObject*> values);
    // Creating TArgs -> initializer_list proxy for: System.Void Error(System.String format, params System.Object[] values)
    template<class ...TParams>
    static void Error(::Il2CppString* format, TParams&&... values) {
      Error(format, {values...});
    }
    // static public System.Void Error(System.String message)
    // Offset: 0x1AF6A2C
    static void Error(::Il2CppString* message);
    // static System.Void Watch(T key, K value)
    // Offset: 0xFFFFFFFF
    template<class T, class K>
    static void Watch(T key, K value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Log::Watch");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Log", "Watch", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, key, value);
    }
    // static private System.Void DoPrint(System.String message, UnityEngine.LogType type)
    // Offset: 0x1AF6668
    static void DoPrint(::Il2CppString* message, UnityEngine::LogType type);
    // static private System.Void PrintToFile(System.String message, System.String path)
    // Offset: 0x1AF6BD8
    static void PrintToFile(::Il2CppString* message, ::Il2CppString* path);
    // static public System.Void ClearLogFile()
    // Offset: 0x1AF6F00
    static void ClearLogFile();
    // static private System.Void PrintToConsole(System.String message, UnityEngine.LogType type)
    // Offset: 0x1AF6AC4
    static void PrintToConsole(::Il2CppString* message, UnityEngine::LogType type);
    // static System.Void NotNull(T obj, System.String message)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void NotNull(T obj, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Log::NotNull");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ProBuilder", "Log", "NotNull", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(message)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, obj, message);
    }
  }; // UnityEngine.ProBuilder.Log
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Log*, "UnityEngine.ProBuilder", "Log");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Log::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::PushLogLevel
// Il2CppName: PushLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::LogLevel)>(&UnityEngine::ProBuilder::Log::PushLogLevel)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "PushLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::PopLogLevel
// Il2CppName: PopLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Log::PopLogLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "PopLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::SetLogLevel
// Il2CppName: SetLogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::LogLevel)>(&UnityEngine::ProBuilder::Log::SetLogLevel)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "SetLogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::SetOutput
// Il2CppName: SetOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::LogOutput)>(&UnityEngine::ProBuilder::Log::SetOutput)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "LogOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "SetOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::SetLogFile
// Il2CppName: SetLogFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::ProBuilder::Log::SetLogFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "SetLogFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Debug
// Il2CppName: Debug
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::ProBuilder::Log::Debug)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Debug
// Il2CppName: Debug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::ProBuilder::Log::Debug)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Debug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::ProBuilder::Log::Info)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::ProBuilder::Log::Info)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Warning
// Il2CppName: Warning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::ProBuilder::Log::Warning)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Warning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Warning
// Il2CppName: Warning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::ProBuilder::Log::Warning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Warning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::ProBuilder::Log::Error)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&UnityEngine::ProBuilder::Log::Error)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::Watch
// Il2CppName: Watch
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::DoPrint
// Il2CppName: DoPrint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::LogType)>(&UnityEngine::ProBuilder::Log::DoPrint)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "DoPrint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::PrintToFile
// Il2CppName: PrintToFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ProBuilder::Log::PrintToFile)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "PrintToFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, path});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::ClearLogFile
// Il2CppName: ClearLogFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Log::ClearLogFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "ClearLogFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::PrintToConsole
// Il2CppName: PrintToConsole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::LogType)>(&UnityEngine::ProBuilder::Log::PrintToConsole)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Log*), "PrintToConsole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Log::NotNull
// Il2CppName: NotNull
// Cannot write MetadataGetter for generic methods!
