#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
CORDL_MODULE_EXPORT(EditableBeatmapSelectionView)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EditableBeatmapSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditableBeatmapSelectionView);
// Type: ::EditableBeatmapSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5779))
// CS Name: ::EditableBeatmapSelectionView*
class CORDL_TYPE EditableBeatmapSelectionView : public ::GlobalNamespace::BeatmapSelectionView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::BeatmapSelectionView)]{};

/// @brief Field _editButton offset 0x28
 __declspec(property(get=__get__editButton, put=__set__editButton)) ::UnityEngine::UI::Button*  _editButton;

/// @brief Field _clearButton offset 0x30
 __declspec(property(get=__get__clearButton, put=__set__clearButton)) ::UnityEngine::UI::Button*  _clearButton;

/// @brief Field _levelBarCanvasGroup offset 0x38
 __declspec(property(get=__get__levelBarCanvasGroup, put=__set__levelBarCanvasGroup)) ::UnityEngine::CanvasGroup*  _levelBarCanvasGroup;

/// @brief Field _interactable offset 0x40
 __declspec(property(get=__get__interactable, put=__set__interactable)) bool  _interactable;

/// @brief Field <showClearButton>k__BackingField offset 0x41
 __declspec(property(get=__get__showClearButton_k__BackingField, put=__set__showClearButton_k__BackingField)) bool  _showClearButton_k__BackingField;

 __declspec(property(get=get_editButton)) ::UnityEngine::UI::Button*  editButton;

 __declspec(property(get=get_clearButton)) ::UnityEngine::UI::Button*  clearButton;

 __declspec(property(get=get_interactable, put=set_interactable)) bool  interactable;

 __declspec(property(get=get_showClearButton, put=set_showClearButton)) bool  showClearButton;

constexpr void __set__editButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__editButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__editButton() const;

constexpr void __set__clearButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__clearButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__clearButton() const;

constexpr void __set__levelBarCanvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__levelBarCanvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__levelBarCanvasGroup() const;

constexpr void __set__interactable(bool  value) ;

constexpr bool& __get__interactable() ;

constexpr bool const& __get__interactable() const;

constexpr void __set__showClearButton_k__BackingField(bool  value) ;

constexpr bool& __get__showClearButton_k__BackingField() ;

constexpr bool const& __get__showClearButton_k__BackingField() const;

/// @brief Method get_editButton addr 0x22e0f64 size 0x8 virtual false final false
inline ::UnityEngine::UI::Button* get_editButton() ;

/// @brief Method get_clearButton addr 0x22e0f6c size 0x8 virtual false final false
inline ::UnityEngine::UI::Button* get_clearButton() ;

/// @brief Method get_interactable addr 0x22e0f74 size 0x8 virtual false final false
inline bool get_interactable() ;

/// @brief Method set_interactable addr 0x22cef30 size 0x60 virtual false final false
inline void set_interactable(bool  value) ;

/// @brief Method get_showClearButton addr 0x22e0f7c size 0x8 virtual false final false
inline bool get_showClearButton() ;

/// @brief Method set_showClearButton addr 0x22e0f84 size 0xc virtual false final false
inline void set_showClearButton(bool  value) ;

/// @brief Method SetVisibility addr 0x22ce954 size 0x28 virtual false final false
inline void SetVisibility(bool  visible) ;

/// @brief Method Setup addr 0x22ce948 size 0xc virtual false final false
inline void Setup(bool  showClearButton) ;

/// @brief Method SetBeatmap addr 0x22e0f90 size 0x68 virtual true final false
inline void SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel) ;

static inline ::GlobalNamespace::EditableBeatmapSelectionView* New_ctor() ;

/// @brief Method .ctor addr 0x22e0ff8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditableBeatmapSelectionView(EditableBeatmapSelectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditableBeatmapSelectionView(EditableBeatmapSelectionView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EditableBeatmapSelectionView()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditableBeatmapSelectionView, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditableBeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditableBeatmapSelectionView*, "", "EditableBeatmapSelectionView");
