#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__ASCIIEncoding_def.hpp"
CORDL_MODULE_EXPORT(ASCIIEncoding_ASCIIEncodingSealed)
// Forward declare root types
namespace System::Text {
class __ASCIIEncoding__ASCIIEncodingSealed;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed);
// Type: ::ASCIIEncodingSealed
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2826))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2825))
// CS Name: ::ASCIIEncoding::ASCIIEncodingSealed*
class CORDL_TYPE __ASCIIEncoding__ASCIIEncodingSealed : public ::System::Text::ASCIIEncoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Text::ASCIIEncoding)]{};

static inline ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* New_ctor() ;

/// @brief Method .ctor addr 0x2630024 size 0x5c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ASCIIEncoding__ASCIIEncodingSealed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ASCIIEncoding__ASCIIEncodingSealed(__ASCIIEncoding__ASCIIEncodingSealed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ASCIIEncoding__ASCIIEncodingSealed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ASCIIEncoding__ASCIIEncodingSealed(__ASCIIEncoding__ASCIIEncodingSealed const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ASCIIEncoding__ASCIIEncodingSealed()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__ASCIIEncoding__ASCIIEncodingSealed, 0x38>, "Size mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed*, "System.Text", "ASCIIEncoding/ASCIIEncodingSealed");
