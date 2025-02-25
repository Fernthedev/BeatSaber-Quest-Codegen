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
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlaymodeTestsControllerSettings : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c
    class $$c;
    // public UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter[] filters
    // Size: 0x8
    // Offset: 0x10
    ::Array<UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*>* filters;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*>*) == 0x8);
    // public System.Boolean sceneBased
    // Size: 0x1
    // Offset: 0x18
    bool sceneBased;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sceneBased and: originalScene
    char __padding1[0x7] = {};
    // public System.String originalScene
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* originalScene;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String bootstrapScene
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* bootstrapScene;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlaymodeTestsControllerSettings
    PlaymodeTestsControllerSettings(::Array<UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*>* filters_ = {}, bool sceneBased_ = {}, ::Il2CppString* originalScene_ = {}, ::Il2CppString* bootstrapScene_ = {}) noexcept : filters{filters_}, sceneBased{sceneBased_}, originalScene{originalScene_}, bootstrapScene{bootstrapScene_} {}
    // Get instance field reference: public UnityEngine.TestTools.TestRunner.GUI.RuntimeTestRunnerFilter[] filters
    ::Array<UnityEngine::TestTools::TestRunner::GUI::RuntimeTestRunnerFilter*>*& dyn_filters();
    // Get instance field reference: public System.Boolean sceneBased
    bool& dyn_sceneBased();
    // Get instance field reference: public System.String originalScene
    ::Il2CppString*& dyn_originalScene();
    // Get instance field reference: public System.String bootstrapScene
    ::Il2CppString*& dyn_bootstrapScene();
    // NUnit.Framework.Interfaces.ITestFilter BuildNUnitFilter()
    // Offset: 0x14D09C4
    NUnit::Framework::Interfaces::ITestFilter* BuildNUnitFilter();
    // public System.Void .ctor()
    // Offset: 0x14D04A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeTestsControllerSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeTestsControllerSettings*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings
  #pragma pack(pop)
  static check_size<sizeof(PlaymodeTestsControllerSettings), 40 + sizeof(::Il2CppString*)> __UnityEngine_TestTools_TestRunner_PlaymodeTestsControllerSettingsSizeCheck;
  static_assert(sizeof(PlaymodeTestsControllerSettings) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsControllerSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::BuildNUnitFilter
// Il2CppName: BuildNUnitFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ITestFilter* (UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::BuildNUnitFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings*), "BuildNUnitFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
