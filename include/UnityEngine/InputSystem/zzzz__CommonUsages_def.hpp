#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CommonUsages)
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class CommonUsages;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::CommonUsages);
// Type: UnityEngine.InputSystem::CommonUsages
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6213))
// CS Name: ::UnityEngine.InputSystem::CommonUsages*
class CORDL_TYPE CommonUsages : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Primary2DMotion(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Primary2DMotion() ;

static inline void setStaticF_Secondary2DMotion(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Secondary2DMotion() ;

static inline void setStaticF_PrimaryAction(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_PrimaryAction() ;

static inline void setStaticF_SecondaryAction(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_SecondaryAction() ;

static inline void setStaticF_PrimaryTrigger(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_PrimaryTrigger() ;

static inline void setStaticF_SecondaryTrigger(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_SecondaryTrigger() ;

static inline void setStaticF_Modifier(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Modifier() ;

static inline void setStaticF_Position(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Position() ;

static inline void setStaticF_Orientation(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Orientation() ;

static inline void setStaticF_Hatswitch(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Hatswitch() ;

static inline void setStaticF_Back(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Back() ;

static inline void setStaticF_Forward(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Forward() ;

static inline void setStaticF_Menu(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Menu() ;

static inline void setStaticF_Submit(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Submit() ;

static inline void setStaticF_Cancel(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Cancel() ;

static inline void setStaticF_Horizontal(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Horizontal() ;

static inline void setStaticF_Vertical(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Vertical() ;

static inline void setStaticF_Twist(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Twist() ;

static inline void setStaticF_Pressure(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Pressure() ;

static inline void setStaticF_ScrollHorizontal(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_ScrollHorizontal() ;

static inline void setStaticF_ScrollVertical(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_ScrollVertical() ;

static inline void setStaticF_Point(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Point() ;

static inline void setStaticF_LowFreqMotor(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_LowFreqMotor() ;

static inline void setStaticF_HighFreqMotor(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_HighFreqMotor() ;

static inline void setStaticF_LeftHand(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_LeftHand() ;

static inline void setStaticF_RightHand(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_RightHand() ;

static inline void setStaticF_BatteryStrength(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_BatteryStrength() ;

// Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonUsages(CommonUsages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonUsages(CommonUsages const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommonUsages()  = default;
public:


// Fields

// Static field Primary2DMotion

// Static field Secondary2DMotion

// Static field PrimaryAction

// Static field SecondaryAction

// Static field PrimaryTrigger

// Static field SecondaryTrigger

// Static field Modifier

// Static field Position

// Static field Orientation

// Static field Hatswitch

// Static field Back

// Static field Forward

// Static field Menu

// Static field Submit

// Static field Cancel

// Static field Horizontal

// Static field Vertical

// Static field Twist

// Static field Pressure

// Static field ScrollHorizontal

// Static field ScrollVertical

// Static field Point

// Static field LowFreqMotor

// Static field HighFreqMotor

// Static field LeftHand

// Static field RightHand

// Static field BatteryStrength


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::CommonUsages, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::CommonUsages);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::CommonUsages*, "UnityEngine.InputSystem", "CommonUsages");
