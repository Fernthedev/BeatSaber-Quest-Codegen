#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace ModestTree::Util {
class PreserveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::Util::PreserveAttribute);
// Type: ModestTree.Util::PreserveAttribute
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10625))
// CS Name: ::ModestTree.Util::PreserveAttribute*
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::ModestTree::Util::PreserveAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2ebee34 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreserveAttribute(PreserveAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreserveAttribute(PreserveAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PreserveAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace end def ModestTree::Util
NEED_NO_BOX(::ModestTree::Util::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::PreserveAttribute*, "ModestTree.Util", "PreserveAttribute");
