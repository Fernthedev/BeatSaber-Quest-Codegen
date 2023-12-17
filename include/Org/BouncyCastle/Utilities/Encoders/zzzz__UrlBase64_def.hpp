#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UrlBase64)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class UrlBase64;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::UrlBase64);
// Type: Org.BouncyCastle.Utilities.Encoders::UrlBase64
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1802))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::UrlBase64*
class CORDL_TYPE UrlBase64 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_encoder(::Org::BouncyCastle::Utilities::Encoders::IEncoder*  value) ;

static inline ::Org::BouncyCastle::Utilities::Encoders::IEncoder* getStaticF_encoder() ;

/// @brief Method Encode addr 0x115eda8 size 0x22c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Encode addr 0x115efd4 size 0xf0 virtual false final false
static inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::System::IO::Stream*  outStr) ;

/// @brief Method Decode addr 0x115f0c4 size 0x230 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Decode addr 0x115f2f4 size 0xf4 virtual false final false
static inline int32_t Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::System::IO::Stream*  outStr) ;

/// @brief Method Decode addr 0x115f3e8 size 0x210 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Decode(::StringW  data) ;

/// @brief Method Decode addr 0x115f5f8 size 0xe4 virtual false final false
static inline int32_t Decode(::StringW  data, ::System::IO::Stream*  outStr) ;

static inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64* New_ctor() ;

/// @brief Method .ctor addr 0x115f7c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UrlBase64(UrlBase64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UrlBase64", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UrlBase64(UrlBase64 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UrlBase64()  = default;
public:


// Fields

// Static field encoder


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::UrlBase64, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::UrlBase64);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::UrlBase64*, "Org.BouncyCastle.Utilities.Encoders", "UrlBase64");
