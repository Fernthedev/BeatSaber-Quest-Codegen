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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.NamespaceTreeBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class NamespaceTreeBuilder : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,NUnit.Framework.Internal.TestSuite> namespaceSuites
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, NUnit::Framework::Internal::TestSuite*>* namespaceSuites;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, NUnit::Framework::Internal::TestSuite*>*) == 0x8);
    // private NUnit.Framework.Internal.TestSuite rootSuite
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestSuite* rootSuite;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // Creating value type constructor for type: NamespaceTreeBuilder
    NamespaceTreeBuilder(System::Collections::Generic::Dictionary_2<::Il2CppString*, NUnit::Framework::Internal::TestSuite*>* namespaceSuites_ = {}, NUnit::Framework::Internal::TestSuite* rootSuite_ = {}) noexcept : namespaceSuites{namespaceSuites_}, rootSuite{rootSuite_} {}
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,NUnit.Framework.Internal.TestSuite> namespaceSuites
    System::Collections::Generic::Dictionary_2<::Il2CppString*, NUnit::Framework::Internal::TestSuite*>*& dyn_namespaceSuites();
    // Get instance field reference: private NUnit.Framework.Internal.TestSuite rootSuite
    NUnit::Framework::Internal::TestSuite*& dyn_rootSuite();
    // public NUnit.Framework.Internal.TestSuite get_RootSuite()
    // Offset: 0x17692A4
    NUnit::Framework::Internal::TestSuite* get_RootSuite();
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite rootSuite)
    // Offset: 0x1768F78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamespaceTreeBuilder* New_ctor(NUnit::Framework::Internal::TestSuite* rootSuite) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamespaceTreeBuilder*, creationType>(rootSuite)));
    }
    // public System.Void Add(System.Collections.Generic.IList`1<NUnit.Framework.Internal.Test> fixtures)
    // Offset: 0x1768FFC
    void Add(System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* fixtures);
    // public System.Void Add(NUnit.Framework.Internal.TestSuite fixture)
    // Offset: 0x177C7F8
    void Add(NUnit::Framework::Internal::TestSuite* fixture);
    // static private System.String GetNamespaceForFixture(NUnit.Framework.Internal.TestSuite fixture)
    // Offset: 0x177C8C8
    static ::Il2CppString* GetNamespaceForFixture(NUnit::Framework::Internal::TestSuite* fixture);
    // private NUnit.Framework.Internal.TestSuite BuildFromNameSpace(System.String ns)
    // Offset: 0x177C9D4
    NUnit::Framework::Internal::TestSuite* BuildFromNameSpace(::Il2CppString* ns);
    // private System.Void AddSetUpFixture(NUnit.Framework.Internal.TestSuite newSetupFixture, NUnit.Framework.Internal.TestSuite containingSuite, System.String ns)
    // Offset: 0x177CB8C
    void AddSetUpFixture(NUnit::Framework::Internal::TestSuite* newSetupFixture, NUnit::Framework::Internal::TestSuite* containingSuite, ::Il2CppString* ns);
  }; // NUnit.Framework.Internal.Builders.NamespaceTreeBuilder
  #pragma pack(pop)
  static check_size<sizeof(NamespaceTreeBuilder), 24 + sizeof(NUnit::Framework::Internal::TestSuite*)> __NUnit_Framework_Internal_Builders_NamespaceTreeBuilderSizeCheck;
  static_assert(sizeof(NamespaceTreeBuilder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*, "NUnit.Framework.Internal.Builders", "NamespaceTreeBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::get_RootSuite
// Il2CppName: get_RootSuite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::*)()>(&NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::get_RootSuite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*), "get_RootSuite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::*)(System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>*)>(&NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::Add)> {
  static const MethodInfo* get() {
    static auto* fixtures = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixtures});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::*)(NUnit::Framework::Internal::TestSuite*)>(&NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::Add)> {
  static const MethodInfo* get() {
    static auto* fixture = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixture});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::GetNamespaceForFixture
// Il2CppName: GetNamespaceForFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(NUnit::Framework::Internal::TestSuite*)>(&NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::GetNamespaceForFixture)> {
  static const MethodInfo* get() {
    static auto* fixture = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*), "GetNamespaceForFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixture});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::BuildFromNameSpace
// Il2CppName: BuildFromNameSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::*)(::Il2CppString*)>(&NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::BuildFromNameSpace)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*), "BuildFromNameSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::AddSetUpFixture
// Il2CppName: AddSetUpFixture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::*)(NUnit::Framework::Internal::TestSuite*, NUnit::Framework::Internal::TestSuite*, ::Il2CppString*)>(&NUnit::Framework::Internal::Builders::NamespaceTreeBuilder::AddSetUpFixture)> {
  static const MethodInfo* get() {
    static auto* newSetupFixture = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    static auto* containingSuite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*), "AddSetUpFixture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSetupFixture, containingSuite, ns});
  }
};
