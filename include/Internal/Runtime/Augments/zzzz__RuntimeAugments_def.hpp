#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeAugments)
namespace Internal::Runtime::Augments {
class ReflectionExecutionDomainCallbacks;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class RuntimeAugments;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::RuntimeAugments);
// Type: Internal.Runtime.Augments::RuntimeAugments
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2306))
// CS Name: ::Internal.Runtime.Augments::RuntimeAugments*
class CORDL_TYPE RuntimeAugments : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_reflectionExecutionDomainCallbacks(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*  value) ;

static inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* getStaticF_s_reflectionExecutionDomainCallbacks() ;

/// @brief Method ReportUnhandledException addr 0x242c5d4 size 0x20 virtual false final false
static inline void ReportUnhandledException(::System::Exception*  exception) ;

/// @brief Method get_Callbacks addr 0x242c5f4 size 0x58 virtual false final false
static inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* get_Callbacks() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAugments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeAugments(RuntimeAugments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeAugments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeAugments(RuntimeAugments const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeAugments()  = default;
public:


// Fields

// Static field s_reflectionExecutionDomainCallbacks


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::RuntimeAugments, 0x10>, "Size mismatch!");

} // namespace end def Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::RuntimeAugments);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::RuntimeAugments*, "Internal.Runtime.Augments", "RuntimeAugments");
