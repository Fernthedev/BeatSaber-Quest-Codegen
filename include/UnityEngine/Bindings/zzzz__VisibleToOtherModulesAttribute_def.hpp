#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VisibleToOtherModulesAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class VisibleToOtherModulesAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::VisibleToOtherModulesAttribute);
// Type: UnityEngine.Bindings::VisibleToOtherModulesAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16012))
// CS Name: ::UnityEngine.Bindings::VisibleToOtherModulesAttribute*
class CORDL_TYPE VisibleToOtherModulesAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2d1821c size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  modules) ;

/// @brief Method .ctor addr 0x2d18224 size 0x8 virtual false final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  modules) ;

// Ctor Parameters [CppParam { name: "", ty: "VisibleToOtherModulesAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisibleToOtherModulesAttribute(VisibleToOtherModulesAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisibleToOtherModulesAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisibleToOtherModulesAttribute(VisibleToOtherModulesAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisibleToOtherModulesAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::VisibleToOtherModulesAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::VisibleToOtherModulesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::VisibleToOtherModulesAttribute*, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
