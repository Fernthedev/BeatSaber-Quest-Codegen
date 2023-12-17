#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SongRunningHelper)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongRunningHelper;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongRunningHelper);
MARK_VAL_T(::GlobalNamespace::__SongRunningHelper__QueuedSongParams);
// Type: ::QueuedSongParams
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5382))
// CS Name: ::SongRunningHelper::QueuedSongParams
struct CORDL_TYPE __SongRunningHelper__QueuedSongParams : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field beatmapLevel offset 0x0
 __declspec(property(get=__get_beatmapLevel, put=__set_beatmapLevel)) ::GlobalNamespace::IBeatmapLevel*  beatmapLevel;

/// @brief Field difficulty offset 0x8
 __declspec(property(get=__get_difficulty, put=__set_difficulty)) ::GlobalNamespace::BeatmapDifficulty  difficulty;

/// @brief Field characteristic offset 0x10
 __declspec(property(get=__get_characteristic, put=__set_characteristic)) ::StringW  characteristic;

/// @brief Field recordingToolData offset 0x18
 __declspec(property(get=__get_recordingToolData, put=__set_recordingToolData)) ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData;

/// @brief Field songFinishedCallback offset 0x20
 __declspec(property(get=__get_songFinishedCallback, put=__set_songFinishedCallback)) ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback;

constexpr void __set_beatmapLevel(::GlobalNamespace::IBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevel* __get_beatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> __get_beatmapLevel() const;

constexpr void __set_difficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_difficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_difficulty() const;

constexpr void __set_characteristic(::StringW  value) ;

constexpr ::StringW& __get_characteristic() ;

constexpr ::StringW const& __get_characteristic() const;

constexpr void __set_recordingToolData(::GlobalNamespace::__RecordingToolManager__SetupData  value) ;

constexpr ::GlobalNamespace::__RecordingToolManager__SetupData& __get_recordingToolData() ;

constexpr ::GlobalNamespace::__RecordingToolManager__SetupData const& __get_recordingToolData() const;

constexpr void __set_songFinishedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* __get_songFinishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*> __get_songFinishedCallback() const;

/// @brief Method .ctor addr 0x226eefc size 0x18 virtual false final false
inline void _ctor(::GlobalNamespace::IBeatmapLevel*  beatmapLevel, ::StringW  characteristic, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback) ;

// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "recordingToolData", ty: "::GlobalNamespace::__RecordingToolManager__SetupData", modifiers: "", def_value: None }, CppParam { name: "songFinishedCallback", ty: "::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: None }]
constexpr __SongRunningHelper__QueuedSongParams(::GlobalNamespace::IBeatmapLevel*  beatmapLevel, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::StringW  characteristic, ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SongRunningHelper__QueuedSongParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SongRunningHelper__QueuedSongParams()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongRunningHelper__QueuedSongParams, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SongRunningHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5383))
// CS Name: ::SongRunningHelper*
class CORDL_TYPE SongRunningHelper : public ::System::Object {
public:
// Declarations
using QueuedSongParams = ::GlobalNamespace::__SongRunningHelper__QueuedSongParams;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field _beatmapCharacteristics offset 0x10
 __declspec(property(get=__get__beatmapCharacteristics, put=__set__beatmapCharacteristics)) ::GlobalNamespace::BeatmapCharacteristicCollection*  _beatmapCharacteristics;

/// @brief Field _menuTransitionsHelper offset 0x18
 __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper)) ::GlobalNamespace::MenuTransitionsHelper*  _menuTransitionsHelper;

/// @brief Field _beatmapLevels offset 0x20
 __declspec(property(get=__get__beatmapLevels, put=__set__beatmapLevels)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevels;

/// @brief Field _playQueue offset 0x28
 __declspec(property(get=__get__playQueue, put=__set__playQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  _playQueue;

/// @brief Field _current offset 0x30
 __declspec(property(get=__get__current, put=__set__current)) ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>  _current;

constexpr void __set__beatmapCharacteristics(::GlobalNamespace::BeatmapCharacteristicCollection*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* __get__beatmapCharacteristics() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> __get__beatmapCharacteristics() const;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper*  value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper* __get__menuTransitionsHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> __get__menuTransitionsHelper() const;

constexpr void __set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* __get__beatmapLevels() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> __get__beatmapLevels() const;

constexpr void __set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* __get__playQueue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> __get__playQueue() const;

constexpr void __set__current(::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>  value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>& __get__current() ;

constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> const& __get__current() const;

/// @brief Method FindBeatmapLevelPackBeatmaps addr 0x226e390 size 0x4f4 virtual false final false
inline ::ArrayW<::GlobalNamespace::IBeatmapLevel*,::Array<::GlobalNamespace::IBeatmapLevel*>*> FindBeatmapLevelPackBeatmaps(::StringW  packId) ;

/// @brief Method EnqueueLevel addr 0x226e884 size 0xb8 virtual false final false
inline void EnqueueLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  queuedSongParams) ;

/// @brief Method StartLevel addr 0x226e93c size 0x350 virtual false final false
inline void StartLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  queuedSongParams) ;

/// @brief Method StopAllLevels addr 0x226ec8c size 0x60 virtual false final false
inline void StopAllLevels() ;

/// @brief Method StopCurrentLevel addr 0x226ecec size 0x1c virtual false final false
inline void StopCurrentLevel() ;

static inline ::GlobalNamespace::SongRunningHelper* New_ctor() ;

/// @brief Method .ctor addr 0x226ed08 size 0x7c virtual false final false
inline void _ctor() ;

/// @brief Method <StartLevel>g__HandleLevelDidFinishCallback|8_0 addr 0x226ed84 size 0x178 virtual false final false
inline void _StartLevel_g__HandleLevelDidFinishCallback_8_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransition, ::GlobalNamespace::LevelCompletionResults*  results) ;

// Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongRunningHelper(SongRunningHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongRunningHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongRunningHelper(SongRunningHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongRunningHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongRunningHelper, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongRunningHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongRunningHelper*, "", "SongRunningHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongRunningHelper__QueuedSongParams, "", "SongRunningHelper/QueuedSongParams");
