#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsReassembler)
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReassembler__Range;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReassembler;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReassembler__Range;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range);
// Type: ::Range
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1227))
// CS Name: ::DtlsReassembler::Range*
class CORDL_TYPE __DtlsReassembler__Range : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field mStart offset 0x10
 __declspec(property(get=__get_mStart, put=__set_mStart)) int32_t  mStart;

/// @brief Field mEnd offset 0x14
 __declspec(property(get=__get_mEnd, put=__set_mEnd)) int32_t  mEnd;

 __declspec(property(get=get_Start, put=set_Start)) int32_t  Start;

 __declspec(property(get=get_End, put=set_End)) int32_t  End;

constexpr void __set_mStart(int32_t  value) ;

constexpr int32_t& __get_mStart() ;

constexpr int32_t const& __get_mStart() const;

constexpr void __set_mEnd(int32_t  value) ;

constexpr int32_t& __get_mEnd() ;

constexpr int32_t const& __get_mEnd() const;

static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range* New_ctor(int32_t  start, int32_t  end) ;

/// @brief Method .ctor addr 0xf6d7cc size 0x2c virtual false final false
inline void _ctor(int32_t  start, int32_t  end) ;

/// @brief Method get_Start addr 0xf6dfbc size 0x8 virtual false final false
inline int32_t get_Start() ;

/// @brief Method set_Start addr 0xf6dfc4 size 0x8 virtual false final false
inline void set_Start(int32_t  value) ;

/// @brief Method get_End addr 0xf6dfcc size 0x8 virtual false final false
inline int32_t get_End() ;

/// @brief Method set_End addr 0xf6dfd4 size 0x8 virtual false final false
inline void set_End(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReassembler__Range", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DtlsReassembler__Range(__DtlsReassembler__Range && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsReassembler__Range", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DtlsReassembler__Range(__DtlsReassembler__Range const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DtlsReassembler__Range()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReassembler
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1228))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsReassembler*
class CORDL_TYPE DtlsReassembler : public ::System::Object {
public:
// Declarations
using Range = ::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field mMsgType offset 0x10
 __declspec(property(get=__get_mMsgType, put=__set_mMsgType)) uint8_t  mMsgType;

/// @brief Field mBody offset 0x18
 __declspec(property(get=__get_mBody, put=__set_mBody)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mBody;

/// @brief Field mMissing offset 0x20
 __declspec(property(get=__get_mMissing, put=__set_mMissing)) ::System::Collections::IList*  mMissing;

 __declspec(property(get=get_MsgType)) uint8_t  MsgType;

constexpr void __set_mMsgType(uint8_t  value) ;

constexpr uint8_t& __get_mMsgType() ;

constexpr uint8_t const& __get_mMsgType() const;

constexpr void __set_mBody(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mBody() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mBody() const;

constexpr void __set_mMissing(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_mMissing() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_mMissing() const;

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler* New_ctor(uint8_t  msg_type, int32_t  length) ;

/// @brief Method .ctor addr 0xf6d680 size 0x14c virtual false final false
inline void _ctor(uint8_t  msg_type, int32_t  length) ;

/// @brief Method get_MsgType addr 0xf6d7f8 size 0x8 virtual false final false
inline uint8_t get_MsgType() ;

/// @brief Method GetBodyIfComplete addr 0xf6d800 size 0xb8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBodyIfComplete() ;

/// @brief Method ContributeFragment addr 0xf6d8b8 size 0x5b4 virtual false final false
inline void ContributeFragment(uint8_t  msg_type, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  fragment_offset, int32_t  fragment_length) ;

/// @brief Method Reset addr 0xf6de6c size 0x150 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReassembler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsReassembler(DtlsReassembler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReassembler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsReassembler(DtlsReassembler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DtlsReassembler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*, "Org.BouncyCastle.Crypto.Tls", "DtlsReassembler");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range*, "Org.BouncyCastle.Crypto.Tls", "DtlsReassembler/Range");
