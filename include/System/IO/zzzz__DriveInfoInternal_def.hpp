#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DriveInfoInternal)
// Forward declare root types
namespace System::IO {
class DriveInfoInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::DriveInfoInternal);
// Type: System.IO::DriveInfoInternal
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3639))
// CS Name: ::System.IO::DriveInfoInternal*
class CORDL_TYPE DriveInfoInternal : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetLogicalDrives addr 0x25460dc size 0x8 virtual false final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetLogicalDrives() ;

// Ctor Parameters [CppParam { name: "", ty: "DriveInfoInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DriveInfoInternal(DriveInfoInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DriveInfoInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DriveInfoInternal(DriveInfoInternal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DriveInfoInternal()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DriveInfoInternal, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::DriveInfoInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DriveInfoInternal*, "System.IO", "DriveInfoInternal");
