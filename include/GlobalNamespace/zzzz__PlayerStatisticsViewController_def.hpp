#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatisticsViewController)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace GlobalNamespace {
class __PlayerAllOverallStatsData__PlayerOverallStatsData;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
struct __PlayerStatisticsViewController__StatsScopeData;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace GlobalNamespace {
struct __PlayerStatisticsViewController__StatsScopeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStatisticsViewController);
MARK_VAL_T(::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData);
// Type: ::StatsScopeData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5729))
// CS Name: ::PlayerStatisticsViewController::StatsScopeData
struct CORDL_TYPE __PlayerStatisticsViewController__StatsScopeData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <text>k__BackingField offset 0x0
 __declspec(property(get=__get__text_k__BackingField, put=__set__text_k__BackingField)) ::StringW  _text_k__BackingField;

/// @brief Field <playerOverallStatsDataFunc>k__BackingField offset 0x8
 __declspec(property(get=__get__playerOverallStatsDataFunc_k__BackingField, put=__set__playerOverallStatsDataFunc_k__BackingField)) ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*  _playerOverallStatsDataFunc_k__BackingField;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

 __declspec(property(get=get_playerOverallStatsDataFunc, put=set_playerOverallStatsDataFunc)) ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*  playerOverallStatsDataFunc;

constexpr void __set__text_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__text_k__BackingField() ;

constexpr ::StringW const& __get__text_k__BackingField() const;

constexpr void __set__playerOverallStatsDataFunc_k__BackingField(::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*  value) ;

constexpr ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* __get__playerOverallStatsDataFunc_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*> __get__playerOverallStatsDataFunc_k__BackingField() const;

/// @brief Method get_text addr 0x22d4e74 size 0x8 virtual false final false
inline ::StringW get_text() ;

/// @brief Method set_text addr 0x22d4e7c size 0x8 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method get_playerOverallStatsDataFunc addr 0x22d4e84 size 0x8 virtual false final false
inline ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* get_playerOverallStatsDataFunc() ;

/// @brief Method set_playerOverallStatsDataFunc addr 0x22d4e8c size 0x8 virtual false final false
inline void set_playerOverallStatsDataFunc(::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*  value) ;

/// @brief Method .ctor addr 0x22d48b0 size 0x8 virtual false final false
inline void _ctor(::StringW  text, ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*  playerOverallStatsDataFunc) ;

// Ctor Parameters [CppParam { name: "_text_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_playerOverallStatsDataFunc_k__BackingField", ty: "::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*", modifiers: "", def_value: None }]
constexpr __PlayerStatisticsViewController__StatsScopeData(::StringW  _text_k__BackingField, ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*  _playerOverallStatsDataFunc_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PlayerStatisticsViewController__StatsScopeData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PlayerStatisticsViewController__StatsScopeData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlayerStatisticsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5730))
// CS Name: ::PlayerStatisticsViewController*
class CORDL_TYPE PlayerStatisticsViewController : public ::HMUI::ViewController {
public:
// Declarations
using StatsScopeData = ::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _statsScopeSegmentedControl offset 0x70
 __declspec(property(get=__get__statsScopeSegmentedControl, put=__set__statsScopeSegmentedControl)) ::HMUI::TextSegmentedControl*  _statsScopeSegmentedControl;

/// @brief Field _playedLevelsCountText offset 0x78
 __declspec(property(get=__get__playedLevelsCountText, put=__set__playedLevelsCountText)) ::TMPro::TextMeshProUGUI*  _playedLevelsCountText;

/// @brief Field _clearedLevelsCountText offset 0x80
 __declspec(property(get=__get__clearedLevelsCountText, put=__set__clearedLevelsCountText)) ::TMPro::TextMeshProUGUI*  _clearedLevelsCountText;

/// @brief Field _failedLevelsCountText offset 0x88
 __declspec(property(get=__get__failedLevelsCountText, put=__set__failedLevelsCountText)) ::TMPro::TextMeshProUGUI*  _failedLevelsCountText;

/// @brief Field _timePlayedText offset 0x90
 __declspec(property(get=__get__timePlayedText, put=__set__timePlayedText)) ::TMPro::TextMeshProUGUI*  _timePlayedText;

/// @brief Field _goodCutsCountText offset 0x98
 __declspec(property(get=__get__goodCutsCountText, put=__set__goodCutsCountText)) ::TMPro::TextMeshProUGUI*  _goodCutsCountText;

/// @brief Field _badCutsCountCountText offset 0xa0
 __declspec(property(get=__get__badCutsCountCountText, put=__set__badCutsCountCountText)) ::TMPro::TextMeshProUGUI*  _badCutsCountCountText;

/// @brief Field _missedCountText offset 0xa8
 __declspec(property(get=__get__missedCountText, put=__set__missedCountText)) ::TMPro::TextMeshProUGUI*  _missedCountText;

/// @brief Field _totalScoreText offset 0xb0
 __declspec(property(get=__get__totalScoreText, put=__set__totalScoreText)) ::TMPro::TextMeshProUGUI*  _totalScoreText;

/// @brief Field _fullComboCountText offset 0xb8
 __declspec(property(get=__get__fullComboCountText, put=__set__fullComboCountText)) ::TMPro::TextMeshProUGUI*  _fullComboCountText;

/// @brief Field _handDistanceTravelledText offset 0xc0
 __declspec(property(get=__get__handDistanceTravelledText, put=__set__handDistanceTravelledText)) ::TMPro::TextMeshProUGUI*  _handDistanceTravelledText;

/// @brief Field _playerDataModel offset 0xc8
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _appStaticSettings offset 0xd0
 __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings)) ::GlobalNamespace::AppStaticSettingsSO*  _appStaticSettings;

/// @brief Field _statsScopeDatas offset 0xd8
 __declspec(property(get=__get__statsScopeDatas, put=__set__statsScopeDatas)) ::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData,::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*>  _statsScopeDatas;

constexpr void __set__statsScopeSegmentedControl(::HMUI::TextSegmentedControl*  value) ;

constexpr ::HMUI::TextSegmentedControl* __get__statsScopeSegmentedControl() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> __get__statsScopeSegmentedControl() const;

constexpr void __set__playedLevelsCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__playedLevelsCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__playedLevelsCountText() const;

constexpr void __set__clearedLevelsCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__clearedLevelsCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__clearedLevelsCountText() const;

constexpr void __set__failedLevelsCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__failedLevelsCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__failedLevelsCountText() const;

constexpr void __set__timePlayedText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__timePlayedText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__timePlayedText() const;

constexpr void __set__goodCutsCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__goodCutsCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__goodCutsCountText() const;

constexpr void __set__badCutsCountCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__badCutsCountCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__badCutsCountCountText() const;

constexpr void __set__missedCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__missedCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__missedCountText() const;

constexpr void __set__totalScoreText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__totalScoreText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__totalScoreText() const;

constexpr void __set__fullComboCountText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__fullComboCountText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__fullComboCountText() const;

constexpr void __set__handDistanceTravelledText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__handDistanceTravelledText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__handDistanceTravelledText() const;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO*  value) ;

constexpr ::GlobalNamespace::AppStaticSettingsSO* __get__appStaticSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> __get__appStaticSettings() const;

constexpr void __set__statsScopeDatas(::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData,::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData,::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*>& __get__statsScopeDatas() ;

constexpr ::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData,::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*> const& __get__statsScopeDatas() const;

/// @brief Method DidActivate addr 0x22d42c0 size 0x5f0 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22d4ca0 size 0xa0 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method UpdateView addr 0x22d48b8 size 0x3e8 virtual false final false
inline void UpdateView(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*  playerOverallStatsData) ;

/// @brief Method HandleStatsScopeSegmentedControlDidSelectCell addr 0x22d4d40 size 0x50 virtual false final false
inline void HandleStatsScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellIdx) ;

static inline ::GlobalNamespace::PlayerStatisticsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d4d90 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__15_1 addr 0x22d4d98 size 0x2c virtual false final false
inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_1() ;

/// @brief Method <DidActivate>b__15_2 addr 0x22d4dc4 size 0x2c virtual false final false
inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_2() ;

/// @brief Method <DidActivate>b__15_3 addr 0x22d4df0 size 0x2c virtual false final false
inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_3() ;

/// @brief Method <DidActivate>b__15_4 addr 0x22d4e1c size 0x2c virtual false final false
inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_4() ;

/// @brief Method <DidActivate>b__15_0 addr 0x22d4e48 size 0x2c virtual false final false
inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_0() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerStatisticsViewController(PlayerStatisticsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerStatisticsViewController(PlayerStatisticsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerStatisticsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatisticsViewController, 0xe0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatisticsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatisticsViewController*, "", "PlayerStatisticsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
