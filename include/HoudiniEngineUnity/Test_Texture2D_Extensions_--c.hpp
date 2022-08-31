// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.Test_Texture2D_Extensions
#include "HoudiniEngineUnity/Test_Texture2D_Extensions.hpp"
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
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_Texture2D
  class Test_Texture2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_Texture2D_Extensions::$$c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Texture2D_Extensions::$$c*, "HoudiniEngineUnity", "Test_Texture2D_Extensions/<>c");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_Texture2D_Extensions/HoudiniEngineUnity.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Test_Texture2D_Extensions::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HoudiniEngineUnity.Test_Texture2D_Extensions/HoudiniEngineUnity.<>c <>9
    static ::HoudiniEngineUnity::Test_Texture2D_Extensions::$$c* _get_$$9();
    // Set static field: static public readonly HoudiniEngineUnity.Test_Texture2D_Extensions/HoudiniEngineUnity.<>c <>9
    static void _set_$$9(::HoudiniEngineUnity::Test_Texture2D_Extensions::$$c* value);
    // Get static field: static public System.Converter`2<UnityEngine.Texture2D,HoudiniEngineUnity.Test_Texture2D> <>9__1_0
    static ::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>* _get_$$9__1_0();
    // Set static field: static public System.Converter`2<UnityEngine.Texture2D,HoudiniEngineUnity.Test_Texture2D> <>9__1_0
    static void _set_$$9__1_0(::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>* value);
    // Get static field: static public System.Converter`2<UnityEngine.Texture2D,HoudiniEngineUnity.Test_Texture2D> <>9__2_0
    static ::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>* _get_$$9__2_0();
    // Set static field: static public System.Converter`2<UnityEngine.Texture2D,HoudiniEngineUnity.Test_Texture2D> <>9__2_0
    static void _set_$$9__2_0(::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2AC3B8C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2AC3BF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_Texture2D_Extensions::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_Texture2D_Extensions::$$c*, creationType>()));
    }
    // HoudiniEngineUnity.Test_Texture2D <ToTestObject>b__1_0(UnityEngine.Texture2D lod)
    // Offset: 0x2AC3BF8
    ::HoudiniEngineUnity::Test_Texture2D* $ToTestObject$b__1_0(::UnityEngine::Texture2D* lod);
    // HoudiniEngineUnity.Test_Texture2D <ToTestObject>b__2_0(UnityEngine.Texture2D lod)
    // Offset: 0x2AC3C5C
    ::HoudiniEngineUnity::Test_Texture2D* $ToTestObject$b__2_0(::UnityEngine::Texture2D* lod);
  }; // HoudiniEngineUnity.Test_Texture2D_Extensions/HoudiniEngineUnity.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Texture2D_Extensions::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::$ToTestObject$b__1_0
// Il2CppName: <ToTestObject>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_Texture2D* (HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::*)(::UnityEngine::Texture2D*)>(&HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::$ToTestObject$b__1_0)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Texture2D_Extensions::$$c*), "<ToTestObject>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::$ToTestObject$b__2_0
// Il2CppName: <ToTestObject>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_Texture2D* (HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::*)(::UnityEngine::Texture2D*)>(&HoudiniEngineUnity::Test_Texture2D_Extensions::$$c::$ToTestObject$b__2_0)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_Texture2D_Extensions::$$c*), "<ToTestObject>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
