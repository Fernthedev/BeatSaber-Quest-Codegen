#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRModeParms)
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRModeParms;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRModeParms);
// Type: ::OVRModeParms
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8138))
// CS Name: ::OVRModeParms*
class CORDL_TYPE OVRModeParms : public ::UnityEngine::MonoBehaviour {
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

/// @brief Method Start addr 0x27b44a0 size 0x9c virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27b453c size 0xac virtual false final false
inline void Update() ;

/// @brief Method TestPowerStateMode addr 0x27b45e8 size 0xa4 virtual false final false
inline void TestPowerStateMode() ;

static inline ::GlobalNamespace::OVRModeParms* New_ctor() ;

/// @brief Method .ctor addr 0x27b468c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRModeParms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRModeParms(OVRModeParms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRModeParms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRModeParms(OVRModeParms const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRModeParms()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRModeParms, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRModeParms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRModeParms*, "", "OVRModeParms");
