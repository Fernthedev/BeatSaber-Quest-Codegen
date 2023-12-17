#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCacheValidator)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheValidator);
// Type: System.Net.Cache::RequestCacheValidator
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9318))
// CS Name: ::System.Net.Cache::RequestCacheValidator*
class CORDL_TYPE RequestCacheValidator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateValidator addr 0x29f142c size 0x40 virtual false final false
inline ::System::Object* CreateValidator() ;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestCacheValidator(RequestCacheValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestCacheValidator(RequestCacheValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RequestCacheValidator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheValidator, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheValidator*, "System.Net.Cache", "RequestCacheValidator");
