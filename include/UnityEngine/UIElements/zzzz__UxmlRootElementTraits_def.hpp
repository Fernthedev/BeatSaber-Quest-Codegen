#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlRootElementTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlRootElementTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlRootElementTraits);
// Type: UnityEngine.UIElements::UxmlRootElementTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6971))
// CS Name: ::UnityEngine.UIElements::UxmlRootElementTraits*
class CORDL_TYPE UxmlRootElementTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::UIElements::UxmlTraits)]{};

/// @brief Field m_Name offset 0x18
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Name;

/// @brief Field m_Class offset 0x20
 __declspec(property(get=__get_m_Class, put=__set_m_Class)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Class;

constexpr void __set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Name() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Name() const;

constexpr void __set_m_Class(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Class() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Class() const;

static inline ::UnityEngine::UIElements::UxmlRootElementTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e0df94 size 0xbc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlRootElementTraits(UxmlRootElementTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlRootElementTraits(UxmlRootElementTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlRootElementTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlRootElementTraits, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlRootElementTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlRootElementTraits*, "UnityEngine.UIElements", "UxmlRootElementTraits");
