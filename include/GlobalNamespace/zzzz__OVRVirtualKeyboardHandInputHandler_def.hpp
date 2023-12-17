#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardHandInputHandler)
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardHandInputHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler);
// Type: ::OVRVirtualKeyboardHandInputHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8059))
// CS Name: ::OVRVirtualKeyboardHandInputHandler*
class CORDL_TYPE OVRVirtualKeyboardHandInputHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method Awake addr 0x279ef80 size 0x58 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler* New_ctor() ;

/// @brief Method .ctor addr 0x279efd8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardHandInputHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRVirtualKeyboardHandInputHandler(OVRVirtualKeyboardHandInputHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardHandInputHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRVirtualKeyboardHandInputHandler(OVRVirtualKeyboardHandInputHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRVirtualKeyboardHandInputHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*, "", "OVRVirtualKeyboardHandInputHandler");
