// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.EditModeTestCallbacks
  class EditModeTestCallbacks : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EditModeTestCallbacks
    EditModeTestCallbacks() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xE3DBE0
    // Get static field: static private System.Action <RestoringTestContext>k__BackingField
    static System::Action* _get_$RestoringTestContext$k__BackingField();
    // Set static field: static private System.Action <RestoringTestContext>k__BackingField
    static void _set_$RestoringTestContext$k__BackingField(System::Action* value);
    // static public System.Action get_RestoringTestContext()
    // Offset: 0x14ABEC0
    static System::Action* get_RestoringTestContext();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.EditModeTestCallbacks
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::EditModeTestCallbacks*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "EditModeTestCallbacks");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::EditModeTestCallbacks::get_RestoringTestContext
// Il2CppName: get_RestoringTestContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action* (*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::EditModeTestCallbacks::get_RestoringTestContext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::EditModeTestCallbacks*), "get_RestoringTestContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
