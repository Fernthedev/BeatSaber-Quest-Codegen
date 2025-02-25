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
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ISuiteBuilder
  class ISuiteBuilder;
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Logger
  class Logger;
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Api
namespace NUnit::Framework::Api {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Api.DefaultTestAssemblyBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultTestAssemblyBuilder : public ::Il2CppObject {
    public:
    // private NUnit.Framework.Interfaces.ISuiteBuilder _defaultSuiteBuilder
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::ISuiteBuilder* defaultSuiteBuilder;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ISuiteBuilder*) == 0x8);
    // Creating value type constructor for type: DefaultTestAssemblyBuilder
    DefaultTestAssemblyBuilder(NUnit::Framework::Interfaces::ISuiteBuilder* defaultSuiteBuilder_ = {}) noexcept : defaultSuiteBuilder{defaultSuiteBuilder_} {}
    // Creating conversion operator: operator NUnit::Framework::Interfaces::ISuiteBuilder*
    constexpr operator NUnit::Framework::Interfaces::ISuiteBuilder*() const noexcept {
      return defaultSuiteBuilder;
    }
    // Get static field: static private NUnit.Framework.Internal.Logger log
    static NUnit::Framework::Internal::Logger* _get_log();
    // Set static field: static private NUnit.Framework.Internal.Logger log
    static void _set_log(NUnit::Framework::Internal::Logger* value);
    // Get instance field reference: private NUnit.Framework.Interfaces.ISuiteBuilder _defaultSuiteBuilder
    NUnit::Framework::Interfaces::ISuiteBuilder*& dyn__defaultSuiteBuilder();
    // static private System.Void .cctor()
    // Offset: 0x17692AC
    static void _cctor();
    // public NUnit.Framework.Interfaces.ITest Build(System.Reflection.Assembly assembly, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x17677B4
    NUnit::Framework::Interfaces::ITest* Build(System::Reflection::Assembly* assembly, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // private NUnit.Framework.Internal.TestSuite Build(System.Reflection.Assembly assembly, System.String assemblyPath, System.Collections.Generic.IDictionary`2<System.String,System.Object> options)
    // Offset: 0x176797C
    NUnit::Framework::Internal::TestSuite* Build(System::Reflection::Assembly* assembly, ::Il2CppString* assemblyPath, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* options);
    // private System.Collections.Generic.IList`1<NUnit.Framework.Internal.Test> GetFixtures(System.Reflection.Assembly assembly, System.Collections.IList names)
    // Offset: 0x1768054
    System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* GetFixtures(System::Reflection::Assembly* assembly, System::Collections::IList* names);
    // private System.Collections.Generic.IList`1<System.Type> GetCandidateFixtureTypes(System.Reflection.Assembly assembly, System.Collections.IList names)
    // Offset: 0x1768B0C
    System::Collections::Generic::IList_1<System::Type*>* GetCandidateFixtureTypes(System::Reflection::Assembly* assembly, System::Collections::IList* names);
    // private NUnit.Framework.Internal.TestSuite BuildTestAssembly(System.Reflection.Assembly assembly, System.String assemblyName, System.Collections.Generic.IList`1<NUnit.Framework.Internal.Test> fixtures)
    // Offset: 0x17687D0
    NUnit::Framework::Internal::TestSuite* BuildTestAssembly(System::Reflection::Assembly* assembly, ::Il2CppString* assemblyName, System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* fixtures);
    // public System.Void .ctor()
    // Offset: 0x17676E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultTestAssemblyBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Api::DefaultTestAssemblyBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultTestAssemblyBuilder*, creationType>()));
    }
  }; // NUnit.Framework.Api.DefaultTestAssemblyBuilder
  #pragma pack(pop)
  static check_size<sizeof(DefaultTestAssemblyBuilder), 16 + sizeof(NUnit::Framework::Interfaces::ISuiteBuilder*)> __NUnit_Framework_Api_DefaultTestAssemblyBuilderSizeCheck;
  static_assert(sizeof(DefaultTestAssemblyBuilder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Api::DefaultTestAssemblyBuilder*, "NUnit.Framework.Api", "DefaultTestAssemblyBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Api::DefaultTestAssemblyBuilder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Api::DefaultTestAssemblyBuilder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITest* (NUnit::Framework::Api::DefaultTestAssemblyBuilder::*)(System::Reflection::Assembly*, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*)>(&NUnit::Framework::Api::DefaultTestAssemblyBuilder::Build)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* options = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Api::DefaultTestAssemblyBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, options});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Api::DefaultTestAssemblyBuilder::*)(System::Reflection::Assembly*, ::Il2CppString*, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>*)>(&NUnit::Framework::Api::DefaultTestAssemblyBuilder::Build)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* assemblyPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Api::DefaultTestAssemblyBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, assemblyPath, options});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::GetFixtures
// Il2CppName: GetFixtures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* (NUnit::Framework::Api::DefaultTestAssemblyBuilder::*)(System::Reflection::Assembly*, System::Collections::IList*)>(&NUnit::Framework::Api::DefaultTestAssemblyBuilder::GetFixtures)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* names = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Api::DefaultTestAssemblyBuilder*), "GetFixtures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, names});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::GetCandidateFixtureTypes
// Il2CppName: GetCandidateFixtureTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Type*>* (NUnit::Framework::Api::DefaultTestAssemblyBuilder::*)(System::Reflection::Assembly*, System::Collections::IList*)>(&NUnit::Framework::Api::DefaultTestAssemblyBuilder::GetCandidateFixtureTypes)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* names = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Api::DefaultTestAssemblyBuilder*), "GetCandidateFixtureTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, names});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::BuildTestAssembly
// Il2CppName: BuildTestAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestSuite* (NUnit::Framework::Api::DefaultTestAssemblyBuilder::*)(System::Reflection::Assembly*, ::Il2CppString*, System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>*)>(&NUnit::Framework::Api::DefaultTestAssemblyBuilder::BuildTestAssembly)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fixtures = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Api::DefaultTestAssemblyBuilder*), "BuildTestAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, assemblyName, fixtures});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Api::DefaultTestAssemblyBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
