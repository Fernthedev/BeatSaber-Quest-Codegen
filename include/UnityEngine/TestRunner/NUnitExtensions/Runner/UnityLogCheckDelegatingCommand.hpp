// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogScope
  class LogScope;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
  class UnityLogCheckDelegatingCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand/*, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1
    class $$c__DisplayClass3_1;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3
    class $ExecuteEnumerable$d__3;
    // Creating value type constructor for type: UnityLogCheckDelegatingCommand
    UnityLogCheckDelegatingCommand() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Boolean>> s_AttributeCache
    static System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Nullable_1<bool>>* _get_s_AttributeCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Object,System.Nullable`1<System.Boolean>> s_AttributeCache
    static void _set_s_AttributeCache(System::Collections::Generic::Dictionary_2<::Il2CppObject*, System::Nullable_1<bool>>* value);
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14ADAEC
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
    // static private System.Boolean CaptureException(NUnit.Framework.Internal.TestResult result, System.Action action)
    // Offset: 0x14ADBB0
    static bool CaptureException(NUnit::Framework::Internal::TestResult* result, System::Action* action);
    // static private System.Boolean ExecuteAndCheckLog(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.TestResult result, System.Action action)
    // Offset: 0x14AD8CC
    static bool ExecuteAndCheckLog(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::TestResult* result, System::Action* action);
    // static private System.Void PostTestValidation(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.Commands.TestCommand command, NUnit.Framework.Internal.TestResult result)
    // Offset: 0x14AD980
    static void PostTestValidation(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::Commands::TestCommand* command, NUnit::Framework::Internal::TestResult* result);
    // static private System.Boolean CheckLogs(NUnit.Framework.Internal.TestResult result, UnityEngine.TestTools.Logging.LogScope logScope)
    // Offset: 0x14ADCA0
    static bool CheckLogs(NUnit::Framework::Internal::TestResult* result, UnityEngine::TestTools::Logging::LogScope* logScope);
    // static private System.Boolean CheckFailingLogs(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.TestResult result)
    // Offset: 0x14AE014
    static bool CheckFailingLogs(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::TestResult* result);
    // static private System.Boolean CheckExpectedLogs(UnityEngine.TestTools.Logging.LogScope logScope, NUnit.Framework.Internal.TestResult result)
    // Offset: 0x14AE0D0
    static bool CheckExpectedLogs(UnityEngine::TestTools::Logging::LogScope* logScope, NUnit::Framework::Internal::TestResult* result);
    // static private System.Boolean MustExpect(System.Reflection.MemberInfo method)
    // Offset: 0x14ADD50
    static bool MustExpect(System::Reflection::MemberInfo* method);
    // static private System.Void .cctor()
    // Offset: 0x14AE19C
    static void _cctor();
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x14AC424
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogCheckDelegatingCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogCheckDelegatingCommand*, creationType>(innerCommand)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x14AD594
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityLogCheckDelegatingCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::ExecuteEnumerable
// Il2CppName: ExecuteEnumerable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::ExecuteEnumerable)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "ExecuteEnumerable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CaptureException
// Il2CppName: CaptureException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(NUnit::Framework::Internal::TestResult*, System::Action*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CaptureException)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "CaptureException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, action});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::ExecuteAndCheckLog
// Il2CppName: ExecuteAndCheckLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::TestTools::Logging::LogScope*, NUnit::Framework::Internal::TestResult*, System::Action*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::ExecuteAndCheckLog)> {
  const MethodInfo* get() {
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "ExecuteAndCheckLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logScope, result, action});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::PostTestValidation
// Il2CppName: PostTestValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::TestTools::Logging::LogScope*, NUnit::Framework::Internal::Commands::TestCommand*, NUnit::Framework::Internal::TestResult*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::PostTestValidation)> {
  const MethodInfo* get() {
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    static auto* command = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Commands", "TestCommand")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "PostTestValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logScope, command, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CheckLogs
// Il2CppName: CheckLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(NUnit::Framework::Internal::TestResult*, UnityEngine::TestTools::Logging::LogScope*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CheckLogs)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "CheckLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, logScope});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CheckFailingLogs
// Il2CppName: CheckFailingLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::TestTools::Logging::LogScope*, NUnit::Framework::Internal::TestResult*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CheckFailingLogs)> {
  const MethodInfo* get() {
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "CheckFailingLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logScope, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CheckExpectedLogs
// Il2CppName: CheckExpectedLogs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::TestTools::Logging::LogScope*, NUnit::Framework::Internal::TestResult*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::CheckExpectedLogs)> {
  const MethodInfo* get() {
    static auto* logScope = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Logging", "LogScope")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "CheckExpectedLogs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logScope, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::MustExpect
// Il2CppName: MustExpect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::MustExpect)> {
  const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "MustExpect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::Execute)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
