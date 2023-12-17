#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeeInputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class TeeInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::TeeInputStream);
// Type: Org.BouncyCastle.Utilities.IO::TeeInputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1814))
// CS Name: ::Org.BouncyCastle.Utilities.IO::TeeInputStream*
class CORDL_TYPE TeeInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseInputStream)]{};

/// @brief Field input offset 0x30
 __declspec(property(get=__get_input, put=__set_input)) ::System::IO::Stream*  input;

/// @brief Field tee offset 0x38
 __declspec(property(get=__get_tee, put=__set_tee)) ::System::IO::Stream*  tee;

constexpr void __set_input(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_input() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_input() const;

constexpr void __set_tee(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_tee() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_tee() const;

static inline ::Org::BouncyCastle::Utilities::IO::TeeInputStream* New_ctor(::System::IO::Stream*  input, ::System::IO::Stream*  tee) ;

/// @brief Method .ctor addr 0x116029c size 0x2c virtual false final false
inline void _ctor(::System::IO::Stream*  input, ::System::IO::Stream*  tee) ;

/// @brief Method Close addr 0x11602c8 size 0x74 virtual true final false
inline void Close() ;

/// @brief Method Read addr 0x116033c size 0x78 virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method ReadByte addr 0x11603b4 size 0x5c virtual true final false
inline int32_t ReadByte() ;

// Ctor Parameters [CppParam { name: "", ty: "TeeInputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeeInputStream(TeeInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeeInputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeeInputStream(TeeInputStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TeeInputStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::TeeInputStream, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::TeeInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::TeeInputStream*, "Org.BouncyCastle.Utilities.IO", "TeeInputStream");
