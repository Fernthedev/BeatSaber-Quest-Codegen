#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreModel)
namespace GlobalNamespace {
class __ScoreModel__NoteScoreDefinition;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __ScoreModel__MaxScoreCounterElement;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreModel;
}
namespace GlobalNamespace {
class __ScoreModel__MaxScoreCounterElement;
}
namespace GlobalNamespace {
class __ScoreModel__NoteScoreDefinition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreModel);
MARK_REF_PTR_T(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement);
MARK_REF_PTR_T(::GlobalNamespace::__ScoreModel__NoteScoreDefinition);
// Type: ::NoteScoreDefinition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4680))
// CS Name: ::ScoreModel::NoteScoreDefinition*
class CORDL_TYPE __ScoreModel__NoteScoreDefinition : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field maxCenterDistanceCutScore offset 0x10
 __declspec(property(get=__get_maxCenterDistanceCutScore, put=__set_maxCenterDistanceCutScore)) int32_t  maxCenterDistanceCutScore;

/// @brief Field minBeforeCutScore offset 0x14
 __declspec(property(get=__get_minBeforeCutScore, put=__set_minBeforeCutScore)) int32_t  minBeforeCutScore;

/// @brief Field maxBeforeCutScore offset 0x18
 __declspec(property(get=__get_maxBeforeCutScore, put=__set_maxBeforeCutScore)) int32_t  maxBeforeCutScore;

/// @brief Field minAfterCutScore offset 0x1c
 __declspec(property(get=__get_minAfterCutScore, put=__set_minAfterCutScore)) int32_t  minAfterCutScore;

/// @brief Field maxAfterCutScore offset 0x20
 __declspec(property(get=__get_maxAfterCutScore, put=__set_maxAfterCutScore)) int32_t  maxAfterCutScore;

/// @brief Field fixedCutScore offset 0x24
 __declspec(property(get=__get_fixedCutScore, put=__set_fixedCutScore)) int32_t  fixedCutScore;

 __declspec(property(get=get_maxCutScore)) int32_t  maxCutScore;

 __declspec(property(get=get_executionOrder)) int32_t  executionOrder;

constexpr void __set_maxCenterDistanceCutScore(int32_t  value) ;

constexpr int32_t& __get_maxCenterDistanceCutScore() ;

constexpr int32_t const& __get_maxCenterDistanceCutScore() const;

constexpr void __set_minBeforeCutScore(int32_t  value) ;

constexpr int32_t& __get_minBeforeCutScore() ;

constexpr int32_t const& __get_minBeforeCutScore() const;

constexpr void __set_maxBeforeCutScore(int32_t  value) ;

constexpr int32_t& __get_maxBeforeCutScore() ;

constexpr int32_t const& __get_maxBeforeCutScore() const;

constexpr void __set_minAfterCutScore(int32_t  value) ;

constexpr int32_t& __get_minAfterCutScore() ;

constexpr int32_t const& __get_minAfterCutScore() const;

constexpr void __set_maxAfterCutScore(int32_t  value) ;

constexpr int32_t& __get_maxAfterCutScore() ;

constexpr int32_t const& __get_maxAfterCutScore() const;

constexpr void __set_fixedCutScore(int32_t  value) ;

constexpr int32_t& __get_fixedCutScore() ;

constexpr int32_t const& __get_fixedCutScore() const;

/// @brief Method get_maxCutScore addr 0x2375d98 size 0x1c virtual false final false
inline int32_t get_maxCutScore() ;

/// @brief Method get_executionOrder addr 0x237618c size 0x1c virtual false final false
inline int32_t get_executionOrder() ;

static inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* New_ctor(int32_t  maxCenterDistanceCutScore, int32_t  minBeforeCutScore, int32_t  maxBeforeCutScore, int32_t  minAfterCutScore, int32_t  maxAfterCutScore, int32_t  fixedCutScore) ;

/// @brief Method .ctor addr 0x2376138 size 0x54 virtual false final false
inline void _ctor(int32_t  maxCenterDistanceCutScore, int32_t  minBeforeCutScore, int32_t  maxBeforeCutScore, int32_t  minAfterCutScore, int32_t  maxAfterCutScore, int32_t  fixedCutScore) ;

// Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__NoteScoreDefinition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ScoreModel__NoteScoreDefinition(__ScoreModel__NoteScoreDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__NoteScoreDefinition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ScoreModel__NoteScoreDefinition(__ScoreModel__NoteScoreDefinition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ScoreModel__NoteScoreDefinition()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreModel__NoteScoreDefinition, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MaxScoreCounterElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4681))
// CS Name: ::ScoreModel::MaxScoreCounterElement*
class CORDL_TYPE __ScoreModel__MaxScoreCounterElement : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field noteScoreDefinition offset 0x10
 __declspec(property(get=__get_noteScoreDefinition, put=__set_noteScoreDefinition)) ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*  noteScoreDefinition;

/// @brief Field time offset 0x18
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>*() noexcept;

constexpr void __set_noteScoreDefinition(::GlobalNamespace::__ScoreModel__NoteScoreDefinition*  value) ;

constexpr ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* __get_noteScoreDefinition() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*> __get_noteScoreDefinition() const;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

static inline ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement* New_ctor(::GlobalNamespace::__NoteData__ScoringType  scoringType, float_t  time) ;

/// @brief Method .ctor addr 0x2375d14 size 0x84 virtual false final false
inline void _ctor(::GlobalNamespace::__NoteData__ScoringType  scoringType, float_t  time) ;

/// @brief Method CompareTo addr 0x23761a8 size 0x90 virtual true final true
inline int32_t CompareTo(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*  other) ;

// Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__MaxScoreCounterElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ScoreModel__MaxScoreCounterElement(__ScoreModel__MaxScoreCounterElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ScoreModel__MaxScoreCounterElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ScoreModel__MaxScoreCounterElement(__ScoreModel__MaxScoreCounterElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ScoreModel__MaxScoreCounterElement()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ScoreModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4682))
// CS Name: ::ScoreModel*
class CORDL_TYPE ScoreModel : public ::System::Object {
public:
// Declarations
using MaxScoreCounterElement = ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement;

using NoteScoreDefinition = ::GlobalNamespace::__ScoreModel__NoteScoreDefinition;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kMaxMultiplier offset 0x0
static constexpr int32_t  kMaxMultiplier{static_cast<int32_t>(0x8)};

/// @brief Field kMaxDistanceForDistanceToCenterScore offset 0x0
static constexpr float_t  kMaxDistanceForDistanceToCenterScore{0.3};

/// @brief Field kMaxBeforeCutScore offset 0x0
static constexpr int32_t  kMaxBeforeCutScore{static_cast<int32_t>(0x46)};

/// @brief Field kMaxCenterDistanceCutScore offset 0x0
static constexpr int32_t  kMaxCenterDistanceCutScore{static_cast<int32_t>(0xf)};

/// @brief Field kMaxAfterCutScore offset 0x0
static constexpr int32_t  kMaxAfterCutScore{static_cast<int32_t>(0x1e)};

static inline void setStaticF_fullScoreScoringTypes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>* getStaticF_fullScoreScoringTypes() ;

static inline void setStaticF__scoreDefinitions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType,::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType,::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>* getStaticF__scoreDefinitions() ;

static inline void setStaticF__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter*  value) ;

static inline ::GlobalNamespace::ScoreMultiplierCounter* getStaticF__scoreMultiplierCounter() ;

/// @brief Method GetNoteScoreDefinition addr 0x237522c size 0x80 virtual false final false
static inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* GetNoteScoreDefinition(::GlobalNamespace::__NoteData__ScoringType  scoringType) ;

/// @brief Method ComputeMaxMultipliedScoreForBeatmap addr 0x23752ac size 0xa68 virtual false final false
static inline int32_t ComputeMaxMultipliedScoreForBeatmap(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData) ;

/// @brief Method GetModifiedScoreForGameplayModifiersScoreMultiplier addr 0x2375db4 size 0x74 virtual false final false
static inline int32_t GetModifiedScoreForGameplayModifiersScoreMultiplier(int32_t  multipliedScore, float_t  gameplayModifiersScoreMultiplier) ;

static inline ::GlobalNamespace::ScoreModel* New_ctor() ;

/// @brief Method .ctor addr 0x2375e28 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScoreModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScoreModel(ScoreModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScoreModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScoreModel(ScoreModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScoreModel()  = default;
public:


// Fields

// Static field fullScoreScoringTypes

// Static field _scoreDefinitions

// Static field _scoreMultiplierCounter


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreModel*, "", "ScoreModel");
NEED_NO_BOX(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*, "", "ScoreModel/MaxScoreCounterElement");
NEED_NO_BOX(::GlobalNamespace::__ScoreModel__NoteScoreDefinition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreModel__NoteScoreDefinition*, "", "ScoreModel/NoteScoreDefinition");
