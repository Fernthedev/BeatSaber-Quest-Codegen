#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PreviewBeatmapLevelSO)
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60;
}
namespace GlobalNamespace {
struct __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviewBeatmapLevelSO);
MARK_VAL_T(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60);
MARK_VAL_T(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59);
// Type: ::<GetPreviewAudioClipAsync>d__59
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4405))
// CS Name: ::PreviewBeatmapLevelSO::<GetPreviewAudioClipAsync>d__59
struct CORDL_TYPE __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  __t__builder;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PreviewBeatmapLevelSO*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> const& __get___t__builder() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___4__this(::GlobalNamespace::PreviewBeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::PreviewBeatmapLevelSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelSO*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x234bdec size 0x230 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x234c01c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PreviewBeatmapLevelSO*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
constexpr __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::PreviewBeatmapLevelSO*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetCoverImageAsync>d__60
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4406))
// CS Name: ::PreviewBeatmapLevelSO::<GetCoverImageAsync>d__60
struct CORDL_TYPE __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PreviewBeatmapLevelSO*  __4__this;

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

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___4__this(::GlobalNamespace::PreviewBeatmapLevelSO*  value) ;

constexpr ::GlobalNamespace::PreviewBeatmapLevelSO* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelSO*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x234c074 size 0x230 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x234c2a4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PreviewBeatmapLevelSO*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::PreviewBeatmapLevelSO*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreviewBeatmapLevelSO___GetCoverImageAsync_d__60()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PreviewBeatmapLevelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4407))
// CS Name: ::PreviewBeatmapLevelSO*
class CORDL_TYPE PreviewBeatmapLevelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _GetCoverImageAsync_d__60 = ::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60;

using _GetPreviewAudioClipAsync_d__59 = ::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _levelID offset 0x18
 __declspec(property(get=__get__levelID, put=__set__levelID)) ::StringW  _levelID;

/// @brief Field _songName offset 0x20
 __declspec(property(get=__get__songName, put=__set__songName)) ::StringW  _songName;

/// @brief Field _songSubName offset 0x28
 __declspec(property(get=__get__songSubName, put=__set__songSubName)) ::StringW  _songSubName;

/// @brief Field _songAuthorName offset 0x30
 __declspec(property(get=__get__songAuthorName, put=__set__songAuthorName)) ::StringW  _songAuthorName;

/// @brief Field _levelAuthorName offset 0x38
 __declspec(property(get=__get__levelAuthorName, put=__set__levelAuthorName)) ::StringW  _levelAuthorName;

/// @brief Field _previewAudioClip offset 0x40
 __declspec(property(get=__get__previewAudioClip, put=__set__previewAudioClip)) ::UnityEngine::AudioClip*  _previewAudioClip;

/// @brief Field _beatsPerMinute offset 0x48
 __declspec(property(get=__get__beatsPerMinute, put=__set__beatsPerMinute)) float_t  _beatsPerMinute;

/// @brief Field _songTimeOffset offset 0x4c
 __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset)) float_t  _songTimeOffset;

/// @brief Field _shuffle offset 0x50
 __declspec(property(get=__get__shuffle, put=__set__shuffle)) float_t  _shuffle;

/// @brief Field _shufflePeriod offset 0x54
 __declspec(property(get=__get__shufflePeriod, put=__set__shufflePeriod)) float_t  _shufflePeriod;

/// @brief Field _previewStartTime offset 0x58
 __declspec(property(get=__get__previewStartTime, put=__set__previewStartTime)) float_t  _previewStartTime;

/// @brief Field _previewDuration offset 0x5c
 __declspec(property(get=__get__previewDuration, put=__set__previewDuration)) float_t  _previewDuration;

/// @brief Field _songDuration offset 0x60
 __declspec(property(get=__get__songDuration, put=__set__songDuration)) float_t  _songDuration;

/// @brief Field _coverImage offset 0x68
 __declspec(property(get=__get__coverImage, put=__set__coverImage)) ::UnityEngine::Sprite*  _coverImage;

/// @brief Field _environmentInfo offset 0x70
 __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  _environmentInfo;

/// @brief Field _allDirectionsEnvironmentInfo offset 0x78
 __declspec(property(get=__get__allDirectionsEnvironmentInfo, put=__set__allDirectionsEnvironmentInfo)) ::GlobalNamespace::EnvironmentInfoSO*  _allDirectionsEnvironmentInfo;

/// @brief Field _environmentInfos offset 0x80
 __declspec(property(get=__get__environmentInfos, put=__set__environmentInfos)) ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  _environmentInfos;

/// @brief Field _previewDifficultyBeatmapSets offset 0x88
 __declspec(property(get=__get__previewDifficultyBeatmapSets, put=__set__previewDifficultyBeatmapSets)) ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*,::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>  _previewDifficultyBeatmapSets;

/// @brief Field _contentRating offset 0x90
 __declspec(property(get=__get__contentRating, put=__set__contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  _contentRating;

/// @brief Field _ignore360MovementBeatmaps offset 0x94
 __declspec(property(get=__get__ignore360MovementBeatmaps, put=__set__ignore360MovementBeatmaps)) bool  _ignore360MovementBeatmaps;

/// @brief Field _no360MovementPreviewDifficultyBeatmapSets offset 0x98
 __declspec(property(get=__get__no360MovementPreviewDifficultyBeatmapSets, put=__set__no360MovementPreviewDifficultyBeatmapSets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  _no360MovementPreviewDifficultyBeatmapSets;

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

 __declspec(property(get=get_songPreviewAudioClip)) ::UnityEngine::AudioClip*  songPreviewAudioClip;

 __declspec(property(get=get_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag  contentRating;

 __declspec(property(get=get_previewDifficultyBeatmapSets)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  previewDifficultyBeatmapSets;

/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr operator  ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr operator  ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

constexpr void __set__levelID(::StringW  value) ;

constexpr ::StringW& __get__levelID() ;

constexpr ::StringW const& __get__levelID() const;

constexpr void __set__songName(::StringW  value) ;

constexpr ::StringW& __get__songName() ;

constexpr ::StringW const& __get__songName() const;

constexpr void __set__songSubName(::StringW  value) ;

constexpr ::StringW& __get__songSubName() ;

constexpr ::StringW const& __get__songSubName() const;

constexpr void __set__songAuthorName(::StringW  value) ;

constexpr ::StringW& __get__songAuthorName() ;

constexpr ::StringW const& __get__songAuthorName() const;

constexpr void __set__levelAuthorName(::StringW  value) ;

constexpr ::StringW& __get__levelAuthorName() ;

constexpr ::StringW const& __get__levelAuthorName() const;

constexpr void __set__previewAudioClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__previewAudioClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__previewAudioClip() const;

constexpr void __set__beatsPerMinute(float_t  value) ;

constexpr float_t& __get__beatsPerMinute() ;

constexpr float_t const& __get__beatsPerMinute() const;

constexpr void __set__songTimeOffset(float_t  value) ;

constexpr float_t& __get__songTimeOffset() ;

constexpr float_t const& __get__songTimeOffset() const;

constexpr void __set__shuffle(float_t  value) ;

constexpr float_t& __get__shuffle() ;

constexpr float_t const& __get__shuffle() const;

constexpr void __set__shufflePeriod(float_t  value) ;

constexpr float_t& __get__shufflePeriod() ;

constexpr float_t const& __get__shufflePeriod() const;

constexpr void __set__previewStartTime(float_t  value) ;

constexpr float_t& __get__previewStartTime() ;

constexpr float_t const& __get__previewStartTime() const;

constexpr void __set__previewDuration(float_t  value) ;

constexpr float_t& __get__previewDuration() ;

constexpr float_t const& __get__previewDuration() const;

constexpr void __set__songDuration(float_t  value) ;

constexpr float_t& __get__songDuration() ;

constexpr float_t const& __get__songDuration() const;

constexpr void __set__coverImage(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__coverImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__coverImage() const;

constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__environmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__environmentInfo() const;

constexpr void __set__allDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO* __get__allDirectionsEnvironmentInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> __get__allDirectionsEnvironmentInfo() const;

constexpr void __set__environmentInfos(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos() ;

constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos() const;

constexpr void __set__previewDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*,::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*,::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>& __get__previewDifficultyBeatmapSets() ;

constexpr ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*,::Array<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const& __get__previewDifficultyBeatmapSets() const;

constexpr void __set__contentRating(::GlobalNamespace::PlayerSensitivityFlag  value) ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating() ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating() const;

constexpr void __set__ignore360MovementBeatmaps(bool  value) ;

constexpr bool& __get__ignore360MovementBeatmaps() ;

constexpr bool const& __get__ignore360MovementBeatmaps() const;

constexpr void __set__no360MovementPreviewDifficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* __get__no360MovementPreviewDifficultyBeatmapSets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> __get__no360MovementPreviewDifficultyBeatmapSets() const;

/// @brief Method get_levelID addr 0x234baf8 size 0x8 virtual true final true
inline ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x234bb00 size 0x8 virtual true final true
inline ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x234bb08 size 0x8 virtual true final true
inline ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x234bb10 size 0x8 virtual true final true
inline ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x234bb18 size 0x8 virtual true final true
inline ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x234bb20 size 0x8 virtual true final true
inline float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x234bb28 size 0x8 virtual true final true
inline float_t get_songTimeOffset() ;

/// @brief Method get_songDuration addr 0x234bb30 size 0x8 virtual true final true
inline float_t get_songDuration() ;

/// @brief Method get_shuffle addr 0x234bb38 size 0x8 virtual true final true
inline float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x234bb40 size 0x8 virtual true final true
inline float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x234bb48 size 0x8 virtual true final true
inline float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x234bb50 size 0x8 virtual true final true
inline float_t get_previewDuration() ;

/// @brief Method get_environmentInfo addr 0x234bb58 size 0x8 virtual true final true
inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x234bb60 size 0x8 virtual true final true
inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x234bb68 size 0x8 virtual true final true
inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*,::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos() ;

/// @brief Method get_songPreviewAudioClip addr 0x234bb70 size 0x8 virtual true final true
inline ::UnityEngine::AudioClip* get_songPreviewAudioClip() ;

/// @brief Method get_contentRating addr 0x234bb78 size 0x8 virtual true final true
inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x234bb80 size 0x1c virtual true final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets() ;

/// @brief Method OnEnable addr 0x234bb9c size 0x28 virtual true final false
inline void OnEnable() ;

/// @brief Method InitData addr 0x234bbc4 size 0x20 virtual false final false
inline void InitData() ;

/// @brief Method GetPreviewAudioClipAsync addr 0x234bbe4 size 0xfc virtual false final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetCoverImageAsync addr 0x234bce0 size 0xfc virtual true final true
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::GlobalNamespace::PreviewBeatmapLevelSO* New_ctor() ;

/// @brief Method .ctor addr 0x234bddc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreviewBeatmapLevelSO(PreviewBeatmapLevelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreviewBeatmapLevelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreviewBeatmapLevelSO(PreviewBeatmapLevelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PreviewBeatmapLevelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewBeatmapLevelSO, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviewBeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewBeatmapLevelSO*, "", "PreviewBeatmapLevelSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PreviewBeatmapLevelSO___GetCoverImageAsync_d__60, "", "PreviewBeatmapLevelSO/<GetCoverImageAsync>d__60");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PreviewBeatmapLevelSO___GetPreviewAudioClipAsync_d__59, "", "PreviewBeatmapLevelSO/<GetPreviewAudioClipAsync>d__59");
