#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleWPMPrompt)
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleWPMPrompt;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt);
// Type: ::OVRVirtualKeyboardSampleWPMPrompt
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8063))
// CS Name: ::OVRVirtualKeyboardSampleWPMPrompt*
class CORDL_TYPE OVRVirtualKeyboardSampleWPMPrompt : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method Awake addr 0x27a0b74 size 0x58 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt* New_ctor() ;

/// @brief Method .ctor addr 0x27a0bcc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleWPMPrompt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRVirtualKeyboardSampleWPMPrompt(OVRVirtualKeyboardSampleWPMPrompt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleWPMPrompt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRVirtualKeyboardSampleWPMPrompt(OVRVirtualKeyboardSampleWPMPrompt const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRVirtualKeyboardSampleWPMPrompt()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleWPMPrompt*, "", "OVRVirtualKeyboardSampleWPMPrompt");
