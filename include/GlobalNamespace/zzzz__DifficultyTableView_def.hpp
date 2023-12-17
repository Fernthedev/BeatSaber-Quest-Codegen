#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DifficultyTableView)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class DifficultyTableCell;
}
namespace HMUI {
class __TableView__IDataSource;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DifficultyTableView);
// Type: ::DifficultyTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5776))
// CS Name: ::DifficultyTableView*
class CORDL_TYPE DifficultyTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCellIdentifier offset 0x0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

/// @brief Field kNonSelectableCellIdentifier offset 0x0
static constexpr ::ConstString  kNonSelectableCellIdentifier{u"NonSelectableCell"};

/// @brief Field _tableView offset 0x18
 __declspec(property(get=__get__tableView, put=__set__tableView)) ::HMUI::TableView*  _tableView;

/// @brief Field _cellPrefab offset 0x20
 __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab)) ::GlobalNamespace::DifficultyTableCell*  _cellPrefab;

/// @brief Field _nonSelectableCellPrefab offset 0x28
 __declspec(property(get=__get__nonSelectableCellPrefab, put=__set__nonSelectableCellPrefab)) ::GlobalNamespace::DifficultyTableCell*  _nonSelectableCellPrefab;

/// @brief Field _cellHeight offset 0x30
 __declspec(property(get=__get__cellHeight, put=__set__cellHeight)) float_t  _cellHeight;

/// @brief Field didSelectRow offset 0x38
 __declspec(property(get=__get_didSelectRow, put=__set_didSelectRow)) ::System::Action_2<::GlobalNamespace::DifficultyTableView*,int32_t>*  didSelectRow;

/// @brief Field _difficultyBeatmaps offset 0x40
 __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps)) ::ArrayW<::GlobalNamespace::IDifficultyBeatmap*,::Array<::GlobalNamespace::IDifficultyBeatmap*>*>  _difficultyBeatmaps;

/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr operator  ::HMUI::__TableView__IDataSource*() noexcept;

constexpr void __set__tableView(::HMUI::TableView*  value) ;

constexpr ::HMUI::TableView* __get__tableView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> __get__tableView() const;

constexpr void __set__cellPrefab(::GlobalNamespace::DifficultyTableCell*  value) ;

constexpr ::GlobalNamespace::DifficultyTableCell* __get__cellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DifficultyTableCell*> __get__cellPrefab() const;

constexpr void __set__nonSelectableCellPrefab(::GlobalNamespace::DifficultyTableCell*  value) ;

constexpr ::GlobalNamespace::DifficultyTableCell* __get__nonSelectableCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DifficultyTableCell*> __get__nonSelectableCellPrefab() const;

constexpr void __set__cellHeight(float_t  value) ;

constexpr float_t& __get__cellHeight() ;

constexpr float_t const& __get__cellHeight() const;

constexpr void __set_didSelectRow(::System::Action_2<::GlobalNamespace::DifficultyTableView*,int32_t>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::DifficultyTableView*,int32_t>* __get_didSelectRow() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::DifficultyTableView*,int32_t>*> __get_didSelectRow() const;

constexpr void __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::IDifficultyBeatmap*,::Array<::GlobalNamespace::IDifficultyBeatmap*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::IDifficultyBeatmap*,::Array<::GlobalNamespace::IDifficultyBeatmap*>*>& __get__difficultyBeatmaps() ;

constexpr ::ArrayW<::GlobalNamespace::IDifficultyBeatmap*,::Array<::GlobalNamespace::IDifficultyBeatmap*>*> const& __get__difficultyBeatmaps() const;

/// @brief Method add_didSelectRow addr 0x22e03ec size 0xb0 virtual false final false
inline void add_didSelectRow(::System::Action_2<::GlobalNamespace::DifficultyTableView*,int32_t>*  value) ;

/// @brief Method remove_didSelectRow addr 0x22e049c size 0xb0 virtual false final false
inline void remove_didSelectRow(::System::Action_2<::GlobalNamespace::DifficultyTableView*,int32_t>*  value) ;

/// @brief Method Init addr 0x22e054c size 0xec virtual false final false
inline void Init(::ArrayW<::GlobalNamespace::IDifficultyBeatmap*,::Array<::GlobalNamespace::IDifficultyBeatmap*>*>  difficultyBeatmaps) ;

/// @brief Method SetDifficultyBeatmaps addr 0x22e0638 size 0x28 virtual false final false
inline void SetDifficultyBeatmaps(::ArrayW<::GlobalNamespace::IDifficultyBeatmap*,::Array<::GlobalNamespace::IDifficultyBeatmap*>*>  difficultyBeatmaps) ;

/// @brief Method CellSize addr 0x22e0660 size 0x8 virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x22e0668 size 0x20 virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x22e0688 size 0x354 virtual true final true
inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView*  tableView, int32_t  row) ;

/// @brief Method HandleDidSelectRowEvent addr 0x22e09dc size 0x54 virtual false final false
inline void HandleDidSelectRowEvent(::HMUI::TableView*  tableView, int32_t  row) ;

/// @brief Method SelectRow addr 0x22e0a30 size 0x20 virtual false final false
inline void SelectRow(int32_t  row, bool  callbackTable) ;

/// @brief Method SelectRow addr 0x22e0a50 size 0x84 virtual false final false
inline void SelectRow(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, bool  callbackTable) ;

/// @brief Method ClearSelection addr 0x22e0ad4 size 0x1c virtual false final false
inline void ClearSelection() ;

static inline ::GlobalNamespace::DifficultyTableView* New_ctor() ;

/// @brief Method .ctor addr 0x22e0af0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyTableView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DifficultyTableView(DifficultyTableView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyTableView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DifficultyTableView(DifficultyTableView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DifficultyTableView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyTableView, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableView*, "", "DifficultyTableView");
