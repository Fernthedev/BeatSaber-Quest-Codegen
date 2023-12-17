#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderInteractionManager)
namespace System {
class Action;
}
namespace GlobalNamespace {
class SliderController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderInteractionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderInteractionManager);
// Type: ::SliderInteractionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4820))
// CS Name: ::SliderInteractionManager*
class CORDL_TYPE SliderInteractionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _colorType offset 0x18
 __declspec(property(get=__get__colorType, put=__set__colorType)) ::GlobalNamespace::ColorType  _colorType;

/// @brief Field _beatmapObjectManager offset 0x20
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field <saberInteractionParam>k__BackingField offset 0x28
 __declspec(property(get=__get__saberInteractionParam_k__BackingField, put=__set__saberInteractionParam_k__BackingField)) float_t  _saberInteractionParam_k__BackingField;

/// @brief Field sliderWasAddedToActiveSlidersEvent offset 0x30
 __declspec(property(get=__get_sliderWasAddedToActiveSlidersEvent, put=__set_sliderWasAddedToActiveSlidersEvent)) ::System::Action_1<float_t>*  sliderWasAddedToActiveSlidersEvent;

/// @brief Field allSliderWereRemovedFromActiveSlidersEvent offset 0x38
 __declspec(property(get=__get_allSliderWereRemovedFromActiveSlidersEvent, put=__set_allSliderWereRemovedFromActiveSlidersEvent)) ::System::Action*  allSliderWereRemovedFromActiveSlidersEvent;

/// @brief Field _activeSliders offset 0x40
 __declspec(property(get=__get__activeSliders, put=__set__activeSliders)) ::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>*  _activeSliders;

 __declspec(property(get=get_colorType)) ::GlobalNamespace::ColorType  colorType;

 __declspec(property(get=get_saberInteractionParam, put=set_saberInteractionParam)) float_t  saberInteractionParam;

constexpr void __set__colorType(::GlobalNamespace::ColorType  value) ;

constexpr ::GlobalNamespace::ColorType& __get__colorType() ;

constexpr ::GlobalNamespace::ColorType const& __get__colorType() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__saberInteractionParam_k__BackingField(float_t  value) ;

constexpr float_t& __get__saberInteractionParam_k__BackingField() ;

constexpr float_t const& __get__saberInteractionParam_k__BackingField() const;

constexpr void __set_sliderWasAddedToActiveSlidersEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_sliderWasAddedToActiveSlidersEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_sliderWasAddedToActiveSlidersEvent() const;

constexpr void __set_allSliderWereRemovedFromActiveSlidersEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_allSliderWereRemovedFromActiveSlidersEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_allSliderWereRemovedFromActiveSlidersEvent() const;

constexpr void __set__activeSliders(::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>* __get__activeSliders() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>*> __get__activeSliders() const;

/// @brief Method get_colorType addr 0x2393e10 size 0x8 virtual false final false
inline ::GlobalNamespace::ColorType get_colorType() ;

/// @brief Method get_saberInteractionParam addr 0x2393e18 size 0x8 virtual false final false
inline float_t get_saberInteractionParam() ;

/// @brief Method set_saberInteractionParam addr 0x2393e20 size 0x8 virtual false final false
inline void set_saberInteractionParam(float_t  value) ;

/// @brief Method add_sliderWasAddedToActiveSlidersEvent addr 0x2393a74 size 0xb0 virtual false final false
inline void add_sliderWasAddedToActiveSlidersEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_sliderWasAddedToActiveSlidersEvent addr 0x2393cac size 0xb0 virtual false final false
inline void remove_sliderWasAddedToActiveSlidersEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method add_allSliderWereRemovedFromActiveSlidersEvent addr 0x2393b24 size 0x9c virtual false final false
inline void add_allSliderWereRemovedFromActiveSlidersEvent(::System::Action*  value) ;

/// @brief Method remove_allSliderWereRemovedFromActiveSlidersEvent addr 0x2393d5c size 0x9c virtual false final false
inline void remove_allSliderWereRemovedFromActiveSlidersEvent(::System::Action*  value) ;

/// @brief Method Start addr 0x2393e28 size 0xe0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2393f08 size 0xf0 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x2393ff8 size 0x164 virtual false final false
inline void Update() ;

/// @brief Method AddActiveSlider addr 0x239415c size 0x220 virtual false final false
inline void AddActiveSlider(::GlobalNamespace::SliderController*  newSliderController) ;

/// @brief Method RemoveActiveSlider addr 0x239437c size 0x98 virtual false final false
inline void RemoveActiveSlider(::GlobalNamespace::SliderController*  sliderController) ;

/// @brief Method HandleSliderWasSpawned addr 0x2394414 size 0x34 virtual false final false
inline void HandleSliderWasSpawned(::GlobalNamespace::SliderController*  sliderController) ;

/// @brief Method HandleSliderWasDespawned addr 0x2394448 size 0x34 virtual false final false
inline void HandleSliderWasDespawned(::GlobalNamespace::SliderController*  sliderController) ;

static inline ::GlobalNamespace::SliderInteractionManager* New_ctor() ;

/// @brief Method .ctor addr 0x239447c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SliderInteractionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderInteractionManager(SliderInteractionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderInteractionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderInteractionManager(SliderInteractionManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderInteractionManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderInteractionManager, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderInteractionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderInteractionManager*, "", "SliderInteractionManager");
