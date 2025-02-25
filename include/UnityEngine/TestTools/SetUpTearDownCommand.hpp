// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
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
  // Autogenerated type: UnityEngine.TestTools.SetUpTearDownCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class SetUpTearDownCommand : public UnityEngine::TestTools::BeforeAfterTestCommandBase_1<System::Reflection::MethodInfo*> {
    public:
    // Nested type: UnityEngine::TestTools::SetUpTearDownCommand::$$c
    class $$c;
    // Nested type: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2
    class $InvokeBefore$d__2;
    // Nested type: UnityEngine::TestTools::SetUpTearDownCommand::$InvokeAfter$d__3
    class $InvokeAfter$d__3;
    // Creating value type constructor for type: SetUpTearDownCommand
    SetUpTearDownCommand() noexcept {}
    // static private System.Reflection.MethodInfo[] GetMethodsWithAttributeFromFixture(System.Type fixtureType, System.Type setUpType)
    // Offset: 0x14CB50C
    static ::Array<System::Reflection::MethodInfo*>* GetMethodsWithAttributeFromFixture(System::Type* fixtureType, System::Type* setUpType);
    // protected System.Collections.IEnumerator InvokeBefore(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14CB64C
    System::Collections::IEnumerator* InvokeBefore(System::Reflection::MethodInfo* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // protected System.Collections.IEnumerator InvokeAfter(System.Reflection.MethodInfo action, NUnit.Framework.Internal.Test test, UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14CB6FC
    System::Collections::IEnumerator* InvokeAfter(System::Reflection::MethodInfo* action, NUnit::Framework::Internal::Test* test, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x14BE9C0
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetUpTearDownCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::SetUpTearDownCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetUpTearDownCommand*, creationType>(innerCommand)));
    }
    // protected override UnityEngine.TestTools.BeforeAfterTestCommandState GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    // Offset: 0x14CB7AC
    // Implemented from: UnityEngine.TestTools.BeforeAfterTestCommandBase`1
    // Base method: UnityEngine.TestTools.BeforeAfterTestCommandState BeforeAfterTestCommandBase_1::GetState(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context)
    UnityEngine::TestTools::BeforeAfterTestCommandState* GetState(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context);
  }; // UnityEngine.TestTools.SetUpTearDownCommand
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::SetUpTearDownCommand*, "UnityEngine.TestTools", "SetUpTearDownCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::GetMethodsWithAttributeFromFixture
// Il2CppName: GetMethodsWithAttributeFromFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::MethodInfo*>* (*)(System::Type*, System::Type*)>(&UnityEngine::TestTools::SetUpTearDownCommand::GetMethodsWithAttributeFromFixture)> {
  static const MethodInfo* get() {
    static auto* fixtureType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* setUpType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "GetMethodsWithAttributeFromFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixtureType, setUpType});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::InvokeBefore
// Il2CppName: InvokeBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::SetUpTearDownCommand::*)(System::Reflection::MethodInfo*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::SetUpTearDownCommand::InvokeBefore)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "InvokeBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::InvokeAfter
// Il2CppName: InvokeAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::SetUpTearDownCommand::*)(System::Reflection::MethodInfo*, NUnit::Framework::Internal::Test*, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::SetUpTearDownCommand::InvokeAfter)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "InvokeAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, test, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::SetUpTearDownCommand::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::BeforeAfterTestCommandState* (UnityEngine::TestTools::SetUpTearDownCommand::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestTools::SetUpTearDownCommand::GetState)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::SetUpTearDownCommand*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
