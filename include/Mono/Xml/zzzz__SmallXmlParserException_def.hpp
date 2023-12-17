#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmallXmlParserException)
// Forward declare root types
namespace Mono::Xml {
class SmallXmlParserException;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParserException);
// Type: Mono.Xml::SmallXmlParserException
namespace Mono::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2255))
// CS Name: ::Mono.Xml::SmallXmlParserException*
class CORDL_TYPE SmallXmlParserException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::System::SystemException)]{};

/// @brief Field line offset 0x8c
 __declspec(property(get=__get_line, put=__set_line)) int32_t  line;

/// @brief Field column offset 0x90
 __declspec(property(get=__get_column, put=__set_column)) int32_t  column;

constexpr void __set_line(int32_t  value) ;

constexpr int32_t& __get_line() ;

constexpr int32_t const& __get_line() const;

constexpr void __set_column(int32_t  value) ;

constexpr int32_t& __get_column() ;

constexpr int32_t const& __get_column() const;

static inline ::Mono::Xml::SmallXmlParserException* New_ctor(::StringW  msg, int32_t  line, int32_t  column) ;

/// @brief Method .ctor addr 0x2413830 size 0xcc virtual false final false
inline void _ctor(::StringW  msg, int32_t  line, int32_t  column) ;

// Ctor Parameters [CppParam { name: "", ty: "SmallXmlParserException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmallXmlParserException(SmallXmlParserException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmallXmlParserException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmallXmlParserException(SmallXmlParserException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SmallXmlParserException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Xml::SmallXmlParserException, 0x98>, "Size mismatch!");

} // namespace end def Mono::Xml
NEED_NO_BOX(::Mono::Xml::SmallXmlParserException);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParserException*, "Mono.Xml", "SmallXmlParserException");
