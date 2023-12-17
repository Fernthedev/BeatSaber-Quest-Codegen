#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMonoscopic)
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMonoscopic;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMonoscopic);
// Type: ::OVRMonoscopic
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8139))
// CS Name: ::OVRMonoscopic*
class CORDL_TYPE OVRMonoscopic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field toggleButton offset 0x18
 __declspec(property(get=__get_toggleButton, put=__set_toggleButton)) ::GlobalNamespace::__OVRInput__RawButton  toggleButton;

/// @brief Field monoscopic offset 0x1c
 __declspec(property(get=__get_monoscopic, put=__set_monoscopic)) bool  monoscopic;

constexpr void __set_toggleButton(::GlobalNamespace::__OVRInput__RawButton  value) ;

constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_toggleButton() ;

constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_toggleButton() const;

constexpr void __set_monoscopic(bool  value) ;

constexpr bool& __get_monoscopic() ;

constexpr bool const& __get_monoscopic() const;

/// @brief Method Update addr 0x27b469c size 0xf0 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRMonoscopic* New_ctor() ;

/// @brief Method .ctor addr 0x27b478c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMonoscopic(OVRMonoscopic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMonoscopic(OVRMonoscopic const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRMonoscopic()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMonoscopic, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMonoscopic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMonoscopic*, "", "OVRMonoscopic");
