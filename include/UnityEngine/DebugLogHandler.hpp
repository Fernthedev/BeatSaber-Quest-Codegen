// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogOption
  struct LogOption;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.DebugLogHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DB359C
  class DebugLogHandler : public ::Il2CppObject/*, public UnityEngine::ILogHandler*/ {
    public:
    // Creating value type constructor for type: DebugLogHandler
    DebugLogHandler() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::ILogHandler
    operator UnityEngine::ILogHandler() noexcept {
      return *reinterpret_cast<UnityEngine::ILogHandler*>(this);
    }
    // static System.Void Internal_Log(UnityEngine.LogType level, UnityEngine.LogOption options, System.String msg, UnityEngine.Object obj)
    // Offset: 0x1C51764
    static void Internal_Log(UnityEngine::LogType level, UnityEngine::LogOption options, ::Il2CppString* msg, UnityEngine::Object* obj);
    // static System.Void Internal_LogException(System.Exception exception, UnityEngine.Object obj)
    // Offset: 0x1C517CC
    static void Internal_LogException(System::Exception* exception, UnityEngine::Object* obj);
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1C5181C
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, context, format, {args...});
    }
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x1C51888
    void LogException(System::Exception* exception, UnityEngine::Object* context);
    // public System.Void .ctor()
    // Offset: 0x1C5175C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugLogHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::DebugLogHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugLogHandler*, creationType>()));
    }
  }; // UnityEngine.DebugLogHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DebugLogHandler*, "UnityEngine", "DebugLogHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::Internal_Log
// Il2CppName: Internal_Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::LogType, UnityEngine::LogOption, ::Il2CppString*, UnityEngine::Object*)>(&UnityEngine::DebugLogHandler::Internal_Log)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogOption")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "Internal_Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, options, msg, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::Internal_LogException
// Il2CppName: Internal_LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::DebugLogHandler::Internal_LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "Internal_LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)(UnityEngine::LogType, UnityEngine::Object*, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::DebugLogHandler::LogFormat)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)(System::Exception*, UnityEngine::Object*)>(&UnityEngine::DebugLogHandler::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DebugLogHandler*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::DebugLogHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
