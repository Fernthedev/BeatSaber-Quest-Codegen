#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRChromaticAberration)
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRChromaticAberration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRChromaticAberration);
// Type: ::OVRChromaticAberration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8078))
// CS Name: ::OVRChromaticAberration*
class CORDL_TYPE OVRChromaticAberration : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field toggleButton offset 0x18
 __declspec(property(get=__get_toggleButton, put=__set_toggleButton)) ::GlobalNamespace::__OVRInput__RawButton  toggleButton;

/// @brief Field chromatic offset 0x1c
 __declspec(property(get=__get_chromatic, put=__set_chromatic)) bool  chromatic;

constexpr void __set_toggleButton(::GlobalNamespace::__OVRInput__RawButton  value) ;

constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_toggleButton() ;

constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_toggleButton() const;

constexpr void __set_chromatic(bool  value) ;

constexpr bool& __get_chromatic() ;

constexpr bool const& __get_chromatic() const;

/// @brief Method Start addr 0x27a2190 size 0x9c virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27a222c size 0xf0 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRChromaticAberration* New_ctor() ;

/// @brief Method .ctor addr 0x27a231c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRChromaticAberration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRChromaticAberration(OVRChromaticAberration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRChromaticAberration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRChromaticAberration(OVRChromaticAberration const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRChromaticAberration()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRChromaticAberration, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRChromaticAberration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRChromaticAberration*, "", "OVRChromaticAberration");
