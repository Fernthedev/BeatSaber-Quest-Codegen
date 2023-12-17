#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelLoader)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
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
class BeatmapLevelLoader;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelLoader);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4);
// Type: ::LoadBeatmapLevelResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4339))
// CS Name: ::BeatmapLevelLoader::LoadBeatmapLevelResult
struct CORDL_TYPE __BeatmapLevelLoader__LoadBeatmapLevelResult : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field isError offset 0x0
 __declspec(property(get=__get_isError, put=__set_isError)) bool  isError;

/// @brief Field beatmapLevel offset 0x8
 __declspec(property(get=__get_beatmapLevel, put=__set_beatmapLevel)) ::GlobalNamespace::IBeatmapLevel*  beatmapLevel;

constexpr void __set_isError(bool  value) ;

constexpr bool& __get_isError() ;

constexpr bool const& __get_isError() const;

constexpr void __set_beatmapLevel(::GlobalNamespace::IBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevel* __get_beatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> __get_beatmapLevel() const;

/// @brief Method .ctor addr 0x23405b8 size 0x10 virtual false final false
inline void _ctor(bool  isError, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel) ;

// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }]
constexpr __BeatmapLevelLoader__LoadBeatmapLevelResult(bool  isError, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelLoader__LoadBeatmapLevelResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelLoader__LoadBeatmapLevelResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4340))
// CS Name: ::BeatmapLevelLoader::<LoadBeatmapLevelAsync>d__4
struct CORDL_TYPE __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapLevelLoader*  __4__this;

/// @brief Field previewLevel offset 0x28
 __declspec(property(get=__get_previewLevel, put=__set_previewLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewLevel;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <level>5__2 offset 0x38
 __declspec(property(get=__get__level_5__2, put=__set__level_5__2)) ::GlobalNamespace::IBeatmapLevel*  _level_5__2;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

/// @brief Field <>u__3 offset 0x50
 __declspec(property(get=__get___u__3, put=__set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>  __u__3;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapLevelLoader*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelLoader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelLoader*> __get___4__this() const;

constexpr void __set_previewLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewLevel() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__level_5__2(::GlobalNamespace::IBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevel* __get__level_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> __get__level_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__2() const;

constexpr void __set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>& __get___u__3() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> const& __get___u__3() const;

/// @brief Method MoveNext addr 0x23405c8 size 0x6d0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2340c98 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "previewLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_level_5__2", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }]
constexpr __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  __t__builder, ::GlobalNamespace::BeatmapLevelLoader*  __4__this, ::GlobalNamespace::IPreviewBeatmapLevel*  previewLevel, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::IBeatmapLevel*  _level_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>  __u__3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4341))
// CS Name: ::BeatmapLevelLoader*
class CORDL_TYPE BeatmapLevelLoader : public ::System::Object {
public:
// Declarations
using _LoadBeatmapLevelAsync_d__4 = ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;

using LoadBeatmapLevelResult = ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _beatmapLevelDataLoader offset 0x10
 __declspec(property(get=__get__beatmapLevelDataLoader, put=__set__beatmapLevelDataLoader)) ::GlobalNamespace::BeatmapLevelDataLoader*  _beatmapLevelDataLoader;

/// @brief Field _beatmapDataAssetFileModel offset 0x18
 __declspec(property(get=__get__beatmapDataAssetFileModel, put=__set__beatmapDataAssetFileModel)) ::GlobalNamespace::IBeatmapDataAssetFileModel*  _beatmapDataAssetFileModel;

constexpr void __set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelDataLoader* __get__beatmapLevelDataLoader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> __get__beatmapLevelDataLoader() const;

constexpr void __set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* __get__beatmapDataAssetFileModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> __get__beatmapDataAssetFileModel() const;

static inline ::GlobalNamespace::BeatmapLevelLoader* New_ctor(::GlobalNamespace::BeatmapLevelDataLoader*  beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel*  beatmapDataAssetFileModel) ;

/// @brief Method .ctor addr 0x2340478 size 0x2c virtual false final false
inline void _ctor(::GlobalNamespace::BeatmapLevelDataLoader*  beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel*  beatmapDataAssetFileModel) ;

/// @brief Method LoadBeatmapLevelAsync addr 0x23404a4 size 0x114 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>* LoadBeatmapLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewLevel, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelLoader(BeatmapLevelLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelLoader(BeatmapLevelLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelLoader()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelLoader, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelLoader*, "", "BeatmapLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult, "", "BeatmapLevelLoader/LoadBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4, "", "BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4");
