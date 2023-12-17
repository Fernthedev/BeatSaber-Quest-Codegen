#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IconSegmentedControl)
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class Object;
}
namespace HMUI {
class SegmentedControlCell;
}
namespace HMUI {
class IconSegmentedControlCell;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconSegmentedControl);
MARK_REF_PTR_T(::HMUI::__IconSegmentedControl__DataItem);
// Type: ::DataItem
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13546))
// CS Name: ::IconSegmentedControl::DataItem*
class CORDL_TYPE __IconSegmentedControl__DataItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <icon>k__BackingField offset 0x10
 __declspec(property(get=__get__icon_k__BackingField, put=__set__icon_k__BackingField)) ::UnityEngine::Sprite*  _icon_k__BackingField;

/// @brief Field <hintText>k__BackingField offset 0x18
 __declspec(property(get=__get__hintText_k__BackingField, put=__set__hintText_k__BackingField)) ::StringW  _hintText_k__BackingField;

 __declspec(property(get=get_icon, put=set_icon)) ::UnityEngine::Sprite*  icon;

 __declspec(property(get=get_hintText, put=set_hintText)) ::StringW  hintText;

constexpr void __set__icon_k__BackingField(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__icon_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__icon_k__BackingField() const;

constexpr void __set__hintText_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__hintText_k__BackingField() ;

constexpr ::StringW const& __get__hintText_k__BackingField() const;

/// @brief Method get_icon addr 0x211f950 size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_icon() ;

/// @brief Method set_icon addr 0x211f958 size 0x8 virtual false final false
inline void set_icon(::UnityEngine::Sprite*  value) ;

/// @brief Method get_hintText addr 0x211f960 size 0x8 virtual false final false
inline ::StringW get_hintText() ;

/// @brief Method set_hintText addr 0x211f968 size 0x8 virtual false final false
inline void set_hintText(::StringW  value) ;

static inline ::HMUI::__IconSegmentedControl__DataItem* New_ctor(::UnityEngine::Sprite*  icon, ::StringW  hintText) ;

/// @brief Method .ctor addr 0x211f970 size 0x2c virtual false final false
inline void _ctor(::UnityEngine::Sprite*  icon, ::StringW  hintText) ;

// Ctor Parameters [CppParam { name: "", ty: "__IconSegmentedControl__DataItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IconSegmentedControl__DataItem(__IconSegmentedControl__DataItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IconSegmentedControl__DataItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IconSegmentedControl__DataItem(__IconSegmentedControl__DataItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IconSegmentedControl__DataItem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__IconSegmentedControl__DataItem, 0x20>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::IconSegmentedControl
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13550))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13547))
// CS Name: ::HMUI::IconSegmentedControl*
class CORDL_TYPE IconSegmentedControl : public ::HMUI::SegmentedControl {
public:
// Declarations
using DataItem = ::HMUI::__IconSegmentedControl__DataItem;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::HMUI::SegmentedControl)]{};

/// @brief Field _iconSize offset 0x58
 __declspec(property(get=__get__iconSize, put=__set__iconSize)) float_t  _iconSize;

/// @brief Field _overrideCellSize offset 0x5c
 __declspec(property(get=__get__overrideCellSize, put=__set__overrideCellSize)) bool  _overrideCellSize;

/// @brief Field _padding offset 0x60
 __declspec(property(get=__get__padding, put=__set__padding)) float_t  _padding;

/// @brief Field _hideCellBackground offset 0x64
 __declspec(property(get=__get__hideCellBackground, put=__set__hideCellBackground)) bool  _hideCellBackground;

/// @brief Field _firstCellPrefab offset 0x68
 __declspec(property(get=__get__firstCellPrefab, put=__set__firstCellPrefab)) ::HMUI::IconSegmentedControlCell*  _firstCellPrefab;

/// @brief Field _lastCellPrefab offset 0x70
 __declspec(property(get=__get__lastCellPrefab, put=__set__lastCellPrefab)) ::HMUI::IconSegmentedControlCell*  _lastCellPrefab;

/// @brief Field _middleCellPrefab offset 0x78
 __declspec(property(get=__get__middleCellPrefab, put=__set__middleCellPrefab)) ::HMUI::IconSegmentedControlCell*  _middleCellPrefab;

/// @brief Field _singleCellPrefab offset 0x80
 __declspec(property(get=__get__singleCellPrefab, put=__set__singleCellPrefab)) ::HMUI::IconSegmentedControlCell*  _singleCellPrefab;

/// @brief Field _container offset 0x88
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _dataItems offset 0x90
 __declspec(property(get=__get__dataItems, put=__set__dataItems)) ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  _dataItems;

/// @brief Field _isInitialized offset 0x98
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

/// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
constexpr operator  ::HMUI::__SegmentedControl__IDataSource*() noexcept;

constexpr void __set__iconSize(float_t  value) ;

constexpr float_t& __get__iconSize() ;

constexpr float_t const& __get__iconSize() const;

constexpr void __set__overrideCellSize(bool  value) ;

constexpr bool& __get__overrideCellSize() ;

constexpr bool const& __get__overrideCellSize() const;

constexpr void __set__padding(float_t  value) ;

constexpr float_t& __get__padding() ;

constexpr float_t const& __get__padding() const;

constexpr void __set__hideCellBackground(bool  value) ;

constexpr bool& __get__hideCellBackground() ;

constexpr bool const& __get__hideCellBackground() const;

constexpr void __set__firstCellPrefab(::HMUI::IconSegmentedControlCell*  value) ;

constexpr ::HMUI::IconSegmentedControlCell* __get__firstCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> __get__firstCellPrefab() const;

constexpr void __set__lastCellPrefab(::HMUI::IconSegmentedControlCell*  value) ;

constexpr ::HMUI::IconSegmentedControlCell* __get__lastCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> __get__lastCellPrefab() const;

constexpr void __set__middleCellPrefab(::HMUI::IconSegmentedControlCell*  value) ;

constexpr ::HMUI::IconSegmentedControlCell* __get__middleCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> __get__middleCellPrefab() const;

constexpr void __set__singleCellPrefab(::HMUI::IconSegmentedControlCell*  value) ;

constexpr ::HMUI::IconSegmentedControlCell* __get__singleCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControlCell*> __get__singleCellPrefab() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__dataItems(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  value) ;

constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>& __get__dataItems() ;

constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*> const& __get__dataItems() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

/// @brief Method Init addr 0x211efa0 size 0x1c virtual false final false
inline void Init() ;

/// @brief Method SetData addr 0x211efc4 size 0x40 virtual false final false
inline void SetData(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  dataItems) ;

/// @brief Method NumberOfCells addr 0x211f40c size 0x18 virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForCellNumber addr 0x211f424 size 0x180 virtual true final true
inline ::HMUI::SegmentedControlCell* CellForCellNumber(int32_t  cellNumber) ;

/// @brief Method InstantiateCell addr 0x211f5a4 size 0x180 virtual false final false
inline ::HMUI::IconSegmentedControlCell* InstantiateCell(::UnityEngine::Object*  prefab) ;

static inline ::HMUI::IconSegmentedControl* New_ctor() ;

/// @brief Method .ctor addr 0x211f834 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconSegmentedControl(IconSegmentedControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconSegmentedControl(IconSegmentedControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IconSegmentedControl()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconSegmentedControl, 0xa0>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::IconSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControl*, "HMUI", "IconSegmentedControl");
NEED_NO_BOX(::HMUI::__IconSegmentedControl__DataItem);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__IconSegmentedControl__DataItem*, "HMUI", "IconSegmentedControl/DataItem");
