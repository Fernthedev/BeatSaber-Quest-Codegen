#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelFilter)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class __LevelFilter____c;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
struct __LevelFilter___FilterLevelsAsync_d__13;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct EntitlementStatus;
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
class __LevelFilter____c;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
struct __LevelFilter___FilterLevelsAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__LevelFilter____c);
MARK_VAL_T(::GlobalNamespace::LevelFilter);
MARK_VAL_T(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13);
// Type: ::<FilterLevelsAsync>d__13
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4400))
// CS Name: ::LevelFilter::<FilterLevelsAsync>d__13
struct CORDL_TYPE __LevelFilter___FilterLevelsAsync_d__13 : public ::bs_hook::ValueTypeWrapper<0xc0> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>  __t__builder;

/// @brief Field packs offset 0x20
 __declspec(property(get=__get_packs, put=__set_packs)) ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  packs;

/// @brief Field filter offset 0x28
 __declspec(property(get=__get_filter, put=__set_filter)) ::GlobalNamespace::LevelFilter  filter;

/// @brief Field additionalContentModel offset 0x78
 __declspec(property(get=__get_additionalContentModel, put=__set_additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  additionalContentModel;

/// @brief Field cancellationToken offset 0x80
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field playerDataModel offset 0x88
 __declspec(property(get=__get_playerDataModel, put=__set_playerDataModel)) ::GlobalNamespace::PlayerDataModel*  playerDataModel;

/// @brief Field <filteredLevels>5__2 offset 0x90
 __declspec(property(get=__get__filteredLevels_5__2, put=__set__filteredLevels_5__2)) ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  _filteredLevels_5__2;

/// @brief Field <>7__wrap2 offset 0x98
 __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2)) ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  __7__wrap2;

/// @brief Field <>7__wrap3 offset 0xa0
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) int32_t  __7__wrap3;

/// @brief Field <>7__wrap4 offset 0xa8
 __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  __7__wrap4;

/// @brief Field <level>5__6 offset 0xb0
 __declspec(property(get=__get__level_5__6, put=__set__level_5__6)) ::GlobalNamespace::IPreviewBeatmapLevel*  _level_5__6;

/// @brief Field <>u__1 offset 0xb8
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*> const& __get___t__builder() const;

constexpr void __set_packs(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get_packs() ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get_packs() const;

constexpr void __set_filter(::GlobalNamespace::LevelFilter  value) ;

constexpr ::GlobalNamespace::LevelFilter& __get_filter() ;

constexpr ::GlobalNamespace::LevelFilter const& __get_filter() const;

constexpr void __set_additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get_additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get_additionalContentModel() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get_playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get_playerDataModel() const;

constexpr void __set__filteredLevels_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __get__filteredLevels_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __get__filteredLevels_5__2() const;

constexpr void __set___7__wrap2(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get___7__wrap2() ;

constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get___7__wrap2() const;

constexpr void __set___7__wrap3(int32_t  value) ;

constexpr int32_t& __get___7__wrap3() ;

constexpr int32_t const& __get___7__wrap3() const;

constexpr void __set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __get___7__wrap4() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __get___7__wrap4() const;

constexpr void __set__level_5__6(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get__level_5__6() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get__level_5__6() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x234abb0 size 0xe00 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x234b9b0 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>", modifiers: "", def_value: None }, CppParam { name: "packs", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name: "filter", ty: "::GlobalNamespace::LevelFilter", modifiers: "", def_value: None }, CppParam { name: "additionalContentModel", ty: "::GlobalNamespace::IAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "playerDataModel", ty: "::GlobalNamespace::PlayerDataModel*", modifiers: "", def_value: None }, CppParam { name: "_filteredLevels_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: None }, CppParam { name: "_level_5__6", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __LevelFilter___FilterLevelsAsync_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>  __t__builder, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  packs, ::GlobalNamespace::LevelFilter  filter, ::GlobalNamespace::IAdditionalContentModel*  additionalContentModel, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  _filteredLevels_5__2, ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  __7__wrap2, int32_t  __7__wrap3, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  __7__wrap4, ::GlobalNamespace::IPreviewBeatmapLevel*  _level_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelFilter___FilterLevelsAsync_d__13(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelFilter___FilterLevelsAsync_d__13()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, 0xc0>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4401))
// CS Name: ::LevelFilter::<>c*
class CORDL_TYPE __LevelFilter____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__LevelFilter____c*  value) ;

static inline ::GlobalNamespace::__LevelFilter____c* getStaticF___9() ;

static inline void setStaticF___9__14_0(::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>*  value) ;

static inline ::System::Comparison_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>>* getStaticF___9__14_0() ;

static inline ::GlobalNamespace::__LevelFilter____c* New_ctor() ;

/// @brief Method .ctor addr 0x234ba6c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FilterLevelByText>b__14_0 addr 0x234ba74 size 0x24 virtual false final false
inline int32_t _FilterLevelByText_b__14_0(::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>  x, ::System::ValueTuple_2<int32_t,::GlobalNamespace::IPreviewBeatmapLevel*>  y) ;

// Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LevelFilter____c(__LevelFilter____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LevelFilter____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LevelFilter____c(__LevelFilter____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LevelFilter____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__14_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilter____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelFilter
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4402))
// CS Name: ::LevelFilter
struct CORDL_TYPE LevelFilter : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
using __c = ::GlobalNamespace::__LevelFilter____c;

using _FilterLevelsAsync_d__13 = ::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field songOwned offset 0x0
 __declspec(property(get=__get_songOwned, put=__set_songOwned)) bool  songOwned;

/// @brief Field songNotOwned offset 0x1
 __declspec(property(get=__get_songNotOwned, put=__set_songNotOwned)) bool  songNotOwned;

/// @brief Field songUnplayed offset 0x2
 __declspec(property(get=__get_songUnplayed, put=__set_songUnplayed)) bool  songUnplayed;

/// @brief Field difficulties offset 0x3
 __declspec(property(get=__get_difficulties, put=__set_difficulties)) ::GlobalNamespace::BeatmapDifficultyMask  difficulties;

/// @brief Field songPacks offset 0x8
 __declspec(property(get=__get_songPacks, put=__set_songPacks)) ::GlobalNamespace::SongPackMask  songPacks;

/// @brief Field characteristicSerializedName offset 0x28
 __declspec(property(get=__get_characteristicSerializedName, put=__set_characteristicSerializedName)) ::StringW  characteristicSerializedName;

/// @brief Field minBpm offset 0x30
 __declspec(property(get=__get_minBpm, put=__set_minBpm)) float_t  minBpm;

/// @brief Field maxBpm offset 0x34
 __declspec(property(get=__get_maxBpm, put=__set_maxBpm)) float_t  maxBpm;

/// @brief Field sensitivity offset 0x38
 __declspec(property(get=__get_sensitivity, put=__set_sensitivity)) ::GlobalNamespace::PlayerSensitivityFlag  sensitivity;

/// @brief Field searchText offset 0x40
 __declspec(property(get=__get_searchText, put=__set_searchText)) ::StringW  searchText;

/// @brief Field limitIds offset 0x48
 __declspec(property(get=__get_limitIds, put=__set_limitIds)) ::ArrayW<::StringW,::Array<::StringW>*>  limitIds;

constexpr void __set_songOwned(bool  value) ;

constexpr bool& __get_songOwned() ;

constexpr bool const& __get_songOwned() const;

constexpr void __set_songNotOwned(bool  value) ;

constexpr bool& __get_songNotOwned() ;

constexpr bool const& __get_songNotOwned() const;

constexpr void __set_songUnplayed(bool  value) ;

constexpr bool& __get_songUnplayed() ;

constexpr bool const& __get_songUnplayed() const;

constexpr void __set_difficulties(::GlobalNamespace::BeatmapDifficultyMask  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get_difficulties() ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get_difficulties() const;

constexpr void __set_songPacks(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get_songPacks() ;

constexpr ::GlobalNamespace::SongPackMask const& __get_songPacks() const;

constexpr void __set_characteristicSerializedName(::StringW  value) ;

constexpr ::StringW& __get_characteristicSerializedName() ;

constexpr ::StringW const& __get_characteristicSerializedName() const;

constexpr void __set_minBpm(float_t  value) ;

constexpr float_t& __get_minBpm() ;

constexpr float_t const& __get_minBpm() const;

constexpr void __set_maxBpm(float_t  value) ;

constexpr float_t& __get_maxBpm() ;

constexpr float_t const& __get_maxBpm() const;

constexpr void __set_sensitivity(::GlobalNamespace::PlayerSensitivityFlag  value) ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get_sensitivity() ;

constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get_sensitivity() const;

constexpr void __set_searchText(::StringW  value) ;

constexpr ::StringW& __get_searchText() ;

constexpr ::StringW const& __get_searchText() const;

constexpr void __set_limitIds(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_limitIds() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_limitIds() const;

static inline void setStaticF_bpmOptions(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF_bpmOptions() ;

/// @brief Method IsWithoutFilter addr 0x2349588 size 0xb0 virtual false final false
static inline bool IsWithoutFilter(ByRef<::GlobalNamespace::LevelFilter>  filter, bool  ignoreFilterBySongs) ;

/// @brief Method FilterLevelsAsync addr 0x2349638 size 0x134 virtual false final false
static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>* FilterLevelsAsync(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>  packs, ::GlobalNamespace::LevelFilter  filter, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::GlobalNamespace::IAdditionalContentModel*  additionalContentModel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FilterLevelByText addr 0x234976c size 0x750 virtual false final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* FilterLevelByText(::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*  levels, ::ArrayW<::StringW,::Array<::StringW>*>  searchTerms) ;

/// @brief Method <FilterLevelsAsync>g__HasPlayedAnyDifficulty|13_0 addr 0x234a07c size 0x498 virtual false final false
static inline bool _FilterLevelsAsync_g__HasPlayedAnyDifficulty_13_0(::GlobalNamespace::IPreviewBeatmapLevel*  level, ::GlobalNamespace::PlayerDataModel*  playerDataModel) ;

/// @brief Method <FilterLevelsAsync>g__MatchesCharacteristic|13_1 addr 0x234a514 size 0x328 virtual false final false
static inline bool _FilterLevelsAsync_g__MatchesCharacteristic_13_1(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  difficultySets, ::StringW  characteristicFilter) ;

/// @brief Method <FilterLevelsAsync>g__MatchesDifficulty|13_2 addr 0x234a83c size 0x374 virtual false final false
static inline bool _FilterLevelsAsync_g__MatchesDifficulty_13_2(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*  difficultySets, ::GlobalNamespace::BeatmapDifficultyMask  difficultyFilter) ;

/// @brief Method <FilterLevelByText>g__CalculateMatchScore|14_1 addr 0x2349ebc size 0x12c virtual false final false
static inline int32_t _FilterLevelByText_g__CalculateMatchScore_14_1(::StringW  levelString, ::ArrayW<::StringW,::Array<::StringW>*>  searchTerms) ;

// Ctor Parameters [CppParam { name: "songOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "songNotOwned", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "songUnplayed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "characteristicSerializedName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "minBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sensitivity", ty: "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: None }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "limitIds", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr LevelFilter(bool  songOwned, bool  songNotOwned, bool  songUnplayed, ::GlobalNamespace::BeatmapDifficultyMask  difficulties, ::GlobalNamespace::SongPackMask  songPacks, ::StringW  characteristicSerializedName, float_t  minBpm, float_t  maxBpm, ::GlobalNamespace::PlayerSensitivityFlag  sensitivity, ::StringW  searchText, ::ArrayW<::StringW,::Array<::StringW>*>  limitIds) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LevelFilter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LevelFilter()  = default;


// Fields

// Static field bpmOptions


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilter, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__LevelFilter____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilter____c*, "", "LevelFilter/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilter, "", "LevelFilter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilter___FilterLevelsAsync_d__13, "", "LevelFilter/<FilterLevelsAsync>d__13");
