// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LayerMasks
  // [TokenAttribute] Offset: FFFFFFFF
  class LayerMasks : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LayerMasks
    LayerMasks() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE187F8
    // Get static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static UnityEngine::LayerMask _get_saberLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static void _set_saberLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE18808
    // Get static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static UnityEngine::LayerMask _get_noteLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static void _set_noteLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE18818
    // Get static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static UnityEngine::LayerMask _get_noteDebrisLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static void _set_noteDebrisLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE18828
    // Get static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static UnityEngine::LayerMask _get_cutEffectParticlesLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static void _set_cutEffectParticlesLayerMask(UnityEngine::LayerMask value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE18838
    // Get static field: static public readonly System.Int32 noteDebrisLayer
    static int _get_noteDebrisLayer();
    // Set static field: static public readonly System.Int32 noteDebrisLayer
    static void _set_noteDebrisLayer(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE18848
    // Get static field: static public readonly System.Int32 cutEffectParticlesLayer
    static int _get_cutEffectParticlesLayer();
    // Set static field: static public readonly System.Int32 cutEffectParticlesLayer
    static void _set_cutEffectParticlesLayer(int value);
    // static private System.Void .cctor()
    // Offset: 0x241ED5C
    static void _cctor();
    // static private UnityEngine.LayerMask GetLayerMask(System.String layerName)
    // Offset: 0x241ECDC
    static UnityEngine::LayerMask GetLayerMask(::Il2CppString* layerName);
    // static private UnityEngine.LayerMask GetLayerMask(System.Int32 layerNum)
    // Offset: 0x241ED18
    static UnityEngine::LayerMask GetLayerMask(int layerNum);
    // static private System.Int32 GetLayer(System.String layerName)
    // Offset: 0x241ED4C
    static int GetLayer(::Il2CppString* layerName);
    // public System.Void .ctor()
    // Offset: 0x241ED54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayerMasks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LayerMasks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayerMasks*, creationType>()));
    }
  }; // LayerMasks
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LayerMasks*, "", "LayerMasks");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LayerMasks::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LayerMasks::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayerMasks*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayerMasks::GetLayerMask
// Il2CppName: GetLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (*)(::Il2CppString*)>(&GlobalNamespace::LayerMasks::GetLayerMask)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayerMasks*), "GetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayerMasks::GetLayerMask
// Il2CppName: GetLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (*)(int)>(&GlobalNamespace::LayerMasks::GetLayerMask)> {
  static const MethodInfo* get() {
    static auto* layerNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayerMasks*), "GetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNum});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayerMasks::GetLayer
// Il2CppName: GetLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*)>(&GlobalNamespace::LayerMasks::GetLayer)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayerMasks*), "GetLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayerMasks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
