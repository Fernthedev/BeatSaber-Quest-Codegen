#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Adler32)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Adler32;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::Adler32);
// Type: Org.BouncyCastle.Utilities.Zlib::Adler32
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1817))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::Adler32*
class CORDL_TYPE Adler32 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field BASE offset 0x0
static constexpr int32_t  BASE{static_cast<int32_t>(0xfff1)};

/// @brief Field NMAX offset 0x0
static constexpr int32_t  NMAX{static_cast<int32_t>(0x15b0)};

/// @brief Method adler32 addr 0x1160b14 size 0x32c virtual false final false
inline int64_t adler32(int64_t  adler, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  index, int32_t  len) ;

static inline ::Org::BouncyCastle::Utilities::Zlib::Adler32* New_ctor() ;

/// @brief Method .ctor addr 0x1160e40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Adler32(Adler32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Adler32(Adler32 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Adler32()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::Adler32, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Adler32);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Adler32*, "Org.BouncyCastle.Utilities.Zlib", "Adler32");
