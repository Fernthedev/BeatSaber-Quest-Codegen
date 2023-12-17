#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPreviewBeatmapLevel)
namespace GlobalNamespace {
struct __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomPreviewBeatmapLevel);
MARK_VAL_T(::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69);
// Type: ::<GetCoverImageAsync>d__69
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4384))
// CS Name: ::CustomPreviewBeatmapLevel::<GetCoverImageAsync>d__69
struct CORDL_TYPE __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::CustomPreviewBeatmapLevel*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::CustomPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::CustomPreviewBeatmapLevel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomPreviewBeatmapLevel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23477f8 size 0x38c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2347b84 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::CustomPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder, ::GlobalNamespace::CustomPreviewBeatmapLevel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CustomPreviewBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4385))
// CS Name: ::CustomPreviewBeatmapLevel*
class CORDL_TYPE CustomPreviewBeatmapLevel : public ::System::Object {
public:
// Declarations
using _GetCoverImageAsync_d__69 = ::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::System::Object)]{};

/// @brief Field <spriteAsyncLoader>k__BackingField offset 0x10
 __declspec(property(get=__get__spriteAsyncLoader_k__BackingField, put=__set__spriteAsyncLoader_k__BackingField)) ::GlobalNamespace::ISpriteAsyncLoader*  _spriteAsyncLoader_k__BackingField;

/// @brief Field <standardLevelInfoSaveData>k__BackingField offset 0x18
 __declspec(property(get=__get__standardLevelInfoSaveData_k__BackingField, put=__set__standardLevelInfoSaveData_k__BackingField)) ::GlobalNamespace::StandardLevelInfoSaveData*  _standardLevelInfoSaveData_k__BackingField;

/// @brief Field <customLevelPath>k__BackingField offset 0x20
 __declspec(property(get=__get__customLevelPath_k__BackingField, put=__set__customLevelPath_k__BackingField)) ::StringW  _customLevelPath_k__BackingField;

/// @brief Field <levelID>k__BackingField offset 0x28
 __declspec(property(get=__get__levelID_k__BackingField, put=__set__levelID_k__BackingField)) ::StringW  _levelID_k__BackingField;

/// @brief Field <songName>k__BackingField offset 0x30
 __declspec(property(get=__get__songName_k__BackingField, put=__set__songName_k__BackingField)) ::StringW  _songName_k__BackingField;

/// @brief Field <songSubName>k__BackingField offset 0x38
 __declspec(property(get=__get__songSubName_k__BackingField, put=__set__songSubName_k__BackingField)) ::StringW  _songSubName_k__BackingField;

/// @brief Field <songAuthorName>k__BackingField offset 0x40
 __declspec(property(get=__get__songAuthorName_k__BackingField, put=__set__songAuthorName_k__BackingField)) ::StringW  _songAuthorName_k__BackingField;

/// @brief Field <levelAuthorName>k__BackingField offset 0x48
 __declspec(property(get=__get__levelAuthorName_k__BackingField, put=__set__levelAuthorName_k__BackingField)) ::StringW  _levelAuthorName_k__BackingField;

/// @brief Field <beatsPerMinute>k__BackingField offset 0x50
 __declspec(property(get=__get__beatsPerMinute_k__BackingField, put=__set__beatsPerMinute_k__BackingField)) float_t  _beatsPerMinute_k__BackingField;

/// @brief Field <songTimeOffset>k__BackingField offset 0x54
 __declspec(property(get=__get__songTimeOffset_k__BackingField, put=__set__songTimeOffset_k__BackingField)) float_t  _songTimeOffset_k__BackingField;

/// @brief Field <songDuration>k__BackingField offset 0x58
 __declspec(property(get=__get__songDuration_k__BackingField, put=__set__songDuration_k__BackingField)) float_t  _songDuration_k__BackingField;

/// @brief Field <shuffle>k__BackingField offset 0x5c
 __declspec(property(get=__get__shuffle_k__BackingField, put=__set__shuffle_k__BackingField)) float_t  _shuffle_k__BackingField;

/// @brief Field <shufflePeriod>k__BackingField offset 0x60
 __declspec(property(get=__get__shufflePeriod_k__BackingField, put=__set__shufflePeriod_k__BackingField)) float_t  _shufflePeriod_k__BackingField;

/// @brief Field <previewStartTime>k__BackingField offset 0x64
 __declspec(property(get=__get__previewStartTime_k__BackingField, put=__set__previewStartTime_k__BackingField)) float_t  _previewStartTime_k__BackingField;

/// @brief Field <previewDuration>k__BackingField offset 0x68
 __declspec(property(get=__get__previewDuration_k__BackingField, put=__set__previewDuration_k__BackingField)) float_t  _previewDuration_k__BackingField;

/// @brief Field <environmentInfo>k__BackingField offset 0x70
 __declspec(property(get=__get__environmentInfo_k__BackingField, put=__set__environmentInfo_k__BackingField)) ::GlobalNamespace::EnvironmentInfoSO*  _environmentInfo_k__BackingField;

/// @brief Field <allDirectionsEnvironmentInfo>k__BackingField offset 0x78
 __declspec(property(get=__get__allDirectionsEnvironmentInfo_k__BackingField, put=__set__allDirectionsEnvironmentInfo_k__BackingField)) ::GlobalNamespace::EnvironmentInfoSO*  _allDirectionsEnvironmentInfo_k__BackingField;

/// @brief Field <environmentInfos>k__BackingField offset 0x80
 __declspec(property(get=__get__environmentInfos_k__BackingField, put=__set__environmentInfos_k__BackingField)) ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  _environmentInfos_k__BackingField;

/// @brief Field <defaultCoverImage>k__BackingField offset 0x88
 __declspec(property(get=__get__defaultCoverImage_k__BackingField, put=__set__defaultCoverImage_k__BackingField)) ::UnityEngine::Sprite*  _defaultCoverImage_k__BackingField;

/// @brief Field <previewDifficultyBeatmapSets>k__BackingField offset 0x90
 __declspec(property(get=__get__previewDifficultyBeatmapSets_k__BackingField, put=__set__previewDifficultyBeatmapSets_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  _previewDifficultyBeatmapSets_k__BackingField;

/// @brief Field <beatmapOverrideColorSchemes>k__BackingField offset 0x98
 __declspec(property(get=__get__beatmapOverrideColorSchemes_k__BackingField, put=__set__beatmapOverrideColorSchemes_k__BackingField)) ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  _beatmapOverrideColorSchemes_k__BackingField;

/// @brief Field <contentRating>k__BackingField offset 0xa0
 __declspec(property(get=__get__contentRating_k__BackingField, put=__set__contentRating_k__BackingField)) ::GlobalNamespace::PlayerSensitivityFlag  _contentRating_k__BackingField;

/// @brief Field _coverImage offset 0xa8
 __declspec(property(get=__get__coverImage, put=__set__coverImage)) ::UnityEngine::Sprite*  _coverImage;

 __declspec(property(get=get_spriteAsyncLoader)) ::GlobalNamespace::ISpriteAsyncLoader*  spriteAsyncLoader;

 __declspec(property(get=get_standardLevelInfoSaveData)) ::GlobalNamespace::StandardLevelInfoSaveData*  standardLevelInfoSaveData;

 __declspec(property(get=get_customLevelPath)) ::StringW  customLevelPath;

 __declspec(property(get=get_levelID)) ::StringW  levelID;

 __declspec(property(get=get_songName)) ::StringW  songName;

 __declspec(property(get=get_songSubName)) ::StringW  songSubName;

 __declspec(property(get=get_songAuthorName)) ::StringW  songAuthorName;

 __declspec(property(get=get_levelAuthorName)) ::StringW  levelAuthorName;

 __declspec(property(get=get_beatsPerMinute)) float_t  beatsPerMinute;

 __declspec(property(get=get_songTimeOffset)) float_t  songTimeOffset;

 __declspec(property(get=get_songDuration)) float_t  songDuration;

 __declspec(property(get=get_shuffle)) float_t  shuffle;

 __declspec(property(get=get_shufflePeriod)) float_t  shufflePeriod;

 __declspec(property(get=get_previewStartTime)) float_t  previewStartTime;

 __declspec(property(get=get_previewDuration)) float_t  previewDuration;

 __declspec(property(get=get_environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo;

 __declspec(property(get=get_allDirectionsEnvironmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  allDirectionsEnvironmentInfo;

 __declspec(property(get=get_environmentInfos)) ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  environmentInfos;

 __declspec(property(get=get_defaultCoverImage)) ::UnityEngine::Sprite*  defaultCoverImage;

 __declspec(property(get=get_previewDifficultyBeatmapSets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  previewDifficultyBeatmapSets;

 __declspec(property(get=get_songPreviewAudioClipPath)) ::StringW  songPreviewAudioClipPath;

 __declspec(property(get=get_beatmapOverrideColorSchemes)) ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  beatmapOverrideColorSchemes;

 __declspec(property(get=get_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  contentRating;

/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr operator  ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
constexpr operator  ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*() noexcept;

constexpr void __set__spriteAsyncLoader_k__BackingField(::GlobalNamespace::ISpriteAsyncLoader*  value) ;

constexpr ::GlobalNamespace::ISpriteAsyncLoader* __get__spriteAsyncLoader_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISpriteAsyncLoader*> __get__spriteAsyncLoader_k__BackingField() const;

constexpr void __set__standardLevelInfoSaveData_k__BackingField(::GlobalNamespace::StandardLevelInfoSaveData*  value) ;

constexpr ::GlobalNamespace::StandardLevelInfoSaveData* __get__standardLevelInfoSaveData_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelInfoSaveData*> __get__standardLevelInfoSaveData_k__BackingField() const;

constexpr void __set__customLevelPath_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__customLevelPath_k__BackingField() ;

constexpr ::StringW const& __get__customLevelPath_k__BackingField() const;

constexpr void __set__levelID_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__levelID_k__BackingField() ;

constexpr ::StringW const& __get__levelID_k__BackingField() const;

constexpr void __set__songName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__songName_k__BackingField() ;

constexpr ::StringW const& __get__songName_k__BackingField() const;

constexpr void __set__songSubName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__songSubName_k__BackingField() ;

constexpr ::StringW const& __get__songSubName_k__BackingField() const;

constexpr void __set__songAuthorName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__songAuthorName_k__BackingField() ;

constexpr ::StringW const& __get__songAuthorName_k__BackingField() const;

constexpr void __set__levelAuthorName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__levelAuthorName_k__BackingField() ;

constexpr ::StringW const& __get__levelAuthorName_k__BackingField() const;

constexpr void __set__beatsPerMinute_k__BackingField(float_t  value) ;

constexpr float_t& __get__beatsPerMinute_k__BackingField() ;

constexpr float_t const& __get__beatsPerMinute_k__BackingField() const;

constexpr void __set__songTimeOffset_k__BackingField(float_t  value) ;

constexpr float_t& __get__songTimeOffset_k__BackingField() ;

constexpr float_t const& __get__songTimeOffset_k__BackingField() const;

constexpr void __set__songDuration_k__BackingField(float_t  value) ;

constexpr float_t& __get__songDuration_k__BackingField() ;

constexpr float_t const& __get__songDuration_k__BackingField() const;

constexpr void __set__shuffle_k__BackingField(float_t  value) ;

constexpr float_t& __get__shuffle_k__BackingField() ;

constexpr float_t const& __get__shuffle_k__BackingField() const;

constexpr void __set__shufflePeriod_k__BackingField(float_t  value) ;

constexpr float_t& __get__shufflePeriod_k__BackingField() ;

constexpr float_t const& __get__shufflePeriod_k__BackingField() const;

constexpr void __set__previewStartTime_k__BackingField(float_t  value) ;

constexpr float_t& __get__previewStartTime_k__BackingField() ;

constexpr float_t const& __get__previewStartTime_k__BackingField() const;

constexpr void __set__previewDuration_k__BackingField(float_t  value) ;

constexpr float_t& __get__previewDuration_k__BackingField() ;

constexpr float_t const& __get__previewDuration_k__BackingField() const;

constexpr void __set__environmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__environmentInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__environmentInfo_k__BackingField() const;

constexpr void __set__allDirectionsEnvironmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__allDirectionsEnvironmentInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__allDirectionsEnvironmentInfo_k__BackingField() const;

constexpr void __set__environmentInfos_k__BackingField(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos_k__BackingField() const;

constexpr void __set__defaultCoverImage_k__BackingField(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__defaultCoverImage_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__defaultCoverImage_k__BackingField() const;

constexpr void __set__previewDifficultyBeatmapSets_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* __get__previewDifficultyBeatmapSets_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> __get__previewDifficultyBeatmapSets_k__BackingField() const;

constexpr void __set__beatmapOverrideColorSchemes_k__BackingField(::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>& __get__beatmapOverrideColorSchemes_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*> const& __get__beatmapOverrideColorSchemes_k__BackingField() const;

constexpr void __set__contentRating_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag  value) ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating_k__BackingField() ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating_k__BackingField() const;

constexpr void __set__coverImage(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__coverImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__coverImage() const;

/// @brief Method get_spriteAsyncLoader addr 0x234764c size 0x8 virtual false final false
inline ::GlobalNamespace::ISpriteAsyncLoader* get_spriteAsyncLoader() ;

/// @brief Method get_standardLevelInfoSaveData addr 0x2347654 size 0x8 virtual false final false
inline ::GlobalNamespace::StandardLevelInfoSaveData* get_standardLevelInfoSaveData() ;

/// @brief Method get_customLevelPath addr 0x234765c size 0x8 virtual false final false
inline ::StringW get_customLevelPath() ;

/// @brief Method get_levelID addr 0x2347664 size 0x8 virtual true final true
inline ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x234766c size 0x8 virtual true final true
inline ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x2347674 size 0x8 virtual true final true
inline ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x234767c size 0x8 virtual true final true
inline ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x2347684 size 0x8 virtual true final true
inline ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x234768c size 0x8 virtual true final true
inline float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x2347694 size 0x8 virtual true final true
inline float_t get_songTimeOffset() ;

/// @brief Method get_songDuration addr 0x234769c size 0x8 virtual true final true
inline float_t get_songDuration() ;

/// @brief Method get_shuffle addr 0x23476a4 size 0x8 virtual true final true
inline float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x23476ac size 0x8 virtual true final true
inline float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x23476b4 size 0x8 virtual true final true
inline float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x23476bc size 0x8 virtual true final true
inline float_t get_previewDuration() ;

/// @brief Method get_environmentInfo addr 0x23476c4 size 0x8 virtual true final true
inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x23476cc size 0x8 virtual true final true
inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x23476d4 size 0x8 virtual true final true
inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos() ;

/// @brief Method get_defaultCoverImage addr 0x23476dc size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_defaultCoverImage() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x23476e4 size 0x8 virtual true final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets() ;

/// @brief Method get_songPreviewAudioClipPath addr 0x23473d0 size 0x70 virtual true final true
inline ::StringW get_songPreviewAudioClipPath() ;

/// @brief Method get_beatmapOverrideColorSchemes addr 0x23476ec size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*> get_beatmapOverrideColorSchemes() ;

/// @brief Method get_contentRating addr 0x23476f4 size 0x8 virtual true final true
inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating() ;

/// @brief Method GetCoverImageAsync addr 0x23476fc size 0xfc virtual true final true
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::GlobalNamespace::CustomPreviewBeatmapLevel* New_ctor(::UnityEngine::Sprite*  defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData*  standardLevelInfoSaveData, ::StringW  customLevelPath, ::GlobalNamespace::ISpriteAsyncLoader*  spriteAsyncLoader, ::StringW  levelID, ::StringW  songName, ::StringW  songSubName, ::StringW  songAuthorName, ::StringW  levelAuthorName, float_t  beatsPerMinute, float_t  songTimeOffset, float_t  shuffle, float_t  shufflePeriod, float_t  previewStartTime, float_t  previewDuration, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::EnvironmentInfoSO*  allDirectionsEnvironmentInfo, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  environmentInfos, ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  beatmapOverrideColorSchemes, ::GlobalNamespace::PlayerSensitivityFlag  contentRating, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  previewDifficultyBeatmapSets) ;

/// @brief Method .ctor addr 0x2347508 size 0xf8 virtual false final false
inline void _ctor(::UnityEngine::Sprite*  defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData*  standardLevelInfoSaveData, ::StringW  customLevelPath, ::GlobalNamespace::ISpriteAsyncLoader*  spriteAsyncLoader, ::StringW  levelID, ::StringW  songName, ::StringW  songSubName, ::StringW  songAuthorName, ::StringW  levelAuthorName, float_t  beatsPerMinute, float_t  songTimeOffset, float_t  shuffle, float_t  shufflePeriod, float_t  previewStartTime, float_t  previewDuration, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, ::GlobalNamespace::EnvironmentInfoSO*  allDirectionsEnvironmentInfo, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  environmentInfos, ::ArrayW<::GlobalNamespace::ColorScheme*,::Array<::GlobalNamespace::ColorScheme*>*>  beatmapOverrideColorSchemes, ::GlobalNamespace::PlayerSensitivityFlag  contentRating, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  previewDifficultyBeatmapSets) ;

// Ctor Parameters [CppParam { name: "", ty: "CustomPreviewBeatmapLevel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPreviewBeatmapLevel(CustomPreviewBeatmapLevel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPreviewBeatmapLevel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPreviewBeatmapLevel(CustomPreviewBeatmapLevel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomPreviewBeatmapLevel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomPreviewBeatmapLevel, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomPreviewBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomPreviewBeatmapLevel*, "", "CustomPreviewBeatmapLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69, "", "CustomPreviewBeatmapLevel/<GetCoverImageAsync>d__69");
