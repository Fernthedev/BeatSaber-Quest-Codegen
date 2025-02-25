// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::NUnitExtensions
namespace UnityEngine::TestTools::NUnitExtensions {
  // Forward declaring type: UnityTestAssemblyBuilder
  class UnityTestAssemblyBuilder;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: WorkItemFactory
  class WorkItemFactory;
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: ITestListener
  class ITestListener;
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: TestPlatform
  struct TestPlatform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTestAssemblyRunner : public ::Il2CppObject {
    public:
    // private readonly UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder unityBuilder
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* unityBuilder;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*) == 0x8);
    // private readonly UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory m_Factory
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* m_Factory;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*) == 0x8);
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // private System.Collections.Generic.IDictionary`2<System.String,System.Object> <Settings>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* Settings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*) == 0x8);
    // private NUnit.Framework.Interfaces.ITest <LoadedTest>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::ITest* LoadedTest;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem <TopLevelWorkItem>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* TopLevelWorkItem;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*) == 0x8);
    // Creating value type constructor for type: UnityTestAssemblyRunner
    UnityTestAssemblyRunner(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* unityBuilder_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* m_Factory_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* Context_ = {}, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* Settings_ = {}, NUnit::Framework::Interfaces::ITest* LoadedTest_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* TopLevelWorkItem_ = {}) noexcept : unityBuilder{unityBuilder_}, m_Factory{m_Factory_}, Context{Context_}, Settings{Settings_}, LoadedTest{LoadedTest_}, TopLevelWorkItem{TopLevelWorkItem_} {}
    // Get instance field reference: private readonly UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder unityBuilder
    UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder*& dyn_unityBuilder();
    // Get instance field reference: private readonly UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory m_Factory
    UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory*& dyn_m_Factory();
    // Get instance field reference: private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <Context>k__BackingField
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*& dyn_$Context$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.IDictionary`2<System.String,System.Object> <Settings>k__BackingField
    System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*& dyn_$Settings$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Interfaces.ITest <LoadedTest>k__BackingField
    NUnit::Framework::Interfaces::ITest*& dyn_$LoadedTest$k__BackingField();
    // Get instance field reference: private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem <TopLevelWorkItem>k__BackingField
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*& dyn_$TopLevelWorkItem$k__BackingField();
    // protected UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext get_Context()
    // Offset: 0x14C0BD0
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* get_Context();
    // protected System.Void set_Context(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext value)
    // Offset: 0x14C0BD8
    void set_Context(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* value);
    // protected System.Void set_Settings(System.Collections.Generic.IDictionary`2<System.String,System.Object> value)
    // Offset: 0x14C0BE0
    void set_Settings(System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // public NUnit.Framework.Interfaces.ITest get_LoadedTest()
    // Offset: 0x14C0BE8
    NUnit::Framework::Interfaces::ITest* get_LoadedTest();
    // protected System.Void set_LoadedTest(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x14C0BF0
    void set_LoadedTest(NUnit::Framework::Interfaces::ITest* value);
    // public NUnit.Framework.Interfaces.ITestResult get_Result()
    // Offset: 0x14C0BF8
    NUnit::Framework::Interfaces::ITestResult* get_Result();
    // public System.Boolean get_IsTestRunning()
    // Offset: 0x14C0C10
    bool get_IsTestRunning();
    // public System.Boolean get_IsTestComplete()
    // Offset: 0x14C0C30
    bool get_IsTestComplete();
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem get_TopLevelWorkItem()
    // Offset: 0x14C1170
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* get_TopLevelWorkItem();
    // public System.Void set_TopLevelWorkItem(UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem value)
    // Offset: 0x14C1178
    void set_TopLevelWorkItem(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* value);
    // public System.Void .ctor(UnityEngine.TestTools.NUnitExtensions.UnityTestAssemblyBuilder builder, UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory factory)
    // Offset: 0x14C0C50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestAssemblyRunner* New_ctor(UnityEngine::TestTools::NUnitExtensions::UnityTestAssemblyBuilder* builder, UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* factory) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestAssemblyRunner*, creationType>(builder, factory)));
    }
    // public NUnit.Framework.Interfaces.ITest Load(System.Reflection.Assembly[] assemblies, UnityEngine.TestTools.TestPlatform testPlatform, System.Collections.Generic.IDictionary`2<System.String,System.Object> settings)
    // Offset: 0x14C0D78
    NUnit::Framework::Interfaces::ITest* Load(::Array<System::Reflection::Assembly*>* assemblies, UnityEngine::TestTools::TestPlatform testPlatform, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* settings);
    // public System.Collections.IEnumerable Run(NUnit.Framework.Interfaces.ITestListener listener, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0x14C10CC
    System::Collections::IEnumerable* Run(NUnit::Framework::Interfaces::ITestListener* listener, NUnit::Framework::Interfaces::ITestFilter* filter);
    // public System.Void StopRun()
    // Offset: 0x14C1180
    void StopRun();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestAssemblyRunner
  #pragma pack(pop)
  static check_size<sizeof(UnityTestAssemblyRunner), 56 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityTestAssemblyRunnerSizeCheck;
  static_assert(sizeof(UnityTestAssemblyRunner) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestAssemblyRunner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_Context
// Il2CppName: get_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_Context)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "get_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_Context
// Il2CppName: set_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_Context)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityTestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "set_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_Settings
// Il2CppName: set_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)(System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_Settings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "set_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_LoadedTest
// Il2CppName: get_LoadedTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_LoadedTest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "get_LoadedTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_LoadedTest
// Il2CppName: set_LoadedTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_LoadedTest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "set_LoadedTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestResult* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_IsTestRunning
// Il2CppName: get_IsTestRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_IsTestRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "get_IsTestRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_IsTestComplete
// Il2CppName: get_IsTestComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_IsTestComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "get_IsTestComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_TopLevelWorkItem
// Il2CppName: get_TopLevelWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::get_TopLevelWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "get_TopLevelWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_TopLevelWorkItem
// Il2CppName: set_TopLevelWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::set_TopLevelWorkItem)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "set_TopLevelWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)(::Array<System::Reflection::Assembly*>*, UnityEngine::TestTools::TestPlatform, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::Load)> {
  static const MethodInfo* get() {
    static auto* assemblies = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), 1)->byval_arg;
    static auto* testPlatform = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools", "TestPlatform")->byval_arg;
    static auto* settings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblies, testPlatform, settings});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)(NUnit::Framework::Interfaces::ITestListener*, NUnit::Framework::Interfaces::ITestFilter*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::Run)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestListener")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener, filter});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::StopRun
// Il2CppName: StopRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner::StopRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestAssemblyRunner*), "StopRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
