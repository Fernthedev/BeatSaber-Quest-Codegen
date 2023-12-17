#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
CORDL_MODULE_EXPORT(DualShockGamepad)
namespace UnityEngine::InputSystem::DualShock {
class IDualShockHaptics;
}
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class DualShockGamepad;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DualShock::DualShockGamepad);
// Type: UnityEngine.InputSystem.DualShock::DualShockGamepad
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6237))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6423))
// CS Name: ::UnityEngine.InputSystem.DualShock::DualShockGamepad*
class CORDL_TYPE DualShockGamepad : public ::UnityEngine::InputSystem::Gamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x220};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x220 - sizeof(::UnityEngine::InputSystem::Gamepad)]{};

/// @brief Field <touchpadButton>k__BackingField offset 0x1d8
 __declspec(property(get=__get__touchpadButton_k__BackingField, put=__set__touchpadButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _touchpadButton_k__BackingField;

/// @brief Field <optionsButton>k__BackingField offset 0x1e0
 __declspec(property(get=__get__optionsButton_k__BackingField, put=__set__optionsButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _optionsButton_k__BackingField;

/// @brief Field <shareButton>k__BackingField offset 0x1e8
 __declspec(property(get=__get__shareButton_k__BackingField, put=__set__shareButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _shareButton_k__BackingField;

/// @brief Field <L1>k__BackingField offset 0x1f0
 __declspec(property(get=__get__L1_k__BackingField, put=__set__L1_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _L1_k__BackingField;

/// @brief Field <R1>k__BackingField offset 0x1f8
 __declspec(property(get=__get__R1_k__BackingField, put=__set__R1_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _R1_k__BackingField;

/// @brief Field <L2>k__BackingField offset 0x200
 __declspec(property(get=__get__L2_k__BackingField, put=__set__L2_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _L2_k__BackingField;

/// @brief Field <R2>k__BackingField offset 0x208
 __declspec(property(get=__get__R2_k__BackingField, put=__set__R2_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _R2_k__BackingField;

/// @brief Field <L3>k__BackingField offset 0x210
 __declspec(property(get=__get__L3_k__BackingField, put=__set__L3_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _L3_k__BackingField;

/// @brief Field <R3>k__BackingField offset 0x218
 __declspec(property(get=__get__R3_k__BackingField, put=__set__R3_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _R3_k__BackingField;

 __declspec(property(get=get_touchpadButton, put=set_touchpadButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  touchpadButton;

 __declspec(property(get=get_optionsButton, put=set_optionsButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  optionsButton;

 __declspec(property(get=get_shareButton, put=set_shareButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  shareButton;

 __declspec(property(get=get_L1, put=set_L1)) ::UnityEngine::InputSystem::Controls::ButtonControl*  L1;

 __declspec(property(get=get_R1, put=set_R1)) ::UnityEngine::InputSystem::Controls::ButtonControl*  R1;

 __declspec(property(get=get_L2, put=set_L2)) ::UnityEngine::InputSystem::Controls::ButtonControl*  L2;

 __declspec(property(get=get_R2, put=set_R2)) ::UnityEngine::InputSystem::Controls::ButtonControl*  R2;

 __declspec(property(get=get_L3, put=set_L3)) ::UnityEngine::InputSystem::Controls::ButtonControl*  L3;

 __declspec(property(get=get_R3, put=set_R3)) ::UnityEngine::InputSystem::Controls::ButtonControl*  R3;

/// @brief Convert operator to "::UnityEngine::InputSystem::DualShock::IDualShockHaptics"
constexpr operator  ::UnityEngine::InputSystem::DualShock::IDualShockHaptics*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IDualMotorRumble"
constexpr operator  ::UnityEngine::InputSystem::Haptics::IDualMotorRumble*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::Haptics::IHaptics"
constexpr operator  ::UnityEngine::InputSystem::Haptics::IHaptics*() noexcept;

constexpr void __set__touchpadButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__touchpadButton_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__touchpadButton_k__BackingField() const;

constexpr void __set__optionsButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__optionsButton_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__optionsButton_k__BackingField() const;

constexpr void __set__shareButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__shareButton_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__shareButton_k__BackingField() const;

constexpr void __set__L1_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__L1_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__L1_k__BackingField() const;

constexpr void __set__R1_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__R1_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__R1_k__BackingField() const;

constexpr void __set__L2_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__L2_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__L2_k__BackingField() const;

constexpr void __set__R2_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__R2_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__R2_k__BackingField() const;

constexpr void __set__L3_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__L3_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__L3_k__BackingField() const;

constexpr void __set__R3_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__R3_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__R3_k__BackingField() const;

static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::DualShock::DualShockGamepad*  value) ;

static inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* getStaticF__current_k__BackingField() ;

/// @brief Method get_touchpadButton addr 0x2ae5688 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadButton() ;

/// @brief Method set_touchpadButton addr 0x2ae5690 size 0x8 virtual false final false
inline void set_touchpadButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_optionsButton addr 0x2ae5698 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_optionsButton() ;

/// @brief Method set_optionsButton addr 0x2ae56a0 size 0x8 virtual false final false
inline void set_optionsButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_shareButton addr 0x2ae56a8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_shareButton() ;

/// @brief Method set_shareButton addr 0x2ae56b0 size 0x8 virtual false final false
inline void set_shareButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_L1 addr 0x2ae56b8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_L1() ;

/// @brief Method set_L1 addr 0x2ae56c0 size 0x8 virtual false final false
inline void set_L1(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_R1 addr 0x2ae56c8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_R1() ;

/// @brief Method set_R1 addr 0x2ae56d0 size 0x8 virtual false final false
inline void set_R1(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_L2 addr 0x2ae56d8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_L2() ;

/// @brief Method set_L2 addr 0x2ae56e0 size 0x8 virtual false final false
inline void set_L2(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_R2 addr 0x2ae56e8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_R2() ;

/// @brief Method set_R2 addr 0x2ae56f0 size 0x8 virtual false final false
inline void set_R2(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_L3 addr 0x2ae56f8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_L3() ;

/// @brief Method set_L3 addr 0x2ae5700 size 0x8 virtual false final false
inline void set_L3(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_R3 addr 0x2ae5708 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_R3() ;

/// @brief Method set_R3 addr 0x2ae5710 size 0x8 virtual false final false
inline void set_R3(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method get_current addr 0x2ae5718 size 0x48 virtual false final false
static inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* get_current() ;

/// @brief Method set_current addr 0x2ae5760 size 0x4c virtual false final false
static inline void set_current(::UnityEngine::InputSystem::DualShock::DualShockGamepad*  value) ;

/// @brief Method MakeCurrent addr 0x2ae57ac size 0x54 virtual true final false
inline void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2ae5800 size 0x84 virtual true final false
inline void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2ae5884 size 0x98 virtual true final false
inline void FinishSetup() ;

/// @brief Method SetLightBarColor addr 0x2ae591c size 0x4 virtual true final false
inline void SetLightBarColor(::UnityEngine::Color  color) ;

static inline ::UnityEngine::InputSystem::DualShock::DualShockGamepad* New_ctor() ;

/// @brief Method .ctor addr 0x2ae5920 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DualShockGamepad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShockGamepad(DualShockGamepad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShockGamepad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShockGamepad(DualShockGamepad const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DualShockGamepad()  = default;
public:


// Fields

// Static field <current>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DualShock::DualShockGamepad, 0x220>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::DualShock
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::DualShockGamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::DualShockGamepad*, "UnityEngine.InputSystem.DualShock", "DualShockGamepad");
