// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData
#include "UnityEngine/TestRunner/TestLaunchers/RemoteTestData.hpp"
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
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData/UnityEngine.TestRunner.TestLaunchers.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RemoteTestData::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestData/UnityEngine.TestRunner.TestLaunchers.<>c <>9
    static UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestData/UnityEngine.TestRunner.TestLaunchers.<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITest,System.String> <>9__18_0
    static System::Func_2<NUnit::Framework::Interfaces::ITest*, ::Il2CppString*>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITest,System.String> <>9__18_0
    static void _set_$$9__18_0(System::Func_2<NUnit::Framework::Interfaces::ITest*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14C4890
    static void _cctor();
    // System.String <.ctor>b__18_0(NUnit.Framework.Interfaces.ITest t)
    // Offset: 0x14C48FC
    ::Il2CppString* $_ctor$b__18_0(NUnit::Framework::Interfaces::ITest* t);
    // public System.Void .ctor()
    // Offset: 0x14C48F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestData::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestData::$$c*, creationType>()));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestData/UnityEngine.TestRunner.TestLaunchers.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestData/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::$_ctor$b__18_0
// Il2CppName: <.ctor>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::$_ctor$b__18_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c*), "<.ctor>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
