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
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.TestActionItem
  // [TokenAttribute] Offset: FFFFFFFF
  class TestActionItem : public ::Il2CppObject {
    public:
    // private readonly NUnit.Framework.ITestAction _action
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::ITestAction* action;
    // Field size check
    static_assert(sizeof(NUnit::Framework::ITestAction*) == 0x8);
    // private System.Boolean _beforeTestWasRun
    // Size: 0x1
    // Offset: 0x18
    bool beforeTestWasRun;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TestActionItem
    TestActionItem(NUnit::Framework::ITestAction* action_ = {}, bool beforeTestWasRun_ = {}) noexcept : action{action_}, beforeTestWasRun{beforeTestWasRun_} {}
    // Get instance field reference: private readonly NUnit.Framework.ITestAction _action
    NUnit::Framework::ITestAction*& dyn__action();
    // Get instance field reference: private System.Boolean _beforeTestWasRun
    bool& dyn__beforeTestWasRun();
    // public System.Void .ctor(NUnit.Framework.ITestAction action)
    // Offset: 0x177F140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestActionItem* New_ctor(NUnit::Framework::ITestAction* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::TestActionItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestActionItem*, creationType>(action)));
    }
    // public System.Void BeforeTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x177E0C4
    void BeforeTest(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void AfterTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x177E6C8
    void AfterTest(NUnit::Framework::Interfaces::ITest* test);
  }; // NUnit.Framework.Internal.Commands.TestActionItem
  #pragma pack(pop)
  static check_size<sizeof(TestActionItem), 24 + sizeof(bool)> __NUnit_Framework_Internal_Commands_TestActionItemSizeCheck;
  static_assert(sizeof(TestActionItem) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::TestActionItem*, "NUnit.Framework.Internal.Commands", "TestActionItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestActionItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestActionItem::BeforeTest
// Il2CppName: BeforeTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::TestActionItem::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Commands::TestActionItem::BeforeTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::TestActionItem*), "BeforeTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestActionItem::AfterTest
// Il2CppName: AfterTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::TestActionItem::*)(NUnit::Framework::Interfaces::ITest*)>(&NUnit::Framework::Internal::Commands::TestActionItem::AfterTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::TestActionItem*), "AfterTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
