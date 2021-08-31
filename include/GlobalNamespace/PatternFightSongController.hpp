// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightSongController
  // [TokenAttribute] Offset: FFFFFFFF
  class PatternFightSongController : public GlobalNamespace::SongController {
    public:
    // Nested type: GlobalNamespace::PatternFightSongController::GameplayPhase
    struct GameplayPhase;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PatternFightSongController/GameplayPhase
    // [TokenAttribute] Offset: FFFFFFFF
    struct GameplayPhase/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GameplayPhase
      constexpr GameplayPhase(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PatternFightSongController/GameplayPhase Undefined
      static constexpr const int Undefined = -1;
      // Get static field: static public PatternFightSongController/GameplayPhase Undefined
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_Undefined();
      // Set static field: static public PatternFightSongController/GameplayPhase Undefined
      static void _set_Undefined(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // static field const value: static public PatternFightSongController/GameplayPhase Start
      static constexpr const int Start = 0;
      // Get static field: static public PatternFightSongController/GameplayPhase Start
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_Start();
      // Set static field: static public PatternFightSongController/GameplayPhase Start
      static void _set_Start(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // static field const value: static public PatternFightSongController/GameplayPhase DefineThisPlayerPattern
      static constexpr const int DefineThisPlayerPattern = 1;
      // Get static field: static public PatternFightSongController/GameplayPhase DefineThisPlayerPattern
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_DefineThisPlayerPattern();
      // Set static field: static public PatternFightSongController/GameplayPhase DefineThisPlayerPattern
      static void _set_DefineThisPlayerPattern(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // static field const value: static public PatternFightSongController/GameplayPhase ReplayThisPlayerPattern
      static constexpr const int ReplayThisPlayerPattern = 2;
      // Get static field: static public PatternFightSongController/GameplayPhase ReplayThisPlayerPattern
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_ReplayThisPlayerPattern();
      // Set static field: static public PatternFightSongController/GameplayPhase ReplayThisPlayerPattern
      static void _set_ReplayThisPlayerPattern(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // PatternFightSongController/GameplayPhase
    #pragma pack(pop)
    static check_size<sizeof(PatternFightSongController::GameplayPhase), 0 + sizeof(int)> __GlobalNamespace_PatternFightSongController_GameplayPhaseSizeCheck;
    static_assert(sizeof(PatternFightSongController::GameplayPhase) == 0x4);
    // [InjectAttribute] Offset: 0xE3C718
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3C728
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3C738
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // private BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapData*) == 0x8);
    // private PatternFightSongController/GameplayPhase _gameplayPhase
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::PatternFightSongController::GameplayPhase gameplayPhase;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PatternFightSongController::GameplayPhase) == 0x4);
    // private System.Int32 _gameplayPhaseNumber
    // Size: 0x4
    // Offset: 0x44
    int gameplayPhaseNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Collections.Generic.HashSet`1<NoteData> _thisPlayerSourcePatternNoteData
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>* thisPlayerSourcePatternNoteData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<NoteData> _thisPlayerDefinedPatternNoteData
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>* thisPlayerDefinedPatternNoteData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>*) == 0x8);
    // Creating value type constructor for type: PatternFightSongController
    PatternFightSongController(GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::BeatmapData* beatmapData_ = {}, GlobalNamespace::PatternFightSongController::GameplayPhase gameplayPhase_ = {}, int gameplayPhaseNumber_ = {}, System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>* thisPlayerSourcePatternNoteData_ = {}, System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>* thisPlayerDefinedPatternNoteData_ = {}) noexcept : audioTimeSyncController{audioTimeSyncController_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, beatmapObjectManager{beatmapObjectManager_}, beatmapData{beatmapData_}, gameplayPhase{gameplayPhase_}, gameplayPhaseNumber{gameplayPhaseNumber_}, thisPlayerSourcePatternNoteData{thisPlayerSourcePatternNoteData_}, thisPlayerDefinedPatternNoteData{thisPlayerDefinedPatternNoteData_} {}
    // static field const value: static private System.Single kBPM
    static constexpr const float kBPM = 120;
    // Get static field: static private System.Single kBPM
    static float _get_kBPM();
    // Set static field: static private System.Single kBPM
    static void _set_kBPM(float value);
    // static field const value: static private System.Single kPhaseLengthInBeats
    static constexpr const float kPhaseLengthInBeats = 8;
    // Get static field: static private System.Single kPhaseLengthInBeats
    static float _get_kPhaseLengthInBeats();
    // Set static field: static private System.Single kPhaseLengthInBeats
    static void _set_kPhaseLengthInBeats(float value);
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private BeatmapData _beatmapData
    GlobalNamespace::BeatmapData*& dyn__beatmapData();
    // Get instance field reference: private PatternFightSongController/GameplayPhase _gameplayPhase
    GlobalNamespace::PatternFightSongController::GameplayPhase& dyn__gameplayPhase();
    // Get instance field reference: private System.Int32 _gameplayPhaseNumber
    int& dyn__gameplayPhaseNumber();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<NoteData> _thisPlayerSourcePatternNoteData
    System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>*& dyn__thisPlayerSourcePatternNoteData();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<NoteData> _thisPlayerDefinedPatternNoteData
    System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>*& dyn__thisPlayerDefinedPatternNoteData();
    // protected System.Void Start()
    // Offset: 0x103080C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10309E0
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1030A78
    void Update();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x1030DF4
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void NoteWasMissed(NoteController noteController)
    // Offset: 0x1031034
    void NoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void CreatePattern(System.Single time)
    // Offset: 0x1030B28
    void CreatePattern(float time);
    // public System.Void StartSong(System.Single startTimeOffset)
    // Offset: 0x10309C4
    void StartSong(float startTimeOffset);
    // public System.Void .ctor()
    // Offset: 0x10311B4
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightSongController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PatternFightSongController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightSongController*, creationType>()));
    }
    // public override System.Void StopSong()
    // Offset: 0x1031160
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0x103117C
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0x1031198
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
  }; // PatternFightSongController
  #pragma pack(pop)
  static check_size<sizeof(PatternFightSongController), 80 + sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>*)> __GlobalNamespace_PatternFightSongControllerSizeCheck;
  static_assert(sizeof(PatternFightSongController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSongController*, "", "PatternFightSongController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSongController::GameplayPhase, "", "PatternFightSongController/GameplayPhase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)()>(&GlobalNamespace::PatternFightSongController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)()>(&GlobalNamespace::PatternFightSongController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)()>(&GlobalNamespace::PatternFightSongController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)(GlobalNamespace::NoteController*, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::PatternFightSongController::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::NoteWasMissed
// Il2CppName: NoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::PatternFightSongController::NoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "NoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::CreatePattern
// Il2CppName: CreatePattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)(float)>(&GlobalNamespace::PatternFightSongController::CreatePattern)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "CreatePattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)(float)>(&GlobalNamespace::PatternFightSongController::StartSong)> {
  static const MethodInfo* get() {
    static auto* startTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)()>(&GlobalNamespace::PatternFightSongController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::PauseSong
// Il2CppName: PauseSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)()>(&GlobalNamespace::PatternFightSongController::PauseSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "PauseSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::ResumeSong
// Il2CppName: ResumeSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSongController::*)()>(&GlobalNamespace::PatternFightSongController::ResumeSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSongController*), "ResumeSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
