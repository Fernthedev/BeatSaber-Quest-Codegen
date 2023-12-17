#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegerExtensions)
// Forward declare root types
namespace BGLib::DotnetExtension {
class IntegerExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::IntegerExtensions);
// Type: BGLib.DotnetExtension::IntegerExtensions
namespace BGLib::DotnetExtension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15835))
// CS Name: ::BGLib.DotnetExtension::IntegerExtensions*
class CORDL_TYPE IntegerExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToUInt addr 0xe25bb4 size 0x18 virtual false final false
static inline void ToUInt(int32_t  number, ByRef<uint32_t>  uNumber, ByRef<bool>  isNegative) ;

// Ctor Parameters [CppParam { name: "", ty: "IntegerExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegerExtensions(IntegerExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegerExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegerExtensions(IntegerExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntegerExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::IntegerExtensions, 0x10>, "Size mismatch!");

} // namespace end def BGLib::DotnetExtension
NEED_NO_BOX(::BGLib::DotnetExtension::IntegerExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::IntegerExtensions*, "BGLib.DotnetExtension", "IntegerExtensions");
