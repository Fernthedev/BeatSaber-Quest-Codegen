#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRResetOrientation)
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRResetOrientation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRResetOrientation);
// Type: ::OVRResetOrientation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8160))
// CS Name: ::OVRResetOrientation*
class CORDL_TYPE OVRResetOrientation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field resetButton offset 0x18
 __declspec(property(get=__get_resetButton, put=__set_resetButton)) ::GlobalNamespace::__OVRInput__RawButton  resetButton;

constexpr void __set_resetButton(::GlobalNamespace::__OVRInput__RawButton  value) ;

constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_resetButton() ;

constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_resetButton() const;

/// @brief Method Update addr 0x27baa44 size 0xe0 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRResetOrientation* New_ctor() ;

/// @brief Method .ctor addr 0x27bab24 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRResetOrientation(OVRResetOrientation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRResetOrientation(OVRResetOrientation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRResetOrientation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResetOrientation, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRResetOrientation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResetOrientation*, "", "OVRResetOrientation");
