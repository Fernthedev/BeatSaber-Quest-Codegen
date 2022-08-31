// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Logging.Debug/BGNet.Logging.ILogger
#include "BGNet/Logging/Debug_ILogger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: BGNet.Logging
namespace BGNet::Logging {
  // Forward declaring type: UnityLogger
  class UnityLogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Logging::UnityLogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::UnityLogger*, "BGNet.Logging", "UnityLogger");
// Type namespace: BGNet.Logging
namespace BGNet::Logging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Logging.UnityLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityLogger : public ::Il2CppObject/*, public ::BGNet::Logging::Debug::ILogger*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Logging::Debug::ILogger
    operator ::BGNet::Logging::Debug::ILogger() noexcept {
      return *reinterpret_cast<::BGNet::Logging::Debug::ILogger*>(this);
    }
    // Creating interface conversion operator: i_ILogger
    inline ::BGNet::Logging::Debug::ILogger* i_ILogger() noexcept {
      return reinterpret_cast<::BGNet::Logging::Debug::ILogger*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x2B1B628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Logging::UnityLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogger*, creationType>()));
    }
    // public System.Void LogInfo(System.String message)
    // Offset: 0x2B1BE78
    void LogInfo(::StringW message);
    // public System.Void LogError(System.String message)
    // Offset: 0x2B1BE7C
    void LogError(::StringW message);
    // public System.Void LogException(System.Exception exception, System.String message)
    // Offset: 0x2B1BEE4
    void LogException(::System::Exception* exception, ::StringW message);
    // public System.Void LogWarning(System.String message)
    // Offset: 0x2B1BF94
    void LogWarning(::StringW message);
  }; // BGNet.Logging.UnityLogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Logging::UnityLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Logging::UnityLogger::LogInfo
// Il2CppName: LogInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Logging::UnityLogger::*)(::StringW)>(&BGNet::Logging::UnityLogger::LogInfo)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::UnityLogger*), "LogInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::UnityLogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Logging::UnityLogger::*)(::StringW)>(&BGNet::Logging::UnityLogger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::UnityLogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::UnityLogger::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Logging::UnityLogger::*)(::System::Exception*, ::StringW)>(&BGNet::Logging::UnityLogger::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::UnityLogger*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, message});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::UnityLogger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Logging::UnityLogger::*)(::StringW)>(&BGNet::Logging::UnityLogger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::UnityLogger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
