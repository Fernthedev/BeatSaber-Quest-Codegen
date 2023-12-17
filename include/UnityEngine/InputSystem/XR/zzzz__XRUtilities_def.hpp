#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRUtilities)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRUtilities);
// Type: UnityEngine.InputSystem.XR::XRUtilities
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6332))
// CS Name: ::UnityEngine.InputSystem.XR::XRUtilities*
class CORDL_TYPE XRUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field InterfaceMatchAnyVersion offset 0x0
static constexpr ::ConstString  InterfaceMatchAnyVersion{u"^(XRInput)"};

/// @brief Field InterfaceV1 offset 0x0
static constexpr ::ConstString  InterfaceV1{u"XRInput"};

/// @brief Field InterfaceCurrent offset 0x0
static constexpr ::ConstString  InterfaceCurrent{u"XRInputV1"};

// Ctor Parameters [CppParam { name: "", ty: "XRUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRUtilities(XRUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRUtilities(XRUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRUtilities()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRUtilities*, "UnityEngine.InputSystem.XR", "XRUtilities");
