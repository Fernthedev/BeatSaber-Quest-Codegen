#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Check)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class Check;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Check);
// Type: Org.BouncyCastle.Crypto::Check
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1346))
// CS Name: ::Org.BouncyCastle.Crypto::Check*
class CORDL_TYPE Check : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method DataLength addr 0xfc5724 size 0x50 virtual false final false
static inline void DataLength(bool  condition, ::StringW  msg) ;

/// @brief Method DataLength addr 0xfc5774 size 0x6c virtual false final false
static inline void DataLength(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, ::StringW  msg) ;

/// @brief Method OutputLength addr 0xfc57e0 size 0x6c virtual false final false
static inline void OutputLength(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len, ::StringW  msg) ;

static inline ::Org::BouncyCastle::Crypto::Check* New_ctor() ;

/// @brief Method .ctor addr 0xfc5850 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Check", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Check(Check && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Check", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Check(Check const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Check()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Check, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Check);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Check*, "Org.BouncyCastle.Crypto", "Check");
