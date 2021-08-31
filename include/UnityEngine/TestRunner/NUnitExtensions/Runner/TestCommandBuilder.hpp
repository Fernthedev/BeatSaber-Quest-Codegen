// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class TestCommandBuilder : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::$$c
    class $$c;
    // Creating value type constructor for type: TestCommandBuilder
    TestCommandBuilder() noexcept {}
    // static public NUnit.Framework.Internal.Commands.TestCommand BuildTestCommand(NUnit.Framework.Internal.TestMethod test, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0x14B4360
    static NUnit::Framework::Internal::Commands::TestCommand* BuildTestCommand(NUnit::Framework::Internal::TestMethod* test, NUnit::Framework::Interfaces::ITestFilter* filter);
    // static private System.String GetTestBuilderName(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0x14B6424
    static ::Il2CppString* GetTestBuilderName(NUnit::Framework::Internal::TestMethod* testMethod);
    // static private NUnit.Framework.Internal.Commands.TestCommand TryReplaceWithEnumerableCommand(NUnit.Framework.Internal.Commands.TestCommand command)
    // Offset: 0x14B62CC
    static NUnit::Framework::Internal::Commands::TestCommand* TryReplaceWithEnumerableCommand(NUnit::Framework::Internal::Commands::TestCommand* command);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.TestCommandBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "TestCommandBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::BuildTestCommand
// Il2CppName: BuildTestCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Commands::TestCommand* (*)(NUnit::Framework::Internal::TestMethod*, NUnit::Framework::Interfaces::ITestFilter*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::BuildTestCommand)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestMethod")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder*), "BuildTestCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test, filter});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::GetTestBuilderName
// Il2CppName: GetTestBuilderName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(NUnit::Framework::Internal::TestMethod*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::GetTestBuilderName)> {
  static const MethodInfo* get() {
    static auto* testMethod = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder*), "GetTestBuilderName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testMethod});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::TryReplaceWithEnumerableCommand
// Il2CppName: TryReplaceWithEnumerableCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Commands::TestCommand* (*)(NUnit::Framework::Internal::Commands::TestCommand*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder::TryReplaceWithEnumerableCommand)> {
  static const MethodInfo* get() {
    static auto* command = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Commands", "TestCommand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::TestCommandBuilder*), "TryReplaceWithEnumerableCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{command});
  }
};
