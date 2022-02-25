// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IApplyToContext
  class IApplyToContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: ApplyChangesToContextCommand
  class ApplyChangesToContextCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand);
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand*, "NUnit.Framework.Internal.Commands", "ApplyChangesToContextCommand");
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class ApplyChangesToContextCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> _changes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>* changes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> _changes
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>*& dyn__changes();
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> changes)
    // Offset: 0x1B60268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ApplyChangesToContextCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>* changes) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ApplyChangesToContextCommand*, creationType>(innerCommand, changes)));
    }
    // public System.Void ApplyChanges(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1B602D0
    void ApplyChanges(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1B605A4
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
  #pragma pack(pop)
  static check_size<sizeof(ApplyChangesToContextCommand), 32 + sizeof(System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>*)> __NUnit_Framework_Internal_Commands_ApplyChangesToContextCommandSizeCheck;
  static_assert(sizeof(ApplyChangesToContextCommand) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::ApplyChanges
// Il2CppName: ApplyChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::ApplyChanges)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand*), "ApplyChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
