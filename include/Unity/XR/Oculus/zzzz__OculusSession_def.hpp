#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusSession)
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusSession;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusSession);
// Type: Unity.XR.Oculus::OculusSession
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15146))
// CS Name: ::Unity.XR.Oculus::OculusSession*
class CORDL_TYPE OculusSession : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Update addr 0x2c7bba4 size 0x60 virtual false final false
static inline void Update() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusSession", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusSession(OculusSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusSession", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusSession(OculusSession const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusSession()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusSession, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::OculusSession);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSession*, "Unity.XR.Oculus", "OculusSession");
