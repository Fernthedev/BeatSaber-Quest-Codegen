#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
CORDL_MODULE_EXPORT(XRDisplaySubsystemDescriptor)
// Forward declare root types
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRDisplaySubsystemDescriptor);
// Type: UnityEngine.XR::XRDisplaySubsystemDescriptor
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15960), inst: 3914 }), TypeDefinitionIndex(TypeDefinitionIndex(15960))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15640))
// CS Name: ::UnityEngine.XR::XRDisplaySubsystemDescriptor*
class CORDL_TYPE XRDisplaySubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<Il2CppObject*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::IntegratedSubsystemDescriptor_1<Il2CppObject*>)]{};

static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* New_ctor() ;

/// @brief Method .ctor addr 0x2eb3eac size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRDisplaySubsystemDescriptor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystemDescriptor, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRDisplaySubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystemDescriptor*, "UnityEngine.XR", "XRDisplaySubsystemDescriptor");
