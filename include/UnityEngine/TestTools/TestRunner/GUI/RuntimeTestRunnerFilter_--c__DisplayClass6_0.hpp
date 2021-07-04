// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter
#include "UnityEngine/TestTools/TestRunner/GUI/RuntimeTestRunnerFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestFilter
  class TestFilter;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter/<>c__DisplayClass6_0
  // [CompilerGeneratedAttribute] Offset: E3DB20
  class RuntimeTestRunnerFilter::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<System.String,NUnit.Framework.Internal.TestFilter> builder
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>* builder;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>* builder_ = {}) noexcept : builder{builder_} {}
    // Creating conversion operator: operator System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>*
    constexpr operator System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>*() const noexcept {
      return builder;
    }
    // NUnit.Framework.Interfaces.ITestFilter <AddFilters>b__1(System.String v)
    // Offset: 0x14BD1DC
    NUnit::Framework::Interfaces::ITestFilter* $AddFilters$b__1(::Il2CppString* v);
    // NUnit.Framework.Interfaces.ITestFilter <AddFilters>b__3(System.String v)
    // Offset: 0x14BD244
    NUnit::Framework::Interfaces::ITestFilter* $AddFilters$b__3(::Il2CppString* v);
    // public System.Void .ctor()
    // Offset: 0x14BCEEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeTestRunnerFilter::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeTestRunnerFilter::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(RuntimeTestRunnerFilter::$$c__DisplayClass6_0), 16 + sizeof(System::Func_2<::Il2CppString*, NUnit::Framework::Internal::TestFilter*>*)> __UnityEngine_TestTools_TestRunner_GUI_RuntimeTestRunnerFilter_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(RuntimeTestRunnerFilter::$$c__DisplayClass6_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0*, "UnityEngine.TestTools.TestRunner.GUI", "RuntimeTestRunnerFilter/<>c__DisplayClass6_0");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::$AddFilters$b__1
// Il2CppName: <AddFilters>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestFilter* (UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::*)(::Il2CppString*)>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::$AddFilters$b__1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0*), "<AddFilters>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::$AddFilters$b__3
// Il2CppName: <AddFilters>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestFilter* (UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::*)(::Il2CppString*)>(&UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::$AddFilters$b__3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0*), "<AddFilters>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
