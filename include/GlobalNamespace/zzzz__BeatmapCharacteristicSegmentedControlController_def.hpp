#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicSegmentedControlController)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapCharacteristicSegmentedControlController____c;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController;
}
namespace GlobalNamespace {
class __BeatmapCharacteristicSegmentedControlController____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c);
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5613))
// CS Name: ::BeatmapCharacteristicSegmentedControlController::<>c*
class CORDL_TYPE __BeatmapCharacteristicSegmentedControlController____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c*  value) ;

static inline ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c* getStaticF___9() ;

static inline void setStaticF___9__10_0(::System::Comparison_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  value) ;

static inline ::System::Comparison_1<::GlobalNamespace::IDifficultyBeatmapSet*>* getStaticF___9__10_0() ;

static inline ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c* New_ctor() ;

/// @brief Method .ctor addr 0x22ad460 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SetData>b__10_0 addr 0x22ad468 size 0x12c virtual false final false
inline int32_t _SetData_b__10_0(::GlobalNamespace::IDifficultyBeatmapSet*  a, ::GlobalNamespace::IDifficultyBeatmapSet*  b) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicSegmentedControlController____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapCharacteristicSegmentedControlController____c(__BeatmapCharacteristicSegmentedControlController____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicSegmentedControlController____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapCharacteristicSegmentedControlController____c(__BeatmapCharacteristicSegmentedControlController____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapCharacteristicSegmentedControlController____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__10_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapCharacteristicSegmentedControlController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5614))
// CS Name: ::BeatmapCharacteristicSegmentedControlController*
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _segmentedControl offset 0x18
 __declspec(property(get=__get__segmentedControl, put=__set__segmentedControl)) ::HMUI::IconSegmentedControl*  _segmentedControl;

/// @brief Field didSelectBeatmapCharacteristicEvent offset 0x20
 __declspec(property(get=__get_didSelectBeatmapCharacteristicEvent, put=__set_didSelectBeatmapCharacteristicEvent)) ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*,::GlobalNamespace::BeatmapCharacteristicSO*>*  didSelectBeatmapCharacteristicEvent;

/// @brief Field _selectedBeatmapCharacteristic offset 0x28
 __declspec(property(get=__get__selectedBeatmapCharacteristic, put=__set__selectedBeatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  _selectedBeatmapCharacteristic;

/// @brief Field _beatmapCharacteristics offset 0x30
 __declspec(property(get=__get__beatmapCharacteristics, put=__set__beatmapCharacteristics)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  _beatmapCharacteristics;

 __declspec(property(get=get_selectedBeatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  selectedBeatmapCharacteristic;

constexpr void __set__segmentedControl(::HMUI::IconSegmentedControl*  value) ;

constexpr ::HMUI::IconSegmentedControl* __get__segmentedControl() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControl*> __get__segmentedControl() const;

constexpr void __set_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*,::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*,::GlobalNamespace::BeatmapCharacteristicSO*>* __get_didSelectBeatmapCharacteristicEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*,::GlobalNamespace::BeatmapCharacteristicSO*>*> __get_didSelectBeatmapCharacteristicEvent() const;

constexpr void __set__selectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get__selectedBeatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get__selectedBeatmapCharacteristic() const;

constexpr void __set__beatmapCharacteristics(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>* __get__beatmapCharacteristics() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> __get__beatmapCharacteristics() const;

/// @brief Method add_didSelectBeatmapCharacteristicEvent addr 0x22acaf0 size 0xb0 virtual false final false
inline void add_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*,::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

/// @brief Method remove_didSelectBeatmapCharacteristicEvent addr 0x22acba0 size 0xb0 virtual false final false
inline void remove_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*,::GlobalNamespace::BeatmapCharacteristicSO*>*  value) ;

/// @brief Method get_selectedBeatmapCharacteristic addr 0x22acc50 size 0x8 virtual false final false
inline ::GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic() ;

/// @brief Method Awake addr 0x22acc58 size 0x8c virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x22acce4 size 0xd4 virtual false final false
inline void OnDestroy() ;

/// @brief Method SetData addr 0x22acdb8 size 0x53c virtual false final false
inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*  difficultyBeatmapSets, ::GlobalNamespace::BeatmapCharacteristicSO*  selectedBeatmapCharacteristic) ;

/// @brief Method HandleDifficultySegmentedControlDidSelectCell addr 0x22ad2f4 size 0x88 virtual false final false
inline void HandleDifficultySegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellIdx) ;

static inline ::GlobalNamespace::BeatmapCharacteristicSegmentedControlController* New_ctor() ;

/// @brief Method .ctor addr 0x22ad37c size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCharacteristicSegmentedControlController(BeatmapCharacteristicSegmentedControlController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCharacteristicSegmentedControlController(BeatmapCharacteristicSegmentedControlController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapCharacteristicSegmentedControlController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSegmentedControlController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCharacteristicSegmentedControlController____c*, "", "BeatmapCharacteristicSegmentedControlController/<>c");
