#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(WMRHMD)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRHMD;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::WindowsMR::Input::WMRHMD);
// Type: UnityEngine.XR.WindowsMR.Input::WMRHMD
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6324))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6124))
// CS Name: ::UnityEngine.XR.WindowsMR.Input::WMRHMD*
class CORDL_TYPE WMRHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1b0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1b0 - sizeof(::UnityEngine::InputSystem::XR::XRHMD)]{};

/// @brief Field <userPresence>k__BackingField offset 0x1a8
 __declspec(property(get=__get__userPresence_k__BackingField, put=__set__userPresence_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _userPresence_k__BackingField;

 __declspec(property(get=get_userPresence, put=set_userPresence)) ::UnityEngine::InputSystem::Controls::ButtonControl*  userPresence;

constexpr void __set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* __get__userPresence_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> __get__userPresence_k__BackingField() const;

/// @brief Method get_userPresence addr 0x2a34e44 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence() ;

/// @brief Method set_userPresence addr 0x2a34e4c size 0x8 virtual false final false
inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method FinishSetup addr 0x2a34e54 size 0x7c virtual true final false
inline void FinishSetup() ;

static inline ::UnityEngine::XR::WindowsMR::Input::WMRHMD* New_ctor() ;

/// @brief Method .ctor addr 0x2a34ed0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WMRHMD(WMRHMD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WMRHMD(WMRHMD const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WMRHMD()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::WindowsMR::Input::WMRHMD, 0x1b0>, "Size mismatch!");

} // namespace end def UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(::UnityEngine::XR::WindowsMR::Input::WMRHMD);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::WindowsMR::Input::WMRHMD*, "UnityEngine.XR.WindowsMR.Input", "WMRHMD");
