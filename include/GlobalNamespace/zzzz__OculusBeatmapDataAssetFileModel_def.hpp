#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusBeatmapDataAssetFileModel)
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
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
class OculusBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13);
// Type: ::LevelDownloadingData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4529))
// CS Name: ::OculusBeatmapDataAssetFileModel::LevelDownloadingData*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel__LevelDownloadingData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field levelId offset 0x10
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field assetBundlePath offset 0x18
 __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath)) ::StringW  assetBundlePath;

/// @brief Field downloadAssetBundleFileTCS offset 0x20
 __declspec(property(get=__get_downloadAssetBundleFileTCS, put=__set_downloadAssetBundleFileTCS)) ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*  downloadAssetBundleFileTCS;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set_assetBundlePath(::StringW  value) ;

constexpr ::StringW& __get_assetBundlePath() ;

constexpr ::StringW const& __get_assetBundlePath() const;

constexpr void __set_downloadAssetBundleFileTCS(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* __get_downloadAssetBundleFileTCS() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get_downloadAssetBundleFileTCS() const;

static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData* New_ctor(::StringW  levelId, ::StringW  assetBundlePath) ;

/// @brief Method .ctor addr 0x2365104 size 0x94 virtual false final false
inline void _ctor(::StringW  levelId, ::StringW  assetBundlePath) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusBeatmapDataAssetFileModel__LevelDownloadingData(__OculusBeatmapDataAssetFileModel__LevelDownloadingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusBeatmapDataAssetFileModel__LevelDownloadingData(__OculusBeatmapDataAssetFileModel__LevelDownloadingData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel__LevelDownloadingData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass13_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4530))
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass13_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

/// @brief Field levelId offset 0x18
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field taskSource offset 0x28
 __declspec(property(get=__get_taskSource, put=__set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  taskSource;

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_taskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_taskSource() const;

static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* New_ctor() ;

/// @brief Method .ctor addr 0x23655fc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0 addr 0x2365604 size 0x15c virtual false final false
inline void _TryDeleteAssetBundleFileForPreviewLevelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4531))
// CS Name: ::OculusBeatmapDataAssetFileModel::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field previewBeatmapLevel offset 0x30
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

/// @brief Field <>8__1 offset 0x38
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*  __8__1;

/// @brief Field <deleted>5__2 offset 0x40
 __declspec(property(get=__get__deleted_5__2, put=__set__deleted_5__2)) bool  _deleted_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_previewBeatmapLevel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_previewBeatmapLevel() const;

constexpr void __set___8__1(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*  value) ;

constexpr ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*> __get___8__1() const;

constexpr void __set__deleted_5__2(bool  value) ;

constexpr bool& __get__deleted_5__2() ;

constexpr bool const& __get__deleted_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2365760 size 0x564 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2365ce0 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*", modifiers: "", def_value: None }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*  __8__1, bool  _deleted_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__14
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4532))
// CS Name: ::OculusBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__14
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14 : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder;

/// @brief Field previewBeatmapLevel offset 0x20
 __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel)) ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <levelId>5__2 offset 0x38
 __declspec(property(get=__get__levelId_5__2, put=__set__levelId_5__2)) ::StringW  _levelId_5__2;

/// @brief Field <assetFile>5__3 offset 0x40
 __declspec(property(get=__get__assetFile_5__3, put=__set__assetFile_5__3)) ::StringW  _assetFile_5__3;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2 offset 0x50
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

/// @brief Field <>u__3 offset 0x58
 __declspec(property(get=__get___u__3, put=__set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__3;

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

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__levelId_5__2(::StringW  value) ;

constexpr ::StringW& __get__levelId_5__2() ;

constexpr ::StringW const& __get__levelId_5__2() const;

constexpr void __set__assetFile_5__3(::StringW  value) ;

constexpr ::StringW& __get__assetFile_5__3() ;

constexpr ::StringW const& __get__assetFile_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__2() const;

constexpr void __set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___u__3() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___u__3() const;

/// @brief Method MoveNext addr 0x2365d38 size 0xa20 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2366758 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  _levelId_5__2, ::StringW  _assetFile_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass15_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4533))
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass15_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field cancellationToken offset 0x10
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field taskSource offset 0x18
 __declspec(property(get=__get_taskSource, put=__set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  taskSource;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_taskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_taskSource() const;

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0* New_ctor() ;

/// @brief Method .ctor addr 0x23667b0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ReloadAssetDetailsForAllLevelsAsync>b__0 addr 0x23667b8 size 0x3fc virtual false final false
inline void _ReloadAssetDetailsForAllLevelsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*  getListMsg) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ReloadAssetDetailsForAllLevelsAsync>d__15
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4534))
// CS Name: ::OculusBeatmapDataAssetFileModel::<ReloadAssetDetailsForAllLevelsAsync>d__15
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field cancellationToken offset 0x20
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2366bb4 size 0x318 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2366ecc size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4535))
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass16_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field taskSource offset 0x10
 __declspec(property(get=__get_taskSource, put=__set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*  taskSource;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

/// @brief Field assetDetails offset 0x20
 __declspec(property(get=__get_assetDetails, put=__set_assetDetails)) ::Oculus::Platform::Models::AssetDetails*  assetDetails;

constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* __get_taskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> __get_taskSource() const;

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set_assetDetails(::Oculus::Platform::Models::AssetDetails*  value) ;

constexpr ::Oculus::Platform::Models::AssetDetails* __get_assetDetails() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> __get_assetDetails() const;

static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0* New_ctor() ;

/// @brief Method .ctor addr 0x2366f24 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetDownloadAssetBundleFileAsync>b__0 addr 0x2366f2c size 0xcc virtual false final false
inline void _GetDownloadAssetBundleFileAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetDownloadAssetBundleFileAsync>d__16
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4536))
// CS Name: ::OculusBeatmapDataAssetFileModel::<GetDownloadAssetBundleFileAsync>d__16
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this;

/// @brief Field assetDetails offset 0x28
 __declspec(property(get=__get_assetDetails, put=__set_assetDetails)) ::Oculus::Platform::Models::AssetDetails*  assetDetails;

/// @brief Field levelId offset 0x30
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> __get___4__this() const;

constexpr void __set_assetDetails(::Oculus::Platform::Models::AssetDetails*  value) ;

constexpr ::Oculus::Platform::Models::AssetDetails* __get_assetDetails() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> __get_assetDetails() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2366ff8 size 0x760 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2367758 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "assetDetails", ty: "::Oculus::Platform::Models::AssetDetails*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>  __t__builder, ::GlobalNamespace::OculusBeatmapDataAssetFileModel*  __4__this, ::Oculus::Platform::Models::AssetDetails*  assetDetails, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OculusBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4537))
// CS Name: ::OculusBeatmapDataAssetFileModel*
class CORDL_TYPE OculusBeatmapDataAssetFileModel : public ::System::Object {
public:
// Declarations
using _GetDownloadAssetBundleFileAsync_d__16 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;

using __c__DisplayClass16_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;

using _ReloadAssetDetailsForAllLevelsAsync_d__15 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;

using __c__DisplayClass15_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;

using _GetAssetBundleFileForPreviewLevelAsync_d__14 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;

using _TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;

using __c__DisplayClass13_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;

using LevelDownloadingData = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field kMaxTimeOutBeforeFail offset 0x0
static constexpr float_t  kMaxTimeOutBeforeFail{120.0};

/// @brief Field levelDataAssetDownloadUpdateEvent offset 0x10
 __declspec(property(get=__get_levelDataAssetDownloadUpdateEvent, put=__set_levelDataAssetDownloadUpdateEvent)) ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  levelDataAssetDownloadUpdateEvent;

/// @brief Field _assetIdToDownloadinData offset 0x18
 __declspec(property(get=__get__assetIdToDownloadinData, put=__set__assetIdToDownloadinData)) ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*  _assetIdToDownloadinData;

/// @brief Field _downloadedAssetBundleFiles offset 0x20
 __declspec(property(get=__get__downloadedAssetBundleFiles, put=__set__downloadedAssetBundleFiles)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _downloadedAssetBundleFiles;

/// @brief Field _lastAssetFileDownloadUpdateForAssetIds offset 0x28
 __declspec(property(get=__get__lastAssetFileDownloadUpdateForAssetIds, put=__set__lastAssetFileDownloadUpdateForAssetIds)) ::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  _lastAssetFileDownloadUpdateForAssetIds;

/// @brief Field _lastAssetFileDownloadUpdateTime offset 0x30
 __declspec(property(get=__get__lastAssetFileDownloadUpdateTime, put=__set__lastAssetFileDownloadUpdateTime)) float_t  _lastAssetFileDownloadUpdateTime;

/// @brief Field _semaphoreSlim offset 0x38
 __declspec(property(get=__get__semaphoreSlim, put=__set__semaphoreSlim)) ::System::Threading::SemaphoreSlim*  _semaphoreSlim;

/// @brief Field _assetFileToAssetDetails offset 0x40
 __declspec(property(get=__get__assetFileToAssetDetails, put=__set__assetFileToAssetDetails)) ::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*  _assetFileToAssetDetails;

/// @brief Field _oculusPlatformAdditionalContentModel offset 0x48
 __declspec(property(get=__get__oculusPlatformAdditionalContentModel, put=__set__oculusPlatformAdditionalContentModel)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  _oculusPlatformAdditionalContentModel;

/// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
constexpr operator  ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

constexpr void __set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* __get_levelDataAssetDownloadUpdateEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> __get_levelDataAssetDownloadUpdateEvent() const;

constexpr void __set__assetIdToDownloadinData(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* __get__assetIdToDownloadinData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*> __get__assetIdToDownloadinData() const;

constexpr void __set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* __get__downloadedAssetBundleFiles() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*> __get__downloadedAssetBundleFiles() const;

constexpr void __set__lastAssetFileDownloadUpdateForAssetIds(::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>* __get__lastAssetFileDownloadUpdateForAssetIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t,::Oculus::Platform::Models::AssetFileDownloadUpdate*>*> __get__lastAssetFileDownloadUpdateForAssetIds() const;

constexpr void __set__lastAssetFileDownloadUpdateTime(float_t  value) ;

constexpr float_t& __get__lastAssetFileDownloadUpdateTime() ;

constexpr float_t const& __get__lastAssetFileDownloadUpdateTime() const;

constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim*  value) ;

constexpr ::System::Threading::SemaphoreSlim* __get__semaphoreSlim() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> __get__semaphoreSlim() const;

constexpr void __set__assetFileToAssetDetails(::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>* __get__assetFileToAssetDetails() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::Oculus::Platform::Models::AssetDetails*>*> __get__assetFileToAssetDetails() const;

constexpr void __set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get__oculusPlatformAdditionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get__oculusPlatformAdditionalContentModel() const;

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x2364880 size 0xb0 virtual true final true
inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x2364930 size 0xb0 virtual true final true
inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*  value) ;

static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel* New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel*  oculusPlatformAdditionalContentModel) ;

/// @brief Method .ctor addr 0x23649e0 size 0x1e4 virtual false final false
inline void _ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel*  oculusPlatformAdditionalContentModel) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x2364bc4 size 0x110 virtual true final true
inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x2364cd4 size 0x110 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReloadAssetDetailsForAllLevelsAsync addr 0x2364de4 size 0x104 virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetDownloadAssetBundleFileAsync addr 0x2364ee8 size 0x10c virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetDownloadAssetBundleFileAsync(::StringW  levelId, ::Oculus::Platform::Models::AssetDetails*  assetDetails, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetTaskCompletionSourceForDownload addr 0x2364ff4 size 0x110 virtual false final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* GetTaskCompletionSourceForDownload(::StringW  levelId, ::Oculus::Platform::Models::AssetDetails*  assetDetail) ;

/// @brief Method HandleAssetFileDownloadUpdate addr 0x2365198 size 0x460 virtual false final false
inline void HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  msg) ;

/// @brief Method <.ctor>b__12_0 addr 0x23655f8 size 0x4 virtual false final false
inline void __ctor_b__12_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusBeatmapDataAssetFileModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel*, "", "OculusBeatmapDataAssetFileModel");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*, "", "OculusBeatmapDataAssetFileModel/LevelDownloadingData");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass15_0");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14, "", "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, "", "OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, "", "OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13, "", "OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13");
