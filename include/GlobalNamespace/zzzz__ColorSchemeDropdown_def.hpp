#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemeDropdown)
namespace GlobalNamespace {
class ColorSchemeView;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class ColorSchemeTableCell;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeDropdown);
// Type: ::ColorSchemeDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5410))
// CS Name: ::ColorSchemeDropdown*
class CORDL_TYPE ColorSchemeDropdown : public ::HMUI::DropdownWithTableView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::HMUI::DropdownWithTableView)]{};

/// @brief Field _text offset 0x48
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _colorSchemeView offset 0x50
 __declspec(property(get=__get__colorSchemeView, put=__set__colorSchemeView)) ::GlobalNamespace::ColorSchemeView*  _colorSchemeView;

/// @brief Field _cellPrefab offset 0x58
 __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab)) ::GlobalNamespace::ColorSchemeTableCell*  _cellPrefab;

/// @brief Field _cellReuseIdentifier offset 0x60
 __declspec(property(get=__get__cellReuseIdentifier, put=__set__cellReuseIdentifier)) ::StringW  _cellReuseIdentifier;

/// @brief Field _cellSize offset 0x68
 __declspec(property(get=__get__cellSize, put=__set__cellSize)) float_t  _cellSize;

/// @brief Field _colorSchemes offset 0x70
 __declspec(property(get=__get__colorSchemes, put=__set__colorSchemes)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*  _colorSchemes;

/// @brief Field _initialized offset 0x78
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr operator  ::HMUI::__TableView__IDataSource*() noexcept;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__colorSchemeView(::GlobalNamespace::ColorSchemeView*  value) ;

constexpr ::GlobalNamespace::ColorSchemeView* __get__colorSchemeView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeView*> __get__colorSchemeView() const;

constexpr void __set__cellPrefab(::GlobalNamespace::ColorSchemeTableCell*  value) ;

constexpr ::GlobalNamespace::ColorSchemeTableCell* __get__cellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeTableCell*> __get__cellPrefab() const;

constexpr void __set__cellReuseIdentifier(::StringW  value) ;

constexpr ::StringW& __get__cellReuseIdentifier() ;

constexpr ::StringW const& __get__cellReuseIdentifier() const;

constexpr void __set__cellSize(float_t  value) ;

constexpr float_t& __get__cellSize() ;

constexpr float_t const& __get__cellSize() const;

constexpr void __set__colorSchemes(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* __get__colorSchemes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*> __get__colorSchemes() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

/// @brief Method LazyInit addr 0x2275428 size 0xb0 virtual false final false
inline void LazyInit() ;

/// @brief Method OnDestroy addr 0x22754d8 size 0x90 virtual true final false
inline void OnDestroy() ;

/// @brief Method Init addr 0x2275568 size 0x40 virtual false final false
inline void Init(::HMUI::__TableView__IDataSource*  initTableViewDataSource) ;

/// @brief Method SetData addr 0x22755a8 size 0x158 virtual false final false
inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*  colorSchemes) ;

/// @brief Method CellSize addr 0x22757f8 size 0x8 virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2275800 size 0xac virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x22758ac size 0x298 virtual true final true
inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView*  tableView, int32_t  idx) ;

/// @brief Method SelectCellWithIdx addr 0x2275c04 size 0xc4 virtual true final false
inline void SelectCellWithIdx(int32_t  idx) ;

/// @brief Method HandleDidSelectCellWithIdx addr 0x2275cc8 size 0x138 virtual false final false
inline void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

/// @brief Method RefreshUI addr 0x2275700 size 0xf8 virtual false final false
inline void RefreshUI(::GlobalNamespace::ColorScheme*  colorScheme) ;

static inline ::GlobalNamespace::ColorSchemeDropdown* New_ctor() ;

/// @brief Method .ctor addr 0x2275e00 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemeDropdown(ColorSchemeDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemeDropdown(ColorSchemeDropdown const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemeDropdown()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeDropdown, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeDropdown*, "", "ColorSchemeDropdown");
