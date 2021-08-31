// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
#include "UnityEngine/Experimental/GlobalIllumination/Lightmapping.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightDataGI
#include "UnityEngine/Experimental/GlobalIllumination/LightDataGI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Lightmapping::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.<>c <>9
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.<>c <>9
    static void _set_$$9(UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1C2A520
    static void _cctor();
    // System.Void <.cctor>b__7_0(UnityEngine.Light[] requests, Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI> lightsOutput)
    // Offset: 0x1C2A58C
    void $_cctor$b__7_0(::Array<UnityEngine::Light*>* requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
    // public System.Void .ctor()
    // Offset: 0x1C2A584
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lightmapping::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lightmapping::$$c*, creationType>()));
    }
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping/UnityEngine.Experimental.GlobalIllumination.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::$_cctor$b__7_0
// Il2CppName: <.cctor>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::*)(::Array<UnityEngine::Light*>*, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::$_cctor$b__7_0)> {
  static const MethodInfo* get() {
    static auto* requests = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Light"), 1)->byval_arg;
    static auto* lightsOutput = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "LightDataGI")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c*), "<.cctor>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requests, lightsOutput});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
