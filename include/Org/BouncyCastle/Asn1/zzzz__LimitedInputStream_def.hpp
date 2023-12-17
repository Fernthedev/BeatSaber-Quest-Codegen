#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LimitedInputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LimitedInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::LimitedInputStream);
// Type: Org.BouncyCastle.Asn1::LimitedInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(500))
// CS Name: ::Org.BouncyCastle.Asn1::LimitedInputStream*
class CORDL_TYPE LimitedInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseInputStream)]{};

/// @brief Field _in offset 0x30
 __declspec(property(get=__get__in, put=__set__in)) ::System::IO::Stream*  _in;

/// @brief Field _limit offset 0x38
 __declspec(property(get=__get__limit, put=__set__limit)) int32_t  _limit;

 __declspec(property(get=get_Limit)) int32_t  Limit;

constexpr void __set__in(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get__in() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get__in() const;

constexpr void __set__limit(int32_t  value) ;

constexpr int32_t& __get__limit() ;

constexpr int32_t const& __get__limit() const;

static inline ::Org::BouncyCastle::Asn1::LimitedInputStream* New_ctor(::System::IO::Stream*  inStream, int32_t  limit) ;

/// @brief Method .ctor addr 0x11c00bc size 0x2c virtual false final false
inline void _ctor(::System::IO::Stream*  inStream, int32_t  limit) ;

/// @brief Method get_Limit addr 0x11c00e8 size 0x8 virtual true final false
inline int32_t get_Limit() ;

/// @brief Method SetParentEofDetect addr 0x11c00f0 size 0x90 virtual true final false
inline void SetParentEofDetect(bool  on) ;

// Ctor Parameters [CppParam { name: "", ty: "LimitedInputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LimitedInputStream(LimitedInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LimitedInputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LimitedInputStream(LimitedInputStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LimitedInputStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LimitedInputStream, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LimitedInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LimitedInputStream*, "Org.BouncyCastle.Asn1", "LimitedInputStream");
