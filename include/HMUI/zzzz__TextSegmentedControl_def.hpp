#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSegmentedControl)
namespace HMUI {
class TextSegmentedControlCell;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
class Object;
}
namespace HMUI {
class SegmentedControlCell;
}
// Forward declare root types
namespace HMUI {
class TextSegmentedControl;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextSegmentedControl);
// Type: HMUI::TextSegmentedControl
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13550))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13552))
// CS Name: ::HMUI::TextSegmentedControl*
class CORDL_TYPE TextSegmentedControl : public ::HMUI::SegmentedControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::SegmentedControl)]{};

/// @brief Field _fontSize offset 0x58
 __declspec(property(get=__get__fontSize, put=__set__fontSize)) float_t  _fontSize;

/// @brief Field _overrideCellSize offset 0x5c
 __declspec(property(get=__get__overrideCellSize, put=__set__overrideCellSize)) bool  _overrideCellSize;

/// @brief Field _padding offset 0x60
 __declspec(property(get=__get__padding, put=__set__padding)) float_t  _padding;

/// @brief Field _hideCellBackground offset 0x64
 __declspec(property(get=__get__hideCellBackground, put=__set__hideCellBackground)) bool  _hideCellBackground;

/// @brief Field _firstCellPrefab offset 0x68
 __declspec(property(get=__get__firstCellPrefab, put=__set__firstCellPrefab)) ::HMUI::TextSegmentedControlCell*  _firstCellPrefab;

/// @brief Field _lastCellPrefab offset 0x70
 __declspec(property(get=__get__lastCellPrefab, put=__set__lastCellPrefab)) ::HMUI::TextSegmentedControlCell*  _lastCellPrefab;

/// @brief Field _singleCellPrefab offset 0x78
 __declspec(property(get=__get__singleCellPrefab, put=__set__singleCellPrefab)) ::HMUI::TextSegmentedControlCell*  _singleCellPrefab;

/// @brief Field _middleCellPrefab offset 0x80
 __declspec(property(get=__get__middleCellPrefab, put=__set__middleCellPrefab)) ::HMUI::TextSegmentedControlCell*  _middleCellPrefab;

/// @brief Field _container offset 0x88
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _texts offset 0x90
 __declspec(property(get=__get__texts, put=__set__texts)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  _texts;

/// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
constexpr operator  ::HMUI::__SegmentedControl__IDataSource*() noexcept;

constexpr void __set__fontSize(float_t  value) ;

constexpr float_t& __get__fontSize() ;

constexpr float_t const& __get__fontSize() const;

constexpr void __set__overrideCellSize(bool  value) ;

constexpr bool& __get__overrideCellSize() ;

constexpr bool const& __get__overrideCellSize() const;

constexpr void __set__padding(float_t  value) ;

constexpr float_t& __get__padding() ;

constexpr float_t const& __get__padding() const;

constexpr void __set__hideCellBackground(bool  value) ;

constexpr bool& __get__hideCellBackground() ;

constexpr bool const& __get__hideCellBackground() const;

constexpr void __set__firstCellPrefab(::HMUI::TextSegmentedControlCell*  value) ;

constexpr ::HMUI::TextSegmentedControlCell* __get__firstCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> __get__firstCellPrefab() const;

constexpr void __set__lastCellPrefab(::HMUI::TextSegmentedControlCell*  value) ;

constexpr ::HMUI::TextSegmentedControlCell* __get__lastCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> __get__lastCellPrefab() const;

constexpr void __set__singleCellPrefab(::HMUI::TextSegmentedControlCell*  value) ;

constexpr ::HMUI::TextSegmentedControlCell* __get__singleCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> __get__singleCellPrefab() const;

constexpr void __set__middleCellPrefab(::HMUI::TextSegmentedControlCell*  value) ;

constexpr ::HMUI::TextSegmentedControlCell* __get__middleCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControlCell*> __get__middleCellPrefab() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* __get__texts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __get__texts() const;

/// @brief Method SetTexts addr 0x212029c size 0x18 virtual false final false
inline void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  texts) ;

/// @brief Method NumberOfCells addr 0x21202b4 size 0xac virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method CellForCellNumber addr 0x2120360 size 0x294 virtual true final true
inline ::HMUI::SegmentedControlCell* CellForCellNumber(int32_t  cellNumber) ;

/// @brief Method InstantiateCell addr 0x21205f4 size 0x180 virtual false final false
inline ::HMUI::TextSegmentedControlCell* InstantiateCell(::UnityEngine::Object*  prefab) ;

static inline ::HMUI::TextSegmentedControl* New_ctor() ;

/// @brief Method .ctor addr 0x21207fc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSegmentedControl(TextSegmentedControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSegmentedControl(TextSegmentedControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextSegmentedControl()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextSegmentedControl, 0x98>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::TextSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSegmentedControl*, "HMUI", "TextSegmentedControl");
