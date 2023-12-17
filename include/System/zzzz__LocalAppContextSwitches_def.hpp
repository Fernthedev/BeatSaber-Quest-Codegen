#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalAppContextSwitches)
// Forward declare root types
namespace System {
class LocalAppContextSwitches;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalAppContextSwitches);
// Type: System::LocalAppContextSwitches
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8892))
// CS Name: ::System::LocalAppContextSwitches*
class CORDL_TYPE LocalAppContextSwitches : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_MemberDescriptorEqualsReturnsFalseIfEquivalent(bool  value) ;

static inline bool getStaticF_MemberDescriptorEqualsReturnsFalseIfEquivalent() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalAppContextSwitches(LocalAppContextSwitches && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalAppContextSwitches(LocalAppContextSwitches const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalAppContextSwitches()  = default;
public:


// Fields

// Static field MemberDescriptorEqualsReturnsFalseIfEquivalent

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalAppContextSwitches, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::LocalAppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalAppContextSwitches*, "System", "LocalAppContextSwitches");
