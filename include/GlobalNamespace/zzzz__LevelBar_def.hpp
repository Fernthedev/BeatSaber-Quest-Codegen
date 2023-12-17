#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelBar)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct __LevelBar___Setup_d__17;
}
namespace HMUI {
class ImageView;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
struct __LevelBar___Setup_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelBar);
MARK_VAL_T(::GlobalNamespace::__LevelBar___Setup_d__17);
// Type: ::<Setup>d__17
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5790))
// CS Name: ::LevelBar::<Setup>d__17
struct CORDL_TYPE __LevelBar___Setup_d__17 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelBar*  __4__this;

/// @brief Field previewBeatmapLevel offset 0x30
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

/// @brief Field beatmapDifficulty offset 0x38
 __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty;

/// @brief Field beatmapCharacteristic offset 0x40
 __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic;

/// @brief Field <cancellationToken>5__2 offset 0x48
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LevelBar*  value) ;

constexpr ::GlobalNamespace::LevelBar* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> __get___4__this() const;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get_beatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get_beatmapCharacteristic() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22e3230 size 0x940 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22e3b70 size 0x100c virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelBar*", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __LevelBar___Setup_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LevelBar*  __4__this, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelBar___Setup_d__17(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelBar___Setup_d__17()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelBar___Setup_d__17, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelBar
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5791))
// CS Name: ::LevelBar*
class CORDL_TYPE LevelBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Setup_d__17 = ::GlobalNamespace::__LevelBar___Setup_d__17;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _songArtworkImageView offset 0x18
 __declspec(property(get=__get__songArtworkImageView, put=__set__songArtworkImageView)) ::HMUI::ImageView*  _songArtworkImageView;

/// @brief Field _songNameText offset 0x20
 __declspec(property(get=__get__songNameText, put=__set__songNameText)) ::TMPro::TextMeshProUGUI*  _songNameText;

/// @brief Field _authorNameText offset 0x28
 __declspec(property(get=__get__authorNameText, put=__set__authorNameText)) ::TMPro::TextMeshProUGUI*  _authorNameText;

/// @brief Field _showSongSubName offset 0x30
 __declspec(property(get=__get__showSongSubName, put=__set__showSongSubName)) bool  _showSongSubName;

/// @brief Field _singleLineSongInfoContainer offset 0x38
 __declspec(property(get=__get__singleLineSongInfoContainer, put=__set__singleLineSongInfoContainer)) ::UnityEngine::GameObject*  _singleLineSongInfoContainer;

/// @brief Field _multiLineSongInfoContainer offset 0x40
 __declspec(property(get=__get__multiLineSongInfoContainer, put=__set__multiLineSongInfoContainer)) ::UnityEngine::GameObject*  _multiLineSongInfoContainer;

/// @brief Field _multiLineSongNameText offset 0x48
 __declspec(property(get=__get__multiLineSongNameText, put=__set__multiLineSongNameText)) ::TMPro::TextMeshProUGUI*  _multiLineSongNameText;

/// @brief Field _multiLineAuthorNameText offset 0x50
 __declspec(property(get=__get__multiLineAuthorNameText, put=__set__multiLineAuthorNameText)) ::TMPro::TextMeshProUGUI*  _multiLineAuthorNameText;

/// @brief Field _showDifficultyAndCharacteristic offset 0x58
 __declspec(property(get=__get__showDifficultyAndCharacteristic, put=__set__showDifficultyAndCharacteristic)) bool  _showDifficultyAndCharacteristic;

/// @brief Field _difficultyText offset 0x60
 __declspec(property(get=__get__difficultyText, put=__set__difficultyText)) ::TMPro::TextMeshProUGUI*  _difficultyText;

/// @brief Field _characteristicIconImageView offset 0x68
 __declspec(property(get=__get__characteristicIconImageView, put=__set__characteristicIconImageView)) ::HMUI::ImageView*  _characteristicIconImageView;

/// @brief Field _useArtworkBackground offset 0x70
 __declspec(property(get=__get__useArtworkBackground, put=__set__useArtworkBackground)) bool  _useArtworkBackground;

/// @brief Field _artworkBackgroundImage offset 0x78
 __declspec(property(get=__get__artworkBackgroundImage, put=__set__artworkBackgroundImage)) ::HMUI::ImageView*  _artworkBackgroundImage;

/// @brief Field _cancellationTokenSource offset 0x80
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

 __declspec(property(put=set_hide)) bool  hide;

constexpr void __set__songArtworkImageView(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__songArtworkImageView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__songArtworkImageView() const;

constexpr void __set__songNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__songNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__songNameText() const;

constexpr void __set__authorNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__authorNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__authorNameText() const;

constexpr void __set__showSongSubName(bool  value) ;

constexpr bool& __get__showSongSubName() ;

constexpr bool const& __get__showSongSubName() const;

constexpr void __set__singleLineSongInfoContainer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__singleLineSongInfoContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__singleLineSongInfoContainer() const;

constexpr void __set__multiLineSongInfoContainer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__multiLineSongInfoContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__multiLineSongInfoContainer() const;

constexpr void __set__multiLineSongNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__multiLineSongNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__multiLineSongNameText() const;

constexpr void __set__multiLineAuthorNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__multiLineAuthorNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__multiLineAuthorNameText() const;

constexpr void __set__showDifficultyAndCharacteristic(bool  value) ;

constexpr bool& __get__showDifficultyAndCharacteristic() ;

constexpr bool const& __get__showDifficultyAndCharacteristic() const;

constexpr void __set__difficultyText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__difficultyText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__difficultyText() const;

constexpr void __set__characteristicIconImageView(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__characteristicIconImageView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__characteristicIconImageView() const;

constexpr void __set__useArtworkBackground(bool  value) ;

constexpr bool& __get__useArtworkBackground() ;

constexpr bool const& __get__useArtworkBackground() const;

constexpr void __set__artworkBackgroundImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__artworkBackgroundImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__artworkBackgroundImage() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

/// @brief Method set_hide addr 0x22dfa2c size 0x2c virtual false final false
inline void set_hide(bool  value) ;

/// @brief Method Setup addr 0x22e3208 size 0xc virtual false final false
inline void Setup(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel) ;

/// @brief Method Setup addr 0x22cff58 size 0xbc virtual false final false
inline void Setup(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty) ;

/// @brief Method OnDestroy addr 0x22e3214 size 0x14 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::LevelBar* New_ctor() ;

/// @brief Method .ctor addr 0x22e3228 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelBar(LevelBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelBar(LevelBar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelBar()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelBar, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelBar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelBar*, "", "LevelBar");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelBar___Setup_d__17, "", "LevelBar/<Setup>d__17");
