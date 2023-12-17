#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelsModel)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___GetBeatmapLevelAsync_d__39;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
template<typename K,typename V>
class HMCache_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c__DisplayClass36_0;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionContainerSO;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel__InitData;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel__InitData;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c__DisplayClass36_0;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___GetBeatmapLevelAsync_d__39;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel____c);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4357))
// CS Name: ::BeatmapLevelsModel::InitData*
class CORDL_TYPE __BeatmapLevelsModel__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field maxCachedBeatmapLevels offset 0x10
 __declspec(property(get=__get_maxCachedBeatmapLevels, put=__set_maxCachedBeatmapLevels)) int32_t  maxCachedBeatmapLevels;

constexpr void __set_maxCachedBeatmapLevels(int32_t  value) ;

constexpr int32_t& __get_maxCachedBeatmapLevels() ;

constexpr int32_t const& __get_maxCachedBeatmapLevels() const;

static inline ::GlobalNamespace::__BeatmapLevelsModel__InitData* New_ctor(int32_t  maxCachedBeatmapLevels) ;

/// @brief Method .ctor addr 0x2343f68 size 0x28 virtual false final false
inline void _ctor(int32_t  maxCachedBeatmapLevels) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapLevelsModel__InitData(__BeatmapLevelsModel__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapLevelsModel__InitData(__BeatmapLevelsModel__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GetBeatmapLevelResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4358))
// CS Name: ::BeatmapLevelsModel::GetBeatmapLevelResult
struct CORDL_TYPE __BeatmapLevelsModel__GetBeatmapLevelResult : public ::bs_hook::ValueTypeWrapper<0x10> {
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

/// @brief Method .ctor addr 0x2343f90 size 0x10 virtual false final false
inline void _ctor(bool  isError, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel) ;

// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }]
constexpr __BeatmapLevelsModel__GetBeatmapLevelResult(bool  isError, ::GlobalNamespace::IBeatmapLevel*  beatmapLevel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelsModel__GetBeatmapLevelResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel__GetBeatmapLevelResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DownloadingState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4359))
// CS Name: ::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState
struct CORDL_TYPE __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped
enum struct ____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped : int32_t {
__E_PreparingToDownload = static_cast<int32_t>(0x0),
__E_Downloading = static_cast<int32_t>(0x1),
__E_Completed = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field PreparingToDownload value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const PreparingToDownload;

/// @brief Field Downloading value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const Downloading;

/// @brief Field Completed value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const Completed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped () const noexcept {
return std::bit_cast<____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelDownloadingUpdate
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4360))
// CS Name: ::BeatmapLevelsModel::LevelDownloadingUpdate
struct CORDL_TYPE __BeatmapLevelsModel__LevelDownloadingUpdate : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using DownloadingState = ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field levelID offset 0x0
 __declspec(property(get=__get_levelID, put=__set_levelID)) ::StringW  levelID;

/// @brief Field bytesTotal offset 0x8
 __declspec(property(get=__get_bytesTotal, put=__set_bytesTotal)) uint32_t  bytesTotal;

/// @brief Field bytesTransferred offset 0xc
 __declspec(property(get=__get_bytesTransferred, put=__set_bytesTransferred)) uint32_t  bytesTransferred;

/// @brief Field downloadingState offset 0x10
 __declspec(property(get=__get_downloadingState, put=__set_downloadingState)) ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  downloadingState;

constexpr void __set_levelID(::StringW  value) ;

constexpr ::StringW& __get_levelID() ;

constexpr ::StringW const& __get_levelID() const;

constexpr void __set_bytesTotal(uint32_t  value) ;

constexpr uint32_t& __get_bytesTotal() ;

constexpr uint32_t const& __get_bytesTotal() const;

constexpr void __set_bytesTransferred(uint32_t  value) ;

constexpr uint32_t& __get_bytesTransferred() ;

constexpr uint32_t const& __get_bytesTransferred() const;

constexpr void __set_downloadingState(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  value) ;

constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState& __get_downloadingState() ;

constexpr ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const& __get_downloadingState() const;

/// @brief Method .ctor addr 0x2343d44 size 0x10 virtual false final false
inline void _ctor(::StringW  levelID, uint32_t  bytesTotal, uint32_t  bytesTransferred, ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  downloadingState) ;

// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "downloadingState", ty: "::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: None }]
constexpr __BeatmapLevelsModel__LevelDownloadingUpdate(::StringW  levelID, uint32_t  bytesTotal, uint32_t  bytesTransferred, ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState  downloadingState) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelsModel__LevelDownloadingUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel__LevelDownloadingUpdate()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<ReloadCustomLevelPackCollectionAsync>d__33
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4361))
// CS Name: ::BeatmapLevelsModel::<ReloadCustomLevelPackCollectionAsync>d__33
struct CORDL_TYPE __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33 : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __t__builder;

/// @brief Field <>u__1 offset 0x20
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*> const& __get___t__builder() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2343fa0 size 0x20c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23441ac size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: None }]
constexpr __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass36_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4362))
// CS Name: ::BeatmapLevelsModel::<>c__DisplayClass36_0*
class CORDL_TYPE __BeatmapLevelsModel____c__DisplayClass36_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field levelId offset 0x10
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

static inline ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0* New_ctor() ;

/// @brief Method .ctor addr 0x23439ec size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetLevelPreviewForLevelId>b__1 addr 0x2344204 size 0xac virtual false final false
inline bool _GetLevelPreviewForLevelId_b__1(::GlobalNamespace::IPreviewBeatmapLevel*  beatmapLevel) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapLevelsModel____c__DisplayClass36_0(__BeatmapLevelsModel____c__DisplayClass36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c__DisplayClass36_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapLevelsModel____c__DisplayClass36_0(__BeatmapLevelsModel____c__DisplayClass36_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel____c__DisplayClass36_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4363))
// CS Name: ::BeatmapLevelsModel::<>c*
class CORDL_TYPE __BeatmapLevelsModel____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelsModel____c*  value) ;

static inline ::GlobalNamespace::__BeatmapLevelsModel____c* getStaticF___9() ;

static inline void setStaticF___9__36_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* getStaticF___9__36_0() ;

static inline ::GlobalNamespace::__BeatmapLevelsModel____c* New_ctor() ;

/// @brief Method .ctor addr 0x2344314 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetLevelPreviewForLevelId>b__36_0 addr 0x234431c size 0x114 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _GetLevelPreviewForLevelId_b__36_0(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapLevelsModel____c(__BeatmapLevelsModel____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapLevelsModel____c(__BeatmapLevelsModel____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__36_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapLevelAsync>d__39
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4364))
// CS Name: ::BeatmapLevelsModel::<GetBeatmapLevelAsync>d__39
struct CORDL_TYPE __BeatmapLevelsModel___GetBeatmapLevelAsync_d__39 : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::BeatmapLevelsModel*  __4__this;

/// @brief Field levelID offset 0x28
 __declspec(property(get=__get_levelID, put=__set_levelID)) ::StringW  levelID;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Field <beatmapLevel>5__2 offset 0x40
 __declspec(property(get=__get__beatmapLevel_5__2, put=__set__beatmapLevel_5__2)) ::GlobalNamespace::IBeatmapLevel*  _beatmapLevel_5__2;

/// @brief Field <loadLevelResult>5__3 offset 0x48
 __declspec(property(get=__get__loadLevelResult_5__3, put=__set__loadLevelResult_5__3)) ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  _loadLevelResult_5__3;

/// @brief Field <>u__2 offset 0x58
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__2;

/// @brief Field <>u__3 offset 0x60
 __declspec(property(get=__get___u__3, put=__set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  __u__3;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> __get___4__this() const;

constexpr void __set_levelID(::StringW  value) ;

constexpr ::StringW& __get_levelID() ;

constexpr ::StringW const& __get_levelID() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

constexpr void __set__beatmapLevel_5__2(::GlobalNamespace::IBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevel* __get__beatmapLevel_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> __get__beatmapLevel_5__2() const;

constexpr void __set__loadLevelResult_5__3(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  value) ;

constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult& __get__loadLevelResult_5__3() ;

constexpr ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult const& __get__loadLevelResult_5__3() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> const& __get___u__2() const;

constexpr void __set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>& __get___u__3() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> const& __get___u__3() const;

/// @brief Method MoveNext addr 0x2344430 size 0x728 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2344b58 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_loadLevelResult_5__3", ty: "::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr __BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __t__builder, ::GlobalNamespace::BeatmapLevelsModel*  __4__this, ::StringW  levelID, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1, ::GlobalNamespace::IBeatmapLevel*  _beatmapLevel_5__2, ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult  _loadLevelResult_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>  __u__3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatmapLevelsModel___GetBeatmapLevelAsync_d__39()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4365))
// CS Name: ::BeatmapLevelsModel*
class CORDL_TYPE BeatmapLevelsModel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetBeatmapLevelAsync_d__39 = ::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39;

using __c = ::GlobalNamespace::__BeatmapLevelsModel____c;

using __c__DisplayClass36_0 = ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0;

using _ReloadCustomLevelPackCollectionAsync_d__33 = ::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33;

using LevelDownloadingUpdate = ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate;

using GetBeatmapLevelResult = ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult;

using InitData = ::GlobalNamespace::__BeatmapLevelsModel__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _dlcLevelPackCollectionContainer offset 0x18
 __declspec(property(get=__get__dlcLevelPackCollectionContainer, put=__set__dlcLevelPackCollectionContainer)) ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*  _dlcLevelPackCollectionContainer;

/// @brief Field _ostAndExtrasPackCollection offset 0x20
 __declspec(property(get=__get__ostAndExtrasPackCollection, put=__set__ostAndExtrasPackCollection)) ::GlobalNamespace::BeatmapLevelPackCollectionSO*  _ostAndExtrasPackCollection;

/// @brief Field _maxCachedBeatmapLevels offset 0x28
 __declspec(property(get=__get__maxCachedBeatmapLevels, put=__set__maxCachedBeatmapLevels)) int32_t  _maxCachedBeatmapLevels;

/// @brief Field _additionalContentModel offset 0x30
 __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

/// @brief Field _beatmapDataAssetFileModel offset 0x38
 __declspec(property(get=__get__beatmapDataAssetFileModel, put=__set__beatmapDataAssetFileModel)) ::GlobalNamespace::IBeatmapDataAssetFileModel*  _beatmapDataAssetFileModel;

/// @brief Field _audioClipAsyncLoader offset 0x40
 __declspec(property(get=__get__audioClipAsyncLoader, put=__set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader*  _audioClipAsyncLoader;

/// @brief Field _beatmapLevelDataLoader offset 0x48
 __declspec(property(get=__get__beatmapLevelDataLoader, put=__set__beatmapLevelDataLoader)) ::GlobalNamespace::BeatmapLevelDataLoader*  _beatmapLevelDataLoader;

/// @brief Field levelDownloadingUpdateEvent offset 0x50
 __declspec(property(get=__get_levelDownloadingUpdateEvent, put=__set_levelDownloadingUpdateEvent)) ::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  levelDownloadingUpdateEvent;

/// @brief Field _allLoadedBeatmapLevelPackCollection offset 0x58
 __declspec(property(get=__get__allLoadedBeatmapLevelPackCollection, put=__set__allLoadedBeatmapLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  _allLoadedBeatmapLevelPackCollection;

/// @brief Field _allLoadedBeatmapLevelWithoutCustomLevelPackCollection offset 0x60
 __declspec(property(get=__get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection, put=__set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  _allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

/// @brief Field _customLevelPackCollection offset 0x68
 __declspec(property(get=__get__customLevelPackCollection, put=__set__customLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  _customLevelPackCollection;

/// @brief Field _loadedBeatmapLevels offset 0x70
 __declspec(property(get=__get__loadedBeatmapLevels, put=__set__loadedBeatmapLevels)) ::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*  _loadedBeatmapLevels;

/// @brief Field _loadedPreviewBeatmapLevels offset 0x78
 __declspec(property(get=__get__loadedPreviewBeatmapLevels, put=__set__loadedPreviewBeatmapLevels)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*  _loadedPreviewBeatmapLevels;

/// @brief Field _beatmapLevelLoader offset 0x80
 __declspec(property(get=__get__beatmapLevelLoader, put=__set__beatmapLevelLoader)) ::GlobalNamespace::BeatmapLevelLoader*  _beatmapLevelLoader;

 __declspec(property(get=get_ostAndExtrasPackCollection)) ::GlobalNamespace::BeatmapLevelPackCollectionSO*  ostAndExtrasPackCollection;

 __declspec(property(get=get_dlcBeatmapLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  dlcBeatmapLevelPackCollection;

 __declspec(property(get=get_allLoadedBeatmapLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  allLoadedBeatmapLevelPackCollection;

 __declspec(property(get=get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

 __declspec(property(get=get_customLevelPackCollection)) ::GlobalNamespace::IBeatmapLevelPackCollection*  customLevelPackCollection;

constexpr void __set__dlcLevelPackCollectionContainer(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* __get__dlcLevelPackCollectionContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*> __get__dlcLevelPackCollectionContainer() const;

constexpr void __set__ostAndExtrasPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* __get__ostAndExtrasPackCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> __get__ostAndExtrasPackCollection() const;

constexpr void __set__maxCachedBeatmapLevels(int32_t  value) ;

constexpr int32_t& __get__maxCachedBeatmapLevels() ;

constexpr int32_t const& __get__maxCachedBeatmapLevels() const;

constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get__additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get__additionalContentModel() const;

constexpr void __set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel*  value) ;

constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* __get__beatmapDataAssetFileModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> __get__beatmapDataAssetFileModel() const;

constexpr void __set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader*  value) ;

constexpr ::GlobalNamespace::AudioClipAsyncLoader* __get__audioClipAsyncLoader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> __get__audioClipAsyncLoader() const;

constexpr void __set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelDataLoader* __get__beatmapLevelDataLoader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> __get__beatmapLevelDataLoader() const;

constexpr void __set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* __get_levelDownloadingUpdateEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*> __get_levelDownloadingUpdateEvent() const;

constexpr void __set__allLoadedBeatmapLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* __get__allLoadedBeatmapLevelPackCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> __get__allLoadedBeatmapLevelPackCollection() const;

constexpr void __set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* __get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> __get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection() const;

constexpr void __set__customLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPackCollection* __get__customLevelPackCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> __get__customLevelPackCollection() const;

constexpr void __set__loadedBeatmapLevels(::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*  value) ;

constexpr ::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>* __get__loadedBeatmapLevels() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<::StringW,::GlobalNamespace::IBeatmapLevel*>*> __get__loadedBeatmapLevels() const;

constexpr void __set__loadedPreviewBeatmapLevels(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>* __get__loadedPreviewBeatmapLevels() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IPreviewBeatmapLevel*>*> __get__loadedPreviewBeatmapLevels() const;

constexpr void __set__beatmapLevelLoader(::GlobalNamespace::BeatmapLevelLoader*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelLoader* __get__beatmapLevelLoader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelLoader*> __get__beatmapLevelLoader() const;

/// @brief Method add_levelDownloadingUpdateEvent addr 0x234275c size 0xb0 virtual false final false
inline void add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  value) ;

/// @brief Method remove_levelDownloadingUpdateEvent addr 0x234280c size 0xb0 virtual false final false
inline void remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*  value) ;

/// @brief Method get_ostAndExtrasPackCollection addr 0x23428bc size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasPackCollection() ;

/// @brief Method get_dlcBeatmapLevelPackCollection addr 0x23428c4 size 0x1c virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_dlcBeatmapLevelPackCollection() ;

/// @brief Method get_allLoadedBeatmapLevelPackCollection addr 0x23428e0 size 0x8 virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelPackCollection() ;

/// @brief Method get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection addr 0x23428e8 size 0x8 virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection() ;

/// @brief Method get_customLevelPackCollection addr 0x23428f0 size 0x8 virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_customLevelPackCollection() ;

/// @brief Method Init addr 0x23428f8 size 0x13c virtual false final false
inline void Init(::GlobalNamespace::__BeatmapLevelsModel__InitData*  initData) ;

/// @brief Method Start addr 0x2342f98 size 0xec virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2343084 size 0x16c virtual false final false
inline void OnDestroy() ;

/// @brief Method ClearLoadedBeatmapLevelsCaches addr 0x23431f0 size 0x50 virtual false final false
inline void ClearLoadedBeatmapLevelsCaches() ;

/// @brief Method ReloadCustomLevelPackCollectionAsync addr 0x2343240 size 0xe4 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelPackCollection*>* ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetLevelPackForLevelId addr 0x2343324 size 0x554 virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPack* GetLevelPackForLevelId(::StringW  levelId) ;

/// @brief Method GetLevelPack addr 0x2343878 size 0x174 virtual false final false
inline ::GlobalNamespace::IBeatmapLevelPack* GetLevelPack(::StringW  levePacklId) ;

/// @brief Method GetLevelPreviewForLevelId addr 0x2341470 size 0x220 virtual false final false
inline ::GlobalNamespace::IPreviewBeatmapLevel* GetLevelPreviewForLevelId(::StringW  levelId) ;

/// @brief Method IsBeatmapLevelLoaded addr 0x23439f4 size 0xdc virtual false final false
inline bool IsBeatmapLevelLoaded(::StringW  levelId) ;

/// @brief Method GetBeatmapLevelIfLoaded addr 0x2343ad0 size 0x110 virtual false final false
inline ::GlobalNamespace::IBeatmapLevel* GetBeatmapLevelIfLoaded(::StringW  levelId) ;

/// @brief Method GetBeatmapLevelAsync addr 0x2343be0 size 0x114 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* GetBeatmapLevelAsync(::StringW  levelID, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method HandleLevelDataAssetDownloadUpdate addr 0x2343cf4 size 0x50 virtual false final false
inline void HandleLevelDataAssetDownloadUpdate(::GlobalNamespace::LevelDataAssetDownloadUpdate  update) ;

/// @brief Method HandleItemWillBeRemovedFromCache addr 0x2343d54 size 0x1c virtual false final false
inline void HandleItemWillBeRemovedFromCache(::GlobalNamespace::IBeatmapLevel*  beatmapLevel) ;

/// @brief Method UpdateLoadedPreviewLevels addr 0x2342a34 size 0x564 virtual false final false
inline void UpdateLoadedPreviewLevels() ;

/// @brief Method UpdateAllLoadedBeatmapLevelPacks addr 0x2343d70 size 0x174 virtual false final false
inline void UpdateAllLoadedBeatmapLevelPacks() ;

static inline ::GlobalNamespace::BeatmapLevelsModel* New_ctor() ;

/// @brief Method .ctor addr 0x2343ee4 size 0x84 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelsModel(BeatmapLevelsModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelsModel(BeatmapLevelsModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelsModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, "", "BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__InitData*, "", "BeatmapLevelsModel/InitData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel____c*, "", "BeatmapLevelsModel/<>c");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass36_0*, "", "BeatmapLevelsModel/<>c__DisplayClass36_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, "", "BeatmapLevelsModel/GetBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, "", "BeatmapLevelsModel/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39, "", "BeatmapLevelsModel/<GetBeatmapLevelAsync>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33, "", "BeatmapLevelsModel/<ReloadCustomLevelPackCollectionAsync>d__33");
