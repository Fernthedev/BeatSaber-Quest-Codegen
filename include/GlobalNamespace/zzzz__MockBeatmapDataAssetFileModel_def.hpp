#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapDataAssetFileModel)
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct __MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct __MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapDataAssetFileModel);
MARK_VAL_T(::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4);
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4416))
// CS Name: ::MockBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__4
struct CORDL_TYPE __MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder;

/// @brief Field previewBeatmapLevel offset 0x20
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MockBeatmapDataAssetFileModel*  __4__this;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <path>5__2 offset 0x38
 __declspec(property(get=__get__path_5__2, put=__set__path_5__2)) ::StringW  _path_5__2;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <i>5__3 offset 0x48
 __declspec(property(get=__get__i_5__3, put=__set__i_5__3)) uint32_t  _i_5__3;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___t__builder() const;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

constexpr void __set___4__this(::GlobalNamespace::MockBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::MockBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__path_5__2(::StringW  value) ;

constexpr ::StringW& __get__path_5__2() ;

constexpr ::StringW const& __get__path_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

constexpr void __set__i_5__3(uint32_t  value) ;

constexpr uint32_t& __get__i_5__3() ;

constexpr uint32_t const& __get__i_5__3() const;

/// @brief Method MoveNext addr 0x234d0c8 size 0x544 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x234d60c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::MockBeatmapDataAssetFileModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  _path_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, uint32_t  _i_5__3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MockBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4417))
// CS Name: ::MockBeatmapDataAssetFileModel*
class CORDL_TYPE MockBeatmapDataAssetFileModel : public ::System::Object {
public:
// Declarations
using _GetAssetBundleFileForPreviewLevelAsync_d__4 = ::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kAssetsDir offset 0x0
static constexpr ::ConstString  kAssetsDir{u"BeatmapDataAssets"};

/// @brief Field levelDataAssetDownloadUpdateEvent offset 0x10
 __declspec(property(get=__get_levelDataAssetDownloadUpdateEvent, put=__set_levelDataAssetDownloadUpdateEvent)) ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  levelDataAssetDownloadUpdateEvent;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr operator  ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

constexpr void __set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* __get_levelDataAssetDownloadUpdateEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> __get_levelDataAssetDownloadUpdateEvent() const;

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x234cde8 size 0xb0 virtual true final true
inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x234ce98 size 0xb0 virtual true final true
inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x234cf48 size 0x110 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x234d058 size 0x68 virtual true final true
inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::GlobalNamespace::MockBeatmapDataAssetFileModel* New_ctor() ;

/// @brief Method .ctor addr 0x234d0c0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockBeatmapDataAssetFileModel(MockBeatmapDataAssetFileModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockBeatmapDataAssetFileModel(MockBeatmapDataAssetFileModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockBeatmapDataAssetFileModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapDataAssetFileModel, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapDataAssetFileModel*, "", "MockBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, "", "MockBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4");
