#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Ref)
// Forward declare root types
namespace System::Xml {
class Ref;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ref);
// Type: System.Xml::Ref
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11535))
// CS Name: ::System.Xml::Ref*
class CORDL_TYPE Ref : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Equal addr 0x288e178 size 0xc virtual false final false
static inline bool Equal(::StringW  strA, ::StringW  strB) ;

// Ctor Parameters [CppParam { name: "", ty: "Ref", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ref(Ref && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ref", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ref(Ref const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Ref()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ref, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::Ref);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ref*, "System.Xml", "Ref");
