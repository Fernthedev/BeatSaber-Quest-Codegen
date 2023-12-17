#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapSelectionView)
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class LevelBar;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapSelectionView);
// Type: ::BeatmapSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5772))
// CS Name: ::BeatmapSelectionView*
class CORDL_TYPE BeatmapSelectionView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _levelBar offset 0x18
 __declspec(property(get=__get__levelBar, put=__set__levelBar)) ::GlobalNamespace::LevelBar*  _levelBar;

/// @brief Field _noLevelText offset 0x20
 __declspec(property(get=__get__noLevelText, put=__set__noLevelText)) ::TMPro::TextMeshProUGUI*  _noLevelText;

constexpr void __set__levelBar(::GlobalNamespace::LevelBar*  value) ;

constexpr ::GlobalNamespace::LevelBar* __get__levelBar() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> __get__levelBar() const;

constexpr void __set__noLevelText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__noLevelText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__noLevelText() const;

/// @brief Method SetBeatmap addr 0x22df98c size 0xa0 virtual true final false
inline void SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel) ;

static inline ::GlobalNamespace::BeatmapSelectionView* New_ctor() ;

/// @brief Method .ctor addr 0x22dfa58 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapSelectionView(BeatmapSelectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSelectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapSelectionView(BeatmapSelectionView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapSelectionView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapSelectionView, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSelectionView*, "", "BeatmapSelectionView");
