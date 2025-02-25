// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner
namespace UnityEngine::TestRunner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.ITestRunCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ITestRunCallback {
    public:
    // Creating value type constructor for type: ITestRunCallback
    ITestRunCallback() noexcept {}
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0xFFFFFFFF
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0xFFFFFFFF
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xFFFFFFFF
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
  }; // UnityEngine.TestRunner.ITestRunCallback
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::ITestRunCallback*, "UnityEngine.TestRunner", "ITestRunCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::ITestRunCallback::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::ITestRunCallback::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::ITestRunCallback::RunStarted)> {
  static const MethodInfo* get() {
    static auto* testsToRun = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::ITestRunCallback*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testsToRun});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::ITestRunCallback::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::ITestRunCallback::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::ITestRunCallback::RunFinished)> {
  static const MethodInfo* get() {
    static auto* testResults = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::ITestRunCallback*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::ITestRunCallback::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::ITestRunCallback::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::ITestRunCallback::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::ITestRunCallback*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::ITestRunCallback::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::ITestRunCallback::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::ITestRunCallback::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::ITestRunCallback*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
