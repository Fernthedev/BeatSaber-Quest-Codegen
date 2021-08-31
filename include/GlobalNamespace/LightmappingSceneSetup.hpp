// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: INoTransitionColorSchemeProvider
#include "GlobalNamespace/INoTransitionColorSchemeProvider.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LightmappingSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmappingSceneSetup : public Zenject::MonoInstaller/*, public GlobalNamespace::INoTransitionColorSchemeProvider*/ {
    public:
    // private BeatmapLevelSO _beatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: colorScheme
    char __padding2[0x4] = {};
    // private ColorSchemeSO _colorScheme
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSchemeSO* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // Creating value type constructor for type: LightmappingSceneSetup
    LightmappingSceneSetup(GlobalNamespace::BeatmapLevelSO* beatmapLevel_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::ColorSchemeSO* colorScheme_ = {}) noexcept : beatmapLevel{beatmapLevel_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_}, colorScheme{colorScheme_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INoTransitionColorSchemeProvider
    operator GlobalNamespace::INoTransitionColorSchemeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoTransitionColorSchemeProvider*>(this);
    }
    // Get instance field: private BeatmapLevelSO _beatmapLevel
    GlobalNamespace::BeatmapLevelSO* _get__beatmapLevel();
    // Set instance field: private BeatmapLevelSO _beatmapLevel
    void _set__beatmapLevel(GlobalNamespace::BeatmapLevelSO* value);
    // Get instance field: private BeatmapCharacteristicSO _beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO* _get__beatmapCharacteristic();
    // Set instance field: private BeatmapCharacteristicSO _beatmapCharacteristic
    void _set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // Get instance field: private BeatmapDifficulty _beatmapDifficulty
    GlobalNamespace::BeatmapDifficulty _get__beatmapDifficulty();
    // Set instance field: private BeatmapDifficulty _beatmapDifficulty
    void _set__beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // Get instance field: private ColorSchemeSO _colorScheme
    GlobalNamespace::ColorSchemeSO* _get__colorScheme();
    // Set instance field: private ColorSchemeSO _colorScheme
    void _set__colorScheme(GlobalNamespace::ColorSchemeSO* value);
    // public ColorSchemeSO get_colorScheme()
    // Offset: 0x1200DB4
    GlobalNamespace::ColorSchemeSO* get_colorScheme();
    // public System.Void set_colorScheme(ColorSchemeSO value)
    // Offset: 0x1200DBC
    void set_colorScheme(GlobalNamespace::ColorSchemeSO* value);
    // public System.Void .ctor()
    // Offset: 0x12014BC
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmappingSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightmappingSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmappingSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x1200DC4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // LightmappingSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(LightmappingSceneSetup), 56 + sizeof(GlobalNamespace::ColorSchemeSO*)> __GlobalNamespace_LightmappingSceneSetupSizeCheck;
  static_assert(sizeof(LightmappingSceneSetup) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmappingSceneSetup*, "", "LightmappingSceneSetup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmappingSceneSetup::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemeSO* (GlobalNamespace::LightmappingSceneSetup::*)()>(&GlobalNamespace::LightmappingSceneSetup::get_colorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmappingSceneSetup*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmappingSceneSetup::set_colorScheme
// Il2CppName: set_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmappingSceneSetup::*)(GlobalNamespace::ColorSchemeSO*)>(&GlobalNamespace::LightmappingSceneSetup::set_colorScheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorSchemeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmappingSceneSetup*), "set_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmappingSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightmappingSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmappingSceneSetup::*)()>(&GlobalNamespace::LightmappingSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmappingSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
