#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectorySecurity)
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Forward declare root types
namespace System::Security::AccessControl {
class DirectorySecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::DirectorySecurity);
// Type: System.Security.AccessControl::DirectorySecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3034))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3029))
// CS Name: ::System.Security.AccessControl::DirectorySecurity*
class CORDL_TYPE DirectorySecurity : public ::System::Security::AccessControl::FileSystemSecurity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Security::AccessControl::FileSystemSecurity)]{};

static inline ::System::Security::AccessControl::DirectorySecurity* New_ctor(::StringW  name, ::System::Security::AccessControl::AccessControlSections  includeSections) ;

/// @brief Method .ctor addr 0x2483398 size 0x18 virtual false final false
inline void _ctor(::StringW  name, ::System::Security::AccessControl::AccessControlSections  includeSections) ;

// Ctor Parameters [CppParam { name: "", ty: "DirectorySecurity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectorySecurity(DirectorySecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectorySecurity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectorySecurity(DirectorySecurity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DirectorySecurity()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::DirectorySecurity, 0x30>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::DirectorySecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::DirectorySecurity*, "System.Security.AccessControl", "DirectorySecurity");
