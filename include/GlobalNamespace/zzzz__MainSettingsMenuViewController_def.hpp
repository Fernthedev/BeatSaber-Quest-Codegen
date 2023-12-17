#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsMenuViewController)
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class SegmentedControl;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsMenuViewController);
// Type: ::MainSettingsMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5693))
// CS Name: ::MainSettingsMenuViewController*
class CORDL_TYPE MainSettingsMenuViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::ViewController)]{};

/// @brief Field didSelectSettingsSubMenuEvent offset 0x70
 __declspec(property(get=__get_didSelectSettingsSubMenuEvent, put=__set_didSelectSettingsSubMenuEvent)) ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*,int32_t>*  didSelectSettingsSubMenuEvent;

/// @brief Field _settingsSubMenuInfos offset 0x78
 __declspec(property(get=__get__settingsSubMenuInfos, put=__set__settingsSubMenuInfos)) ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*,::Array<::GlobalNamespace::SettingsSubMenuInfo*>*>  _settingsSubMenuInfos;

/// @brief Field _settingsMenuSegmentedControl offset 0x80
 __declspec(property(get=__get__settingsMenuSegmentedControl, put=__set__settingsMenuSegmentedControl)) ::HMUI::TextSegmentedControl*  _settingsMenuSegmentedControl;

/// @brief Field _selectedSubMenuInfo offset 0x88
 __declspec(property(get=__get__selectedSubMenuInfo, put=__set__selectedSubMenuInfo)) ::GlobalNamespace::SettingsSubMenuInfo*  _selectedSubMenuInfo;

/// @brief Field _selectedSubMenuInfoIdx offset 0x90
 __declspec(property(get=__get__selectedSubMenuInfoIdx, put=__set__selectedSubMenuInfoIdx)) int32_t  _selectedSubMenuInfoIdx;

 __declspec(property(get=get_numberOfSubMenus)) int32_t  numberOfSubMenus;

 __declspec(property(get=get_selectedSubMenuInfo)) ::GlobalNamespace::SettingsSubMenuInfo*  selectedSubMenuInfo;

constexpr void __set_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*,int32_t>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*,int32_t>* __get_didSelectSettingsSubMenuEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*,int32_t>*> __get_didSelectSettingsSubMenuEvent() const;

constexpr void __set__settingsSubMenuInfos(::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*,::Array<::GlobalNamespace::SettingsSubMenuInfo*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*,::Array<::GlobalNamespace::SettingsSubMenuInfo*>*>& __get__settingsSubMenuInfos() ;

constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*,::Array<::GlobalNamespace::SettingsSubMenuInfo*>*> const& __get__settingsSubMenuInfos() const;

constexpr void __set__settingsMenuSegmentedControl(::HMUI::TextSegmentedControl*  value) ;

constexpr ::HMUI::TextSegmentedControl* __get__settingsMenuSegmentedControl() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> __get__settingsMenuSegmentedControl() const;

constexpr void __set__selectedSubMenuInfo(::GlobalNamespace::SettingsSubMenuInfo*  value) ;

constexpr ::GlobalNamespace::SettingsSubMenuInfo* __get__selectedSubMenuInfo() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsSubMenuInfo*> __get__selectedSubMenuInfo() const;

constexpr void __set__selectedSubMenuInfoIdx(int32_t  value) ;

constexpr int32_t& __get__selectedSubMenuInfoIdx() ;

constexpr int32_t const& __get__selectedSubMenuInfoIdx() const;

/// @brief Method add_didSelectSettingsSubMenuEvent addr 0x22c9514 size 0xb0 virtual false final false
inline void add_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*,int32_t>*  value) ;

/// @brief Method remove_didSelectSettingsSubMenuEvent addr 0x22c95c4 size 0xb0 virtual false final false
inline void remove_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*,int32_t>*  value) ;

/// @brief Method get_numberOfSubMenus addr 0x22c9674 size 0x1c virtual false final false
inline int32_t get_numberOfSubMenus() ;

/// @brief Method get_selectedSubMenuInfo addr 0x22c9690 size 0x8 virtual false final false
inline ::GlobalNamespace::SettingsSubMenuInfo* get_selectedSubMenuInfo() ;

/// @brief Method Init addr 0x22c9698 size 0x38 virtual false final false
inline void Init(int32_t  selectedSubMenuInfoIdx) ;

/// @brief Method DidActivate addr 0x22c96d0 size 0x1f0 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method HandleSettingsMenuSegmentedControlDidSelectCell addr 0x22c98c0 size 0x54 virtual false final false
inline void HandleSettingsMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellIdx) ;

static inline ::GlobalNamespace::MainSettingsMenuViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22c9914 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainSettingsMenuViewController(MainSettingsMenuViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainSettingsMenuViewController(MainSettingsMenuViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainSettingsMenuViewController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsMenuViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsMenuViewController*, "", "MainSettingsMenuViewController");
