#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LevelStatsView)
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class PlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelStatsView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelStatsView);
// Type: ::LevelStatsView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5795))
// CS Name: ::LevelStatsView*
class CORDL_TYPE LevelStatsView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _highScoreText offset 0x18
 __declspec(property(get=__get__highScoreText, put=__set__highScoreText)) ::TMPro::TextMeshProUGUI*  _highScoreText;

/// @brief Field _maxComboText offset 0x20
 __declspec(property(get=__get__maxComboText, put=__set__maxComboText)) ::TMPro::TextMeshProUGUI*  _maxComboText;

/// @brief Field _maxRankText offset 0x28
 __declspec(property(get=__get__maxRankText, put=__set__maxRankText)) ::TMPro::TextMeshProUGUI*  _maxRankText;

constexpr void __set__highScoreText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__highScoreText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__highScoreText() const;

constexpr void __set__maxComboText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__maxComboText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__maxComboText() const;

constexpr void __set__maxRankText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__maxRankText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__maxRankText() const;

/// @brief Method Hide addr 0x22e6f3c size 0x24 virtual false final false
inline void Hide() ;

/// @brief Method ShowStats addr 0x22e6f60 size 0x3b4 virtual false final false
inline void ShowStats(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::PlayerData*  playerData) ;

static inline ::GlobalNamespace::LevelStatsView* New_ctor() ;

/// @brief Method .ctor addr 0x22e7314 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelStatsView(LevelStatsView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelStatsView(LevelStatsView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelStatsView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelStatsView, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelStatsView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelStatsView*, "", "LevelStatsView");
