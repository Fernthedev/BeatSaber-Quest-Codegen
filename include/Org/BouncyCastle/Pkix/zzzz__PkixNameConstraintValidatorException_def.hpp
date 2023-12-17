#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixNameConstraintValidatorException)
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidatorException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException);
// Type: Org.BouncyCastle.Pkix::PkixNameConstraintValidatorException
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1727))
// CS Name: ::Org.BouncyCastle.Pkix::PkixNameConstraintValidatorException*
class CORDL_TYPE PkixNameConstraintValidatorException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException* New_ctor(::StringW  msg) ;

/// @brief Method .ctor addr 0x110afd0 size 0x68 virtual false final false
inline void _ctor(::StringW  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidatorException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixNameConstraintValidatorException(PkixNameConstraintValidatorException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixNameConstraintValidatorException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixNameConstraintValidatorException(PkixNameConstraintValidatorException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixNameConstraintValidatorException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*, "Org.BouncyCastle.Pkix", "PkixNameConstraintValidatorException");
