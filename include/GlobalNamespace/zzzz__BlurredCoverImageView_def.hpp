#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlurredCoverImageView)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __BlurredCoverImageView___SetTextureAsync_d__6;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurredCoverImageView;
}
namespace GlobalNamespace {
struct __BlurredCoverImageView___SetTextureAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlurredCoverImageView);
MARK_VAL_T(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6);
// Type: ::<SetTextureAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5774))
// CS Name: ::BlurredCoverImageView::<SetTextureAsync>d__6
struct CORDL_TYPE __BlurredCoverImageView___SetTextureAsync_d__6 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BlurredCoverImageView*  __4__this;

/// @brief Field level offset 0x30
 __declspec(property(get=__get_level, put=__set_level)) ::GlobalNamespace::IPreviewBeatmapLevel*  level;

/// @brief Field <cancellationToken>5__2 offset 0x38
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BlurredCoverImageView*  value) ;

constexpr ::GlobalNamespace::BlurredCoverImageView* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlurredCoverImageView*> __get___4__this() const;

constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_level() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_level() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22dfbd8 size 0x808 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22e03e0 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BlurredCoverImageView*", modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __BlurredCoverImageView___SetTextureAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::BlurredCoverImageView*  __4__this, ::GlobalNamespace::IPreviewBeatmapLevel*  level, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BlurredCoverImageView___SetTextureAsync_d__6(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BlurredCoverImageView___SetTextureAsync_d__6()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BlurredCoverImageView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5775))
// CS Name: ::BlurredCoverImageView*
class CORDL_TYPE BlurredCoverImageView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetTextureAsync_d__6 = ::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _coverImage offset 0x18
 __declspec(property(get=__get__coverImage, put=__set__coverImage)) ::HMUI::ImageView*  _coverImage;

/// @brief Field _kawaseBlurRenderer offset 0x20
 __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer)) ::GlobalNamespace::KawaseBlurRendererSO*  _kawaseBlurRenderer;

/// @brief Field _settingTextureForLevelId offset 0x28
 __declspec(property(get=__get__settingTextureForLevelId, put=__set__settingTextureForLevelId)) ::StringW  _settingTextureForLevelId;

/// @brief Field _cancellationTokenSource offset 0x30
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _blurredCoverTexture offset 0x38
 __declspec(property(get=__get__blurredCoverTexture, put=__set__blurredCoverTexture)) ::UnityEngine::Texture2D*  _blurredCoverTexture;

constexpr void __set__coverImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__coverImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__coverImage() const;

constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO*  value) ;

constexpr ::GlobalNamespace::KawaseBlurRendererSO* __get__kawaseBlurRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> __get__kawaseBlurRenderer() const;

constexpr void __set__settingTextureForLevelId(::StringW  value) ;

constexpr ::StringW& __get__settingTextureForLevelId() ;

constexpr ::StringW const& __get__settingTextureForLevelId() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

constexpr void __set__blurredCoverTexture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get__blurredCoverTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get__blurredCoverTexture() const;

/// @brief Method OnDestroy addr 0x22dfa8c size 0xa4 virtual false final false
inline void OnDestroy() ;

/// @brief Method SetTextureAsync addr 0x22dfb30 size 0xa0 virtual false final false
inline void SetTextureAsync(::GlobalNamespace::IPreviewBeatmapLevel*  level) ;

static inline ::GlobalNamespace::BlurredCoverImageView* New_ctor() ;

/// @brief Method .ctor addr 0x22dfbd0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlurredCoverImageView(BlurredCoverImageView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlurredCoverImageView(BlurredCoverImageView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BlurredCoverImageView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlurredCoverImageView, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlurredCoverImageView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlurredCoverImageView*, "", "BlurredCoverImageView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BlurredCoverImageView___SetTextureAsync_d__6, "", "BlurredCoverImageView/<SetTextureAsync>d__6");
