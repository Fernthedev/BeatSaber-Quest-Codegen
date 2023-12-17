#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardLevelDetailViewController)
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class StandardLevelBuyView;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController__ContentType);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelDetailViewController);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d);
MARK_VAL_T(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d);
// Type: ::ContentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5679))
// CS Name: ::StandardLevelDetailViewController::ContentType
struct CORDL_TYPE __StandardLevelDetailViewController__ContentType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____StandardLevelDetailViewController__ContentType_Unwrapped
enum struct ____StandardLevelDetailViewController__ContentType_Unwrapped : int32_t {
__E_Loading = static_cast<int32_t>(0x0),
__E_OwnedAndReady = static_cast<int32_t>(0x1),
__E_NoAllowedDifficultyBeatmap = static_cast<int32_t>(0x2),
__E_OwnedAndDownloading = static_cast<int32_t>(0x3),
__E_Buy = static_cast<int32_t>(0x4),
__E_BuyInfo = static_cast<int32_t>(0x5),
__E_Error = static_cast<int32_t>(0x6),
__E_Inactive = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Loading value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Loading;

/// @brief Field OwnedAndReady value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const OwnedAndReady;

/// @brief Field NoAllowedDifficultyBeatmap value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const NoAllowedDifficultyBeatmap;

/// @brief Field OwnedAndDownloading value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const OwnedAndDownloading;

/// @brief Field Buy value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Buy;

/// @brief Field BuyInfo value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const BuyInfo;

/// @brief Field Error value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Error;

/// @brief Field Inactive value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::__StandardLevelDetailViewController__ContentType const Inactive;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____StandardLevelDetailViewController__ContentType_Unwrapped () const noexcept {
return std::bit_cast<____StandardLevelDetailViewController__ContentType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController__ContentType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController__ContentType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController__ContentType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController__ContentType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__57
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5680))
// CS Name: ::StandardLevelDetailViewController::<LoadBeatmapLevelAsync>d__57
struct CORDL_TYPE __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelDetailViewController*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __u__1;

/// @brief Field <>u__2 offset 0x38
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::StandardLevelDetailViewController*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x22c571c size 0x51c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c5c38 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::StandardLevelDetailViewController*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ShowLoadingAndDoSomething>d__62
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5681))
// CS Name: ::StandardLevelDetailViewController::<ShowLoadingAndDoSomething>d__62
struct CORDL_TYPE __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelDetailViewController*  __4__this;

/// @brief Field action offset 0x30
 __declspec(property(get=__get_action, put=__set_action)) ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::StandardLevelDetailViewController*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> __get___4__this() const;

constexpr void __set_action(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  value) ;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*> __get_action() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22c5c44 size 0x2a4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c5ee8 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::StandardLevelDetailViewController*  __4__this, ::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<<BuyPackButtonWasPressed>b__56_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5682))
// CS Name: ::StandardLevelDetailViewController::<<BuyPackButtonWasPressed>b__56_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelDetailViewController*  __4__this;

/// @brief Field token offset 0x28
 __declspec(property(get=__get_token, put=__set_token)) ::System::Threading::CancellationToken  token;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::StandardLevelDetailViewController*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> __get___4__this() const;

constexpr void __set_token(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_token() ;

constexpr ::System::Threading::CancellationToken const& __get_token() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22c5ef4 size 0x2e8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c61dc size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::StandardLevelDetailViewController*  __4__this, ::System::Threading::CancellationToken  token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5683))
// CS Name: ::StandardLevelDetailViewController::<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelDetailViewController*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::StandardLevelDetailViewController*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22c61e8 size 0x3e8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c65d0 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::StandardLevelDetailViewController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<<OpenLevelProductStore>b__59_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5684))
// CS Name: ::StandardLevelDetailViewController::<<OpenLevelProductStore>b__59_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelDetailViewController*  __4__this;

/// @brief Field token offset 0x28
 __declspec(property(get=__get_token, put=__set_token)) ::System::Threading::CancellationToken  token;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::StandardLevelDetailViewController*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> __get___4__this() const;

constexpr void __set_token(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_token() ;

constexpr ::System::Threading::CancellationToken const& __get_token() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22c65dc size 0x2e8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c68c4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::StandardLevelDetailViewController*  __4__this, ::System::Threading::CancellationToken  token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<<RefreshAvailabilityIfNeeded>b__60_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5685))
// CS Name: ::StandardLevelDetailViewController::<<RefreshAvailabilityIfNeeded>b__60_0>d
struct CORDL_TYPE __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::StandardLevelDetailViewController*  __4__this;

/// @brief Field token offset 0x28
 __declspec(property(get=__get_token, put=__set_token)) ::System::Threading::CancellationToken  token;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Field <>u__2 offset 0x38
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::StandardLevelDetailViewController*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> __get___4__this() const;

constexpr void __set_token(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_token() ;

constexpr ::System::Threading::CancellationToken const& __get_token() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x22c68d0 size 0x430 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22c6d00 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandardLevelDetailViewController*", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::StandardLevelDetailViewController*  __4__this, ::System::Threading::CancellationToken  token, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StandardLevelDetailViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5686))
// CS Name: ::StandardLevelDetailViewController*
class CORDL_TYPE StandardLevelDetailViewController : public ::HMUI::ViewController {
public:
// Declarations
using __RefreshAvailabilityIfNeeded_b__60_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;

using __OpenLevelProductStore_b__59_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;

using __OpenLevelProductStoreOrShowBuyInfo_b__58_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;

using __BuyPackButtonWasPressed_b__56_0_d = ::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;

using _ShowLoadingAndDoSomething_d__62 = ::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;

using _LoadBeatmapLevelAsync_d__57 = ::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;

using ContentType = ::GlobalNamespace::__StandardLevelDetailViewController__ContentType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x138};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x138 - sizeof(::HMUI::ViewController)]{};

/// @brief Field kLoadingDataErrorNoInternetLocalizationKey offset 0x0
static constexpr ::ConstString  kLoadingDataErrorNoInternetLocalizationKey{u"ERROR_LOADING_DATA_NO_INTERNET_MESSAGE"};

/// @brief Field kLoadingDataErrorLocalizationKey offset 0x0
static constexpr ::ConstString  kLoadingDataErrorLocalizationKey{u"ERROR_LOADING_DATA"};

/// @brief Field _standardLevelDetailView offset 0x70
 __declspec(property(get=__get__standardLevelDetailView, put=__set__standardLevelDetailView)) ::GlobalNamespace::StandardLevelDetailView*  _standardLevelDetailView;

/// @brief Field _standardLevelBuyView offset 0x78
 __declspec(property(get=__get__standardLevelBuyView, put=__set__standardLevelBuyView)) ::GlobalNamespace::StandardLevelBuyView*  _standardLevelBuyView;

/// @brief Field _standardLevelBuyInfoView offset 0x80
 __declspec(property(get=__get__standardLevelBuyInfoView, put=__set__standardLevelBuyInfoView)) ::GlobalNamespace::StandardLevelBuyInfoView*  _standardLevelBuyInfoView;

/// @brief Field _loadingControl offset 0x88
 __declspec(property(get=__get__loadingControl, put=__set__loadingControl)) ::GlobalNamespace::LoadingControl*  _loadingControl;

/// @brief Field _noAllowedBeatmapInfoContainer offset 0x90
 __declspec(property(get=__get__noAllowedBeatmapInfoContainer, put=__set__noAllowedBeatmapInfoContainer)) ::UnityEngine::GameObject*  _noAllowedBeatmapInfoContainer;

/// @brief Field _playerDataModel offset 0x98
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _additionalContentModel offset 0xa0
 __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

/// @brief Field _beatmapLevelsModel offset 0xa8
 __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevelsModel;

/// @brief Field _dlcPromoPanelModel offset 0xb0
 __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel)) ::GlobalNamespace::DlcPromoPanelModel*  _dlcPromoPanelModel;

/// @brief Field _analyticsModel offset 0xb8
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field didPressActionButtonEvent offset 0xc0
 __declspec(property(get=__get_didPressActionButtonEvent, put=__set_didPressActionButtonEvent)) ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*  didPressActionButtonEvent;

/// @brief Field didPressOpenLevelPackButtonEvent offset 0xc8
 __declspec(property(get=__get_didPressOpenLevelPackButtonEvent, put=__set_didPressOpenLevelPackButtonEvent)) ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevelPack*>*  didPressOpenLevelPackButtonEvent;

/// @brief Field levelFavoriteStatusDidChangeEvent offset 0xd0
 __declspec(property(get=__get_levelFavoriteStatusDidChangeEvent, put=__set_levelFavoriteStatusDidChangeEvent)) ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,bool>*  levelFavoriteStatusDidChangeEvent;

/// @brief Field didPressPracticeButtonEvent offset 0xd8
 __declspec(property(get=__get_didPressPracticeButtonEvent, put=__set_didPressPracticeButtonEvent)) ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevel*>*  didPressPracticeButtonEvent;

/// @brief Field didChangeDifficultyBeatmapEvent offset 0xe0
 __declspec(property(get=__get_didChangeDifficultyBeatmapEvent, put=__set_didChangeDifficultyBeatmapEvent)) ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IDifficultyBeatmap*>*  didChangeDifficultyBeatmapEvent;

/// @brief Field didChangeContentEvent offset 0xe8
 __declspec(property(get=__get_didChangeContentEvent, put=__set_didChangeContentEvent)) ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  didChangeContentEvent;

/// @brief Field _ownedObjectsEventBinder offset 0xf0
 __declspec(property(get=__get__ownedObjectsEventBinder, put=__set__ownedObjectsEventBinder)) ::GlobalNamespace::EventBinder*  _ownedObjectsEventBinder;

/// @brief Field _eventBinder offset 0xf8
 __declspec(property(get=__get__eventBinder, put=__set__eventBinder)) ::GlobalNamespace::EventBinder*  _eventBinder;

/// @brief Field _cancellationTokenSource offset 0x100
 __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _previewBeatmapLevel offset 0x108
 __declspec(property(get=__get__previewBeatmapLevel, put=__set__previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  _previewBeatmapLevel;

/// @brief Field _beatmapLevel offset 0x110
 __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel)) ::GlobalNamespace::IBeatmapLevel*  _beatmapLevel;

/// @brief Field _pack offset 0x118
 __declspec(property(get=__get__pack, put=__set__pack)) ::GlobalNamespace::IBeatmapLevelPack*  _pack;

/// @brief Field _canBuyPack offset 0x120
 __declspec(property(get=__get__canBuyPack, put=__set__canBuyPack)) bool  _canBuyPack;

/// @brief Field _allowedBeatmapDifficultyMask offset 0x121
 __declspec(property(get=__get__allowedBeatmapDifficultyMask, put=__set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask  _allowedBeatmapDifficultyMask;

/// @brief Field _notAllowedCharacteristics offset 0x128
 __declspec(property(get=__get__notAllowedCharacteristics, put=__set__notAllowedCharacteristics)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  _notAllowedCharacteristics;

/// @brief Field _contentIsOwnedAndReady offset 0x130
 __declspec(property(get=__get__contentIsOwnedAndReady, put=__set__contentIsOwnedAndReady)) bool  _contentIsOwnedAndReady;

 __declspec(property(get=get_selectedDifficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  selectedDifficultyBeatmap;

 __declspec(property(get=get_beatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  beatmapLevel;

constexpr void __set__standardLevelDetailView(::GlobalNamespace::StandardLevelDetailView*  value) ;

constexpr ::GlobalNamespace::StandardLevelDetailView* __get__standardLevelDetailView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailView*> __get__standardLevelDetailView() const;

constexpr void __set__standardLevelBuyView(::GlobalNamespace::StandardLevelBuyView*  value) ;

constexpr ::GlobalNamespace::StandardLevelBuyView* __get__standardLevelBuyView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelBuyView*> __get__standardLevelBuyView() const;

constexpr void __set__standardLevelBuyInfoView(::GlobalNamespace::StandardLevelBuyInfoView*  value) ;

constexpr ::GlobalNamespace::StandardLevelBuyInfoView* __get__standardLevelBuyInfoView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelBuyInfoView*> __get__standardLevelBuyInfoView() const;

constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl*  value) ;

constexpr ::GlobalNamespace::LoadingControl* __get__loadingControl() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> __get__loadingControl() const;

constexpr void __set__noAllowedBeatmapInfoContainer(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__noAllowedBeatmapInfoContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__noAllowedBeatmapInfoContainer() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get__additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get__additionalContentModel() const;

constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* __get__beatmapLevelsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> __get__beatmapLevelsModel() const;

constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel*  value) ;

constexpr ::GlobalNamespace::DlcPromoPanelModel* __get__dlcPromoPanelModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> __get__dlcPromoPanelModel() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

constexpr void __set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>* __get_didPressActionButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*> __get_didPressActionButtonEvent() const;

constexpr void __set_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevelPack*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevelPack*>* __get_didPressOpenLevelPackButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevelPack*>*> __get_didPressOpenLevelPackButtonEvent() const;

constexpr void __set_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,bool>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,bool>* __get_levelFavoriteStatusDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,bool>*> __get_levelFavoriteStatusDidChangeEvent() const;

constexpr void __set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevel*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevel*>* __get_didPressPracticeButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevel*>*> __get_didPressPracticeButtonEvent() const;

constexpr void __set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IDifficultyBeatmap*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IDifficultyBeatmap*>* __get_didChangeDifficultyBeatmapEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IDifficultyBeatmap*>*> __get_didChangeDifficultyBeatmapEvent() const;

constexpr void __set_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* __get_didChangeContentEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> __get_didChangeContentEvent() const;

constexpr void __set__ownedObjectsEventBinder(::GlobalNamespace::EventBinder*  value) ;

constexpr ::GlobalNamespace::EventBinder* __get__ownedObjectsEventBinder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> __get__ownedObjectsEventBinder() const;

constexpr void __set__eventBinder(::GlobalNamespace::EventBinder*  value) ;

constexpr ::GlobalNamespace::EventBinder* __get__eventBinder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> __get__eventBinder() const;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__cancellationTokenSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__cancellationTokenSource() const;

constexpr void __set__previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get__previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get__previewBeatmapLevel() const;

constexpr void __set__beatmapLevel(::GlobalNamespace::IBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevel* __get__beatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> __get__beatmapLevel() const;

constexpr void __set__pack(::GlobalNamespace::IBeatmapLevelPack*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack* __get__pack() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> __get__pack() const;

constexpr void __set__canBuyPack(bool  value) ;

constexpr bool& __get__canBuyPack() ;

constexpr bool const& __get__canBuyPack() const;

constexpr void __set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get__allowedBeatmapDifficultyMask() ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get__allowedBeatmapDifficultyMask() const;

constexpr void __set__notAllowedCharacteristics(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* __get__notAllowedCharacteristics() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> __get__notAllowedCharacteristics() const;

constexpr void __set__contentIsOwnedAndReady(bool  value) ;

constexpr bool& __get__contentIsOwnedAndReady() ;

constexpr bool const& __get__contentIsOwnedAndReady() const;

/// @brief Method add_didPressActionButtonEvent addr 0x22b9f4c size 0xb0 virtual false final false
inline void add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*  value) ;

/// @brief Method remove_didPressActionButtonEvent addr 0x22ba804 size 0xb0 virtual false final false
inline void remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::StandardLevelDetailViewController*>*  value) ;

/// @brief Method add_didPressOpenLevelPackButtonEvent addr 0x22ba20c size 0xb0 virtual false final false
inline void add_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevelPack*>*  value) ;

/// @brief Method remove_didPressOpenLevelPackButtonEvent addr 0x22baac4 size 0xb0 virtual false final false
inline void remove_didPressOpenLevelPackButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevelPack*>*  value) ;

/// @brief Method add_levelFavoriteStatusDidChangeEvent addr 0x22ba2bc size 0xb0 virtual false final false
inline void add_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,bool>*  value) ;

/// @brief Method remove_levelFavoriteStatusDidChangeEvent addr 0x22bab74 size 0xb0 virtual false final false
inline void remove_levelFavoriteStatusDidChangeEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,bool>*  value) ;

/// @brief Method add_didPressPracticeButtonEvent addr 0x22b9ffc size 0xb0 virtual false final false
inline void add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevel*>*  value) ;

/// @brief Method remove_didPressPracticeButtonEvent addr 0x22ba8b4 size 0xb0 virtual false final false
inline void remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IBeatmapLevel*>*  value) ;

/// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x22ba0ac size 0xb0 virtual false final false
inline void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IDifficultyBeatmap*>*  value) ;

/// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x22ba964 size 0xb0 virtual false final false
inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::IDifficultyBeatmap*>*  value) ;

/// @brief Method add_didChangeContentEvent addr 0x22ba15c size 0xb0 virtual false final false
inline void add_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  value) ;

/// @brief Method remove_didChangeContentEvent addr 0x22baa14 size 0xb0 virtual false final false
inline void remove_didChangeContentEvent(::System::Action_2<::GlobalNamespace::StandardLevelDetailViewController*,::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*  value) ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x22b92e4 size 0x1c virtual false final false
inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap() ;

/// @brief Method get_beatmapLevel addr 0x22c3a2c size 0x8 virtual false final false
inline ::GlobalNamespace::IPreviewBeatmapLevel* get_beatmapLevel() ;

/// @brief Method SetData addr 0x22bb898 size 0x10c virtual false final false
inline void SetData(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, bool  hidePracticeButton, bool  hide360DegreeBeatmapCharacteristic, ::StringW  playButtonText, ::GlobalNamespace::BeatmapDifficultyMask  allowedBeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  notAllowedCharacteristics) ;

/// @brief Method SetData addr 0x22bb9a4 size 0x298 virtual false final false
inline void SetData(::GlobalNamespace::IBeatmapLevelPack*  pack, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, bool  hidePracticeButton, bool  hide360DegreeBeatmapCharacteristic, bool  canBuyPack, ::StringW  playButtonText, ::GlobalNamespace::BeatmapDifficultyMask  allowedBeatmapDifficultyMask, ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  notAllowedCharacteristics) ;

/// @brief Method DidActivate addr 0x22c3ad8 size 0x388 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22c3e60 size 0x58 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x22c3eb8 size 0x3c virtual true final false
inline void OnDestroy() ;

/// @brief Method RefreshContentLevelDetailView addr 0x22bb494 size 0x1c virtual false final false
inline void RefreshContentLevelDetailView() ;

/// @brief Method ClearSelected addr 0x22bb4d4 size 0x1c virtual false final false
inline void ClearSelected() ;

/// @brief Method HandleDidChangeDifficultyBeatmap addr 0x22c3ef4 size 0x1ec virtual false final false
inline void HandleDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailView*  view, ::GlobalNamespace::IDifficultyBeatmap*  beatmap) ;

/// @brief Method HandleDidFavoriteToggleChange addr 0x22c40e0 size 0x78 virtual false final false
inline void HandleDidFavoriteToggleChange(::GlobalNamespace::StandardLevelDetailView*  view, ::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method HandleLevelLoadingUpdate addr 0x22c4158 size 0x194 virtual false final false
inline void HandleLevelLoadingUpdate(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate  levelLoadingUpdate) ;

/// @brief Method BuyLevelButtonWasPressed addr 0x22c46ec size 0x110 virtual false final false
inline void BuyLevelButtonWasPressed() ;

/// @brief Method BuyPackButtonWasPressed addr 0x22c487c size 0x178 virtual false final false
inline void BuyPackButtonWasPressed() ;

/// @brief Method LoadBeatmapLevelAsync addr 0x22c4a90 size 0xd8 virtual false final false
inline ::System::Threading::Tasks::Task* LoadBeatmapLevelAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OpenLevelProductStoreOrShowBuyInfo addr 0x22c4b68 size 0x15c virtual false final false
inline void OpenLevelProductStoreOrShowBuyInfo() ;

/// @brief Method OpenLevelProductStore addr 0x22c47fc size 0x80 virtual false final false
inline void OpenLevelProductStore() ;

/// @brief Method RefreshAvailabilityIfNeeded addr 0x22c3a34 size 0xa4 virtual false final false
inline void RefreshAvailabilityIfNeeded() ;

/// @brief Method ShowContent addr 0x22c42ec size 0x400 virtual false final false
inline void ShowContent(::GlobalNamespace::__StandardLevelDetailViewController__ContentType  contentType, ::StringW  errorText, float_t  downloadingProgress, ::StringW  downloadingText) ;

/// @brief Method ShowLoadingAndDoSomething addr 0x22c49f4 size 0x9c virtual false final false
inline void ShowLoadingAndDoSomething(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task*>*  action) ;

static inline ::GlobalNamespace::StandardLevelDetailViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22c4cc4 size 0x84 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__47_0 addr 0x22c4d48 size 0x24 virtual false final false
inline void _DidActivate_b__47_0() ;

/// @brief Method <DidActivate>b__47_1 addr 0x22c4d6c size 0x20 virtual false final false
inline void _DidActivate_b__47_1() ;

/// @brief Method <DidActivate>b__47_2 addr 0x22c4d8c size 0x24 virtual false final false
inline void _DidActivate_b__47_2() ;

/// @brief Method <DidActivate>b__47_3 addr 0x22c4db0 size 0x154 virtual false final false
inline void _DidActivate_b__47_3() ;

/// @brief Method <DidActivate>b__47_4 addr 0x22c4f04 size 0x1c8 virtual false final false
inline void _DidActivate_b__47_4() ;

/// @brief Method <DidActivate>b__47_5 addr 0x22c50cc size 0x154 virtual false final false
inline void _DidActivate_b__47_5() ;

/// @brief Method <DidActivate>b__47_6 addr 0x22c5220 size 0x1a4 virtual false final false
inline void _DidActivate_b__47_6() ;

/// @brief Method <BuyPackButtonWasPressed>b__56_0 addr 0x22c53c4 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* _BuyPackButtonWasPressed_b__56_0(::System::Threading::CancellationToken  token) ;

/// @brief Method <OpenLevelProductStoreOrShowBuyInfo>b__58_0 addr 0x22c54a0 size 0xc8 virtual false final false
inline ::System::Threading::Tasks::Task* _OpenLevelProductStoreOrShowBuyInfo_b__58_0(::System::Threading::CancellationToken  token) ;

/// @brief Method <OpenLevelProductStore>b__59_0 addr 0x22c5568 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* _OpenLevelProductStore_b__59_0(::System::Threading::CancellationToken  token) ;

/// @brief Method <RefreshAvailabilityIfNeeded>b__60_0 addr 0x22c5644 size 0xd8 virtual false final false
inline ::System::Threading::Tasks::Task* _RefreshAvailabilityIfNeeded_b__60_0(::System::Threading::CancellationToken  token) ;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelDetailViewController(StandardLevelDetailViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelDetailViewController(StandardLevelDetailViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardLevelDetailViewController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelDetailViewController, 0x138>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController__ContentType, "", "StandardLevelDetailViewController/ContentType");
NEED_NO_BOX(::GlobalNamespace::StandardLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelDetailViewController*, "", "StandardLevelDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, "", "StandardLevelDetailViewController/<LoadBeatmapLevelAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, "", "StandardLevelDetailViewController/<ShowLoadingAndDoSomething>d__62");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, "", "StandardLevelDetailViewController/<<BuyPackButtonWasPressed>b__56_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, "", "StandardLevelDetailViewController/<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, "", "StandardLevelDetailViewController/<<OpenLevelProductStore>b__59_0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, "", "StandardLevelDetailViewController/<<RefreshAvailabilityIfNeeded>b__60_0>d");
