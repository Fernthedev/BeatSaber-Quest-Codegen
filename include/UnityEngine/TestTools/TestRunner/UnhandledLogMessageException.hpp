// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.UnhandledLogMessageException
  // [TokenAttribute] Offset: FFFFFFFF
  class UnhandledLogMessageException : public NUnit::Framework::ResultStateException {
    public:
    // public UnityEngine.TestTools.Logging.LogEvent LogEvent
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::TestTools::Logging::LogEvent* LogEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Logging::LogEvent*) == 0x8);
    // private readonly System.String m_CustomStackTrace
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* m_CustomStackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UnhandledLogMessageException
    UnhandledLogMessageException(UnityEngine::TestTools::Logging::LogEvent* LogEvent_ = {}, ::Il2CppString* m_CustomStackTrace_ = {}) noexcept : LogEvent{LogEvent_}, m_CustomStackTrace{m_CustomStackTrace_} {}
    // Get instance field reference: public UnityEngine.TestTools.Logging.LogEvent LogEvent
    UnityEngine::TestTools::Logging::LogEvent*& dyn_LogEvent();
    // Get instance field reference: private readonly System.String m_CustomStackTrace
    ::Il2CppString*& dyn_m_CustomStackTrace();
    // public System.Void .ctor(UnityEngine.TestTools.Logging.LogEvent log)
    // Offset: 0x23FEF9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnhandledLogMessageException* New_ctor(UnityEngine::TestTools::Logging::LogEvent* log) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnhandledLogMessageException*, creationType>(log)));
    }
    // static private System.String BuildMessage(UnityEngine.TestTools.Logging.LogEvent log)
    // Offset: 0x23FF03C
    static ::Il2CppString* BuildMessage(UnityEngine::TestTools::Logging::LogEvent* log);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x23FF300
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public override System.String get_StackTrace()
    // Offset: 0x23FF368
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::Il2CppString* get_StackTrace();
  }; // UnityEngine.TestTools.TestRunner.UnhandledLogMessageException
  #pragma pack(pop)
  static check_size<sizeof(UnhandledLogMessageException), 144 + sizeof(::Il2CppString*)> __UnityEngine_TestTools_TestRunner_UnhandledLogMessageExceptionSizeCheck;
  static_assert(sizeof(UnhandledLogMessageException) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::UnhandledLogMessageException*, "UnityEngine.TestTools.TestRunner", "UnhandledLogMessageException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::BuildMessage
// Il2CppName: BuildMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(UnityEngine::TestTools::Logging::LogEvent*)>(&UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::BuildMessage)> {
  static const MethodInfo* get() {
    static auto* log = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnhandledLogMessageException*), "BuildMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{log});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ResultState* (UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::*)()>(&UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnhandledLogMessageException*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::*)()>(&UnityEngine::TestTools::TestRunner::UnhandledLogMessageException::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::UnhandledLogMessageException*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
