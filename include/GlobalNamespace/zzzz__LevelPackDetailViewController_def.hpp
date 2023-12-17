#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelPackDetailViewController)
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class __LevelPackDetailViewController____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController__ContentType;
}
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class Sprite;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
class __LevelPackDetailViewController____c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
struct __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController__ContentType);
MARK_REF_PTR_T(::GlobalNamespace::LevelPackDetailViewController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21);
MARK_VAL_T(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19);
// Type: ::ContentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5665))
// CS Name: ::LevelPackDetailViewController::ContentType
struct CORDL_TYPE __LevelPackDetailViewController__ContentType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____LevelPackDetailViewController__ContentType_Unwrapped
enum struct ____LevelPackDetailViewController__ContentType_Unwrapped : int32_t {
__E_Loading = static_cast<int32_t>(0x0),
__E_Owned = static_cast<int32_t>(0x1),
__E_Buy = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Loading value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Loading;

/// @brief Field Owned value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Owned;

/// @brief Field Buy value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Buy;

/// @brief Field Error value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__LevelPackDetailViewController__ContentType const Error;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____LevelPackDetailViewController__ContentType_Unwrapped () const noexcept {
return std::bit_cast<____LevelPackDetailViewController__ContentType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LevelPackDetailViewController__ContentType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelPackDetailViewController__ContentType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelPackDetailViewController__ContentType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController__ContentType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5666))
// CS Name: ::LevelPackDetailViewController::<>c__DisplayClass16_0*
class CORDL_TYPE __LevelPackDetailViewController____c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field handleDidPressRefreshButton offset 0x10
 __declspec(property(get=__get_handleDidPressRefreshButton, put=__set_handleDidPressRefreshButton)) ::System::Action*  handleDidPressRefreshButton;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelPackDetailViewController*  __4__this;

constexpr void __set_handleDidPressRefreshButton(::System::Action*  value) ;

constexpr ::System::Action* __get_handleDidPressRefreshButton() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_handleDidPressRefreshButton() const;

constexpr void __set___4__this(::GlobalNamespace::LevelPackDetailViewController*  value) ;

constexpr ::GlobalNamespace::LevelPackDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> __get___4__this() const;

static inline ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0* New_ctor() ;

/// @brief Method .ctor addr 0x22bff80 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__1 addr 0x22c06e4 size 0x2c virtual false final false
inline void _DidActivate_b__1() ;

/// @brief Method <DidActivate>b__2 addr 0x22c0710 size 0x2c virtual false final false
inline void _DidActivate_b__2() ;

// Ctor Parameters [CppParam { name: "", ty: "__LevelPackDetailViewController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LevelPackDetailViewController____c__DisplayClass16_0(__LevelPackDetailViewController____c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LevelPackDetailViewController____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LevelPackDetailViewController____c__DisplayClass16_0(__LevelPackDetailViewController____c__DisplayClass16_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LevelPackDetailViewController____c__DisplayClass16_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5667))
// CS Name: ::LevelPackDetailViewController::<RefreshAvailabilityAsync>d__19
struct CORDL_TYPE __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelPackDetailViewController*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LevelPackDetailViewController*  value) ;

constexpr ::GlobalNamespace::LevelPackDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22c073c size 0x490 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c0bcc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelPackDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LevelPackDetailViewController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelPackDetailViewController___RefreshAvailabilityAsync_d__19()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__21
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5668))
// CS Name: ::LevelPackDetailViewController::<OpenLevelPackProductStoreAsync>d__21
struct CORDL_TYPE __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::LevelPackDetailViewController*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::LevelPackDetailViewController*  value) ;

constexpr ::GlobalNamespace::LevelPackDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22c0bd8 size 0x3f4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c0fcc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelPackDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::LevelPackDetailViewController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelPackDetailViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5669))
// CS Name: ::LevelPackDetailViewController*
class CORDL_TYPE LevelPackDetailViewController : public ::HMUI::ViewController {
public:
// Declarations
using _OpenLevelPackProductStoreAsync_d__21 = ::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;

using _RefreshAvailabilityAsync_d__19 = ::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;

using __c__DisplayClass16_0 = ::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0;

using ContentType = ::GlobalNamespace::__LevelPackDetailViewController__ContentType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _detailWrapper offset 0x70
 __declspec(property(get=__get__detailWrapper, put=__set__detailWrapper)) ::UnityEngine::GameObject*  _detailWrapper;

/// @brief Field _packImage offset 0x78
 __declspec(property(get=__get__packImage, put=__set__packImage)) ::HMUI::ImageView*  _packImage;

/// @brief Field _buyButton offset 0x80
 __declspec(property(get=__get__buyButton, put=__set__buyButton)) ::UnityEngine::UI::Button*  _buyButton;

/// @brief Field _buyContainer offset 0x88
 __declspec(property(get=__get__buyContainer, put=__set__buyContainer)) ::UnityEngine::GameObject*  _buyContainer;

/// @brief Field _loadingControl offset 0x90
 __declspec(property(get=__get__loadingControl, put=__set__loadingControl)) ::GlobalNamespace::LoadingControl*  _loadingControl;

/// @brief Field _requireInternetContainer offset 0x98
 __declspec(property(get=__get__requireInternetContainer, put=__set__requireInternetContainer)) ::UnityEngine::GameObject*  _requireInternetContainer;

/// @brief Field _kawaseBlurRenderer offset 0xa0
 __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer)) ::GlobalNamespace::KawaseBlurRendererSO*  _kawaseBlurRenderer;

/// @brief Field _additionalContentModel offset 0xa8
 __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

/// @brief Field _dlcPromoPanelModel offset 0xb0
 __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel)) ::GlobalNamespace::DlcPromoPanelModel*  _dlcPromoPanelModel;

/// @brief Field _analyticsModel offset 0xb8
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _eventBinder offset 0xc0
 __declspec(property(get=__get__eventBinder, put=__set__eventBinder)) ::GlobalNamespace::EventBinder*  _eventBinder;

/// @brief Field _cancellationTokenSource offset 0xc8
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _pack offset 0xd0
 __declspec(property(get=__get__pack, put=__set__pack)) ::GlobalNamespace::IBeatmapLevelPack*  _pack;

/// @brief Field _blurredPackArtwork offset 0xd8
 __declspec(property(get=__get__blurredPackArtwork, put=__set__blurredPackArtwork)) ::UnityEngine::Sprite*  _blurredPackArtwork;

constexpr void __set__detailWrapper(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__detailWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__detailWrapper() const;

constexpr void __set__packImage(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__packImage() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__packImage() const;

constexpr void __set__buyButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__buyButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__buyButton() const;

constexpr void __set__buyContainer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__buyContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__buyContainer() const;

constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl*  value) ;

constexpr ::GlobalNamespace::LoadingControl* __get__loadingControl() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> __get__loadingControl() const;

constexpr void __set__requireInternetContainer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__requireInternetContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__requireInternetContainer() const;

constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO*  value) ;

constexpr ::GlobalNamespace::KawaseBlurRendererSO* __get__kawaseBlurRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> __get__kawaseBlurRenderer() const;

constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get__additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get__additionalContentModel() const;

constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel*  value) ;

constexpr ::GlobalNamespace::DlcPromoPanelModel* __get__dlcPromoPanelModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> __get__dlcPromoPanelModel() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

constexpr void __set__eventBinder(::GlobalNamespace::EventBinder*  value) ;

constexpr ::GlobalNamespace::EventBinder* __get__eventBinder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> __get__eventBinder() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

constexpr void __set__pack(::GlobalNamespace::IBeatmapLevelPack*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack* __get__pack() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> __get__pack() const;

constexpr void __set__blurredPackArtwork(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__blurredPackArtwork() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__blurredPackArtwork() const;

/// @brief Method SetData addr 0x22bafcc size 0x3cc virtual false final false
inline void SetData(::GlobalNamespace::IBeatmapLevelPack*  pack) ;

/// @brief Method DidActivate addr 0x22bfd34 size 0x24c virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22bff88 size 0x10c virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x22c0094 size 0x16c virtual true final false
inline void OnDestroy() ;

/// @brief Method RefreshAvailabilityAsync addr 0x22bfca0 size 0x94 virtual false final false
inline void RefreshAvailabilityAsync() ;

/// @brief Method BuyPackButtonWasPressed addr 0x22c0200 size 0x10c virtual false final false
inline void BuyPackButtonWasPressed() ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x22c030c size 0x94 virtual false final false
inline void OpenLevelPackProductStoreAsync() ;

/// @brief Method ShowContent addr 0x22c03a0 size 0x2d4 virtual false final false
inline void ShowContent(::GlobalNamespace::__LevelPackDetailViewController__ContentType  contentType, ::StringW  errorText) ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x22c0674 size 0x4 virtual false final false
inline void HandleAdditionalContentModelDidInvalidateData() ;

static inline ::GlobalNamespace::LevelPackDetailViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22c0678 size 0x68 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__16_0 addr 0x22c06e0 size 0x4 virtual false final false
inline void _DidActivate_b__16_0() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelPackDetailViewController(LevelPackDetailViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelPackDetailViewController(LevelPackDetailViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelPackDetailViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackDetailViewController, 0xe0>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController__ContentType, "", "LevelPackDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::LevelPackDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
NEED_NO_BOX(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController____c__DisplayClass16_0*, "", "LevelPackDetailViewController/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, "", "LevelPackDetailViewController/<OpenLevelPackProductStoreAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, "", "LevelPackDetailViewController/<RefreshAvailabilityAsync>d__19");
