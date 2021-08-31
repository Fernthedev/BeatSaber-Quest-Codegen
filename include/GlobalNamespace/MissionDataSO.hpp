// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: MissionHelpSO
  class MissionHelpSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MissionDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapLevelSO _level
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: missionObjectives
    char __padding2[0x4] = {};
    // private MissionObjective[] _missionObjectives
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjective*>*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // [SpaceAttribute] Offset: 0xE34398
    // [NullAllowed] Offset: 0xE34398
    // private MissionHelpSO _missionHelp
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MissionHelpSO* missionHelp;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionHelpSO*) == 0x8);
    // Creating value type constructor for type: MissionDataSO
    MissionDataSO(GlobalNamespace::BeatmapLevelSO* level_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, ::Array<GlobalNamespace::MissionObjective*>* missionObjectives_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::MissionHelpSO* missionHelp_ = {}) noexcept : level{level_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_}, missionObjectives{missionObjectives_}, gameplayModifiers{gameplayModifiers_}, missionHelp{missionHelp_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapLevelSO _level
    GlobalNamespace::BeatmapLevelSO*& dyn__level();
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // Get instance field reference: private BeatmapDifficulty _beatmapDifficulty
    GlobalNamespace::BeatmapDifficulty& dyn__beatmapDifficulty();
    // Get instance field reference: private MissionObjective[] _missionObjectives
    ::Array<GlobalNamespace::MissionObjective*>*& dyn__missionObjectives();
    // Get instance field reference: private GameplayModifiers _gameplayModifiers
    GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // Get instance field reference: private MissionHelpSO _missionHelp
    GlobalNamespace::MissionHelpSO*& dyn__missionHelp();
    // public MissionObjective[] get_missionObjectives()
    // Offset: 0x11D0C60
    ::Array<GlobalNamespace::MissionObjective*>* get_missionObjectives();
    // public BeatmapLevelSO get_level()
    // Offset: 0x11D0C68
    GlobalNamespace::BeatmapLevelSO* get_level();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x11D0C70
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0x11D0C78
    GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x11D0C80
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public MissionHelpSO get_missionHelp()
    // Offset: 0x11D0C88
    GlobalNamespace::MissionHelpSO* get_missionHelp();
    // private System.Void OnValidate()
    // Offset: 0x11D0C90
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x11D0D34
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionDataSO*, creationType>()));
    }
  }; // MissionDataSO
  #pragma pack(pop)
  static check_size<sizeof(MissionDataSO), 64 + sizeof(GlobalNamespace::MissionHelpSO*)> __GlobalNamespace_MissionDataSOSizeCheck;
  static_assert(sizeof(MissionDataSO) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionDataSO*, "", "MissionDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::get_missionObjectives
// Il2CppName: get_missionObjectives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::MissionObjective*>* (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::get_missionObjectives)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "get_missionObjectives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::get_level
// Il2CppName: get_level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSO* (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::get_level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "get_level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::get_beatmapDifficulty
// Il2CppName: get_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::get_beatmapDifficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "get_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::get_missionHelp
// Il2CppName: get_missionHelp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionHelpSO* (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::get_missionHelp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "get_missionHelp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionDataSO::*)()>(&GlobalNamespace::MissionDataSO::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataSO*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
