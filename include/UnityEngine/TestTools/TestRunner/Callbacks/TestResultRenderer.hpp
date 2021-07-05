// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
  class TestResultRenderer : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::Styles
    class Styles;
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::$$c
    class $$c;
    // private readonly System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITestResult> m_FailedTestCollection
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>* m_FailedTestCollection;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>*) == 0x8);
    // private System.Boolean m_ShowResults
    // Size: 0x1
    // Offset: 0x18
    bool m_ShowResults;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShowResults and: m_ScrollPosition
    char __padding1[0x3] = {};
    // private UnityEngine.Vector2 m_ScrollPosition
    // Size: 0x8
    // Offset: 0x1C
    UnityEngine::Vector2 m_ScrollPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Creating value type constructor for type: TestResultRenderer
    TestResultRenderer(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITestResult*>* m_FailedTestCollection_ = {}, bool m_ShowResults_ = {}, UnityEngine::Vector2 m_ScrollPosition_ = {}) noexcept : m_FailedTestCollection{m_FailedTestCollection_}, m_ShowResults{m_ShowResults_}, m_ScrollPosition{m_ScrollPosition_} {}
    // static field const value: static private System.Int32 k_MaxStringLength
    static constexpr const int k_MaxStringLength = 15000;
    // Get static field: static private System.Int32 k_MaxStringLength
    static int _get_k_MaxStringLength();
    // Set static field: static private System.Int32 k_MaxStringLength
    static void _set_k_MaxStringLength(int value);
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x14BA760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestResultRenderer* New_ctor(NUnit::Framework::Interfaces::ITestResult* testResults) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestResultRenderer*, creationType>(testResults)));
    }
    // private System.Void GetFailedTests(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x14BBCE0
    void GetFailedTests(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void ShowResults()
    // Offset: 0x14BA7E8
    void ShowResults();
    // public System.Void Draw()
    // Offset: 0x14BA814
    void Draw();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
  #pragma pack(pop)
  static check_size<sizeof(TestResultRenderer), 28 + sizeof(UnityEngine::Vector2)> __UnityEngine_TestTools_TestRunner_Callbacks_TestResultRendererSizeCheck;
  static_assert(sizeof(TestResultRenderer) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRenderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::GetFailedTests
// Il2CppName: GetFailedTests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::GetFailedTests)> {
  const MethodInfo* get() {
    static auto* testResults = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*), "GetFailedTests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::ShowResults
// Il2CppName: ShowResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::ShowResults)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*), "ShowResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::Draw
// Il2CppName: Draw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::Draw)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*), "Draw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
