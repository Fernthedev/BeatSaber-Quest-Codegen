#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ParseException)
// Forward declare root types
namespace LiteNetLib::Utils {
class ParseException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::ParseException);
// Type: LiteNetLib.Utils::ParseException
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14208))
// CS Name: ::LiteNetLib.Utils::ParseException*
class CORDL_TYPE ParseException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::LiteNetLib::Utils::ParseException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x220b9f8 size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "ParseException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParseException(ParseException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParseException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParseException(ParseException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParseException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::ParseException, 0x90>, "Size mismatch!");

} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::ParseException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::ParseException*, "LiteNetLib.Utils", "ParseException");
