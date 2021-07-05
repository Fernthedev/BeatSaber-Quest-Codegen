// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
#include "UnityEngine/TestTools/BeforeAfterTestCommandBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestTools.TestActionCommand
  class TestActionCommand : public UnityEngine::TestTools::BeforeAfterTestCommandBase_1<NUnit::Framework::ITestAction*> {
    public:
    // Nested type: UnityEngine::TestTools::TestActionCommand::$InvokeBefore$d__2
    class $InvokeBefore$d__2;
    // Nested type: UnityEngine::TestTools::TestActionCommand::$InvokeAfter$d__3
    class $InvokeAfter$d__3;
    // Creating value type constructor for type: TestActionCommand
    TestActionCommand() noexcept {}
    // static private NUnit.Framework.ITestAction[] GetTestActionsFromMethod(System.Reflection.MethodInfo method)
    // Offset: 0x14B9BE4
    static ::Array<NUnit::Framework::ITestAction*>* GetTestActionsFromMethod(System::Reflection::MethodInfo* method);
    // protected System.Collections.IEnumerator InvokeBefore(NUnit.Framework.ITestAction action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14B9D1C
    System::Collections::IEnumerator* InvokeBefore(NUnit::Framework::ITestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(NUnit.Framework.ITestAction action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14B9DC4
    System::Collections::IEnumerator* InvokeAfter(NUnit::Framework::ITestAction* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x14AC9A0
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestActionCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestActionCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestActionCommand*, creationType>(innerCommand)));
    }
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14B9E6C
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase_1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.TestActionCommand
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestActionCommand*, "UnityEngine.TestTools", "TestActionCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::GetTestActionsFromMethod
// Il2CppName: GetTestActionsFromMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<NUnit::Framework::ITestAction*>* (*)(System::Reflection::MethodInfo*)>(&UnityEngine::TestTools::TestActionCommand::GetTestActionsFromMethod)> {
  const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand*), "GetTestActionsFromMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::InvokeBefore
// Il2CppName: InvokeBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::TestActionCommand::*)(NUnit::Framework::ITestAction*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::TestActionCommand::InvokeBefore)> {
  const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("NUnit.Framework", "ITestAction")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand*), "InvokeBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::InvokeAfter
// Il2CppName: InvokeAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::TestActionCommand::*)(NUnit::Framework::ITestAction*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::TestActionCommand::InvokeAfter)> {
  const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("NUnit.Framework", "ITestAction")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand*), "InvokeAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestActionCommand::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::BeforeAfterTestCommandState* (UnityEngine::TestTools::TestActionCommand::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::TestActionCommand::GetState)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestActionCommand*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
