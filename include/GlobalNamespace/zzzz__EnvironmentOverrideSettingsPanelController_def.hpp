#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentOverrideSettingsPanelController)
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController____c;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController__Elements;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController__Elements;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentOverrideSettingsPanelController);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c);
// Type: ::Elements
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5479))
// CS Name: ::EnvironmentOverrideSettingsPanelController::Elements*
class CORDL_TYPE __EnvironmentOverrideSettingsPanelController__Elements : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field label offset 0x10
 __declspec(property(get=__get_label, put=__set_label)) ::TMPro::TextMeshProUGUI*  label;

/// @brief Field simpleTextDropdown offset 0x18
 __declspec(property(get=__get_simpleTextDropdown, put=__set_simpleTextDropdown)) ::HMUI::SimpleTextDropdown*  simpleTextDropdown;

/// @brief Field environmentType offset 0x20
 __declspec(property(get=__get_environmentType, put=__set_environmentType)) ::GlobalNamespace::EnvironmentTypeSO*  environmentType;

/// @brief Field <environmentInfos>k__BackingField offset 0x28
 __declspec(property(get=__get__environmentInfos_k__BackingField, put=__set__environmentInfos_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*  _environmentInfos_k__BackingField;

 __declspec(property(get=get_environmentInfos, put=set_environmentInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*  environmentInfos;

constexpr void __set_label(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get_label() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get_label() const;

constexpr void __set_simpleTextDropdown(::HMUI::SimpleTextDropdown*  value) ;

constexpr ::HMUI::SimpleTextDropdown* __get_simpleTextDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> __get_simpleTextDropdown() const;

constexpr void __set_environmentType(::GlobalNamespace::EnvironmentTypeSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentTypeSO* __get_environmentType() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> __get_environmentType() const;

constexpr void __set__environmentInfos_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* __get__environmentInfos_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*> __get__environmentInfos_k__BackingField() const;

/// @brief Method get_environmentInfos addr 0x2284348 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>* get_environmentInfos() ;

/// @brief Method set_environmentInfos addr 0x2284350 size 0x8 virtual false final false
inline void set_environmentInfos(::System::Collections::Generic::List_1<::GlobalNamespace::EnvironmentInfoSO*>*  value) ;

static inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements* New_ctor() ;

/// @brief Method .ctor addr 0x2284358 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController__Elements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnvironmentOverrideSettingsPanelController__Elements(__EnvironmentOverrideSettingsPanelController__Elements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController__Elements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnvironmentOverrideSettingsPanelController__Elements(__EnvironmentOverrideSettingsPanelController__Elements const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnvironmentOverrideSettingsPanelController__Elements()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5480))
// CS Name: ::EnvironmentOverrideSettingsPanelController::<>c*
class CORDL_TYPE __EnvironmentOverrideSettingsPanelController____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*  value) ;

static inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* getStaticF___9() ;

static inline void setStaticF___9__12_0(::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::EnvironmentInfoSO*,::StringW>* getStaticF___9__12_0() ;

static inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* New_ctor() ;

/// @brief Method .ctor addr 0x22843c4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SetData>b__12_0 addr 0x22843cc size 0x18 virtual false final false
inline ::StringW _SetData_b__12_0(::GlobalNamespace::EnvironmentInfoSO*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnvironmentOverrideSettingsPanelController____c(__EnvironmentOverrideSettingsPanelController____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnvironmentOverrideSettingsPanelController____c(__EnvironmentOverrideSettingsPanelController____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnvironmentOverrideSettingsPanelController____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__12_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnvironmentOverrideSettingsPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5481))
// CS Name: ::EnvironmentOverrideSettingsPanelController*
class CORDL_TYPE EnvironmentOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c;

using Elements = ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _overrideEnvironmentsToggle offset 0x18
 __declspec(property(get=__get__overrideEnvironmentsToggle, put=__set__overrideEnvironmentsToggle)) ::UnityEngine::UI::Toggle*  _overrideEnvironmentsToggle;

/// @brief Field _elementsGO offset 0x20
 __declspec(property(get=__get__elementsGO, put=__set__elementsGO)) ::UnityEngine::GameObject*  _elementsGO;

/// @brief Field _elements offset 0x28
 __declspec(property(get=__get__elements, put=__set__elements)) ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>  _elements;

/// @brief Field _presentPanelAnimation offset 0x30
 __declspec(property(get=__get__presentPanelAnimation, put=__set__presentPanelAnimation)) ::HMUI::PanelAnimationSO*  _presentPanelAnimation;

/// @brief Field _dismissPanelAnimation offset 0x38
 __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation)) ::HMUI::PanelAnimationSO*  _dismissPanelAnimation;

/// @brief Field _allEnvironments offset 0x40
 __declspec(property(get=__get__allEnvironments, put=__set__allEnvironments)) ::GlobalNamespace::EnvironmentsListSO*  _allEnvironments;

/// @brief Field _analyticsModel offset 0x48
 __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _overrideEnvironmentSettings offset 0x50
 __declspec(property(get=__get__overrideEnvironmentSettings, put=__set__overrideEnvironmentSettings)) ::GlobalNamespace::OverrideEnvironmentSettings*  _overrideEnvironmentSettings;

/// @brief Field _initialized offset 0x58
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

 __declspec(property(get=get_overrideEnvironmentSettings)) ::GlobalNamespace::OverrideEnvironmentSettings*  overrideEnvironmentSettings;

/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr operator  ::GlobalNamespace::IRefreshable*() noexcept;

constexpr void __set__overrideEnvironmentsToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__overrideEnvironmentsToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__overrideEnvironmentsToggle() const;

constexpr void __set__elementsGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__elementsGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__elementsGO() const;

constexpr void __set__elements(::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>& __get__elements() ;

constexpr ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*> const& __get__elements() const;

constexpr void __set__presentPanelAnimation(::HMUI::PanelAnimationSO*  value) ;

constexpr ::HMUI::PanelAnimationSO* __get__presentPanelAnimation() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> __get__presentPanelAnimation() const;

constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO*  value) ;

constexpr ::HMUI::PanelAnimationSO* __get__dismissPanelAnimation() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> __get__dismissPanelAnimation() const;

constexpr void __set__allEnvironments(::GlobalNamespace::EnvironmentsListSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentsListSO* __get__allEnvironments() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> __get__allEnvironments() const;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr ::GlobalNamespace::IAnalyticsModel* __get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> __get__analyticsModel() const;

constexpr void __set__overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings*  value) ;

constexpr ::GlobalNamespace::OverrideEnvironmentSettings* __get__overrideEnvironmentSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OverrideEnvironmentSettings*> __get__overrideEnvironmentSettings() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

/// @brief Method get_overrideEnvironmentSettings addr 0x22838bc size 0x8 virtual false final false
inline ::GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings() ;

/// @brief Method SetData addr 0x22838c4 size 0x2b0 virtual false final false
inline void SetData(::GlobalNamespace::OverrideEnvironmentSettings*  overrideEnvironmentSettings) ;

/// @brief Method OnDestroy addr 0x2283b74 size 0x19c virtual false final false
inline void OnDestroy() ;

/// @brief Method Refresh addr 0x2283d10 size 0x154 virtual true final true
inline void Refresh() ;

/// @brief Method HandleDropDownDidSelectCellWithIdx addr 0x2283e64 size 0x290 virtual false final false
inline void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropDownWithTableView, int32_t  idx) ;

/// @brief Method HandleOverrideEnvironmentsToggleValueChanged addr 0x22840f4 size 0x22c virtual false final false
inline void HandleOverrideEnvironmentsToggleValueChanged(bool  isOn) ;

static inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController* New_ctor() ;

/// @brief Method .ctor addr 0x2284320 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleOverrideEnvironmentsToggleValueChanged>b__16_0 addr 0x2284328 size 0x20 virtual false final false
inline void _HandleOverrideEnvironmentsToggleValueChanged_b__16_0() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentOverrideSettingsPanelController(EnvironmentOverrideSettingsPanelController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverrideSettingsPanelController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentOverrideSettingsPanelController(EnvironmentOverrideSettingsPanelController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentOverrideSettingsPanelController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentOverrideSettingsPanelController, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentOverrideSettingsPanelController*, "", "EnvironmentOverrideSettingsPanelController");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*, "", "EnvironmentOverrideSettingsPanelController/Elements");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*, "", "EnvironmentOverrideSettingsPanelController/<>c");
