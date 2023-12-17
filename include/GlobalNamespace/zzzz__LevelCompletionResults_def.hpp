#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResults)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct __RankModel__Rank;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace System {
class IComparable;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndAction;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelCompletionResults__LevelEndAction);
MARK_VAL_T(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType);
MARK_REF_PTR_T(::GlobalNamespace::LevelCompletionResults);
// Type: ::LevelEndStateType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15017))
// CS Name: ::LevelCompletionResults::LevelEndStateType
struct CORDL_TYPE __LevelCompletionResults__LevelEndStateType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____LevelCompletionResults__LevelEndStateType_Unwrapped
enum struct ____LevelCompletionResults__LevelEndStateType_Unwrapped : int32_t {
__E_Incomplete = static_cast<int32_t>(0x0),
__E_Cleared = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Incomplete value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const Incomplete;

/// @brief Field Cleared value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const Cleared;

/// @brief Field Failed value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____LevelCompletionResults__LevelEndStateType_Unwrapped () const noexcept {
return std::bit_cast<____LevelCompletionResults__LevelEndStateType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LevelCompletionResults__LevelEndStateType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelCompletionResults__LevelEndStateType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelCompletionResults__LevelEndStateType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelEndAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15018))
// CS Name: ::LevelCompletionResults::LevelEndAction
struct CORDL_TYPE __LevelCompletionResults__LevelEndAction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____LevelCompletionResults__LevelEndAction_Unwrapped
enum struct ____LevelCompletionResults__LevelEndAction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Quit = static_cast<int32_t>(0x1),
__E_Restart = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const None;

/// @brief Field Quit value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const Quit;

/// @brief Field Restart value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const Restart;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____LevelCompletionResults__LevelEndAction_Unwrapped () const noexcept {
return std::bit_cast<____LevelCompletionResults__LevelEndAction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __LevelCompletionResults__LevelEndAction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LevelCompletionResults__LevelEndAction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LevelCompletionResults__LevelEndAction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCompletionResults__LevelEndAction, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LevelCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15019))
// CS Name: ::LevelCompletionResults*
class CORDL_TYPE LevelCompletionResults : public ::System::Object {
public:
// Declarations
using LevelEndAction = ::GlobalNamespace::__LevelCompletionResults__LevelEndAction;

using LevelEndStateType = ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field gameplayModifiers offset 0x10
 __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers*  gameplayModifiers;

/// @brief Field modifiedScore offset 0x18
 __declspec(property(get=__get_modifiedScore, put=__set_modifiedScore)) int32_t  modifiedScore;

/// @brief Field multipliedScore offset 0x1c
 __declspec(property(get=__get_multipliedScore, put=__set_multipliedScore)) int32_t  multipliedScore;

/// @brief Field rank offset 0x20
 __declspec(property(get=__get_rank, put=__set_rank)) ::GlobalNamespace::__RankModel__Rank  rank;

/// @brief Field fullCombo offset 0x24
 __declspec(property(get=__get_fullCombo, put=__set_fullCombo)) bool  fullCombo;

/// @brief Field leftSaberMovementDistance offset 0x28
 __declspec(property(get=__get_leftSaberMovementDistance, put=__set_leftSaberMovementDistance)) float_t  leftSaberMovementDistance;

/// @brief Field rightSaberMovementDistance offset 0x2c
 __declspec(property(get=__get_rightSaberMovementDistance, put=__set_rightSaberMovementDistance)) float_t  rightSaberMovementDistance;

/// @brief Field leftHandMovementDistance offset 0x30
 __declspec(property(get=__get_leftHandMovementDistance, put=__set_leftHandMovementDistance)) float_t  leftHandMovementDistance;

/// @brief Field rightHandMovementDistance offset 0x34
 __declspec(property(get=__get_rightHandMovementDistance, put=__set_rightHandMovementDistance)) float_t  rightHandMovementDistance;

/// @brief Field levelEndStateType offset 0x38
 __declspec(property(get=__get_levelEndStateType, put=__set_levelEndStateType)) ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType;

/// @brief Field levelEndAction offset 0x3c
 __declspec(property(get=__get_levelEndAction, put=__set_levelEndAction)) ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction;

/// @brief Field energy offset 0x40
 __declspec(property(get=__get_energy, put=__set_energy)) float_t  energy;

/// @brief Field goodCutsCount offset 0x44
 __declspec(property(get=__get_goodCutsCount, put=__set_goodCutsCount)) int32_t  goodCutsCount;

/// @brief Field badCutsCount offset 0x48
 __declspec(property(get=__get_badCutsCount, put=__set_badCutsCount)) int32_t  badCutsCount;

/// @brief Field missedCount offset 0x4c
 __declspec(property(get=__get_missedCount, put=__set_missedCount)) int32_t  missedCount;

/// @brief Field notGoodCount offset 0x50
 __declspec(property(get=__get_notGoodCount, put=__set_notGoodCount)) int32_t  notGoodCount;

/// @brief Field okCount offset 0x54
 __declspec(property(get=__get_okCount, put=__set_okCount)) int32_t  okCount;

/// @brief Field maxCutScore offset 0x58
 __declspec(property(get=__get_maxCutScore, put=__set_maxCutScore)) int32_t  maxCutScore;

/// @brief Field totalCutScore offset 0x5c
 __declspec(property(get=__get_totalCutScore, put=__set_totalCutScore)) int32_t  totalCutScore;

/// @brief Field goodCutsCountForNotesWithFullScoreScoringType offset 0x60
 __declspec(property(get=__get_goodCutsCountForNotesWithFullScoreScoringType, put=__set_goodCutsCountForNotesWithFullScoreScoringType)) int32_t  goodCutsCountForNotesWithFullScoreScoringType;

/// @brief Field averageCenterDistanceCutScoreForNotesWithFullScoreScoringType offset 0x64
 __declspec(property(get=__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, put=__set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType)) float_t  averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

/// @brief Field averageCutScoreForNotesWithFullScoreScoringType offset 0x68
 __declspec(property(get=__get_averageCutScoreForNotesWithFullScoreScoringType, put=__set_averageCutScoreForNotesWithFullScoreScoringType)) float_t  averageCutScoreForNotesWithFullScoreScoringType;

/// @brief Field maxCombo offset 0x6c
 __declspec(property(get=__get_maxCombo, put=__set_maxCombo)) int32_t  maxCombo;

/// @brief Field endSongTime offset 0x70
 __declspec(property(get=__get_endSongTime, put=__set_endSongTime)) float_t  endSongTime;

/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value) ;

constexpr ::GlobalNamespace::GameplayModifiers* __get_gameplayModifiers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> __get_gameplayModifiers() const;

constexpr void __set_modifiedScore(int32_t  value) ;

constexpr int32_t& __get_modifiedScore() ;

constexpr int32_t const& __get_modifiedScore() const;

constexpr void __set_multipliedScore(int32_t  value) ;

constexpr int32_t& __get_multipliedScore() ;

constexpr int32_t const& __get_multipliedScore() const;

constexpr void __set_rank(::GlobalNamespace::__RankModel__Rank  value) ;

constexpr ::GlobalNamespace::__RankModel__Rank& __get_rank() ;

constexpr ::GlobalNamespace::__RankModel__Rank const& __get_rank() const;

constexpr void __set_fullCombo(bool  value) ;

constexpr bool& __get_fullCombo() ;

constexpr bool const& __get_fullCombo() const;

constexpr void __set_leftSaberMovementDistance(float_t  value) ;

constexpr float_t& __get_leftSaberMovementDistance() ;

constexpr float_t const& __get_leftSaberMovementDistance() const;

constexpr void __set_rightSaberMovementDistance(float_t  value) ;

constexpr float_t& __get_rightSaberMovementDistance() ;

constexpr float_t const& __get_rightSaberMovementDistance() const;

constexpr void __set_leftHandMovementDistance(float_t  value) ;

constexpr float_t& __get_leftHandMovementDistance() ;

constexpr float_t const& __get_leftHandMovementDistance() const;

constexpr void __set_rightHandMovementDistance(float_t  value) ;

constexpr float_t& __get_rightHandMovementDistance() ;

constexpr float_t const& __get_rightHandMovementDistance() const;

constexpr void __set_levelEndStateType(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  value) ;

constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType& __get_levelEndStateType() ;

constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const& __get_levelEndStateType() const;

constexpr void __set_levelEndAction(::GlobalNamespace::__LevelCompletionResults__LevelEndAction  value) ;

constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction& __get_levelEndAction() ;

constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const& __get_levelEndAction() const;

constexpr void __set_energy(float_t  value) ;

constexpr float_t& __get_energy() ;

constexpr float_t const& __get_energy() const;

constexpr void __set_goodCutsCount(int32_t  value) ;

constexpr int32_t& __get_goodCutsCount() ;

constexpr int32_t const& __get_goodCutsCount() const;

constexpr void __set_badCutsCount(int32_t  value) ;

constexpr int32_t& __get_badCutsCount() ;

constexpr int32_t const& __get_badCutsCount() const;

constexpr void __set_missedCount(int32_t  value) ;

constexpr int32_t& __get_missedCount() ;

constexpr int32_t const& __get_missedCount() const;

constexpr void __set_notGoodCount(int32_t  value) ;

constexpr int32_t& __get_notGoodCount() ;

constexpr int32_t const& __get_notGoodCount() const;

constexpr void __set_okCount(int32_t  value) ;

constexpr int32_t& __get_okCount() ;

constexpr int32_t const& __get_okCount() const;

constexpr void __set_maxCutScore(int32_t  value) ;

constexpr int32_t& __get_maxCutScore() ;

constexpr int32_t const& __get_maxCutScore() const;

constexpr void __set_totalCutScore(int32_t  value) ;

constexpr int32_t& __get_totalCutScore() ;

constexpr int32_t const& __get_totalCutScore() const;

constexpr void __set_goodCutsCountForNotesWithFullScoreScoringType(int32_t  value) ;

constexpr int32_t& __get_goodCutsCountForNotesWithFullScoreScoringType() ;

constexpr int32_t const& __get_goodCutsCountForNotesWithFullScoreScoringType() const;

constexpr void __set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t  value) ;

constexpr float_t& __get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() ;

constexpr float_t const& __get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const;

constexpr void __set_averageCutScoreForNotesWithFullScoreScoringType(float_t  value) ;

constexpr float_t& __get_averageCutScoreForNotesWithFullScoreScoringType() ;

constexpr float_t const& __get_averageCutScoreForNotesWithFullScoreScoringType() const;

constexpr void __set_maxCombo(int32_t  value) ;

constexpr int32_t& __get_maxCombo() ;

constexpr int32_t const& __get_maxCombo() const;

constexpr void __set_endSongTime(float_t  value) ;

constexpr float_t& __get_endSongTime() ;

constexpr float_t const& __get_endSongTime() const;

static inline ::GlobalNamespace::LevelCompletionResults* New_ctor() ;

/// @brief Method .ctor addr 0x12a2c7c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::LevelCompletionResults* New_ctor(::GlobalNamespace::GameplayModifiers*  gameplayModifiers, int32_t  modifiedScore, int32_t  multipliedScore, ::GlobalNamespace::__RankModel__Rank  rank, bool  fullCombo, float_t  leftSaberMovementDistance, float_t  rightSaberMovementDistance, float_t  leftHandMovementDistance, float_t  rightHandMovementDistance, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction, float_t  energy, int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCount, int32_t  notGoodCount, int32_t  okCount, int32_t  maxCutScore, int32_t  totalCutScore, int32_t  goodCutsCountForNotesWithFullScoreScoringType, float_t  averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t  averageCutScoreForNotesWithFullScoreScoringType, int32_t  maxCombo, float_t  endSongTime) ;

/// @brief Method .ctor addr 0x12a2c84 size 0x12c virtual false final false
inline void _ctor(::GlobalNamespace::GameplayModifiers*  gameplayModifiers, int32_t  modifiedScore, int32_t  multipliedScore, ::GlobalNamespace::__RankModel__Rank  rank, bool  fullCombo, float_t  leftSaberMovementDistance, float_t  rightSaberMovementDistance, float_t  leftHandMovementDistance, float_t  rightHandMovementDistance, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction, float_t  energy, int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCount, int32_t  notGoodCount, int32_t  okCount, int32_t  maxCutScore, int32_t  totalCutScore, int32_t  goodCutsCountForNotesWithFullScoreScoringType, float_t  averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t  averageCutScoreForNotesWithFullScoreScoringType, int32_t  maxCombo, float_t  endSongTime) ;

/// @brief Method CompareTo addr 0x12a2db0 size 0x124 virtual true final true
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Method Serialize addr 0x12a2ed4 size 0x1d4 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData addr 0x12a30b8 size 0x8 virtual true final true
inline ::GlobalNamespace::LevelCompletionResults* LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method CreateFromSerializedData addr 0x12a30c0 size 0x340 virtual false final false
static inline ::GlobalNamespace::LevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelCompletionResults(LevelCompletionResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelCompletionResults(LevelCompletionResults const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelCompletionResults()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResults, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCompletionResults__LevelEndAction, "", "LevelCompletionResults/LevelEndAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, "", "LevelCompletionResults/LevelEndStateType");
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults*, "", "LevelCompletionResults");
