// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: SetUpTearDownItem
  class SetUpTearDownItem;
  // Forward declaring type: TestActionItem
  class TestActionItem;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.OneTimeSetUpCommand
  class OneTimeSetUpCommand : public NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // private readonly NUnit.Framework.Internal.TestSuite _suite
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestSuite* suite;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private readonly NUnit.Framework.Interfaces.ITypeInfo _typeInfo
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // private readonly System.Object[] _arguments
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppObject*>* arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> _setUpTearDown
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDown;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.TestActionItem> _actions
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>*) == 0x8);
    // Creating value type constructor for type: OneTimeSetUpCommand
    OneTimeSetUpCommand(NUnit::Framework::Internal::TestSuite* suite_ = {}, NUnit::Framework::Interfaces::ITypeInfo* typeInfo_ = {}, ::Array<::Il2CppObject*>* arguments_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDown_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions_ = {}) noexcept : suite{suite_}, typeInfo{typeInfo_}, arguments{arguments_}, setUpTearDown{setUpTearDown_}, actions{actions_} {}
    // Deleting conversion operator: operator NUnit::Framework::Internal::Test*
    constexpr operator NUnit::Framework::Internal::Test*() const noexcept = delete;
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> setUpTearDown, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.TestActionItem> actions)
    // Offset: 0x1735BBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneTimeSetUpCommand* New_ctor(NUnit::Framework::Internal::TestSuite* suite, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDown, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneTimeSetUpCommand*, creationType>(suite, setUpTearDown, actions)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1735C14
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.OneTimeSetUpCommand
  #pragma pack(pop)
  static check_size<sizeof(OneTimeSetUpCommand), 56 + sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>*)> __NUnit_Framework_Internal_Commands_OneTimeSetUpCommandSizeCheck;
  static_assert(sizeof(OneTimeSetUpCommand) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::OneTimeSetUpCommand*, "NUnit.Framework.Internal.Commands", "OneTimeSetUpCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::OneTimeSetUpCommand::Execute)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::OneTimeSetUpCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
