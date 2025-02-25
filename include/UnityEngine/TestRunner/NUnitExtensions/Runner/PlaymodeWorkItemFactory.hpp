// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/WorkItemFactory.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
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
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.PlaymodeWorkItemFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class PlaymodeWorkItemFactory : public UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory {
    public:
    // Creating value type constructor for type: PlaymodeWorkItemFactory
    PlaymodeWorkItemFactory() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x14BE244
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
    // Base method: System.Void WorkItemFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeWorkItemFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeWorkItemFactory*, creationType>()));
    }
    // protected override UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem Create(NUnit.Framework.Internal.TestMethod method, NUnit.Framework.Interfaces.ITestFilter filter, NUnit.Framework.Interfaces.ITest loadedTest)
    // Offset: 0x14BE1C4
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory
    // Base method: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem WorkItemFactory::Create(NUnit.Framework.Internal.TestMethod method, NUnit.Framework.Interfaces.ITestFilter filter, NUnit.Framework.Interfaces.ITest loadedTest)
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* Create(NUnit::Framework::Internal::TestMethod* method, NUnit::Framework::Interfaces::ITestFilter* filter, NUnit::Framework::Interfaces::ITest* loadedTest);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.PlaymodeWorkItemFactory
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "PlaymodeWorkItemFactory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* (UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory::*)(NUnit::Framework::Internal::TestMethod*, NUnit::Framework::Interfaces::ITestFilter*, NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory::Create)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestMethod")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestFilter")->byval_arg;
    static auto* loadedTest = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::PlaymodeWorkItemFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, filter, loadedTest});
  }
};
