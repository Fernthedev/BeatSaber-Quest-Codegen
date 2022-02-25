// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.Test_TerrainData_Extensions
#include "HoudiniEngineUnity/Test_TerrainData_Extensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Converter`2<TInput, TOutput>
  template<typename TInput, typename TOutput>
  class Converter_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_TerrainData
  class Test_TerrainData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::Test_TerrainData_Extensions::$$c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_TerrainData_Extensions::$$c*, "HoudiniEngineUnity", "Test_TerrainData_Extensions/<>c");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_TerrainData_Extensions/HoudiniEngineUnity.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Test_TerrainData_Extensions::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HoudiniEngineUnity.Test_TerrainData_Extensions/HoudiniEngineUnity.<>c <>9
    static HoudiniEngineUnity::Test_TerrainData_Extensions::$$c* _get_$$9();
    // Set static field: static public readonly HoudiniEngineUnity.Test_TerrainData_Extensions/HoudiniEngineUnity.<>c <>9
    static void _set_$$9(HoudiniEngineUnity::Test_TerrainData_Extensions::$$c* value);
    // Get static field: static public System.Converter`2<UnityEngine.TerrainData,HoudiniEngineUnity.Test_TerrainData> <>9__1_0
    static System::Converter_2<UnityEngine::TerrainData*, HoudiniEngineUnity::Test_TerrainData*>* _get_$$9__1_0();
    // Set static field: static public System.Converter`2<UnityEngine.TerrainData,HoudiniEngineUnity.Test_TerrainData> <>9__1_0
    static void _set_$$9__1_0(System::Converter_2<UnityEngine::TerrainData*, HoudiniEngineUnity::Test_TerrainData*>* value);
    // Get static field: static public System.Converter`2<UnityEngine.TerrainData,HoudiniEngineUnity.Test_TerrainData> <>9__2_0
    static System::Converter_2<UnityEngine::TerrainData*, HoudiniEngineUnity::Test_TerrainData*>* _get_$$9__2_0();
    // Set static field: static public System.Converter`2<UnityEngine.TerrainData,HoudiniEngineUnity.Test_TerrainData> <>9__2_0
    static void _set_$$9__2_0(System::Converter_2<UnityEngine::TerrainData*, HoudiniEngineUnity::Test_TerrainData*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2A0FA08
    static void _cctor();
    // HoudiniEngineUnity.Test_TerrainData <ToTestObject>b__1_0(UnityEngine.TerrainData lod)
    // Offset: 0x2A0FA74
    HoudiniEngineUnity::Test_TerrainData* $ToTestObject$b__1_0(UnityEngine::TerrainData* lod);
    // HoudiniEngineUnity.Test_TerrainData <ToTestObject>b__2_0(UnityEngine.TerrainData lod)
    // Offset: 0x2A0FAD8
    HoudiniEngineUnity::Test_TerrainData* $ToTestObject$b__2_0(UnityEngine::TerrainData* lod);
    // public System.Void .ctor()
    // Offset: 0x2A0FA6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_TerrainData_Extensions::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_TerrainData_Extensions::$$c*, creationType>()));
    }
  }; // HoudiniEngineUnity.Test_TerrainData_Extensions/HoudiniEngineUnity.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TerrainData_Extensions::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::$ToTestObject$b__1_0
// Il2CppName: <ToTestObject>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::Test_TerrainData* (HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::*)(UnityEngine::TerrainData*)>(&HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::$ToTestObject$b__1_0)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TerrainData_Extensions::$$c*), "<ToTestObject>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::$ToTestObject$b__2_0
// Il2CppName: <ToTestObject>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::Test_TerrainData* (HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::*)(UnityEngine::TerrainData*)>(&HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::$ToTestObject$b__2_0)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_TerrainData_Extensions::$$c*), "<ToTestObject>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_TerrainData_Extensions::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
