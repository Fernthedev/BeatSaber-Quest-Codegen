#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoProjectionEffect)
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace GlobalNamespace {
class VideoProjectionDataModelSO;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class SongTimeSyncedVideoPlayer;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__GameplayVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__InitData;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __VideoProjectionDataModelSO__VideoClipWithId;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionEffect;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__GameplayVideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__InitData;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior;
}
namespace GlobalNamespace {
class __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionEffect);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0);
MARK_VAL_T(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4974))
// CS Name: ::VideoProjectionEffect::InitData*
class CORDL_TYPE __VideoProjectionEffect__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field previewBeatmapLevel offset 0x10
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

static inline ::GlobalNamespace::__VideoProjectionEffect__InitData* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x23b32f4 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VideoProjectionEffect__InitData(__VideoProjectionEffect__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VideoProjectionEffect__InitData(__VideoProjectionEffect__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VideoProjectionEffect__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4975))
// CS Name: ::VideoProjectionEffect::VideoProjectionBehavior::<>c__DisplayClass7_0*
class CORDL_TYPE __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field eventValue offset 0x10
 __declspec(property(get=__get_eventValue, put=__set_eventValue)) int32_t  eventValue;

constexpr void __set_eventValue(int32_t  value) ;

constexpr int32_t& __get_eventValue() ;

constexpr int32_t const& __get_eventValue() const;

static inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0* New_ctor() ;

/// @brief Method .ctor addr 0x23b3684 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <LoadVideoFromModel>b__0 addr 0x23b3720 size 0x24 virtual false final false
inline bool _LoadVideoFromModel_b__0(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*  clipWithId) ;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0(__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadPreviewCoverAsset>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4976))
// CS Name: ::VideoProjectionEffect::VideoProjectionBehavior::<LoadPreviewCoverAsset>d__8
struct CORDL_TYPE __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  value) ;

constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23b3744 size 0x2dc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23b3a20 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::VideoProjectionBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4977))
// CS Name: ::VideoProjectionEffect::VideoProjectionBehavior*
class CORDL_TYPE __VideoProjectionEffect__VideoProjectionBehavior : public ::System::Object {
public:
// Declarations
using _LoadPreviewCoverAsset_d__8 = ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8;

using __c__DisplayClass7_0 = ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field _eventValue offset 0x10
 __declspec(property(get=__get__eventValue, put=__set__eventValue)) int32_t  _eventValue;

/// @brief Field _videoClipHandle offset 0x18
 __declspec(property(get=__get__videoClipHandle, put=__set__videoClipHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>  _videoClipHandle;

/// @brief Field _model offset 0x38
 __declspec(property(get=__get__model, put=__set__model)) ::GlobalNamespace::VideoProjectionDataModelSO*  _model;

/// @brief Field _videoPlayer offset 0x40
 __declspec(property(get=__get__videoPlayer, put=__set__videoPlayer)) ::GlobalNamespace::SongTimeSyncedVideoPlayer*  _videoPlayer;

/// @brief Field _previewBeatmapLevel offset 0x48
 __declspec(property(get=__get__previewBeatmapLevel, put=__set__previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  _previewBeatmapLevel;

constexpr void __set__eventValue(int32_t  value) ;

constexpr int32_t& __get__eventValue() ;

constexpr int32_t const& __get__eventValue() const;

constexpr void __set__videoClipHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*>& __get__videoClipHandle() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::Video::VideoClip*> const& __get__videoClipHandle() const;

constexpr void __set__model(::GlobalNamespace::VideoProjectionDataModelSO*  value) ;

constexpr ::GlobalNamespace::VideoProjectionDataModelSO* __get__model() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VideoProjectionDataModelSO*> __get__model() const;

constexpr void __set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer*  value) ;

constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer* __get__videoPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeSyncedVideoPlayer*> __get__videoPlayer() const;

constexpr void __set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get__previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get__previewBeatmapLevel() const;

static inline ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* New_ctor(::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x23b331c size 0x3c virtual false final false
inline void _ctor(::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method Dispose addr 0x23b3358 size 0xb0 virtual true final false
inline void Dispose() ;

/// @brief Method LoadVideoFromModel addr 0x23b3408 size 0x27c virtual false final false
inline void LoadVideoFromModel(int32_t  eventValue) ;

/// @brief Method LoadPreviewCoverAsset addr 0x23b368c size 0x94 virtual false final false
inline void LoadPreviewCoverAsset() ;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VideoProjectionEffect__VideoProjectionBehavior(__VideoProjectionEffect__VideoProjectionBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__VideoProjectionBehavior", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VideoProjectionEffect__VideoProjectionBehavior(__VideoProjectionEffect__VideoProjectionBehavior const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VideoProjectionEffect__VideoProjectionBehavior()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapEditorVideoProjectionBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4977))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4978))
// CS Name: ::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior*
class CORDL_TYPE __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior : public ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior)]{};

/// @brief Field _beatmapCallbacksController offset 0x50
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _callbackWrapper offset 0x58
 __declspec(property(get=__get__callbackWrapper, put=__set__callbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _callbackWrapper;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__callbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__callbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__callbackWrapper() const;

static inline ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior* New_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x23b30a8 size 0x22c virtual false final false
inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method Dispose addr 0x23b3a2c size 0x28 virtual true final false
inline void Dispose() ;

/// @brief Method HandleBeatmapEvent addr 0x23b3a54 size 0xec virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  data) ;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior(__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameplayVideoProjectionBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4977))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4979))
// CS Name: ::VideoProjectionEffect::GameplayVideoProjectionBehavior*
class CORDL_TYPE __VideoProjectionEffect__GameplayVideoProjectionBehavior : public ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior)]{};

static inline ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior* New_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x23b2f70 size 0x138 virtual false final false
inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO*  dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer*  videoPlayer, ::GlobalNamespace::BasicBeatmapEventType  videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__GameplayVideoProjectionBehavior", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VideoProjectionEffect__GameplayVideoProjectionBehavior(__VideoProjectionEffect__GameplayVideoProjectionBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionEffect__GameplayVideoProjectionBehavior", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VideoProjectionEffect__GameplayVideoProjectionBehavior(__VideoProjectionEffect__GameplayVideoProjectionBehavior const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VideoProjectionEffect__GameplayVideoProjectionBehavior()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::VideoProjectionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4980))
// CS Name: ::VideoProjectionEffect*
class CORDL_TYPE VideoProjectionEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GameplayVideoProjectionBehavior = ::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior;

using BeatmapEditorVideoProjectionBehavior = ::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior;

using VideoProjectionBehavior = ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior;

using InitData = ::GlobalNamespace::__VideoProjectionEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _videoProjectionDataModel offset 0x18
 __declspec(property(get=__get__videoProjectionDataModel, put=__set__videoProjectionDataModel)) ::GlobalNamespace::VideoProjectionDataModelSO*  _videoProjectionDataModel;

/// @brief Field _videoPlayer offset 0x20
 __declspec(property(get=__get__videoPlayer, put=__set__videoPlayer)) ::GlobalNamespace::SongTimeSyncedVideoPlayer*  _videoPlayer;

/// @brief Field _videoEventType offset 0x28
 __declspec(property(get=__get__videoEventType, put=__set__videoEventType)) ::GlobalNamespace::BasicBeatmapEventType  _videoEventType;

/// @brief Field _initData offset 0x30
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__VideoProjectionEffect__InitData*  _initData;

/// @brief Field _environmentContext offset 0x38
 __declspec(property(get=__get__environmentContext, put=__set__environmentContext)) ::GlobalNamespace::EnvironmentContext  _environmentContext;

/// @brief Field _beatmapData offset 0x40
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  _beatmapData;

/// @brief Field _beatmapCallbacksController offset 0x48
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _behavior offset 0x50
 __declspec(property(get=__get__behavior, put=__set__behavior)) ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  _behavior;

constexpr void __set__videoProjectionDataModel(::GlobalNamespace::VideoProjectionDataModelSO*  value) ;

constexpr ::GlobalNamespace::VideoProjectionDataModelSO* __get__videoProjectionDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VideoProjectionDataModelSO*> __get__videoProjectionDataModel() const;

constexpr void __set__videoPlayer(::GlobalNamespace::SongTimeSyncedVideoPlayer*  value) ;

constexpr ::GlobalNamespace::SongTimeSyncedVideoPlayer* __get__videoPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongTimeSyncedVideoPlayer*> __get__videoPlayer() const;

constexpr void __set__videoEventType(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__videoEventType() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__videoEventType() const;

constexpr void __set__initData(::GlobalNamespace::__VideoProjectionEffect__InitData*  value) ;

constexpr ::GlobalNamespace::__VideoProjectionEffect__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__InitData*> __get__initData() const;

constexpr void __set__environmentContext(::GlobalNamespace::EnvironmentContext  value) ;

constexpr ::GlobalNamespace::EnvironmentContext& __get__environmentContext() ;

constexpr ::GlobalNamespace::EnvironmentContext const& __get__environmentContext() const;

constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get__beatmapData() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__behavior(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*  value) ;

constexpr ::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior* __get__behavior() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*> __get__behavior() const;

/// @brief Method Start addr 0x23b2e64 size 0x10c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23b32d4 size 0x18 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::VideoProjectionEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23b32ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoProjectionEffect(VideoProjectionEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoProjectionEffect(VideoProjectionEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VideoProjectionEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionEffect, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect*, "", "VideoProjectionEffect");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__BeatmapEditorVideoProjectionBehavior*, "", "VideoProjectionEffect/BeatmapEditorVideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__GameplayVideoProjectionBehavior*, "", "VideoProjectionEffect/GameplayVideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__InitData*, "", "VideoProjectionEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior*, "", "VideoProjectionEffect/VideoProjectionBehavior");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior____c__DisplayClass7_0*, "", "VideoProjectionEffect/VideoProjectionBehavior/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionEffect__VideoProjectionBehavior___LoadPreviewCoverAsset_d__8, "", "VideoProjectionEffect/VideoProjectionBehavior/<LoadPreviewCoverAsset>d__8");
