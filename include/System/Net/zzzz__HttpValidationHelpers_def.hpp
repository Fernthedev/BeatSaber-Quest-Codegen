#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpValidationHelpers)
// Forward declare root types
namespace System::Net {
class HttpValidationHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpValidationHelpers);
// Type: System.Net::HttpValidationHelpers
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9022))
// CS Name: ::System.Net::HttpValidationHelpers*
class CORDL_TYPE HttpValidationHelpers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_httpTrimCharacters(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_httpTrimCharacters() ;

/// @brief Method IsInvalidMethodOrHeaderString addr 0x2988ce0 size 0x100 virtual false final false
static inline bool IsInvalidMethodOrHeaderString(::StringW  stringValue) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpValidationHelpers(HttpValidationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpValidationHelpers(HttpValidationHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpValidationHelpers()  = default;
public:


// Fields

// Static field s_httpTrimCharacters


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpValidationHelpers, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::HttpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpValidationHelpers*, "System.Net", "HttpValidationHelpers");
