// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayModifiersModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter
    class GameplayModifierBoolGetter;
    // Nested type: GlobalNamespace::GameplayModifiersModelSO::$$c
    class $$c;
    // private GameplayModifierParamsSO _batteryEnergy
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifierParamsSO* batteryEnergy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _instaFail
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayModifierParamsSO* instaFail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noObstacles
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifierParamsSO* noObstacles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noBombs
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameplayModifierParamsSO* noBombs;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _fastNotes
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifierParamsSO* fastNotes;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _strictAngles
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameplayModifierParamsSO* strictAngles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _disappearingArrows
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameplayModifierParamsSO* disappearingArrows;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _fasterSong
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::GameplayModifierParamsSO* fasterSong;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _slowerSong
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::GameplayModifierParamsSO* slowerSong;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noArrows
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameplayModifierParamsSO* noArrows;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _ghostNotes
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::GameplayModifierParamsSO* ghostNotes;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _noFailOn0Energy
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayModifierParamsSO* noFailOn0Energy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _superFastSong
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::GameplayModifierParamsSO* superFastSong;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _proMode
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::GameplayModifierParamsSO* proMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _zenMode
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::GameplayModifierParamsSO* zenMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _smallCubes
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::GameplayModifierParamsSO* smallCubes;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE39160
    // private GameplayModifierParamsSO _demoNoObstacles
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::GameplayModifierParamsSO* demoNoObstacles;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private GameplayModifierParamsSO _demoNoFail
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::GameplayModifierParamsSO* demoNoFail;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierParamsSO*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<GameplayModifierParamsSO,GameplayModifiersModelSO/GameplayModifierBoolGetter> _gameplayModifierGetters
    // Size: 0x8
    // Offset: 0xA8
    System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>* gameplayModifierGetters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>*) == 0x8);
    // Creating value type constructor for type: GameplayModifiersModelSO
    GameplayModifiersModelSO(GlobalNamespace::GameplayModifierParamsSO* batteryEnergy_ = {}, GlobalNamespace::GameplayModifierParamsSO* instaFail_ = {}, GlobalNamespace::GameplayModifierParamsSO* noObstacles_ = {}, GlobalNamespace::GameplayModifierParamsSO* noBombs_ = {}, GlobalNamespace::GameplayModifierParamsSO* fastNotes_ = {}, GlobalNamespace::GameplayModifierParamsSO* strictAngles_ = {}, GlobalNamespace::GameplayModifierParamsSO* disappearingArrows_ = {}, GlobalNamespace::GameplayModifierParamsSO* fasterSong_ = {}, GlobalNamespace::GameplayModifierParamsSO* slowerSong_ = {}, GlobalNamespace::GameplayModifierParamsSO* noArrows_ = {}, GlobalNamespace::GameplayModifierParamsSO* ghostNotes_ = {}, GlobalNamespace::GameplayModifierParamsSO* noFailOn0Energy_ = {}, GlobalNamespace::GameplayModifierParamsSO* superFastSong_ = {}, GlobalNamespace::GameplayModifierParamsSO* proMode_ = {}, GlobalNamespace::GameplayModifierParamsSO* zenMode_ = {}, GlobalNamespace::GameplayModifierParamsSO* smallCubes_ = {}, GlobalNamespace::GameplayModifierParamsSO* demoNoObstacles_ = {}, GlobalNamespace::GameplayModifierParamsSO* demoNoFail_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>* gameplayModifierGetters_ = {}) noexcept : batteryEnergy{batteryEnergy_}, instaFail{instaFail_}, noObstacles{noObstacles_}, noBombs{noBombs_}, fastNotes{fastNotes_}, strictAngles{strictAngles_}, disappearingArrows{disappearingArrows_}, fasterSong{fasterSong_}, slowerSong{slowerSong_}, noArrows{noArrows_}, ghostNotes{ghostNotes_}, noFailOn0Energy{noFailOn0Energy_}, superFastSong{superFastSong_}, proMode{proMode_}, zenMode{zenMode_}, smallCubes{smallCubes_}, demoNoObstacles{demoNoObstacles_}, demoNoFail{demoNoFail_}, gameplayModifierGetters{gameplayModifierGetters_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifierParamsSO _batteryEnergy
    GlobalNamespace::GameplayModifierParamsSO*& dyn__batteryEnergy();
    // Get instance field reference: private GameplayModifierParamsSO _instaFail
    GlobalNamespace::GameplayModifierParamsSO*& dyn__instaFail();
    // Get instance field reference: private GameplayModifierParamsSO _noObstacles
    GlobalNamespace::GameplayModifierParamsSO*& dyn__noObstacles();
    // Get instance field reference: private GameplayModifierParamsSO _noBombs
    GlobalNamespace::GameplayModifierParamsSO*& dyn__noBombs();
    // Get instance field reference: private GameplayModifierParamsSO _fastNotes
    GlobalNamespace::GameplayModifierParamsSO*& dyn__fastNotes();
    // Get instance field reference: private GameplayModifierParamsSO _strictAngles
    GlobalNamespace::GameplayModifierParamsSO*& dyn__strictAngles();
    // Get instance field reference: private GameplayModifierParamsSO _disappearingArrows
    GlobalNamespace::GameplayModifierParamsSO*& dyn__disappearingArrows();
    // Get instance field reference: private GameplayModifierParamsSO _fasterSong
    GlobalNamespace::GameplayModifierParamsSO*& dyn__fasterSong();
    // Get instance field reference: private GameplayModifierParamsSO _slowerSong
    GlobalNamespace::GameplayModifierParamsSO*& dyn__slowerSong();
    // Get instance field reference: private GameplayModifierParamsSO _noArrows
    GlobalNamespace::GameplayModifierParamsSO*& dyn__noArrows();
    // Get instance field reference: private GameplayModifierParamsSO _ghostNotes
    GlobalNamespace::GameplayModifierParamsSO*& dyn__ghostNotes();
    // Get instance field reference: private GameplayModifierParamsSO _noFailOn0Energy
    GlobalNamespace::GameplayModifierParamsSO*& dyn__noFailOn0Energy();
    // Get instance field reference: private GameplayModifierParamsSO _superFastSong
    GlobalNamespace::GameplayModifierParamsSO*& dyn__superFastSong();
    // Get instance field reference: private GameplayModifierParamsSO _proMode
    GlobalNamespace::GameplayModifierParamsSO*& dyn__proMode();
    // Get instance field reference: private GameplayModifierParamsSO _zenMode
    GlobalNamespace::GameplayModifierParamsSO*& dyn__zenMode();
    // Get instance field reference: private GameplayModifierParamsSO _smallCubes
    GlobalNamespace::GameplayModifierParamsSO*& dyn__smallCubes();
    // Get instance field reference: private GameplayModifierParamsSO _demoNoObstacles
    GlobalNamespace::GameplayModifierParamsSO*& dyn__demoNoObstacles();
    // Get instance field reference: private GameplayModifierParamsSO _demoNoFail
    GlobalNamespace::GameplayModifierParamsSO*& dyn__demoNoFail();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<GameplayModifierParamsSO,GameplayModifiersModelSO/GameplayModifierBoolGetter> _gameplayModifierGetters
    System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>*& dyn__gameplayModifierGetters();
    // public GameplayModifiers CreateGameplayModifiers(System.Func`2<GameplayModifierParamsSO,System.Boolean> valueGetter)
    // Offset: 0x1102418
    GlobalNamespace::GameplayModifiers* CreateGameplayModifiers(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, bool>* valueGetter);
    // public System.Boolean GetModifierBoolValue(GameplayModifiers gameplayModifiers, GameplayModifierParamsSO gameplayModifierParams)
    // Offset: 0x1102734
    bool GetModifierBoolValue(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> CreateModifierParamsList(GameplayModifiers gameplayModifiers)
    // Offset: 0x10FAD6C
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* CreateModifierParamsList(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Single GetTotalMultiplier(System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParams, System.Single energy)
    // Offset: 0x1102B74
    float GetTotalMultiplier(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParams, float energy);
    // public System.Int32 MaxModifiedScoreForMaxRawScore(System.Int32 maxRawScore, System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParams, System.Single energy)
    // Offset: 0x1102CFC
    int MaxModifiedScoreForMaxRawScore(int maxRawScore, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParams, float energy);
    // public System.Int32 MaxModifiedScoreForMaxRawScore(System.Int32 maxRawScore, System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParams, GameplayModifiersModelSO gameplayModifiersModel, System.Single energy)
    // Offset: 0x1102D54
    int MaxModifiedScoreForMaxRawScore(int maxRawScore, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParams, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float energy);
    // private System.Int32 GetModifiedScoreForGameplayModifiers(System.Int32 rawScore, System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParams, System.Single energy)
    // Offset: 0x1102D28
    int GetModifiedScoreForGameplayModifiers(int rawScore, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParams, float energy);
    // public GameplayModifierParamsSO GetGameplayModifierParams(GameplayModifierMask modifier)
    // Offset: 0x1101110
    GlobalNamespace::GameplayModifierParamsSO* GetGameplayModifierParams(GlobalNamespace::GameplayModifierMask modifier);
    // private GameplayModifiers/SongSpeed GetSongSpeedFromValueGetter(System.Func`2<GameplayModifierParamsSO,System.Boolean> valueGetter)
    // Offset: 0x1102684
    GlobalNamespace::GameplayModifiers::SongSpeed GetSongSpeedFromValueGetter(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, bool>* valueGetter);
    // public System.Void .ctor()
    // Offset: 0x1102D80
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiersModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersModelSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1101904
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // GameplayModifiersModelSO
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifiersModelSO), 168 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO*, GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*>*)> __GlobalNamespace_GameplayModifiersModelSOSizeCheck;
  static_assert(sizeof(GameplayModifiersModelSO) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersModelSO*, "", "GameplayModifiersModelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::CreateGameplayModifiers
// Il2CppName: CreateGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::GameplayModifiersModelSO::*)(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, bool>*)>(&GlobalNamespace::GameplayModifiersModelSO::CreateGameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* valueGetter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "CreateGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueGetter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::GetModifierBoolValue
// Il2CppName: GetModifierBoolValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiersModelSO::*)(GlobalNamespace::GameplayModifiers*, GlobalNamespace::GameplayModifierParamsSO*)>(&GlobalNamespace::GameplayModifiersModelSO::GetModifierBoolValue)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* gameplayModifierParams = &::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "GetModifierBoolValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers, gameplayModifierParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::CreateModifierParamsList
// Il2CppName: CreateModifierParamsList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* (GlobalNamespace::GameplayModifiersModelSO::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::GameplayModifiersModelSO::CreateModifierParamsList)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "CreateModifierParamsList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::GetTotalMultiplier
// Il2CppName: GetTotalMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayModifiersModelSO::*)(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*, float)>(&GlobalNamespace::GameplayModifiersModelSO::GetTotalMultiplier)> {
  static const MethodInfo* get() {
    static auto* modifierParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")})->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "GetTotalMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modifierParams, energy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxRawScore
// Il2CppName: MaxModifiedScoreForMaxRawScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayModifiersModelSO::*)(int, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*, float)>(&GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxRawScore)> {
  static const MethodInfo* get() {
    static auto* maxRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifierParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")})->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "MaxModifiedScoreForMaxRawScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxRawScore, modifierParams, energy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxRawScore
// Il2CppName: MaxModifiedScoreForMaxRawScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayModifiersModelSO::*)(int, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*, GlobalNamespace::GameplayModifiersModelSO*, float)>(&GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxRawScore)> {
  static const MethodInfo* get() {
    static auto* maxRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifierParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")})->byval_arg;
    static auto* gameplayModifiersModel = &::il2cpp_utils::GetClassFromName("", "GameplayModifiersModelSO")->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "MaxModifiedScoreForMaxRawScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxRawScore, modifierParams, gameplayModifiersModel, energy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::GetModifiedScoreForGameplayModifiers
// Il2CppName: GetModifiedScoreForGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameplayModifiersModelSO::*)(int, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*, float)>(&GlobalNamespace::GameplayModifiersModelSO::GetModifiedScoreForGameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifierParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")})->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "GetModifiedScoreForGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawScore, modifierParams, energy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::GetGameplayModifierParams
// Il2CppName: GetGameplayModifierParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifierParamsSO* (GlobalNamespace::GameplayModifiersModelSO::*)(GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifiersModelSO::GetGameplayModifierParams)> {
  static const MethodInfo* get() {
    static auto* modifier = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "GetGameplayModifierParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modifier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::GetSongSpeedFromValueGetter
// Il2CppName: GetSongSpeedFromValueGetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers::SongSpeed (GlobalNamespace::GameplayModifiersModelSO::*)(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, bool>*)>(&GlobalNamespace::GameplayModifiersModelSO::GetSongSpeedFromValueGetter)> {
  static const MethodInfo* get() {
    static auto* valueGetter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "GetSongSpeedFromValueGetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueGetter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersModelSO::*)()>(&GlobalNamespace::GameplayModifiersModelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
