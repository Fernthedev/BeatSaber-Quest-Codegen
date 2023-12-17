#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlAttributeOverridesTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAttributeOverridesTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlAttributeOverridesTraits);
// Type: UnityEngine.UIElements::UxmlAttributeOverridesTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6977))
// CS Name: ::UnityEngine.UIElements::UxmlAttributeOverridesTraits*
class CORDL_TYPE UxmlAttributeOverridesTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UIElements::UxmlTraits)]{};

/// @brief Field m_ElementName offset 0x18
 __declspec(property(get=__get_m_ElementName, put=__set_m_ElementName)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_ElementName;

constexpr void __set_m_ElementName(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_ElementName() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_ElementName() const;

static inline ::UnityEngine::UIElements::UxmlAttributeOverridesTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e0e600 size 0x88 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlAttributeOverridesTraits(UxmlAttributeOverridesTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlAttributeOverridesTraits(UxmlAttributeOverridesTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlAttributeOverridesTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlAttributeOverridesTraits, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeOverridesTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeOverridesTraits*, "UnityEngine.UIElements", "UxmlAttributeOverridesTraits");
