#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultySegmentedControlController)
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace HMUI {
class SegmentedControl;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultySegmentedControlController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultySegmentedControlController);
// Type: ::BeatmapDifficultySegmentedControlController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5616))
// CS Name: ::BeatmapDifficultySegmentedControlController*
class CORDL_TYPE BeatmapDifficultySegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _difficultySegmentedControl offset 0x18
 __declspec(property(get=__get__difficultySegmentedControl, put=__set__difficultySegmentedControl)) ::HMUI::TextSegmentedControl*  _difficultySegmentedControl;

/// @brief Field didSelectDifficultyEvent offset 0x20
 __declspec(property(get=__get_didSelectDifficultyEvent, put=__set_didSelectDifficultyEvent)) ::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController*,::GlobalNamespace::BeatmapDifficulty>*  didSelectDifficultyEvent;

/// @brief Field _difficulties offset 0x28
 __declspec(property(get=__get__difficulties, put=__set__difficulties)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*  _difficulties;

/// @brief Field _selectedDifficulty offset 0x30
 __declspec(property(get=__get__selectedDifficulty, put=__set__selectedDifficulty)) ::GlobalNamespace::BeatmapDifficulty  _selectedDifficulty;

 __declspec(property(get=get_selectedDifficulty)) ::GlobalNamespace::BeatmapDifficulty  selectedDifficulty;

constexpr void __set__difficultySegmentedControl(::HMUI::TextSegmentedControl*  value) ;

constexpr ::HMUI::TextSegmentedControl* __get__difficultySegmentedControl() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> __get__difficultySegmentedControl() const;

constexpr void __set_didSelectDifficultyEvent(::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController*,::GlobalNamespace::BeatmapDifficulty>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController*,::GlobalNamespace::BeatmapDifficulty>* __get_didSelectDifficultyEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController*,::GlobalNamespace::BeatmapDifficulty>*> __get_didSelectDifficultyEvent() const;

constexpr void __set__difficulties(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* __get__difficulties() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*> __get__difficulties() const;

constexpr void __set__selectedDifficulty(::GlobalNamespace::BeatmapDifficulty  value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty& __get__selectedDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__selectedDifficulty() const;

/// @brief Method add_didSelectDifficultyEvent addr 0x22adc4c size 0xb0 virtual false final false
inline void add_didSelectDifficultyEvent(::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController*,::GlobalNamespace::BeatmapDifficulty>*  value) ;

/// @brief Method remove_didSelectDifficultyEvent addr 0x22adcfc size 0xb0 virtual false final false
inline void remove_didSelectDifficultyEvent(::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController*,::GlobalNamespace::BeatmapDifficulty>*  value) ;

/// @brief Method get_selectedDifficulty addr 0x22addac size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapDifficulty get_selectedDifficulty() ;

/// @brief Method Awake addr 0x22addb4 size 0x8c virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x22ade40 size 0xd4 virtual false final false
inline void OnDestroy() ;

/// @brief Method GetClosestDifficultyIndex addr 0x22adf14 size 0x14c virtual false final false
inline int32_t GetClosestDifficultyIndex(::GlobalNamespace::BeatmapDifficulty  searchDifficulty) ;

/// @brief Method HandleDifficultySegmentedControlDidSelectCell addr 0x22ae060 size 0x88 virtual false final false
inline void HandleDifficultySegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellIdx) ;

/// @brief Method SetData addr 0x22ae0e8 size 0x5e8 virtual false final false
inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*  difficultyBeatmaps, ::GlobalNamespace::BeatmapDifficulty  selectedDifficulty) ;

static inline ::GlobalNamespace::BeatmapDifficultySegmentedControlController* New_ctor() ;

/// @brief Method .ctor addr 0x22ae6d0 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDifficultySegmentedControlController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultySegmentedControlController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySegmentedControlController*, "", "BeatmapDifficultySegmentedControlController");
