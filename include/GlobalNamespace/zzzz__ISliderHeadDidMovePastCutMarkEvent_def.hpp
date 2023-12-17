#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISliderHeadDidMovePastCutMarkEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderHeadDidMovePastCutMarkEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent);
// Type: ::ISliderHeadDidMovePastCutMarkEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4801))
// CS Name: ::ISliderHeadDidMovePastCutMarkEvent*
class CORDL_TYPE ISliderHeadDidMovePastCutMarkEvent {
public:
// Declarations
/// @brief Method HandleSliderStartDidMovePastCutMark addr 0x0 size 0xffffffffffffffff virtual true final false
inline void HandleSliderStartDidMovePastCutMark(::GlobalNamespace::SliderController*  sliderController) ;

// Ctor Parameters [CppParam { name: "", ty: "ISliderHeadDidMovePastCutMarkEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISliderHeadDidMovePastCutMarkEvent(ISliderHeadDidMovePastCutMarkEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISliderHeadDidMovePastCutMarkEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISliderHeadDidMovePastCutMarkEvent(ISliderHeadDidMovePastCutMarkEvent const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*, "", "ISliderHeadDidMovePastCutMarkEvent");
