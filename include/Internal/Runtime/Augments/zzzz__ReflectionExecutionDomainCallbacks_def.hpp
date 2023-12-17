#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionExecutionDomainCallbacks)
namespace System {
class Type;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class ReflectionExecutionDomainCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks);
// Type: Internal.Runtime.Augments::ReflectionExecutionDomainCallbacks
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2307))
// CS Name: ::Internal.Runtime.Augments::ReflectionExecutionDomainCallbacks*
class CORDL_TYPE ReflectionExecutionDomainCallbacks : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateMissingMetadataException addr 0x242c6cc size 0x5c virtual false final false
inline ::System::Exception* CreateMissingMetadataException(::System::Type*  attributeType) ;

static inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* New_ctor() ;

/// @brief Method .ctor addr 0x242c6c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionExecutionDomainCallbacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionExecutionDomainCallbacks(ReflectionExecutionDomainCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionExecutionDomainCallbacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionExecutionDomainCallbacks(ReflectionExecutionDomainCallbacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionExecutionDomainCallbacks()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks, 0x10>, "Size mismatch!");

} // namespace end def Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*, "Internal.Runtime.Augments", "ReflectionExecutionDomainCallbacks");
