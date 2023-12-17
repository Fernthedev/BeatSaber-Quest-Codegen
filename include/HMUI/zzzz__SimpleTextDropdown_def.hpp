#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTextDropdown)
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace GlobalNamespace {
class SimpleTextTableCell;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace HMUI {
class SimpleTextDropdown;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SimpleTextDropdown);
// Type: HMUI::SimpleTextDropdown
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13656))
// CS Name: ::HMUI::SimpleTextDropdown*
class CORDL_TYPE SimpleTextDropdown : public ::HMUI::DropdownWithTableView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::HMUI::DropdownWithTableView)]{};

/// @brief Field kCellReuseIdentifier offset 0x0
static constexpr ::ConstString  kCellReuseIdentifier{u"Cell"};

/// @brief Field _text offset 0x48
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _cellPrefab offset 0x50
 __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab)) ::GlobalNamespace::SimpleTextTableCell*  _cellPrefab;

/// @brief Field _cellSize offset 0x58
 __declspec(property(get=__get__cellSize, put=__set__cellSize)) float_t  _cellSize;

/// @brief Field _texts offset 0x60
 __declspec(property(get=__get__texts, put=__set__texts)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  _texts;

/// @brief Field _initialized offset 0x68
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr operator  ::HMUI::__TableView__IDataSource*() noexcept;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__cellPrefab(::GlobalNamespace::SimpleTextTableCell*  value) ;

constexpr ::GlobalNamespace::SimpleTextTableCell* __get__cellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleTextTableCell*> __get__cellPrefab() const;

constexpr void __set__cellSize(float_t  value) ;

constexpr float_t& __get__cellSize() ;

constexpr float_t const& __get__cellSize() const;

constexpr void __set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* __get__texts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __get__texts() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

/// @brief Method LazyInit addr 0x21460b8 size 0xb0 virtual false final false
inline void LazyInit() ;

/// @brief Method OnDestroy addr 0x2146168 size 0x90 virtual true final false
inline void OnDestroy() ;

/// @brief Method Init addr 0x21461f8 size 0x40 virtual false final false
inline void Init(::HMUI::__TableView__IDataSource*  initTableViewDataSource) ;

/// @brief Method SetTexts addr 0x2146238 size 0x1a0 virtual false final false
inline void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  texts) ;

/// @brief Method SelectCellWithIdx addr 0x21463d8 size 0x1ec virtual true final false
inline void SelectCellWithIdx(int32_t  idx) ;

/// @brief Method CellSize addr 0x21465c4 size 0x8 virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x21465cc size 0xac virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x2146678 size 0x1bc virtual true final true
inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView*  tableView, int32_t  idx) ;

/// @brief Method HandleDidSelectCellWithIdx addr 0x2146920 size 0x14c virtual false final false
inline void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::HMUI::SimpleTextDropdown* New_ctor() ;

/// @brief Method .ctor addr 0x2146a6c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleTextDropdown(SimpleTextDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleTextDropdown(SimpleTextDropdown const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleTextDropdown()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SimpleTextDropdown, 0x70>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::SimpleTextDropdown);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SimpleTextDropdown*, "HMUI", "SimpleTextDropdown");
