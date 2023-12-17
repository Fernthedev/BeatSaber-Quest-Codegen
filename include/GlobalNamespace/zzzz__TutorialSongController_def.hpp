#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialSongController)
namespace GlobalNamespace {
class __TutorialSongController__InitData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObstacleSpawnData;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialSongController;
}
namespace GlobalNamespace {
class __TutorialSongController__InitData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class __TutorialSongController__TutorialObstacleSpawnData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialSongController);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5344))
// CS Name: ::TutorialSongController::InitData*
class CORDL_TYPE __TutorialSongController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field songBpm offset 0x10
 __declspec(property(get=__get_songBpm, put=__set_songBpm)) float_t  songBpm;

/// @brief Field beatmapData offset 0x18
 __declspec(property(get=__get_beatmapData, put=__set_beatmapData)) ::GlobalNamespace::BeatmapData*  beatmapData;

constexpr void __set_songBpm(float_t  value) ;

constexpr float_t& __get_songBpm() ;

constexpr float_t const& __get_songBpm() const;

constexpr void __set_beatmapData(::GlobalNamespace::BeatmapData*  value) ;

constexpr ::GlobalNamespace::BeatmapData* __get_beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> __get_beatmapData() const;

static inline ::GlobalNamespace::__TutorialSongController__InitData* New_ctor(float_t  songBpm, ::GlobalNamespace::BeatmapData*  beatmapData) ;

/// @brief Method .ctor addr 0x226bd58 size 0x38 virtual false final false
inline void _ctor(float_t  songBpm, ::GlobalNamespace::BeatmapData*  beatmapData) ;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TutorialSongController__InitData(__TutorialSongController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TutorialSongController__InitData(__TutorialSongController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TutorialSongController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__InitData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TutorialObjectSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5345))
// CS Name: ::TutorialSongController::TutorialObjectSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialObjectSpawnData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field signal offset 0x10
 __declspec(property(get=__get_signal, put=__set_signal)) ::GlobalNamespace::Signal*  signal;

/// @brief Field beatOffset offset 0x18
 __declspec(property(get=__get_beatOffset, put=__set_beatOffset)) int32_t  beatOffset;

/// @brief Field firstTimeBeatOffset offset 0x1c
 __declspec(property(get=__get_firstTimeBeatOffset, put=__set_firstTimeBeatOffset)) int32_t  firstTimeBeatOffset;

/// @brief Field lineIndex offset 0x20
 __declspec(property(get=__get_lineIndex, put=__set_lineIndex)) int32_t  lineIndex;

constexpr void __set_signal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get_signal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get_signal() const;

constexpr void __set_beatOffset(int32_t  value) ;

constexpr int32_t& __get_beatOffset() ;

constexpr int32_t const& __get_beatOffset() const;

constexpr void __set_firstTimeBeatOffset(int32_t  value) ;

constexpr int32_t& __get_firstTimeBeatOffset() ;

constexpr int32_t const& __get_firstTimeBeatOffset() const;

constexpr void __set_lineIndex(int32_t  value) ;

constexpr int32_t& __get_lineIndex() ;

constexpr int32_t const& __get_lineIndex() const;

static inline ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData* New_ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex) ;

/// @brief Method .ctor addr 0x226bd90 size 0x44 virtual false final false
inline void _ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObjectSpawnData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TutorialSongController__TutorialObjectSpawnData(__TutorialSongController__TutorialObjectSpawnData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObjectSpawnData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TutorialSongController__TutorialObjectSpawnData(__TutorialSongController__TutorialObjectSpawnData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TutorialSongController__TutorialObjectSpawnData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TutorialJumpingNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5345))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5346))
// CS Name: ::TutorialSongController::TutorialJumpingNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialJumpingNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData)]{};

/// @brief Field noteLineLayer offset 0x24
 __declspec(property(get=__get_noteLineLayer, put=__set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer  noteLineLayer;

constexpr void __set_noteLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get_noteLineLayer() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get_noteLineLayer() const;

static inline ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData* New_ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

/// @brief Method .ctor addr 0x226bdd4 size 0x50 virtual false final false
inline void _ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TutorialSongController__TutorialJumpingNoteSpawnData(__TutorialSongController__TutorialJumpingNoteSpawnData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TutorialSongController__TutorialJumpingNoteSpawnData(__TutorialSongController__TutorialJumpingNoteSpawnData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TutorialSongController__TutorialJumpingNoteSpawnData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TutorialBasicNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5346))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5347))
// CS Name: ::TutorialSongController::TutorialBasicNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialBasicNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData)]{};

/// @brief Field cutDirection offset 0x28
 __declspec(property(get=__get_cutDirection, put=__set_cutDirection)) ::GlobalNamespace::NoteCutDirection  cutDirection;

/// @brief Field colorType offset 0x2c
 __declspec(property(get=__get_colorType, put=__set_colorType)) ::GlobalNamespace::ColorType  colorType;

constexpr void __set_cutDirection(::GlobalNamespace::NoteCutDirection  value) ;

constexpr ::GlobalNamespace::NoteCutDirection& __get_cutDirection() ;

constexpr ::GlobalNamespace::NoteCutDirection const& __get_cutDirection() const;

constexpr void __set_colorType(::GlobalNamespace::ColorType  value) ;

constexpr ::GlobalNamespace::ColorType& __get_colorType() ;

constexpr ::GlobalNamespace::ColorType const& __get_colorType() const;

static inline ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData* New_ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer, ::GlobalNamespace::NoteCutDirection  cutDirection, ::GlobalNamespace::ColorType  colorType) ;

/// @brief Method .ctor addr 0x226b3cc size 0x64 virtual false final false
inline void _ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer, ::GlobalNamespace::NoteCutDirection  cutDirection, ::GlobalNamespace::ColorType  colorType) ;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TutorialSongController__TutorialBasicNoteSpawnData(__TutorialSongController__TutorialBasicNoteSpawnData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TutorialSongController__TutorialBasicNoteSpawnData(__TutorialSongController__TutorialBasicNoteSpawnData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TutorialSongController__TutorialBasicNoteSpawnData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TutorialBombNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5346))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5348))
// CS Name: ::TutorialSongController::TutorialBombNoteSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialBombNoteSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData)]{};

static inline ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData* New_ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

/// @brief Method .ctor addr 0x226b430 size 0x50 virtual false final false
inline void _ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TutorialSongController__TutorialBombNoteSpawnData(__TutorialSongController__TutorialBombNoteSpawnData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TutorialSongController__TutorialBombNoteSpawnData(__TutorialSongController__TutorialBombNoteSpawnData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TutorialSongController__TutorialBombNoteSpawnData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TutorialObstacleSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5345))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5349))
// CS Name: ::TutorialSongController::TutorialObstacleSpawnData*
class CORDL_TYPE __TutorialSongController__TutorialObstacleSpawnData : public ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData)]{};

/// @brief Field noteLineLayer offset 0x24
 __declspec(property(get=__get_noteLineLayer, put=__set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer  noteLineLayer;

/// @brief Field width offset 0x28
 __declspec(property(get=__get_width, put=__set_width)) int32_t  width;

/// @brief Field height offset 0x2c
 __declspec(property(get=__get_height, put=__set_height)) int32_t  height;

constexpr void __set_noteLineLayer(::GlobalNamespace::NoteLineLayer  value) ;

constexpr ::GlobalNamespace::NoteLineLayer& __get_noteLineLayer() ;

constexpr ::GlobalNamespace::NoteLineLayer const& __get_noteLineLayer() const;

constexpr void __set_width(int32_t  value) ;

constexpr int32_t& __get_width() ;

constexpr int32_t const& __get_width() const;

constexpr void __set_height(int32_t  value) ;

constexpr int32_t& __get_height() ;

constexpr int32_t const& __get_height() const;

static inline ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData* New_ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, int32_t  width, int32_t  height, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

/// @brief Method .ctor addr 0x226b480 size 0x64 virtual false final false
inline void _ctor(::GlobalNamespace::Signal*  signal, int32_t  firstTimeBeatOffset, int32_t  beatOffset, int32_t  lineIndex, int32_t  width, int32_t  height, ::GlobalNamespace::NoteLineLayer  noteLineLayer) ;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObstacleSpawnData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TutorialSongController__TutorialObstacleSpawnData(__TutorialSongController__TutorialObstacleSpawnData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TutorialSongController__TutorialObstacleSpawnData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TutorialSongController__TutorialObstacleSpawnData(__TutorialSongController__TutorialObstacleSpawnData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TutorialSongController__TutorialObstacleSpawnData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TutorialSongController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5334))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5350))
// CS Name: ::TutorialSongController*
class CORDL_TYPE TutorialSongController : public ::GlobalNamespace::SongController {
public:
// Declarations
using TutorialObstacleSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData;

using TutorialBombNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData;

using TutorialBasicNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData;

using TutorialJumpingNoteSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData;

using TutorialObjectSpawnData = ::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData;

using InitData = ::GlobalNamespace::__TutorialSongController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::GlobalNamespace::SongController)]{};

/// @brief Field _audioTimeSyncController offset 0x20
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _startWaitTimeInBeats offset 0x28
 __declspec(property(get=__get__startWaitTimeInBeats, put=__set__startWaitTimeInBeats)) int32_t  _startWaitTimeInBeats;

/// @brief Field _numberOfBeatsToSnap offset 0x2c
 __declspec(property(get=__get__numberOfBeatsToSnap, put=__set__numberOfBeatsToSnap)) int32_t  _numberOfBeatsToSnap;

/// @brief Field _obstacleDurationInBeats offset 0x30
 __declspec(property(get=__get__obstacleDurationInBeats, put=__set__obstacleDurationInBeats)) int32_t  _obstacleDurationInBeats;

/// @brief Field _noteCuttingTutorialPartDidStartSignal offset 0x38
 __declspec(property(get=__get__noteCuttingTutorialPartDidStartSignal, put=__set__noteCuttingTutorialPartDidStartSignal)) ::GlobalNamespace::Signal*  _noteCuttingTutorialPartDidStartSignal;

/// @brief Field _noteCuttingInAnyDirectionDidStartSignal offset 0x40
 __declspec(property(get=__get__noteCuttingInAnyDirectionDidStartSignal, put=__set__noteCuttingInAnyDirectionDidStartSignal)) ::GlobalNamespace::Signal*  _noteCuttingInAnyDirectionDidStartSignal;

/// @brief Field _bombCuttingTutorialPartDidStartSignal offset 0x48
 __declspec(property(get=__get__bombCuttingTutorialPartDidStartSignal, put=__set__bombCuttingTutorialPartDidStartSignal)) ::GlobalNamespace::Signal*  _bombCuttingTutorialPartDidStartSignal;

/// @brief Field _leftObstacleTutorialPartDidStartSignal offset 0x50
 __declspec(property(get=__get__leftObstacleTutorialPartDidStartSignal, put=__set__leftObstacleTutorialPartDidStartSignal)) ::GlobalNamespace::Signal*  _leftObstacleTutorialPartDidStartSignal;

/// @brief Field _rightObstacleTutorialPartDidStartSignal offset 0x58
 __declspec(property(get=__get__rightObstacleTutorialPartDidStartSignal, put=__set__rightObstacleTutorialPartDidStartSignal)) ::GlobalNamespace::Signal*  _rightObstacleTutorialPartDidStartSignal;

/// @brief Field _topObstacleTutorialPartDidStartSignal offset 0x60
 __declspec(property(get=__get__topObstacleTutorialPartDidStartSignal, put=__set__topObstacleTutorialPartDidStartSignal)) ::GlobalNamespace::Signal*  _topObstacleTutorialPartDidStartSignal;

/// @brief Field _noteWasCutOKSignal offset 0x68
 __declspec(property(get=__get__noteWasCutOKSignal, put=__set__noteWasCutOKSignal)) ::GlobalNamespace::Signal*  _noteWasCutOKSignal;

/// @brief Field _noteWasCutTooSoonSignal offset 0x70
 __declspec(property(get=__get__noteWasCutTooSoonSignal, put=__set__noteWasCutTooSoonSignal)) ::GlobalNamespace::Signal*  _noteWasCutTooSoonSignal;

/// @brief Field _noteWasCutWithWrongColorSignal offset 0x78
 __declspec(property(get=__get__noteWasCutWithWrongColorSignal, put=__set__noteWasCutWithWrongColorSignal)) ::GlobalNamespace::Signal*  _noteWasCutWithWrongColorSignal;

/// @brief Field _noteWasCutFromDifferentDirectionSignal offset 0x80
 __declspec(property(get=__get__noteWasCutFromDifferentDirectionSignal, put=__set__noteWasCutFromDifferentDirectionSignal)) ::GlobalNamespace::Signal*  _noteWasCutFromDifferentDirectionSignal;

/// @brief Field _noteWasCutWithSlowSpeedSignal offset 0x88
 __declspec(property(get=__get__noteWasCutWithSlowSpeedSignal, put=__set__noteWasCutWithSlowSpeedSignal)) ::GlobalNamespace::Signal*  _noteWasCutWithSlowSpeedSignal;

/// @brief Field _bombWasCutSignal offset 0x90
 __declspec(property(get=__get__bombWasCutSignal, put=__set__bombWasCutSignal)) ::GlobalNamespace::Signal*  _bombWasCutSignal;

/// @brief Field _initData offset 0x98
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__TutorialSongController__InitData*  _initData;

/// @brief Field _beatmapObjectManager offset 0xa0
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _tutorialBeatmapObjectIndex offset 0xa8
 __declspec(property(get=__get__tutorialBeatmapObjectIndex, put=__set__tutorialBeatmapObjectIndex)) int32_t  _tutorialBeatmapObjectIndex;

/// @brief Field _prevSpawnedBeatmapObjectIndex offset 0xac
 __declspec(property(get=__get__prevSpawnedBeatmapObjectIndex, put=__set__prevSpawnedBeatmapObjectIndex)) int32_t  _prevSpawnedBeatmapObjectIndex;

/// @brief Field _songBpm offset 0xb0
 __declspec(property(get=__get__songBpm, put=__set__songBpm)) float_t  _songBpm;

/// @brief Field _beatmapData offset 0xb8
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::BeatmapData*  _beatmapData;

/// @brief Field _normalModeTutorialObjectsSpawnData offset 0xc0
 __declspec(property(get=__get__normalModeTutorialObjectsSpawnData, put=__set__normalModeTutorialObjectsSpawnData)) ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*,::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>  _normalModeTutorialObjectsSpawnData;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__startWaitTimeInBeats(int32_t  value) ;

constexpr int32_t& __get__startWaitTimeInBeats() ;

constexpr int32_t const& __get__startWaitTimeInBeats() const;

constexpr void __set__numberOfBeatsToSnap(int32_t  value) ;

constexpr int32_t& __get__numberOfBeatsToSnap() ;

constexpr int32_t const& __get__numberOfBeatsToSnap() const;

constexpr void __set__obstacleDurationInBeats(int32_t  value) ;

constexpr int32_t& __get__obstacleDurationInBeats() ;

constexpr int32_t const& __get__obstacleDurationInBeats() const;

constexpr void __set__noteCuttingTutorialPartDidStartSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteCuttingTutorialPartDidStartSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteCuttingTutorialPartDidStartSignal() const;

constexpr void __set__noteCuttingInAnyDirectionDidStartSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteCuttingInAnyDirectionDidStartSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteCuttingInAnyDirectionDidStartSignal() const;

constexpr void __set__bombCuttingTutorialPartDidStartSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__bombCuttingTutorialPartDidStartSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__bombCuttingTutorialPartDidStartSignal() const;

constexpr void __set__leftObstacleTutorialPartDidStartSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__leftObstacleTutorialPartDidStartSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__leftObstacleTutorialPartDidStartSignal() const;

constexpr void __set__rightObstacleTutorialPartDidStartSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__rightObstacleTutorialPartDidStartSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__rightObstacleTutorialPartDidStartSignal() const;

constexpr void __set__topObstacleTutorialPartDidStartSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__topObstacleTutorialPartDidStartSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__topObstacleTutorialPartDidStartSignal() const;

constexpr void __set__noteWasCutOKSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteWasCutOKSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteWasCutOKSignal() const;

constexpr void __set__noteWasCutTooSoonSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteWasCutTooSoonSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteWasCutTooSoonSignal() const;

constexpr void __set__noteWasCutWithWrongColorSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteWasCutWithWrongColorSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteWasCutWithWrongColorSignal() const;

constexpr void __set__noteWasCutFromDifferentDirectionSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteWasCutFromDifferentDirectionSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteWasCutFromDifferentDirectionSignal() const;

constexpr void __set__noteWasCutWithSlowSpeedSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__noteWasCutWithSlowSpeedSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__noteWasCutWithSlowSpeedSignal() const;

constexpr void __set__bombWasCutSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__bombWasCutSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__bombWasCutSignal() const;

constexpr void __set__initData(::GlobalNamespace::__TutorialSongController__InitData*  value) ;

constexpr ::GlobalNamespace::__TutorialSongController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialSongController__InitData*> __get__initData() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__tutorialBeatmapObjectIndex(int32_t  value) ;

constexpr int32_t& __get__tutorialBeatmapObjectIndex() ;

constexpr int32_t const& __get__tutorialBeatmapObjectIndex() const;

constexpr void __set__prevSpawnedBeatmapObjectIndex(int32_t  value) ;

constexpr int32_t& __get__prevSpawnedBeatmapObjectIndex() ;

constexpr int32_t const& __get__prevSpawnedBeatmapObjectIndex() const;

constexpr void __set__songBpm(float_t  value) ;

constexpr float_t& __get__songBpm() ;

constexpr float_t const& __get__songBpm() const;

constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData*  value) ;

constexpr ::GlobalNamespace::BeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> __get__beatmapData() const;

constexpr void __set__normalModeTutorialObjectsSpawnData(::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*,::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*,::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*>& __get__normalModeTutorialObjectsSpawnData() ;

constexpr ::ArrayW<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*,::Array<::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*>*> const& __get__normalModeTutorialObjectsSpawnData() const;

/// @brief Method Awake addr 0x226aec0 size 0x50c virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x226b4e4 size 0x16c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x226b650 size 0x154 virtual false final false
inline void OnDestroy() ;

/// @brief Method StartSong addr 0x226a38c size 0x5c virtual false final false
inline void StartSong(float_t  startTimeOffset) ;

/// @brief Method StopSong addr 0x226b9dc size 0x28 virtual true final false
inline void StopSong() ;

/// @brief Method PauseSong addr 0x226ba04 size 0x28 virtual true final false
inline void PauseSong() ;

/// @brief Method ResumeSong addr 0x226ba2c size 0x1c virtual true final false
inline void ResumeSong() ;

/// @brief Method HandleNoteWasCut addr 0x226ba48 size 0xe8 virtual false final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

/// @brief Method HandleNoteWasMissed addr 0x226bb30 size 0x6c virtual false final false
inline void HandleNoteWasMissed(::GlobalNamespace::NoteController*  noteController) ;

/// @brief Method HandleObstacleDidPassThreeQuartersOfMove2 addr 0x226bb9c size 0x14 virtual false final false
inline void HandleObstacleDidPassThreeQuartersOfMove2(::GlobalNamespace::ObstacleController*  obstacleController) ;

/// @brief Method UpdateBeatmapData addr 0x226b7a4 size 0x238 virtual false final false
inline void UpdateBeatmapData(float_t  noteTime) ;

/// @brief Method GetNextBeatmapObjectTime addr 0x226bbb0 size 0x78 virtual false final false
inline float_t GetNextBeatmapObjectTime(int32_t  beatOffset) ;

/// @brief Method CreateObstacleData addr 0x226bc6c size 0xcc virtual false final false
inline ::GlobalNamespace::ObstacleData* CreateObstacleData(float_t  time, ::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*  tutorialObstacleSpawnData) ;

/// @brief Method CreateBasicNoteData addr 0x226bc28 size 0x24 virtual false final false
inline ::GlobalNamespace::NoteData* CreateBasicNoteData(float_t  time, ::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*  tutorialBasicNoteSpawnData) ;

/// @brief Method CreateBombNoteData addr 0x226bc4c size 0x20 virtual false final false
inline ::GlobalNamespace::NoteData* CreateBombNoteData(float_t  time, ::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*  tutorialBombNoteSpawnData) ;

static inline ::GlobalNamespace::TutorialSongController* New_ctor() ;

/// @brief Method .ctor addr 0x226bd38 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialSongController(TutorialSongController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialSongController(TutorialSongController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TutorialSongController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialSongController, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController*, "", "TutorialSongController");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__InitData*, "", "TutorialSongController/InitData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialBasicNoteSpawnData*, "", "TutorialSongController/TutorialBasicNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialBombNoteSpawnData*, "", "TutorialSongController/TutorialBombNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialJumpingNoteSpawnData*, "", "TutorialSongController/TutorialJumpingNoteSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
NEED_NO_BOX(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialSongController__TutorialObstacleSpawnData*, "", "TutorialSongController/TutorialObstacleSpawnData");
