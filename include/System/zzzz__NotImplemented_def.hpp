#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotImplemented)
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class NotImplemented;
}
// Write type traits
MARK_REF_PTR_T(::System::NotImplemented);
// Type: System::NotImplemented
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8863))
// CS Name: ::System::NotImplemented*
class CORDL_TYPE NotImplemented : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ByDesignWithMessage addr 0x294670c size 0x64 virtual false final false
static inline ::System::Exception* ByDesignWithMessage(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotImplemented(NotImplemented && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotImplemented", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotImplemented(NotImplemented const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotImplemented()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NotImplemented, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::NotImplemented);
DEFINE_IL2CPP_ARG_TYPE(::System::NotImplemented*, "System", "NotImplemented");
