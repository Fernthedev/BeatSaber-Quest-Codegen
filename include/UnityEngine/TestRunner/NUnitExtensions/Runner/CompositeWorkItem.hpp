// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityWorkItem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: WorkItemFactory
  class WorkItemFactory;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: TestSuiteResult
  class TestSuiteResult;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Internal::Execution
namespace NUnit::Framework::Internal::Execution {
  // Forward declaring type: CountdownEvent
  class CountdownEvent;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
  class CompositeWorkItem : public UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer
    class UnityWorkItemOrderComparer;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$PerformWork$d__12
    class $PerformWork$d__12;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16
    class $RunChildren$d__16;
    // private readonly NUnit.Framework.Internal.TestSuite _suite
    // Size: 0x8
    // Offset: 0x58
    NUnit::Framework::Internal::TestSuite* suite;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private readonly NUnit.Framework.Internal.TestSuiteResult _suiteResult
    // Size: 0x8
    // Offset: 0x60
    NUnit::Framework::Internal::TestSuiteResult* suiteResult;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuiteResult*) == 0x8);
    // private readonly NUnit.Framework.Interfaces.ITestFilter _childFilter
    // Size: 0x8
    // Offset: 0x68
    NUnit::Framework::Interfaces::ITestFilter* childFilter;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITestFilter*) == 0x8);
    // private NUnit.Framework.Internal.Commands.TestCommand _setupCommand
    // Size: 0x8
    // Offset: 0x70
    NUnit::Framework::Internal::Commands::TestCommand* setupCommand;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Commands::TestCommand*) == 0x8);
    // private NUnit.Framework.Internal.Commands.TestCommand _teardownCommand
    // Size: 0x8
    // Offset: 0x78
    NUnit::Framework::Internal::Commands::TestCommand* teardownCommand;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Commands::TestCommand*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE3DBD0
    // private System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> <Children>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* Children;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*) == 0x8);
    // private System.Int32 _countOrder
    // Size: 0x4
    // Offset: 0x88
    int countOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: countOrder and: childTestCountdown
    char __padding6[0x4] = {};
    // private NUnit.Framework.Internal.Execution.CountdownEvent _childTestCountdown
    // Size: 0x8
    // Offset: 0x90
    NUnit::Framework::Internal::Execution::CountdownEvent* childTestCountdown;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Execution::CountdownEvent*) == 0x8);
    // Creating value type constructor for type: CompositeWorkItem
    CompositeWorkItem(NUnit::Framework::Internal::TestSuite* suite_ = {}, NUnit::Framework::Internal::TestSuiteResult* suiteResult_ = {}, NUnit::Framework::Interfaces::ITestFilter* childFilter_ = {}, NUnit::Framework::Internal::Commands::TestCommand* setupCommand_ = {}, NUnit::Framework::Internal::Commands::TestCommand* teardownCommand_ = {}, System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* Children_ = {}, int countOrder_ = {}, NUnit::Framework::Internal::Execution::CountdownEvent* childTestCountdown_ = {}) noexcept : suite{suite_}, suiteResult{suiteResult_}, childFilter{childFilter_}, setupCommand{setupCommand_}, teardownCommand{teardownCommand_}, Children{Children_}, countOrder{countOrder_}, childTestCountdown{childTestCountdown_} {}
    // public System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> get_Children()
    // Offset: 0x14A6784
    System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* get_Children();
    // private System.Void set_Children(System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> value)
    // Offset: 0x14A678C
    void set_Children(System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* value);
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite, NUnit.Framework.Interfaces.ITestFilter childFilter, UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory factory)
    // Offset: 0x14A6794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeWorkItem* New_ctor(NUnit::Framework::Internal::TestSuite* suite, NUnit::Framework::Interfaces::ITestFilter* childFilter, UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* factory) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeWorkItem*, creationType>(suite, childFilter, factory)));
    }
    // private System.Boolean CheckForCancellation()
    // Offset: 0x14A69D8
    bool CheckForCancellation();
    // private System.Void InitializeSetUpAndTearDownCommands()
    // Offset: 0x14A6AB0
    void InitializeSetUpAndTearDownCommands();
    // private System.Void PerformOneTimeSetUp()
    // Offset: 0x14A6FC4
    void PerformOneTimeSetUp();
    // private System.Collections.IEnumerable RunChildren()
    // Offset: 0x14A7340
    System::Collections::IEnumerable* RunChildren();
    // private System.Void CreateChildWorkItems()
    // Offset: 0x14A73F8
    void CreateChildWorkItems();
    // private System.Void SortChildren()
    // Offset: 0x14A7B74
    void SortChildren();
    // private System.Void SkipFixture(NUnit.Framework.Interfaces.ResultState resultState, System.String message, System.String stackTrace)
    // Offset: 0x14A7C0C
    void SkipFixture(NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message, ::Il2CppString* stackTrace);
    // private System.Void SkipChildren(NUnit.Framework.Internal.TestSuite suite, NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0x14A7D18
    void SkipChildren(NUnit::Framework::Internal::TestSuite* suite, NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message);
    // private System.Void PerformOneTimeTearDown()
    // Offset: 0x14A8264
    void PerformOneTimeTearDown();
    // private System.String GetSkipReason()
    // Offset: 0x14A8424
    ::Il2CppString* GetSkipReason();
    // private System.String GetProviderStackTrace()
    // Offset: 0x14A8514
    ::Il2CppString* GetProviderStackTrace();
    // private System.Void CountDownChildTest()
    // Offset: 0x14A8604
    void CountDownChildTest();
    // protected override System.Collections.IEnumerable PerformWork()
    // Offset: 0x14A6920
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Collections.IEnumerable UnityWorkItem::PerformWork()
    System::Collections::IEnumerable* PerformWork();
    // public override System.Void Cancel(System.Boolean force)
    // Offset: 0x14A8BC8
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Void UnityWorkItem::Cancel(System.Boolean force)
    void Cancel(bool force);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
  #pragma pack(pop)
  static check_size<sizeof(CompositeWorkItem), 144 + sizeof(NUnit::Framework::Internal::Execution::CountdownEvent*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_CompositeWorkItemSizeCheck;
  static_assert(sizeof(CompositeWorkItem) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem");
// Writing includes for template specializations
#include "System/Collections/Generic/List_1.hpp"
#include "NUnit/Framework/Internal/TestSuite.hpp"
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/WorkItemFactory.hpp"
#include "NUnit/Framework/Interfaces/ResultState.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::get_Children)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::set_Children
// Il2CppName: set_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::set_Children)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "set_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CheckForCancellation
// Il2CppName: CheckForCancellation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CheckForCancellation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "CheckForCancellation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::InitializeSetUpAndTearDownCommands
// Il2CppName: InitializeSetUpAndTearDownCommands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::InitializeSetUpAndTearDownCommands)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "InitializeSetUpAndTearDownCommands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeSetUp
// Il2CppName: PerformOneTimeSetUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeSetUp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "PerformOneTimeSetUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::RunChildren
// Il2CppName: RunChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::RunChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "RunChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CreateChildWorkItems
// Il2CppName: CreateChildWorkItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CreateChildWorkItems)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "CreateChildWorkItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SortChildren
// Il2CppName: SortChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SortChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "SortChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipFixture
// Il2CppName: SkipFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(NUnit::Framework::Interfaces::ResultState*, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipFixture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "SkipFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ResultState*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipChildren
// Il2CppName: SkipChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(NUnit::Framework::Internal::TestSuite*, NUnit::Framework::Interfaces::ResultState*, ::Il2CppString*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::SkipChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "SkipChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Internal::TestSuite*>(), ::il2cpp_utils::ExtractIndependentType<NUnit::Framework::Interfaces::ResultState*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeTearDown
// Il2CppName: PerformOneTimeTearDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformOneTimeTearDown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "PerformOneTimeTearDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetSkipReason
// Il2CppName: GetSkipReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetSkipReason)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "GetSkipReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetProviderStackTrace
// Il2CppName: GetProviderStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::GetProviderStackTrace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "GetProviderStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CountDownChildTest
// Il2CppName: CountDownChildTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::CountDownChildTest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "CountDownChildTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformWork
// Il2CppName: PerformWork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::PerformWork)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "PerformWork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::*)(bool)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::Cancel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
