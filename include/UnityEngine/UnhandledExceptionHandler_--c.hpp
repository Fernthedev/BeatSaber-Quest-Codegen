// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UnhandledExceptionHandler
#include "UnityEngine/UnhandledExceptionHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnhandledExceptionEventHandler
  class UnhandledExceptionEventHandler;
  // Forward declaring type: UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnhandledExceptionHandler/<>c
  // [CompilerGeneratedAttribute] Offset: D90604
  class UnhandledExceptionHandler::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.UnhandledExceptionHandler/<>c <>9
    static UnityEngine::UnhandledExceptionHandler::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UnhandledExceptionHandler/<>c <>9
    static void _set_$$9(UnityEngine::UnhandledExceptionHandler::$$c* value);
    // Get static field: static public System.UnhandledExceptionEventHandler <>9__0_0
    static System::UnhandledExceptionEventHandler* _get_$$9__0_0();
    // Set static field: static public System.UnhandledExceptionEventHandler <>9__0_0
    static void _set_$$9__0_0(System::UnhandledExceptionEventHandler* value);
    // static private System.Void .cctor()
    // Offset: 0x2320DEC
    static void _cctor();
    // System.Void <RegisterUECatcher>b__0_0(System.Object sender, System.UnhandledExceptionEventArgs e)
    // Offset: 0x2320E58
    void $RegisterUECatcher$b__0_0(::Il2CppObject* sender, System::UnhandledExceptionEventArgs* e);
    // public System.Void .ctor()
    // Offset: 0x2320E50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnhandledExceptionHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnhandledExceptionHandler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnhandledExceptionHandler::$$c*, creationType>()));
    }
  }; // UnityEngine.UnhandledExceptionHandler/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnhandledExceptionHandler::$$c*, "UnityEngine", "UnhandledExceptionHandler/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnhandledExceptionHandler::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UnhandledExceptionHandler::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnhandledExceptionHandler::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnhandledExceptionHandler::$$c::$RegisterUECatcher$b__0_0
// Il2CppName: <RegisterUECatcher>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnhandledExceptionHandler::$$c::*)(::Il2CppObject*, System::UnhandledExceptionEventArgs*)>(&UnityEngine::UnhandledExceptionHandler::$$c::$RegisterUECatcher$b__0_0)> {
  const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "UnhandledExceptionEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnhandledExceptionHandler::$$c*), "<RegisterUECatcher>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnhandledExceptionHandler::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
