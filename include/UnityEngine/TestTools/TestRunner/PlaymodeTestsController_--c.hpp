// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
#include "UnityEngine/TestTools/TestRunner/PlaymodeTestsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController/<>c");
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController/UnityEngine.TestTools.TestRunner.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlaymodeTestsController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsController/UnityEngine.TestTools.TestRunner.<>c <>9
    static ::UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsController/UnityEngine.TestTools.TestRunner.<>c <>9
    static void _set_$$9(::UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Utils.IAssemblyWrapper,System.Reflection.Assembly> <>9__16_0
    static ::System::Func_2<::UnityEngine::TestTools::Utils::IAssemblyWrapper*, ::System::Reflection::Assembly*>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Utils.IAssemblyWrapper,System.Reflection.Assembly> <>9__16_0
    static void _set_$$9__16_0(::System::Func_2<::UnityEngine::TestTools::Utils::IAssemblyWrapper*, ::System::Reflection::Assembly*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1994628
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x199468C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaymodeTestsController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaymodeTestsController::$$c*, creationType>()));
    }
    // System.Reflection.Assembly <Run>b__16_0(UnityEngine.TestTools.Utils.IAssemblyWrapper a)
    // Offset: 0x1994694
    ::System::Reflection::Assembly* $Run$b__16_0(::UnityEngine::TestTools::Utils::IAssemblyWrapper* a);
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController/UnityEngine.TestTools.TestRunner.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::$Run$b__16_0
// Il2CppName: <Run>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::*)(::UnityEngine::TestTools::Utils::IAssemblyWrapper*)>(&UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c::$Run$b__16_0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.TestTools.Utils", "IAssemblyWrapper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c*), "<Run>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
