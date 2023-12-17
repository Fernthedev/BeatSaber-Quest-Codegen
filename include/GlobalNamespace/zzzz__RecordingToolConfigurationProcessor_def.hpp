#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolConfigurationProcessor)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingConfiguration;
}
namespace GlobalNamespace {
class ProgramArguments;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingToolConfiguration;
}
namespace GlobalNamespace {
class RecordingSettings;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class __ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__PlaybackScreenshot;
}
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__ColorSaveData;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__ColorSaveData;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__PlaybackScreenshot;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingConfiguration;
}
namespace GlobalNamespace {
class __RecordingToolConfigurationProcessor__RecordingToolConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolConfigurationProcessor);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration);
// Type: ::ColorSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5956))
// CS Name: ::RecordingToolConfigurationProcessor::ColorSaveData*
class CORDL_TYPE __RecordingToolConfigurationProcessor__ColorSaveData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field r offset 0x10
 __declspec(property(get=__get_r, put=__set_r)) float_t  r;

/// @brief Field g offset 0x14
 __declspec(property(get=__get_g, put=__set_g)) float_t  g;

/// @brief Field b offset 0x18
 __declspec(property(get=__get_b, put=__set_b)) float_t  b;

constexpr void __set_r(float_t  value) ;

constexpr float_t& __get_r() ;

constexpr float_t const& __get_r() const;

constexpr void __set_g(float_t  value) ;

constexpr float_t& __get_g() ;

constexpr float_t const& __get_g() const;

constexpr void __set_b(float_t  value) ;

constexpr float_t& __get_b() ;

constexpr float_t const& __get_b() const;

static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* New_ctor() ;

/// @brief Method .ctor addr 0x2307e84 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingToolConfigurationProcessor__ColorSaveData(__RecordingToolConfigurationProcessor__ColorSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingToolConfigurationProcessor__ColorSaveData(__RecordingToolConfigurationProcessor__ColorSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingToolConfigurationProcessor__ColorSaveData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlaybackScreenshot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5957))
// CS Name: ::RecordingToolConfigurationProcessor::PlaybackScreenshot*
class CORDL_TYPE __RecordingToolConfigurationProcessor__PlaybackScreenshot : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field type offset 0x18
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field includedLayers offset 0x20
 __declspec(property(get=__get_includedLayers, put=__set_includedLayers)) ::ArrayW<::StringW,::Array<::StringW>*>  includedLayers;

/// @brief Field excludedLayers offset 0x28
 __declspec(property(get=__get_excludedLayers, put=__set_excludedLayers)) ::ArrayW<::StringW,::Array<::StringW>*>  excludedLayers;

/// @brief Field backgroundColor offset 0x30
 __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor)) ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*  backgroundColor;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_includedLayers(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_includedLayers() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_includedLayers() const;

constexpr void __set_excludedLayers(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_excludedLayers() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_excludedLayers() const;

constexpr void __set_backgroundColor(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*  value) ;

constexpr ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData* __get_backgroundColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*> __get_backgroundColor() const;

static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot* New_ctor() ;

/// @brief Method .ctor addr 0x2307e8c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingToolConfigurationProcessor__PlaybackScreenshot(__RecordingToolConfigurationProcessor__PlaybackScreenshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingToolConfigurationProcessor__PlaybackScreenshot(__RecordingToolConfigurationProcessor__PlaybackScreenshot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingToolConfigurationProcessor__PlaybackScreenshot()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RecordingToolConfiguration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5958))
// CS Name: ::RecordingToolConfigurationProcessor::RecordingToolConfiguration*
class CORDL_TYPE __RecordingToolConfigurationProcessor__RecordingToolConfiguration : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field recordingConfigurations offset 0x10
 __declspec(property(get=__get_recordingConfigurations, put=__set_recordingConfigurations)) ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>  recordingConfigurations;

constexpr void __set_recordingConfigurations(::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*>& __get_recordingConfigurations() ;

constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*>*> const& __get_recordingConfigurations() const;

static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* New_ctor() ;

/// @brief Method .ctor addr 0x2305ab0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingToolConfigurationProcessor__RecordingToolConfiguration(__RecordingToolConfigurationProcessor__RecordingToolConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingToolConfigurationProcessor__RecordingToolConfiguration(__RecordingToolConfigurationProcessor__RecordingToolConfiguration const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingToolConfigurationProcessor__RecordingToolConfiguration()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RecordingConfiguration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5959))
// CS Name: ::RecordingToolConfigurationProcessor::RecordingConfiguration*
class CORDL_TYPE __RecordingToolConfigurationProcessor__RecordingConfiguration : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::Object)]{};

/// @brief Field mode offset 0x10
 __declspec(property(get=__get_mode, put=__set_mode)) ::StringW  mode;

/// @brief Field packID offset 0x18
 __declspec(property(get=__get_packID, put=__set_packID)) ::StringW  packID;

/// @brief Field levelID offset 0x20
 __declspec(property(get=__get_levelID, put=__set_levelID)) ::StringW  levelID;

/// @brief Field difficulty offset 0x28
 __declspec(property(get=__get_difficulty, put=__set_difficulty)) ::StringW  difficulty;

/// @brief Field characteristic offset 0x30
 __declspec(property(get=__get_characteristic, put=__set_characteristic)) ::StringW  characteristic;

/// @brief Field runLevel offset 0x38
 __declspec(property(get=__get_runLevel, put=__set_runLevel)) bool  runLevel;

/// @brief Field recordPerformance offset 0x39
 __declspec(property(get=__get_recordPerformance, put=__set_recordPerformance)) bool  recordPerformance;

/// @brief Field recordingMode offset 0x40
 __declspec(property(get=__get_recordingMode, put=__set_recordingMode)) ::StringW  recordingMode;

/// @brief Field recordingPath offset 0x48
 __declspec(property(get=__get_recordingPath, put=__set_recordingPath)) ::StringW  recordingPath;

/// @brief Field cameraView offset 0x50
 __declspec(property(get=__get_cameraView, put=__set_cameraView)) ::StringW  cameraView;

/// @brief Field addDateTimeSuffixToRecordingName offset 0x58
 __declspec(property(get=__get_addDateTimeSuffixToRecordingName, put=__set_addDateTimeSuffixToRecordingName)) bool  addDateTimeSuffixToRecordingName;

/// @brief Field screenshotRecording offset 0x59
 __declspec(property(get=__get_screenshotRecording, put=__set_screenshotRecording)) bool  screenshotRecording;

/// @brief Field screenshotWidth offset 0x5c
 __declspec(property(get=__get_screenshotWidth, put=__set_screenshotWidth)) int32_t  screenshotWidth;

/// @brief Field screenshotHeight offset 0x60
 __declspec(property(get=__get_screenshotHeight, put=__set_screenshotHeight)) int32_t  screenshotHeight;

/// @brief Field framerate offset 0x64
 __declspec(property(get=__get_framerate, put=__set_framerate)) int32_t  framerate;

/// @brief Field playbackScreenshots offset 0x68
 __declspec(property(get=__get_playbackScreenshots, put=__set_playbackScreenshots)) ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>  playbackScreenshots;

/// @brief Field practice offset 0x70
 __declspec(property(get=__get_practice, put=__set_practice)) bool  practice;

/// @brief Field startSongTime offset 0x74
 __declspec(property(get=__get_startSongTime, put=__set_startSongTime)) float_t  startSongTime;

/// @brief Field songSpeedMultiplier offset 0x78
 __declspec(property(get=__get_songSpeedMultiplier, put=__set_songSpeedMultiplier)) float_t  songSpeedMultiplier;

/// @brief Field overrideEnvironments offset 0x7c
 __declspec(property(get=__get_overrideEnvironments, put=__set_overrideEnvironments)) bool  overrideEnvironments;

/// @brief Field environmentType offset 0x80
 __declspec(property(get=__get_environmentType, put=__set_environmentType)) ::StringW  environmentType;

/// @brief Field environmentName offset 0x88
 __declspec(property(get=__get_environmentName, put=__set_environmentName)) ::StringW  environmentName;

/// @brief Field saveToOldFormat offset 0x90
 __declspec(property(get=__get_saveToOldFormat, put=__set_saveToOldFormat)) bool  saveToOldFormat;

constexpr void __set_mode(::StringW  value) ;

constexpr ::StringW& __get_mode() ;

constexpr ::StringW const& __get_mode() const;

constexpr void __set_packID(::StringW  value) ;

constexpr ::StringW& __get_packID() ;

constexpr ::StringW const& __get_packID() const;

constexpr void __set_levelID(::StringW  value) ;

constexpr ::StringW& __get_levelID() ;

constexpr ::StringW const& __get_levelID() const;

constexpr void __set_difficulty(::StringW  value) ;

constexpr ::StringW& __get_difficulty() ;

constexpr ::StringW const& __get_difficulty() const;

constexpr void __set_characteristic(::StringW  value) ;

constexpr ::StringW& __get_characteristic() ;

constexpr ::StringW const& __get_characteristic() const;

constexpr void __set_runLevel(bool  value) ;

constexpr bool& __get_runLevel() ;

constexpr bool const& __get_runLevel() const;

constexpr void __set_recordPerformance(bool  value) ;

constexpr bool& __get_recordPerformance() ;

constexpr bool const& __get_recordPerformance() const;

constexpr void __set_recordingMode(::StringW  value) ;

constexpr ::StringW& __get_recordingMode() ;

constexpr ::StringW const& __get_recordingMode() const;

constexpr void __set_recordingPath(::StringW  value) ;

constexpr ::StringW& __get_recordingPath() ;

constexpr ::StringW const& __get_recordingPath() const;

constexpr void __set_cameraView(::StringW  value) ;

constexpr ::StringW& __get_cameraView() ;

constexpr ::StringW const& __get_cameraView() const;

constexpr void __set_addDateTimeSuffixToRecordingName(bool  value) ;

constexpr bool& __get_addDateTimeSuffixToRecordingName() ;

constexpr bool const& __get_addDateTimeSuffixToRecordingName() const;

constexpr void __set_screenshotRecording(bool  value) ;

constexpr bool& __get_screenshotRecording() ;

constexpr bool const& __get_screenshotRecording() const;

constexpr void __set_screenshotWidth(int32_t  value) ;

constexpr int32_t& __get_screenshotWidth() ;

constexpr int32_t const& __get_screenshotWidth() const;

constexpr void __set_screenshotHeight(int32_t  value) ;

constexpr int32_t& __get_screenshotHeight() ;

constexpr int32_t const& __get_screenshotHeight() const;

constexpr void __set_framerate(int32_t  value) ;

constexpr int32_t& __get_framerate() ;

constexpr int32_t const& __get_framerate() const;

constexpr void __set_playbackScreenshots(::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*>& __get_playbackScreenshots() ;

constexpr ::ArrayW<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*,::Array<::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*>*> const& __get_playbackScreenshots() const;

constexpr void __set_practice(bool  value) ;

constexpr bool& __get_practice() ;

constexpr bool const& __get_practice() const;

constexpr void __set_startSongTime(float_t  value) ;

constexpr float_t& __get_startSongTime() ;

constexpr float_t const& __get_startSongTime() const;

constexpr void __set_songSpeedMultiplier(float_t  value) ;

constexpr float_t& __get_songSpeedMultiplier() ;

constexpr float_t const& __get_songSpeedMultiplier() const;

constexpr void __set_overrideEnvironments(bool  value) ;

constexpr bool& __get_overrideEnvironments() ;

constexpr bool const& __get_overrideEnvironments() const;

constexpr void __set_environmentType(::StringW  value) ;

constexpr ::StringW& __get_environmentType() ;

constexpr ::StringW const& __get_environmentType() const;

constexpr void __set_environmentName(::StringW  value) ;

constexpr ::StringW& __get_environmentName() ;

constexpr ::StringW const& __get_environmentName() const;

constexpr void __set_saveToOldFormat(bool  value) ;

constexpr bool& __get_saveToOldFormat() ;

constexpr bool const& __get_saveToOldFormat() const;

static inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration* New_ctor() ;

/// @brief Method .ctor addr 0x2307e94 size 0x9c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingToolConfigurationProcessor__RecordingConfiguration(__RecordingToolConfigurationProcessor__RecordingConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolConfigurationProcessor__RecordingConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingToolConfigurationProcessor__RecordingConfiguration(__RecordingToolConfigurationProcessor__RecordingConfiguration const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingToolConfigurationProcessor__RecordingConfiguration()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RecordingToolConfigurationProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5960))
// CS Name: ::RecordingToolConfigurationProcessor*
class CORDL_TYPE RecordingToolConfigurationProcessor : public ::System::Object {
public:
// Declarations
using RecordingConfiguration = ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration;

using RecordingToolConfiguration = ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration;

using PlaybackScreenshot = ::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot;

using ColorSaveData = ::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field kRecordingToolCommandLineArgument offset 0x0
static constexpr ::ConstString  kRecordingToolCommandLineArgument{u"--enable_recording_tool"};

/// @brief Field kSoloMode offset 0x0
static constexpr ::ConstString  kSoloMode{u"Solo"};

/// @brief Field kNormalEnvironmentType offset 0x0
static constexpr ::ConstString  kNormalEnvironmentType{u"Normal"};

/// @brief Field kNormalEnvironmentNameSuffix offset 0x0
static constexpr ::ConstString  kNormalEnvironmentNameSuffix{u"Environment"};

/// @brief Field kEverythingLayerMask offset 0x0
static constexpr ::ConstString  kEverythingLayerMask{u"Everything"};

/// @brief Field kNothingLayerMask offset 0x0
static constexpr ::ConstString  kNothingLayerMask{u"Nothing"};

/// @brief Field kDefaultMrcLayersMask offset 0x0
static constexpr ::ConstString  kDefaultMrcLayersMask{u"DefaultMrcLayers"};

/// @brief Field _programArguments offset 0x10
 __declspec(property(get=__get__programArguments, put=__set__programArguments)) ::GlobalNamespace::ProgramArguments*  _programArguments;

/// @brief Field _logger offset 0x18
 __declspec(property(get=__get__logger, put=__set__logger)) ::GlobalNamespace::IBeatSaberLogger*  _logger;

/// @brief Field _posesSerializer offset 0x20
 __declspec(property(get=__get__posesSerializer, put=__set__posesSerializer)) ::GlobalNamespace::IPosesSerializer*  _posesSerializer;

/// @brief Field _resourceContainer offset 0x28
 __declspec(property(get=__get__resourceContainer, put=__set__resourceContainer)) ::GlobalNamespace::RecordingToolResourceContainerSO*  _resourceContainer;

constexpr void __set__programArguments(::GlobalNamespace::ProgramArguments*  value) ;

constexpr ::GlobalNamespace::ProgramArguments* __get__programArguments() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ProgramArguments*> __get__programArguments() const;

constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger*  value) ;

constexpr ::GlobalNamespace::IBeatSaberLogger* __get__logger() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> __get__logger() const;

constexpr void __set__posesSerializer(::GlobalNamespace::IPosesSerializer*  value) ;

constexpr ::GlobalNamespace::IPosesSerializer* __get__posesSerializer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> __get__posesSerializer() const;

constexpr void __set__resourceContainer(::GlobalNamespace::RecordingToolResourceContainerSO*  value) ;

constexpr ::GlobalNamespace::RecordingToolResourceContainerSO* __get__resourceContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolResourceContainerSO*> __get__resourceContainer() const;

static inline ::GlobalNamespace::RecordingToolConfigurationProcessor* New_ctor(::GlobalNamespace::ProgramArguments*  programArguments, ::GlobalNamespace::IBeatSaberLogger*  logger, ::GlobalNamespace::IPosesSerializer*  posesSerializer, ::GlobalNamespace::RecordingToolResourceContainerSO*  resourceContainer) ;

/// @brief Method .ctor addr 0x2305250 size 0x40 virtual false final false
inline void _ctor(::GlobalNamespace::ProgramArguments*  programArguments, ::GlobalNamespace::IBeatSaberLogger*  logger, ::GlobalNamespace::IPosesSerializer*  posesSerializer, ::GlobalNamespace::RecordingToolResourceContainerSO*  resourceContainer) ;

/// @brief Method IsRecordingToolEnabled addr 0x2305290 size 0x6c virtual false final false
inline bool IsRecordingToolEnabled() ;

/// @brief Method GetConfigFilePath addr 0x23052fc size 0x3e0 virtual false final false
inline ::StringW GetConfigFilePath() ;

/// @brief Method LoadConfigurationFile addr 0x23056dc size 0x178 virtual false final false
inline ::StringW LoadConfigurationFile(::StringW  filePath) ;

/// @brief Method DeserializeConfigurationFile addr 0x2305854 size 0x25c virtual false final false
inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* DeserializeConfigurationFile(::StringW  jsonData) ;

/// @brief Method LoadConfiguration addr 0x2305ab8 size 0x1c virtual false final false
inline ::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration* LoadConfiguration(::StringW  filePath) ;

/// @brief Method GetDefaultMrcLayersMask addr 0x2305ad4 size 0x94 virtual false final false
static inline ::UnityEngine::LayerMask GetDefaultMrcLayersMask() ;

/// @brief Method GetLayerMask addr 0x2305b68 size 0x208 virtual false final false
inline ::UnityEngine::LayerMask GetLayerMask(::StringW  layerName) ;

/// @brief Method GetLayersMask addr 0x2305d70 size 0xac virtual false final false
inline ::UnityEngine::LayerMask GetLayersMask(::ArrayW<::StringW,::Array<::StringW>*>  layerNames) ;

/// @brief Method GetLevelPackAndLevelPreviewForLevelId addr 0x2305e1c size 0x910 virtual false final false
static inline ::System::ValueTuple_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*> GetLevelPackAndLevelPreviewForLevelId(::StringW  packId, ::StringW  levelId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>*  beatmapLevelPacks) ;

/// @brief Method CreateRecordingToolSettingsFromConfiguration addr 0x230672c size 0x1164 virtual false final false
inline ::GlobalNamespace::RecordingToolSettings* CreateRecordingToolSettingsFromConfiguration(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration*  recordingToolConfiguration, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection) ;

/// @brief Method CreateObjectsMovementRecorderInitDataFromConfiguration addr 0x2307a0c size 0xf8 virtual false final false
inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData* CreateObjectsMovementRecorderInitDataFromConfiguration(::GlobalNamespace::RecordingSettings*  recordingSettings) ;

/// @brief Method CreateMenuDestinationFromConfiguration addr 0x2307b04 size 0x380 virtual false final false
inline ::GlobalNamespace::MenuDestination* CreateMenuDestinationFromConfiguration(::GlobalNamespace::RecordingSettings*  recordingSettings, bool  quitAppAfterRun) ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolConfigurationProcessor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolConfigurationProcessor, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor*, "", "RecordingToolConfigurationProcessor");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__ColorSaveData*, "", "RecordingToolConfigurationProcessor/ColorSaveData");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__PlaybackScreenshot*, "", "RecordingToolConfigurationProcessor/PlaybackScreenshot");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingConfiguration*, "", "RecordingToolConfigurationProcessor/RecordingConfiguration");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolConfigurationProcessor__RecordingToolConfiguration*, "", "RecordingToolConfigurationProcessor/RecordingToolConfiguration");
