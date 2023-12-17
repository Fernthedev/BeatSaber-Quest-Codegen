#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpEncryptedData)
namespace Org::BouncyCastle::Bcpg {
class InputStreamPacket;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedData__TruncatedStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedData;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedData__TruncatedStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream);
// Type: ::TruncatedStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1637))
// CS Name: ::PgpEncryptedData::TruncatedStream*
class CORDL_TYPE __PgpEncryptedData__TruncatedStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Utilities::IO::BaseInputStream)]{};

/// @brief Field LookAheadSize offset 0x0
static constexpr int32_t  LookAheadSize{static_cast<int32_t>(0x16)};

/// @brief Field LookAheadBufSize offset 0x0
static constexpr int32_t  LookAheadBufSize{static_cast<int32_t>(0x200)};

/// @brief Field LookAheadBufLimit offset 0x0
static constexpr int32_t  LookAheadBufLimit{static_cast<int32_t>(0x1ea)};

/// @brief Field inStr offset 0x30
 __declspec(property(get=__get_inStr, put=__set_inStr)) ::System::IO::Stream*  inStr;

/// @brief Field lookAhead offset 0x38
 __declspec(property(get=__get_lookAhead, put=__set_lookAhead)) ::ArrayW<uint8_t,::Array<uint8_t>*>  lookAhead;

/// @brief Field bufStart offset 0x40
 __declspec(property(get=__get_bufStart, put=__set_bufStart)) int32_t  bufStart;

/// @brief Field bufEnd offset 0x44
 __declspec(property(get=__get_bufEnd, put=__set_bufEnd)) int32_t  bufEnd;

constexpr void __set_inStr(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_inStr() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_inStr() const;

constexpr void __set_lookAhead(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_lookAhead() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_lookAhead() const;

constexpr void __set_bufStart(int32_t  value) ;

constexpr int32_t& __get_bufStart() ;

constexpr int32_t const& __get_bufStart() const;

constexpr void __set_bufEnd(int32_t  value) ;

constexpr int32_t& __get_bufEnd() ;

constexpr int32_t const& __get_bufEnd() const;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream* New_ctor(::System::IO::Stream*  inStr) ;

/// @brief Method .ctor addr 0x10a9950 size 0xd8 virtual false final false
inline void _ctor(::System::IO::Stream*  inStr) ;

/// @brief Method FillBuffer addr 0x10a9a28 size 0x58 virtual false final false
inline int32_t FillBuffer() ;

/// @brief Method ReadByte addr 0x10a9a80 size 0x64 virtual true final false
inline int32_t ReadByte() ;

/// @brief Method Read addr 0x10a9ae4 size 0xcc virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method GetLookAhead addr 0x10a98dc size 0x74 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetLookAhead() ;

// Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedData__TruncatedStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PgpEncryptedData__TruncatedStream(__PgpEncryptedData__TruncatedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedData__TruncatedStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PgpEncryptedData__TruncatedStream(__PgpEncryptedData__TruncatedStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PgpEncryptedData__TruncatedStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedData
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1638))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedData*
class CORDL_TYPE PgpEncryptedData : public ::System::Object {
public:
// Declarations
using TruncatedStream = ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field encData offset 0x10
 __declspec(property(get=__get_encData, put=__set_encData)) ::Org::BouncyCastle::Bcpg::InputStreamPacket*  encData;

/// @brief Field encStream offset 0x18
 __declspec(property(get=__get_encStream, put=__set_encStream)) ::System::IO::Stream*  encStream;

/// @brief Field truncStream offset 0x20
 __declspec(property(get=__get_truncStream, put=__set_truncStream)) ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream*  truncStream;

constexpr void __set_encData(::Org::BouncyCastle::Bcpg::InputStreamPacket*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket* __get_encData() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::InputStreamPacket*> __get_encData() const;

constexpr void __set_encStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_encStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_encStream() const;

constexpr void __set_truncStream(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream* __get_truncStream() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream*> __get_truncStream() const;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData* New_ctor(::Org::BouncyCastle::Bcpg::InputStreamPacket*  encData) ;

/// @brief Method .ctor addr 0x10a95bc size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::InputStreamPacket*  encData) ;

/// @brief Method GetInputStream addr 0x10a95e4 size 0x1c virtual true final false
inline ::System::IO::Stream* GetInputStream() ;

/// @brief Method IsIntegrityProtected addr 0x10a9600 size 0x7c virtual false final false
inline bool IsIntegrityProtected() ;

/// @brief Method Verify addr 0x10a967c size 0x260 virtual false final false
inline bool Verify() ;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpEncryptedData(PgpEncryptedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpEncryptedData(PgpEncryptedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PgpEncryptedData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedData");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedData__TruncatedStream*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedData/TruncatedStream");
