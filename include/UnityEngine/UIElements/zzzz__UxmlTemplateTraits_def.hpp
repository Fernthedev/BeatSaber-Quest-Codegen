#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlTemplateTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTemplateTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlTemplateTraits);
// Type: UnityEngine.UIElements::UxmlTemplateTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6975))
// CS Name: ::UnityEngine.UIElements::UxmlTemplateTraits*
class CORDL_TYPE UxmlTemplateTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::UIElements::UxmlTraits)]{};

/// @brief Field m_Name offset 0x18
 __declspec(property(get=__get_m_Name, put=__set_m_Name)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Name;

/// @brief Field m_Path offset 0x20
 __declspec(property(get=__get_m_Path, put=__set_m_Path)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Path;

/// @brief Field m_Src offset 0x28
 __declspec(property(get=__get_m_Src, put=__set_m_Src)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Src;

constexpr void __set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Name() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Name() const;

constexpr void __set_m_Path(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Path() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Path() const;

constexpr void __set_m_Src(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Src() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Src() const;

static inline ::UnityEngine::UIElements::UxmlTemplateTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e0e404 size 0xf8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlTemplateTraits(UxmlTemplateTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlTemplateTraits(UxmlTemplateTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UxmlTemplateTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlTemplateTraits, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlTemplateTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlTemplateTraits*, "UnityEngine.UIElements", "UxmlTemplateTraits");
