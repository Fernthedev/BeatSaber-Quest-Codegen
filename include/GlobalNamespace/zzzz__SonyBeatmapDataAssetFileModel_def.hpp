#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyBeatmapDataAssetFileModel)
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
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
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyBeatmapDataAssetFileModel);
MARK_VAL_T(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3);
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4580))
// CS Name: ::SonyBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__3
struct CORDL_TYPE __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3 : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder;

/// @brief Field <>u__1 offset 0x20
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___t__builder() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2369358 size 0x238 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2369590 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SonyBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4581))
// CS Name: ::SonyBeatmapDataAssetFileModel*
class CORDL_TYPE SonyBeatmapDataAssetFileModel : public ::System::Object {
public:
// Declarations
using _GetAssetBundleFileForPreviewLevelAsync_d__3 = ::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field levelDataAssetDownloadUpdateEvent offset 0x10
 __declspec(property(get=__get_levelDataAssetDownloadUpdateEvent, put=__set_levelDataAssetDownloadUpdateEvent)) ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  levelDataAssetDownloadUpdateEvent;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr operator  ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

constexpr void __set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* __get_levelDataAssetDownloadUpdateEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> __get_levelDataAssetDownloadUpdateEvent() const;

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x236909c size 0xb0 virtual true final true
inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x236914c size 0xb0 virtual true final true
inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x23691fc size 0xec virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x23692e8 size 0x68 virtual true final true
inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::GlobalNamespace::SonyBeatmapDataAssetFileModel* New_ctor() ;

/// @brief Method .ctor addr 0x2369350 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SonyBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SonyBeatmapDataAssetFileModel(SonyBeatmapDataAssetFileModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SonyBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SonyBeatmapDataAssetFileModel(SonyBeatmapDataAssetFileModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SonyBeatmapDataAssetFileModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyBeatmapDataAssetFileModel, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyBeatmapDataAssetFileModel*, "", "SonyBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3, "", "SonyBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__3");
