#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardTableView)
namespace GlobalNamespace {
class LeaderboardTableCell;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class __LeaderboardTableView__ScoreData;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardTableView;
}
namespace GlobalNamespace {
class __LeaderboardTableView__ScoreData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardTableView);
MARK_REF_PTR_T(::GlobalNamespace::__LeaderboardTableView__ScoreData);
// Type: ::ScoreData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5788))
// CS Name: ::LeaderboardTableView::ScoreData*
class CORDL_TYPE __LeaderboardTableView__ScoreData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <score>k__BackingField offset 0x10
 __declspec(property(get=__get__score_k__BackingField, put=__set__score_k__BackingField)) int32_t  _score_k__BackingField;

/// @brief Field <playerName>k__BackingField offset 0x18
 __declspec(property(get=__get__playerName_k__BackingField, put=__set__playerName_k__BackingField)) ::StringW  _playerName_k__BackingField;

/// @brief Field <rank>k__BackingField offset 0x20
 __declspec(property(get=__get__rank_k__BackingField, put=__set__rank_k__BackingField)) int32_t  _rank_k__BackingField;

/// @brief Field <fullCombo>k__BackingField offset 0x24
 __declspec(property(get=__get__fullCombo_k__BackingField, put=__set__fullCombo_k__BackingField)) bool  _fullCombo_k__BackingField;

 __declspec(property(get=get_score, put=set_score)) int32_t  score;

 __declspec(property(get=get_playerName, put=set_playerName)) ::StringW  playerName;

 __declspec(property(get=get_rank, put=set_rank)) int32_t  rank;

 __declspec(property(get=get_fullCombo, put=set_fullCombo)) bool  fullCombo;

constexpr void __set__score_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__score_k__BackingField() ;

constexpr int32_t const& __get__score_k__BackingField() const;

constexpr void __set__playerName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__playerName_k__BackingField() ;

constexpr ::StringW const& __get__playerName_k__BackingField() const;

constexpr void __set__rank_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__rank_k__BackingField() ;

constexpr int32_t const& __get__rank_k__BackingField() const;

constexpr void __set__fullCombo_k__BackingField(bool  value) ;

constexpr bool& __get__fullCombo_k__BackingField() ;

constexpr bool const& __get__fullCombo_k__BackingField() const;

/// @brief Method get_score addr 0x22e31c4 size 0x8 virtual false final false
inline int32_t get_score() ;

/// @brief Method set_score addr 0x22e31cc size 0x8 virtual false final false
inline void set_score(int32_t  value) ;

/// @brief Method get_playerName addr 0x22e31d4 size 0x8 virtual false final false
inline ::StringW get_playerName() ;

/// @brief Method set_playerName addr 0x22e31dc size 0x8 virtual false final false
inline void set_playerName(::StringW  value) ;

/// @brief Method get_rank addr 0x22e31e4 size 0x8 virtual false final false
inline int32_t get_rank() ;

/// @brief Method set_rank addr 0x22e31ec size 0x8 virtual false final false
inline void set_rank(int32_t  value) ;

/// @brief Method get_fullCombo addr 0x22e31f4 size 0x8 virtual false final false
inline bool get_fullCombo() ;

/// @brief Method set_fullCombo addr 0x22e31fc size 0xc virtual false final false
inline void set_fullCombo(bool  value) ;

static inline ::GlobalNamespace::__LeaderboardTableView__ScoreData* New_ctor(int32_t  score, ::StringW  playerName, int32_t  rank, bool  fullCombo) ;

/// @brief Method .ctor addr 0x22d3870 size 0x4c virtual false final false
inline void _ctor(int32_t  score, ::StringW  playerName, int32_t  rank, bool  fullCombo) ;

// Ctor Parameters [CppParam { name: "", ty: "__LeaderboardTableView__ScoreData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LeaderboardTableView__ScoreData(__LeaderboardTableView__ScoreData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LeaderboardTableView__ScoreData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LeaderboardTableView__ScoreData(__LeaderboardTableView__ScoreData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LeaderboardTableView__ScoreData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardTableView__ScoreData, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LeaderboardTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5789))
// CS Name: ::LeaderboardTableView*
class CORDL_TYPE LeaderboardTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScoreData = ::GlobalNamespace::__LeaderboardTableView__ScoreData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCellIdentifier offset 0x0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

/// @brief Field _tableView offset 0x18
 __declspec(property(get=__get__tableView, put=__set__tableView)) ::HMUI::TableView*  _tableView;

/// @brief Field _cellPrefab offset 0x20
 __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab)) ::GlobalNamespace::LeaderboardTableCell*  _cellPrefab;

/// @brief Field _rowHeight offset 0x28
 __declspec(property(get=__get__rowHeight, put=__set__rowHeight)) float_t  _rowHeight;

/// @brief Field _scores offset 0x30
 __declspec(property(get=__get__scores, put=__set__scores)) ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*  _scores;

/// @brief Field _specialScorePos offset 0x38
 __declspec(property(get=__get__specialScorePos, put=__set__specialScorePos)) int32_t  _specialScorePos;

/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr operator  ::HMUI::__TableView__IDataSource*() noexcept;

constexpr void __set__tableView(::HMUI::TableView*  value) ;

constexpr ::HMUI::TableView* __get__tableView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> __get__tableView() const;

constexpr void __set__cellPrefab(::GlobalNamespace::LeaderboardTableCell*  value) ;

constexpr ::GlobalNamespace::LeaderboardTableCell* __get__cellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardTableCell*> __get__cellPrefab() const;

constexpr void __set__rowHeight(float_t  value) ;

constexpr float_t& __get__rowHeight() ;

constexpr float_t const& __get__rowHeight() const;

constexpr void __set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* __get__scores() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*> __get__scores() const;

constexpr void __set__specialScorePos(int32_t  value) ;

constexpr int32_t& __get__specialScorePos() ;

constexpr int32_t const& __get__specialScorePos() const;

/// @brief Method CellSize addr 0x22e2f70 size 0x8 virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x22e2f78 size 0x4c virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x22e2fc4 size 0x1f0 virtual true final true
inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView*  tableView, int32_t  row) ;

/// @brief Method SetScores addr 0x22d38bc size 0x30 virtual false final false
inline void SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*  scores, int32_t  specialScorePos) ;

static inline ::GlobalNamespace::LeaderboardTableView* New_ctor() ;

/// @brief Method .ctor addr 0x22e31b4 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardTableView(LeaderboardTableView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardTableView(LeaderboardTableView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeaderboardTableView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardTableView, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardTableView*, "", "LeaderboardTableView");
NEED_NO_BOX(::GlobalNamespace::__LeaderboardTableView__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardTableView__ScoreData*, "", "LeaderboardTableView/ScoreData");
