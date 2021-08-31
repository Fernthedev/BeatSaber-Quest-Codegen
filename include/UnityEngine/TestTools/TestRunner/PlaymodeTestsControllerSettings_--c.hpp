// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings
#include "UnityEngine/TestTools/TestRunner/PlaymodeTestsControllerSettings.hpp"
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
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Forward declaring type: RuntimeTestRunnerFilter
  class RuntimeTestRunnerFilter;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings/UnityEngine.TestTools.TestRunner.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlaymodeTestsControllerSettings::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings/UnityEngine.TestTools.TestRunner.<>c <>9
    static UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings/UnityEngine.TestTools.TestRunner.<>c <>9
    static void _set_$$9(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter,NUnit.Framework.Interfaces.ITestFilter> <>9__5_0
    static System::Func_2<UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*, NUnit::Framework::Interfaces::ITestFilter*>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter,NUnit.Framework.Interfaces.ITestFilter> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*, NUnit::Framework::Interfaces::ITestFilter*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14C8EDC
    static void _cctor();
    // NUnit.Framework.Interfaces.ITestFilter <BuildNUnitFilter>b__5_0(UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter f)
    // Offset: 0x14C8F48
    NUnit::Framework::Interfaces::ITestFilter* $BuildNUnitFilter$b__5_0(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter* f);
    // public System.Void .ctor()
    // Offset: 0x14C8F40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeTestsControllerSettings::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeTestsControllerSettings::$$c*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings/UnityEngine.TestTools.TestRunner.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsControllerSettings/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::$BuildNUnitFilter$b__5_0
// Il2CppName: <BuildNUnitFilter>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestFilter* (UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::*)(UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*)>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::$BuildNUnitFilter$b__5_0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.TestRunner.GUI", "RuntimeTestRunnerFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c*), "<BuildNUnitFilter>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
